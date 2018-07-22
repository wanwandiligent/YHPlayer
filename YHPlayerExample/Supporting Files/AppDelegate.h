//
//  AppDelegate.h
//  YHPlayerExample
//
//  Created by wanyehua on 2016/7/10.
//  Copyright © 2016年 万叶华. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

