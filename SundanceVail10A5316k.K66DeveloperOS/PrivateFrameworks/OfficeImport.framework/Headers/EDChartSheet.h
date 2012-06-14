/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDSheet.h"

@class CHDChart;

__attribute__((visibility("hidden")))
@interface EDChartSheet : EDSheet {
@private
	CHDChart *mMainChart;	// 60 = 0x3c
	bool mIsBoundsSet;	// 64 = 0x40
	CGRect mBounds;	// 68 = 0x44
}
@property(assign) CGRect bounds;	// G=0x31180565; S=0x3116aa25; converted property
@property(retain) id mainChart;	// G=0x31180809; S=0x3117c1a9; converted property
- (id).cxx_construct;	// 0x31160d25
- (void)addDrawable:(id)drawable;	// 0x31183c99
- (bool)areBoundsSet;	// 0x31180551
// converted property getter: - (CGRect)bounds;	// 0x31180565
// converted property getter: - (id)mainChart;	// 0x31180809
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x3116aa25
// converted property setter: - (void)setMainChart:(id)chart;	// 0x3117c1a9
- (void)teardown;	// 0x3116a221
@end
