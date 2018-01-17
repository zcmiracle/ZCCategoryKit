//
//  NSDate+ZC.h
//  xfb
//
//  Created by XFB on 16/10/14.
//  Copyright © 2016年 XFB. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (ZC)

/**
 *  是否为今天
 */
- (BOOL)isToday;
/**
 *  是否为昨天
 */
- (BOOL)isYesterday;
/**
 *  是否为2天前
 */
- (BOOL)isTwoDayAgo;
/**
 *  是否为3天前
 */
- (BOOL)isThreeDayAgo;
/**
 *  是否为今年
 */
- (BOOL)isThisYear;

/**
 *  返回一个只有年月日的时间
 */
- (NSDate *)dateWithYMD;

/**
 *  获得与当前时间的差距
 */
- (NSDateComponents *)deltaWithNow;

@end
