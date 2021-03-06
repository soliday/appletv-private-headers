/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIDateTableCell.h"

@class UILabel, NSDate;

__attribute__((visibility("hidden")))
@interface UIWeekMonthDayTableCell : UIDateTableCell {
@private
	UILabel *_weekdayLabel;	// 80 = 0x50
	NSDate *_date;	// 84 = 0x54
	float _weekdayWidth;	// 88 = 0x58
	BOOL _weekdayLast;	// 92 = 0x5c
}
@property(retain) NSDate *date;	// G=0x354b3f51; S=0x354b3f61; converted property
- (id)_weekdayLabelColor;	// 0x354b3fc5
// converted property getter: - (id)date;	// 0x354b3f51
- (void)dealloc;	// 0x354b3ef1
- (void)layoutSubviews;	// 0x354b4311
- (void)setBackgroundColor:(id)color;	// 0x354b401d
// converted property setter: - (void)setDate:(id)date;	// 0x354b3f61
- (void)setWeekdayLast:(BOOL)last;	// 0x354b3fa5
- (void)setWeekdayString:(id)string;	// 0x354b4065
- (void)setWeekdayWidth:(float)width;	// 0x354b3fb5
- (void)updateHighlightColors;	// 0x354b4255
@end

