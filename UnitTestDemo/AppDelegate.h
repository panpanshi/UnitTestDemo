//
//  AppDelegate.h
//  UnitTestDemo
//
//  Created by ShiPanpan on 2017/12/4.
//  Copyright © 2017年 SPP. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

