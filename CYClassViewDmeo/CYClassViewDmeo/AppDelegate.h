//
//  AppDelegate.h
//  CYClassViewDmeo
//
//  Created by cao yu on 2017/3/29.
//  Copyright © 2017年 cao yu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

