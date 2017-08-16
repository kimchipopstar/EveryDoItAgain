//
//  AppDelegate.h
//  EveryDoItAgain
//
//  Created by Jaewon Kim on 2017-08-16.
//  Copyright © 2017 Jaewon Kim. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

