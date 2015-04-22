//
//  CheckpointLog.h
//  BoniNotifySDK
//
//  Created by Boni on 21/04/15.
//  Copyright (c) 2015 Boni Beacon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface CheckpointLog : NSManagedObject

@property (nonatomic, retain) NSNumber * appworkingstate;
@property (nonatomic, retain) NSDate * datetime;
@property (nonatomic, retain) NSNumber * duration;
@property (nonatomic, retain) NSString * major;
@property (nonatomic, retain) NSString * minor;
@property (nonatomic, retain) NSNumber * numberofsignals;
@property (nonatomic, retain) NSString * uuid;

@end
