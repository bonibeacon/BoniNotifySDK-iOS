//
//  OfferVideoViewController.h
//  Boni Notify
//
//  Created by Boni on 14/04/15.
//  Copyright (c) 2015 Boni. All rights reserved.
//

#import "OfferBaseViewController.h"
#import "YTPlayerView.h"

@interface OfferVideoViewController : OfferBaseViewController <YTPlayerViewDelegate>
@property (weak, nonatomic) IBOutlet YTPlayerView *playerView;
@property (weak, nonatomic) IBOutlet UILabel *labelName;

@end
