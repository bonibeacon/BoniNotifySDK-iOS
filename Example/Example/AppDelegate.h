//
//  AppDelegate.h
//  Example
//
//  Created by Boni on 22/04/15.
//  Copyright (c) 2015 Boni Beacon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BoniNotifySDK/BoniNotifyManager.h"


@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) BoniNotifyManager *boniNotifyManager;

@end

