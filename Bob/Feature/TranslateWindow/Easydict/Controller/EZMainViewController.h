//
//  MainTabViewController.h
//  Bob
//
//  Created by tisfeng on 2022/11/3.
//  Copyright © 2022 ripperhe. All rights reserved.
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZMainViewController : NSViewController

@property (nonatomic, copy) void (^resizeWindowBlock)(void);

@end

NS_ASSUME_NONNULL_END
