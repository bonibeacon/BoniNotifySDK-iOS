//
//  BNOffer.h
//  Boni Notify
//
//  Created by Boni on 03/04/15.
//  Copyright (c) 2015 Boni. All rights reserved.
//

#import <Foundation/Foundation.h>

enum OfferType
{
    OfferTypeCoupon = 0,
    OfferTypeURL = 1,
    OfferTypeAppStore = 2,
    OfferTypeVideo = 3
};

@interface BNOffer : NSObject

@property (nonatomic, assign) int offerid;
@property (nonatomic, assign) int type;
@property (nonatomic, assign) int ruleid;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *imgurl;
@property (nonatomic, strong) NSString *desc;
@property (nonatomic, strong) NSString *disc;
@property (nonatomic, strong) NSString *passbookurl;
@property (nonatomic, strong) NSString *url1;
@property (nonatomic, strong) NSString *url2;
@property (nonatomic, strong) NSString *code;

- (id)initWithDict:(NSDictionary*)dict;

@end
