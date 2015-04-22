//
//  CheckPointItem.h
//  BoniBeaconLogger
//
//  Created by Boni on 26.05.2014.
//  Copyright (c) 2014 Boni. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CheckPointItem : NSObject

@property (nonatomic,strong) NSString *major;
@property (nonatomic,strong) NSString *minor;
@property (nonatomic,assign) double millis;
@property (nonatomic,strong) NSString *uuid;

-(id)initWithMajor:(NSString*)major withMinor:(NSString*)minor withUUID:(NSString*)uuid withMillis:(double)millis;

@end
