//
//  TAAppDelegate.h
//  Ruzzum
//
//  Created by Thahir on 14/03/13.
//  Copyright (c) 2013 SICS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TAAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
