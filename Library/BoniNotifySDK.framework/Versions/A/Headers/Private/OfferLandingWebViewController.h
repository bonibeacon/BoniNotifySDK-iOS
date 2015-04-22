//
//  OfferLandingWebViewController.h
//  Boni Notify
//
//  Created by Boni on 08/04/15.
//  Copyright (c) 2015 Boni. All rights reserved.
//

#import "OfferBaseViewController.h"

@interface OfferLandingWebViewController : OfferBaseViewController <UIWebViewDelegate>
@property (weak, nonatomic) IBOutlet UIWebView *webView;

@end
