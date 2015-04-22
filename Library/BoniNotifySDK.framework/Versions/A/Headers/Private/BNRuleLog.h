//
//  BNRuleLog.h
//  BoniNotifySDK
//
//  Created by Boni on 21/04/15.
//  Copyright (c) 2015 Boni Beacon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface BNRuleLog : NSManagedObject

@property (nonatomic, retain) NSDate * createdtime;
@property (nonatomic, retain) NSNumber * georuleid;
@property (nonatomic, retain) NSNumber * ruleid;
@property (nonatomic, retain) NSNumber * type;

@end
