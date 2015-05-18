//
//  OfferCouponViewController.h
//  Boni Notify
//
//  Created by Boni on 08/04/15.
//  Copyright (c) 2015 Boni. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OfferBaseViewController.h"

@interface OfferCouponViewController : OfferBaseViewController <UIAlertViewDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *imageViewBusinessLogo;
@property (weak, nonatomic) IBOutlet UILabel *labelBusinessName;
@property (weak, nonatomic) IBOutlet UIImageView *imageViewOfferMain;
@property (weak, nonatomic) IBOutlet UILabel *labelOfferName;
@property (weak, nonatomic) IBOutlet UILabel *labelOfferDescription;
@property (weak, nonatomic) IBOutlet UIImageView *imageViewBarcode;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UILabel *labelOfferDisclaimer;
@property (weak, nonatomic) IBOutlet UILabel *labelCoupon;
@property (weak, nonatomic) IBOutlet UIButton *btnEmail;

@end
