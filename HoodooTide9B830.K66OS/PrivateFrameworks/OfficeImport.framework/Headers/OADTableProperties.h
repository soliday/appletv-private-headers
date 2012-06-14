/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawableProperties.h"
#import "OADEffectsParent.h"

@class OADTableStyle, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface OADTableProperties : OADDrawableProperties <OADEffectsParent> {
@private
	NSString *mStyleId;	// 28 = 0x1c
	OADTableStyle *mStyle;	// 32 = 0x20
	BOOL mRightToLeft;	// 36 = 0x24
	BOOL mFirstRow;	// 37 = 0x25
	BOOL mFirstColumn;	// 38 = 0x26
	BOOL mLastRow;	// 39 = 0x27
	BOOL mLastColumn;	// 40 = 0x28
	BOOL mBandRow;	// 41 = 0x29
	BOOL mBandColumn;	// 42 = 0x2a
	NSArray *mEffects;	// 44 = 0x2c
}
@property(assign) BOOL bandColumn;	// G=0x3138b355; S=0x312bda19; converted property
@property(assign) BOOL bandRow;	// G=0x312c0299; S=0x312bda29; converted property
@property(retain) id effects;	// G=0x3138b781; S=0x312bda49; converted property
@property(assign) BOOL firstColumn;	// G=0x3138b325; S=0x312bd9d9; converted property
@property(assign) BOOL firstRow;	// G=0x312bf07d; S=0x312bd9e9; converted property
@property(assign) BOOL lastColumn;	// G=0x3138b345; S=0x312bd9f9; converted property
@property(assign) BOOL lastRow;	// G=0x3138b335; S=0x312bda09; converted property
@property(assign) BOOL rightToLeft;	// G=0x3138b315; S=0x312bda39; converted property
@property(retain) id style;	// G=0x312bebad; S=0x312bda89; converted property
@property(retain) id styleId;	// G=0x3138b305; S=0x312a7645; converted property
+ (id)defaultProperties;	// 0x312a7419
- (id)initWithDefaults;	// 0x312a7461
// converted property getter: - (BOOL)bandColumn;	// 0x3138b355
// converted property getter: - (BOOL)bandRow;	// 0x312c0299
- (void)dealloc;	// 0x312a85dd
// converted property getter: - (id)effects;	// 0x3138b781
// converted property getter: - (BOOL)firstColumn;	// 0x3138b325
// converted property getter: - (BOOL)firstRow;	// 0x312bf07d
- (BOOL)hasBandsNormalToDir:(int)dir;	// 0x3138b7f1
- (BOOL)hasEffects;	// 0x3138b749
- (BOOL)hasVectorNormalToDir:(int)dir atExtremePos:(int)extremePos;	// 0x3138b7b1
// converted property getter: - (BOOL)lastColumn;	// 0x3138b345
// converted property getter: - (BOOL)lastRow;	// 0x3138b335
// converted property getter: - (BOOL)rightToLeft;	// 0x3138b315
// converted property setter: - (void)setBandColumn:(BOOL)column;	// 0x312bda19
// converted property setter: - (void)setBandRow:(BOOL)row;	// 0x312bda29
// converted property setter: - (void)setEffects:(id)effects;	// 0x312bda49
// converted property setter: - (void)setFirstColumn:(BOOL)column;	// 0x312bd9d9
// converted property setter: - (void)setFirstRow:(BOOL)row;	// 0x312bd9e9
// converted property setter: - (void)setLastColumn:(BOOL)column;	// 0x312bd9f9
// converted property setter: - (void)setLastRow:(BOOL)row;	// 0x312bda09
// converted property setter: - (void)setRightToLeft:(BOOL)left;	// 0x312bda39
// converted property setter: - (void)setStyle:(id)style;	// 0x312bda89
// converted property setter: - (void)setStyleId:(id)anId;	// 0x312a7645
// converted property getter: - (id)style;	// 0x312bebad
// converted property getter: - (id)styleId;	// 0x3138b305
@end

