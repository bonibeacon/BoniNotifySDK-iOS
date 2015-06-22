//
//  BNDataManager.h
//  BoniOfferSDK
//
//  Created by Boni on 10.09.2014.
//  Copyright (c) 2014 Boni Beacon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OfferLog.h"

@interface BNDataManager : NSObject

+ (void)createRuleLogWithRuleId:(NSNumber*)ruleid withGeoRuleId:(NSNumber*)georuleid withType:(NSNumber*)type withDate:(NSDate*)createddate;

+ (NSDate*)lastDateRuleLogWithRuleId:(NSNumber*)ruleid;

+ (NSDate*)lastDateRuleLogWithGeoRuleId:(NSNumber*)georuleid;

+ (void)createCheckpointLogWithMajor:(NSString *)major withMinor:(NSString *)minor withUUID:(NSString *)uuid withDuration:(NSInteger)duration withNumberOfSignals:(NSInteger)nbrOfSignals withState:(NSInteger)state withCreatedDate:(NSDate *)createdDate;

+ (NSArray *)getCheckpointLogsWithLimit:(NSInteger)limit;

+ (void)deleteCheckpointLogs:(NSArray*)array;

+ (void)createOfferLogWithOfferId:(NSNumber *)offerid withRuleId:(NSNumber *)ruleid withVenueId:(NSNumber *)venueid withType:(enum OfferLogType)type withCreatedDate:(NSDate *)datetime;

+ (NSArray *)getOfferLogsWithLimit:(NSInteger)limit;

+ (void)deleteOfferLogs:(NSArray*)array;

+ (void)createRuleBeaconWithDict:(NSDictionary*)dict withOfferId:(NSNumber *)offerid;

+ (void)createRuleGeoWithDict:(NSDictionary*)dict withOfferId:(NSNumber *)offerid;

+ (NSArray*)getRuleWithUUID:(NSString*)uuid withMajor:(NSString*)major withMinor:(NSString*)minor;

+ (NSArray*)getRuleWithRuleId:(int)ruleid;

+ (void)deleteRules;

+ (NSString*)getUserToken;

+ (void)setUserToken:(NSString*)token;

+ (NSString*)getAppKey;

+ (void)setAppKey:(NSString*)value;

+ (NSString*)getAppSecret;

+ (void)setAppSecret:(NSString*)value;

+ (NSDate*)getLastRuleFetchDate;

+ (void)setLastRuleFetchDate:(NSDate*)value;

+ (BOOL)isAlwaysLocation;

+ (void)setAlwaysLocation:(BOOL)value;

@end
