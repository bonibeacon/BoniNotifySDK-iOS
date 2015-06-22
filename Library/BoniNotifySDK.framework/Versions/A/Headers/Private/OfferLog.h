//
//  OfferLog.h
//  BoniNotifySDK
//
//  Created by Boni on 21/04/15.
//  Copyright (c) 2015 Boni Beacon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

enum OfferLogType
{
    OfferLogTypeDistribution = 0,
    OfferLogTypeInAppImpression = 1,
    OfferLogTypeNotificationImpression = 2,
    OfferLogTypeOfferListMenuImpression = 3,
    OfferLogTypeRedemption = 4
};

@interface OfferLog : NSManagedObject

@property (nonatomic, retain) NSDate * datetime;
@property (nonatomic, retain) NSNumber * offerid;
@property (nonatomic, retain) NSNumber * ruleid;
@property (nonatomic, retain) NSNumber * venueid;
@property (nonatomic, retain) NSNumber * type;

@end
