/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class EDAlignmentInfo, EDContentFormat, EDBorders, EDFill, EDFont, EDProtection;

__attribute__((visibility("hidden")))
@interface EDDifferentialStyle : NSObject <NSCopying> {
@private
	EDAlignmentInfo *mAlignmentInfo;	// 4 = 0x4
	EDBorders *mBorders;	// 8 = 0x8
	EDFill *mFill;	// 12 = 0xc
	EDFont *mFont;	// 16 = 0x10
	EDProtection *mProtection;	// 20 = 0x14
	EDContentFormat *mContentFormat;	// 24 = 0x18
}
@property(retain) id alignmentInfo;	// G=0x32cf12f5; S=0x32cf1361; converted property
@property(retain) id borders;	// G=0x32cbb309; S=0x32b0143d; converted property
@property(retain) id contentFormat;	// G=0x32cf1315; S=0x32c9fa69; converted property
@property(retain) id fill;	// G=0x32cbb971; S=0x32b019e9; converted property
@property(retain) id font;	// G=0x32cbbb8d; S=0x32b017d1; converted property
@property(retain) id protection;	// G=0x32cf1305; S=0x32cf1325; converted property
+ (id)differentialStyle;	// 0x32b00fb1
// converted property getter: - (id)alignmentInfo;	// 0x32cf12f5
// converted property getter: - (id)borders;	// 0x32cbb309
// converted property getter: - (id)contentFormat;	// 0x32cf1315
- (id)copyWithZone:(NSZone *)zone;	// 0x32cf139d
- (void)dealloc;	// 0x32b13efd
// converted property getter: - (id)fill;	// 0x32cbb971
// converted property getter: - (id)font;	// 0x32cbbb8d
// converted property getter: - (id)protection;	// 0x32cf1305
// converted property setter: - (void)setAlignmentInfo:(id)info;	// 0x32cf1361
// converted property setter: - (void)setBorders:(id)borders;	// 0x32b0143d
// converted property setter: - (void)setContentFormat:(id)format;	// 0x32c9fa69
// converted property setter: - (void)setFill:(id)fill;	// 0x32b019e9
// converted property setter: - (void)setFont:(id)font;	// 0x32b017d1
// converted property setter: - (void)setProtection:(id)protection;	// 0x32cf1325
@end

