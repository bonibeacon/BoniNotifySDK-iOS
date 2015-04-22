//
//  BNRequest.h
//  Boni Notify
//
//  Created by Boni on 02/04/15.
//  Copyright (c) 2015 Boni. All rights reserved.
//

#import <Foundation/Foundation.h>

enum BNRequestType
{
    BNRequestTypeGET = 0,
    BNRequestTypePOST = 1
};

@interface BNRequest : NSObject

@property (nonatomic,assign) enum BNRequestType type;
@property (nonatomic,strong) NSMutableDictionary *requestDict;
@property (nonatomic,strong) NSString *URL;
@property (nonatomic,copy) void (^successBlock)(NSMutableDictionary *dict);
@property (nonatomic,copy) void (^errorBlock)(NSError *error);

- (id)initWithURL:(NSString*)URL withRequestDict:(NSMutableDictionary*)requestdict withType:(enum BNRequestType)type withSuccessBlock:(void (^)(NSMutableDictionary *dict))successBlock withErrorBlock:(void (^)(NSError *error))errorBlock;
@end
