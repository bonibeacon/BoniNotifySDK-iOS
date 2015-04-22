//
//  CoreDataHelper.h
//  BoniNotifySDK
//
//  Created by Boni on 21/04/15.
//  Copyright (c) 2015 Boni Beacon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface CoreDataHelper : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (CoreDataHelper*)sharedInstance;
- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
