//
//  BNHTTPRequest.h
//  BoniOfferSDK
//
//  Created by Boni on 10.09.2014.
//  Copyright (c) 2014 Boni Beacon. All rights reserved.
//

#import <Foundation/Foundation.h>

#define BASE_URL @"https://api.boni.me/"
#define WS_URL_VERIFY               BASE_URL @"verify"
#define WS_URL_AUTHENTICATE         BASE_URL @"authenticate"
#define WS_URL_OFFERS               BASE_URL @"app/offers"
#define WS_URL_OFFER                BASE_URL @"app/offer"
#define WS_URL_LOG                  BASE_URL @"app/postbeaconlog"
#define WS_URL_OFFERLOG             BASE_URL @"app/postofferlog"
#define WS_URL_RULES                BASE_URL @"app/rules"
#define WS_URL_LOCALNOTILOG         BASE_URL @"offer/postdistributionlog"
#define WS_URL_OFFERDETAIL          BASE_URL @"app/getofferdata"
#define WS_URL_OFFERDETAILTEST      BASE_URL @"app/getofferdatatest"
#define WS_URL_MAILCOUPON           BASE_URL @"mailcouponcode"
#define WS_URL_VISITED              BASE_URL @"app/getvisitedplaceoffer"


@interface BNHTTPRequest : NSMutableURLRequest

+ (void)GETRequestWithRootURL:(NSString*)rootURLStr withKeyValues:(NSMutableDictionary*)dict withSuccessBlock:(void (^)(NSMutableDictionary *dict))successBlock withErrorBlock:(void (^)(NSError *error))errorBlock;

+ (void)POSTRequestWithRootURL:(NSString*)rootURLStr withPostBody:(NSMutableDictionary*)dict withSuccessBlock:(void (^)(NSMutableDictionary *dict))successBlock withErrorBlock:(void (^)(NSError *error))errorBlock;

+ (void)externalGETRequestWithRootURL:(NSString*)rootURLStr withKeyValues:(NSMutableDictionary*)dict withSuccessBlock:(void (^)(NSMutableDictionary *dict))successBlock withErrorBlock:(void (^)(NSError *error))errorBlock;

+ (void)authenticate;

+ (NSData*)fetchNSDataWithURL:(NSString*)URLStr;

+ (BOOL)hasConnectivity;

@end

