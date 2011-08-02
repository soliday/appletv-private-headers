/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILabel.h"
#import "UIKit-Structs.h"


@interface UIDateLabel : UILabel {
@private
	double _date;	// 104 = 0x68
	int _dateKey;	// 112 = 0x70
	BOOL _boldForAllLocales;	// 116 = 0x74
}
@property(assign, nonatomic) BOOL boldForAllLocales;	// G=0x3010a8ad; S=0x302281f9; @synthesize=_boldForAllLocales
@property(retain) id font;	// G=0x3010ae4d; S=0x30109d11; converted property
@property(assign) double timeInterval;	// G=0x302281dd; S=0x3010a0a5; converted property
+ (id)defaultFont;	// 0x30109ced
- (id)initWithFrame:(CGRect)frame;	// 0x30109bad
- (int)_dateKey;	// 0x3010a255
- (id)_dateLabelCache;	// 0x302281ed
- (void)_invalidateDateKey;	// 0x30228209
- (void)_updateDateStrings;	// 0x3010a0fd
// declared property getter: - (BOOL)boldForAllLocales;	// 0x3010a8ad
- (void)dealloc;	// 0x301b0b21
- (void)drawRect:(CGRect)rect;	// 0x3010b15d
- (void)drawTextInRect:(CGRect)rect;	// 0x3010b1ad
// converted property getter: - (id)font;	// 0x3010ae4d
// declared property setter: - (void)setBoldForAllLocales:(BOOL)allLocales;	// 0x302281f9
- (void)setDate:(id)date;	// 0x3010a075
// converted property setter: - (void)setFont:(id)font;	// 0x30109d11
- (void)setFontWithoutInvalidation:(id)invalidation;	// 0x30228559
// converted property setter: - (void)setTimeInterval:(double)interval;	// 0x3010a0a5
- (void)sizeToFit;	// 0x3010ac05
- (id)text;	// 0x3010ad89
- (id)timeDesignator;	// 0x3010a8bd
- (id)timeDesignatorFont;	// 0x3010af31
// converted property getter: - (double)timeInterval;	// 0x302281dd
@end
