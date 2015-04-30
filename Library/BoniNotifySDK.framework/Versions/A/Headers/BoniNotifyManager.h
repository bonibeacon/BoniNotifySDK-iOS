//
//  BoniNotifyManager.h
//  Boni Notify
//
//  Created by Boni on 02/04/15.
//  Copyright (c) 2015 Boni. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <UIKit/UIKit.h>

@interface BoniNotifyManager : NSObject <CLLocationManagerDelegate>

@property (nonatomic, strong) CLLocationManager *locationManager;

/*
 default value : NO
 */
@property (nonatomic, assign) BOOL showOfferWhileAppActive;

- (id)initWithAppKey:(NSString*)appkey withAppSecret:(NSString*)appsecret;

- (void)startNotify;

- (void)stopNotify;

- (void)didReceiveLocalNotification:(UILocalNotification *)notification;

- (void)didFinishLaunchingWithLocalNotification:(UILocalNotification *)notification;

@end
