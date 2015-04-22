//
//  NSMutableArray+QueueAdditions.h
//  Rixos Blind
//
//  Created by Boni on 10/12/14.
//  Copyright (c) 2014 Boni Beacon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (QueueAdditions)
- (id) dequeue;
- (void) enqueue:(id)obj;
@end
