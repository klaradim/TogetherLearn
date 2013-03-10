//
//  TLAppDelegate.h
//  TogetherLearn
//
//  Created by klara on 3/9/13.
//  Copyright (c) 2013 klara. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TLAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
