//
//  OfferDownloadViewController.h
//  Boni Notify
//
//  Created by Boni on 08/04/15.
//  Copyright (c) 2015 Boni. All rights reserved.
//

#import "OfferBaseViewController.h"
#import "SwipeView.h"

@interface OfferDownloadViewController : OfferBaseViewController <SwipeViewDelegate, SwipeViewDataSource>

@property (weak, nonatomic) IBOutlet UILabel *labelName;
@property (weak, nonatomic) IBOutlet UILabel *labelDesc;
@property (weak, nonatomic) IBOutlet UIImageView *imageViewBusinessLogo;
@property (weak, nonatomic) IBOutlet UILabel *labelBusinessName;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet SwipeView *swipeView;
@property (nonatomic, strong) NSDictionary *appDetailDict;
@end
