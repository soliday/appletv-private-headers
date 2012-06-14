/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDSheet.h"
#import "OfficeImport-Structs.h"

@class CHDChart;

__attribute__((visibility("hidden")))
@interface EDChartSheet : EDSheet {
@private
	CHDChart *mMainChart;	// 60 = 0x3c
	bool mIsBoundsSet;	// 64 = 0x40
	CGRect mBounds;	// 68 = 0x44
}
@property(assign) CGRect bounds;	// G=0x312b6699; S=0x312b5fb9; converted property
@property(retain) id mainChart;	// G=0x312b6839; S=0x312b65ad; converted property
- (void)addDrawable:(id)drawable;	// 0x312b82c1
- (bool)areBoundsSet;	// 0x31330e0d
// converted property getter: - (CGRect)bounds;	// 0x312b6699
// converted property getter: - (id)mainChart;	// 0x312b6839
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x312b5fb9
// converted property setter: - (void)setMainChart:(id)chart;	// 0x312b65ad
- (void)teardown;	// 0x3125e831
@end

