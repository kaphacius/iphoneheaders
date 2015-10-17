/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UIControl.h>
#import "NSCoding.h"
#import <UIKit/UIDatePicker.h>
#import "UIKit-Structs.h"

@class UIPickerView, NSLocale, NSTimeZone, NSCalendar, NSDate;

@interface UIDatePicker ()
-(void)_insertPickerView;
-(instancetype)initWithFrame:(CGRect)frame;
-(instancetype)initWithCoder:(id)coder;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)encodeWithCoder:(id)coder;
-(CGSize)sizeThatFits:(CGSize)fits;
@end

@interface UIDatePicker (UIDatePickerDeprecated)
-(void)setDelegate:(id)delegate;
-(void)setTimeInterval:(double)interval;
-(double)timeInterval;
-(id)dateComponents;
-(void)setDateComponents:(id)components;
-(void)setStaggerTimeIntervals:(BOOL)intervals;
-(void)setHighlightsToday:(BOOL)today;
-(int)hour;
-(int)minute;
-(int)second;
-(void)setDate:(id)date animate:(BOOL)animate;
@end

