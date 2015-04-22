//
//  BNRule.h
//  BoniNotifySDK
//
//  Created by Boni on 21/04/15.
//  Copyright (c) 2015 Boni Beacon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

enum RuleType
{
    RuleTypeBeacon = 0,
    RuleTypeGeoFence = 1
};

enum RuleDistributionType
{
    RuleDistributionImmediate = 0,
    RuleDistributionNear = 1,
    RuleDistributionFar = 2,
    RuleDistributionEnteredRegion = 3,
    RuleDistributionExitedRegion = 4
};

@interface BNRule : NSManagedObject

@property (nonatomic, retain) NSNumber * delay;
@property (nonatomic, retain) NSNumber * distribution;
@property (nonatomic, retain) NSNumber * geolat;
@property (nonatomic, retain) NSNumber * geolon;
@property (nonatomic, retain) NSNumber * georadius;
@property (nonatomic, retain) NSNumber * georuleid;
@property (nonatomic, retain) NSNumber * interval;
@property (nonatomic, retain) NSString * major;
@property (nonatomic, retain) NSString * minor;
@property (nonatomic, retain) NSNumber * offerid;
@property (nonatomic, retain) NSNumber * ruleid;
@property (nonatomic, retain) NSNumber * type;
@property (nonatomic, retain) NSString * uuid;

@end
