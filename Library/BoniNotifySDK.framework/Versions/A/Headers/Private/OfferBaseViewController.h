//
//  OfferBaseViewController.h
//  Boni Notify
//
//  Created by Boni on 08/04/15.
//  Copyright (c) 2015 Boni. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BNOffer.h"
#import "CCMPlayNDropView.h"
#import "UIViewController+MaryPopin.h"
#import "UIImageView+WebCache.h"
#import "BNHTTPRequest.h"

#define MARGIN 10

@interface OfferBaseViewController : UIViewController <CCMPlayNDropViewDelegate>

@property (nonatomic, strong) BNOffer *offer;

- (void)close;

@end
