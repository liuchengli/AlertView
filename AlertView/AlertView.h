//
//  AlertView.h
//  A-C
//
//  Created by 刘成利 on 2017/2/13.
//  Copyright © 2017年 刘成利. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AlertView : NSObject

// 默认文字居中显示
+ (void)showAlertView:(UIView*)onView withText:(NSString*)message during:(NSTimeInterval)delayTime;

// 文字靠左显示
+ (void)showAlertView:(UIView*)onView withLeftText:(NSString*)message during:(NSTimeInterval)delayTime;

@end
