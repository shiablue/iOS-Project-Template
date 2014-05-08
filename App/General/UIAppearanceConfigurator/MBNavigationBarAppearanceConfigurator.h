/*!
    MBNavigationBarAppearanceConfigurator

    Copyright © 2014 Chinamobo Co., Ltd.
    https://github.com/Chinamobo/iOS-Project-Template

    Apache License, Version 2.0
    http://www.apache.org/licenses/LICENSE-2.0
 */
#import "MBAppearanceConfigurator.h"

/**
 控制导航栏整体风格

 @const MBNavigationBarAppearanceStyleNotChange 除了设置定义好的属性外，不做特殊处理
 @const MBNavigationBarAppearanceStyle_iOS7 在旧版本的设备上模拟 iOS 7 的效果
 */
typedef NS_ENUM(short, MBNavigationBarAppearanceStyle) {
    MBNavigationBarAppearanceStyleNotChange = 0,
    MBNavigationBarAppearanceStyle_iOS7
};

/**
 导航栏外观设置器

 示例：
 @code
 MBNavigationBarAppearanceConfigurator *nac = [MBNavigationBarAppearanceConfigurator new];
 nac.backgroundImage = [UIImage imageNamed:RF_iOS7Before? @"NavigationBarBackgroundOld" : @"NavigationBarBackground"];

 // 在 iOS 6 上模拟 iOS 7 外观
 nac.style = MBNavigationBarAppearanceStyle_iOS7;
 [nac applay];
 @endcode
 */
@interface MBNavigationBarAppearanceConfigurator : MBAppearanceConfigurator

/// 导航栏外观风格
@property (assign, nonatomic) MBNavigationBarAppearanceStyle style;

#pragma mark - 导航条

/// 导航条颜色
/// 默认白色
@property (strong, nonatomic) UIColor *barColor;

/// 背景图
@property (strong, nonatomic) UIImage *backgroundImage;

/// 移除背景图阴影
/// 默认 YES
@property (assign, nonatomic) BOOL removeBarShadow;

#pragma mark - 标题
/// 标题颜色
/// 默认黑色
@property (strong, nonatomic) UIColor *titleColor;

#pragma mark - 按钮
/// 按钮颜色
/// 默认使用全局 tint color
@property (strong, nonatomic) UIColor *itemTitleColor;
@property (strong, nonatomic) UIColor *itemTitleHighlightedColor;
@property (strong, nonatomic) UIColor *itemTitleDisabledColor;

/// 要清空标题和按钮的背景么
/// 默认 YES
@property (assign, nonatomic) BOOL clearTitleShadow;
@end
