//
//  BNDelay.h
//  Boni Offer Notification
//
//  Created by Boni on 23/11/14.
//  Copyright (c) 2014 Boni Beacon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BNRule.h"

@interface BNDelay : NSObject

@property (nonatomic,strong) BNRule *rule;
@property (nonatomic,assign) NSInteger count;
@property (nonatomic,strong) NSDate *firstReadDate;

- (id)initWithRule:(BNRule*)rule count:(NSInteger)count date:(NSDate*)date;

@end
