//
//  AppDelegate.h
//  ZhengFile
//
//  Created by 李保征 on 2017/3/21.
//  Copyright © 2017年 李保征. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

