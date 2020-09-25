//
//  UIView+TKAdd.h
//  TKCategory
//
//  Created by hello on 2020/9/1.
//  Copyright © 2020 TK. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (TKAdd)

@end


@interface UIView (TKFrame)

@property (nonatomic) CGFloat left;
@property (nonatomic) CGFloat right;

@property (nonatomic) CGFloat top;
@property (nonatomic) CGFloat bottom;

@property (nonatomic) CGFloat width;
@property (nonatomic) CGFloat height;

@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;

@property (nonatomic) CGPoint origin;
@property (nonatomic) CGSize  size;

@end


@interface UIView (TKDrawCorner)

/// 设置View任意角度为圆角
/// @param corners 设置的角，左上、左下、右上、右下，可以组合
/// @param cornerRadii 圆角的半径
- (void)setByRoundingCorners:(UIRectCorner)corners cornerRadii:(CGSize)cornerRadii;

/// 绘制view的圆角边框, 只是在view上画了一个圆角边框，并不会裁剪view
/// @param corners 设置的角，左上、左下、右上、右下，可以组合
/// @param cornerRadii 圆角的半径
/// @param borderColor 边框颜色
- (void)setByRoundingCorners:(UIRectCorner)corners cornerRadii:(CGSize)cornerRadii borderColor:(UIColor*)borderColor;

@end

NS_ASSUME_NONNULL_END
