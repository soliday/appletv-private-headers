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
@property(assign) BOOL bandColumn;	// G=0x329db355; S=0x3290da19; converted property
@property(assign) BOOL bandRow;	// G=0x32910299; S=0x3290da29; converted property
@property(retain) id effects;	// G=0x329db781; S=0x3290da49; converted property
@property(assign) BOOL firstColumn;	// G=0x329db325; S=0x3290d9d9; converted property
@property(assign) BOOL firstRow;	// G=0x3290f07d; S=0x3290d9e9; converted property
@property(assign) BOOL lastColumn;	// G=0x329db345; S=0x3290d9f9; converted property
@property(assign) BOOL lastRow;	// G=0x329db335; S=0x3290da09; converted property
@property(assign) BOOL rightToLeft;	// G=0x329db315; S=0x3290da39; converted property
@property(retain) id style;	// G=0x3290ebad; S=0x3290da89; converted property
@property(retain) id styleId;	// G=0x329db305; S=0x328f7645; converted property
+ (id)defaultProperties;	// 0x328f7419
- (id)initWithDefaults;	// 0x328f7461
// converted property getter: - (BOOL)bandColumn;	// 0x329db355
// converted property getter: - (BOOL)bandRow;	// 0x32910299
- (void)dealloc;	// 0x328f85dd
// converted property getter: - (id)effects;	// 0x329db781
// converted property getter: - (BOOL)firstColumn;	// 0x329db325
// converted property getter: - (BOOL)firstRow;	// 0x3290f07d
- (BOOL)hasBandsNormalToDir:(int)dir;	// 0x329db7f1
- (BOOL)hasEffects;	// 0x329db749
- (BOOL)hasVectorNormalToDir:(int)dir atExtremePos:(int)extremePos;	// 0x329db7b1
// converted property getter: - (BOOL)lastColumn;	// 0x329db345
// converted property getter: - (BOOL)lastRow;	// 0x329db335
// converted property getter: - (BOOL)rightToLeft;	// 0x329db315
// converted property setter: - (void)setBandColumn:(BOOL)column;	// 0x3290da19
// converted property setter: - (void)setBandRow:(BOOL)row;	// 0x3290da29
// converted property setter: - (void)setEffects:(id)effects;	// 0x3290da49
// converted property setter: - (void)setFirstColumn:(BOOL)column;	// 0x3290d9d9
// converted property setter: - (void)setFirstRow:(BOOL)row;	// 0x3290d9e9
// converted property setter: - (void)setLastColumn:(BOOL)column;	// 0x3290d9f9
// converted property setter: - (void)setLastRow:(BOOL)row;	// 0x3290da09
// converted property setter: - (void)setRightToLeft:(BOOL)left;	// 0x3290da39
// converted property setter: - (void)setStyle:(id)style;	// 0x3290da89
// converted property setter: - (void)setStyleId:(id)anId;	// 0x328f7645
// converted property getter: - (id)style;	// 0x3290ebad
// converted property getter: - (id)styleId;	// 0x329db305
@end

