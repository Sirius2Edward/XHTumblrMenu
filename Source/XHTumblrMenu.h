//
//  XHTumblrMenu.h
//  XHTumblrMenu
//
//  Created by 曾 宪华 on 14-1-13.
//  Copyright (c) 2014年 曾宪华 开发团队(http://iyilunba.com ) 本人QQ:543413507 本人QQ群（142557668）. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XHTumblrMenuItem.h"
#import "XHTumblrMenuHeader.h"

@interface XHTumblrMenu : UIView <UIGestureRecognizerDelegate>
// Gesture enable
@property (nonatomic, assign) BOOL enablePangesture;

// background
@property (nonatomic, strong) UIImageView *backgroundImgView;

// show property
@property (nonatomic, assign) NSTimeInterval tumblrMenuViewShowItemAnimationTime; // default is 0.37

// dissMiss
@property (nonatomic, assign) XHTumblrMenuDissmissAnimationType dissmissAnimationType; // default is kXHFade
@property (nonatomic, assign) NSTimeInterval dissMissDuration; // default is 0.1;

// add item
- (void)addMenuItemWithTumblrMenuItem:(XHTumblrMenuItem *)tumblrMenuItem;

// show menu method
- (void)show;
@end
