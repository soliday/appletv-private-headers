/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADShade.h"
#import "OfficeImport-Structs.h"

@class OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADPathShade : OADShade {
@private
	OADRelativeRect *mFillToRect;	// 12 = 0xc
	BOOL mIsFillToRectOverridden;	// 16 = 0x10
	int mType;	// 20 = 0x14
	BOOL mIsTypeOverridden;	// 24 = 0x18
}
@property(retain) id fillToRect;	// G=0x344c0231; S=0x344bf271; converted property
@property(assign) int type;	// G=0x346150f9; S=0x344bf251; converted property
+ (id)defaultProperties;	// 0x344bf165
- (id)initWithDefaults;	// 0x344bf1ad
- (id)copyWithZone:(NSZone *)zone;	// 0x3455d01d
- (void)dealloc;	// 0x344c2245
// converted property getter: - (id)fillToRect;	// 0x344c0231
- (unsigned)hash;	// 0x34615161
- (BOOL)isEqual:(id)equal;	// 0x346151bd
- (BOOL)isFillToRectOverridden;	// 0x344c0261
- (BOOL)isTypeOverridden;	// 0x34615129
// converted property setter: - (void)setFillToRect:(id)rect;	// 0x344bf271
// converted property setter: - (void)setType:(int)type;	// 0x344bf251
// converted property getter: - (int)type;	// 0x346150f9
@end

