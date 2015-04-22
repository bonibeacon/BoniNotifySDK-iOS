//
//  BoniBeaconLogger.h
//  Boni Notify
//
//  Created by Boni on 14/04/15.
//  Copyright (c) 2015 Boni. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "OfferLog.h"

@interface BoniBeaconLogger : NSObject

- (void)nearestBeacon:(CLBeacon *)beacon inRegion:(CLBeaconRegion *)region;

- (void)sendOfferLogWithOfferId:(int)offerid withRuleId:(int)ruleid withType:(enum OfferLogType)type;

@end
