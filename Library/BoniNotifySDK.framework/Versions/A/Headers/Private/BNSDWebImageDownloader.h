/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <Foundation/Foundation.h>
#import "BNSDWebImageCompat.h"
#import "BNSDWebImageOperation.h"

typedef NS_OPTIONS(NSUInteger, BNSDWebImageDownloaderOptions) {
    BNSDWebImageDownloaderLowPriority = 1 << 0,
    BNSDWebImageDownloaderProgressiveDownload = 1 << 1,

    /**
     * By default, request prevent the of NSURLCache. With this flag, NSURLCache
     * is used with default policies.
     */
    BNSDWebImageDownloaderUseNSURLCache = 1 << 2,

    /**
     * Call completion block with nil image/imageData if the image was read from NSURLCache
     * (to be combined with `BNSDWebImageDownloaderUseNSURLCache`).
     */

    BNSDWebImageDownloaderIgnoreCachedResponse = 1 << 3,
    /**
     * In iOS 4+, continue the download of the image if the app goes to background. This is achieved by asking the system for
     * extra time in background to let the request finish. If the background task expires the operation will be cancelled.
     */

    BNSDWebImageDownloaderContinueInBackground = 1 << 4,

    /**
     * Handles cookies stored in NSHTTPCookieStore by setting 
     * NSMutableURLRequest.HTTPShouldHandleCookies = YES;
     */
    BNSDWebImageDownloaderHandleCookies = 1 << 5,

    /**
     * Enable to allow untrusted SSL ceriticates.
     * Useful for testing purposes. Use with caution in production.
     */
    BNSDWebImageDownloaderAllowInvalidSSLCertificates = 1 << 6,

    /**
     * Put the image in the high priority queue.
     */
    BNSDWebImageDownloaderHighPriority = 1 << 7,
    

};

typedef NS_ENUM(NSInteger, BNSDWebImageDownloaderExecutionOrder) {
    /**
     * Default value. All download operations will execute in queue style (first-in-first-out).
     */
    BNSDWebImageDownloaderFIFOExecutionOrder,

    /**
     * All download operations will execute in stack style (last-in-first-out).
     */
    BNSDWebImageDownloaderLIFOExecutionOrder
};

extern NSString *const BNSDWebImageDownloadStartNotification;
extern NSString *const BNSDWebImageDownloadStopNotification;

typedef void(^BNSDWebImageDownloaderProgressBlock)(NSInteger receivedSize, NSInteger expectedSize);

typedef void(^BNSDWebImageDownloaderCompletedBlock)(UIImage *image, NSData *data, NSError *error, BOOL finished);

typedef NSDictionary *(^BNSDWebImageDownloaderHeadersFilterBlock)(NSURL *url, NSDictionary *headers);

/**
 * Asynchronous downloader dedicated and optimized for image loading.
 */
@interface BNSDWebImageDownloader : NSObject

@property (assign, nonatomic) NSInteger maxConcurrentDownloads;

/**
 * Shows the current amount of downloads that still need to be downloaded
 */

@property (readonly, nonatomic) NSUInteger currentDownloadCount;


/**
 *  The timeout value (in seconds) for the download operation. Default: 15.0.
 */
@property (assign, nonatomic) NSTimeInterval downloadTimeout;


/**
 * Changes download operations execution order. Default value is `BNSDWebImageDownloaderFIFOExecutionOrder`.
 */
@property (assign, nonatomic) BNSDWebImageDownloaderExecutionOrder executionOrder;

/**
 *  Singleton method, returns the shared instance
 *
 *  @return global shared instance of downloader class
 */
+ (BNSDWebImageDownloader *)sharedDownloader;

/**
 * Set username
 */
@property (strong, nonatomic) NSString *username;

/**
 * Set password
 */
@property (strong, nonatomic) NSString *password;

/**
 * Set filter to pick headers for downloading image HTTP request.
 *
 * This block will be invoked for each downloading image request, returned
 * NSDictionary will be used as headers in corresponding HTTP request.
 */
@property (nonatomic, copy) BNSDWebImageDownloaderHeadersFilterBlock headersFilter;

/**
 * Set a value for a HTTP header to be appended to each download HTTP request.
 *
 * @param value The value for the header field. Use `nil` value to remove the header.
 * @param field The name of the header field to set.
 */
- (void)setValue:(NSString *)value forHTTPHeaderField:(NSString *)field;

/**
 * Returns the value of the specified HTTP header field.
 *
 * @return The value associated with the header field field, or `nil` if there is no corresponding header field.
 */
- (NSString *)valueForHTTPHeaderField:(NSString *)field;

/**
 * Creates a BNSDWebImageDownloader async downloader instance with a given URL
 *
 * The delegate will be informed when the image is finish downloaded or an error has happen.
 *
 * @see BNSDWebImageDownloaderDelegate
 *
 * @param url            The URL to the image to download
 * @param options        The options to be used for this download
 * @param progressBlock  A block called repeatedly while the image is downloading
 * @param completedBlock A block called once the download is completed.
 *                       If the download succeeded, the image parameter is set, in case of error,
 *                       error parameter is set with the error. The last parameter is always YES
 *                       if BNSDWebImageDownloaderProgressiveDownload isn't use. With the
 *                       BNSDWebImageDownloaderProgressiveDownload option, this block is called
 *                       repeatedly with the partial image object and the finished argument set to NO
 *                       before to be called a last time with the full image and finished argument
 *                       set to YES. In case of error, the finished argument is always YES.
 *
 * @return A cancellable BNSDWebImageOperation
 */
- (id <BNSDWebImageOperation>)downloadImageWithURL:(NSURL *)url
                                         options:(BNSDWebImageDownloaderOptions)options
                                        progress:(BNSDWebImageDownloaderProgressBlock)progressBlock
                                       completed:(BNSDWebImageDownloaderCompletedBlock)completedBlock;

/**
 * Sets the download queue suspension state
 */
- (void)setSuspended:(BOOL)suspended;

@end
