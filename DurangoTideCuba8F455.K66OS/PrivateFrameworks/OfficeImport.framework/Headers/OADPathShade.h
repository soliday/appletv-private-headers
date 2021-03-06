/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADShade.h"

@class OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADPathShade : OADShade {
@private
	OADRelativeRect *mFillToRect;	// 12 = 0xc
	BOOL mIsFillToRectOverridden;	// 16 = 0x10
	int mType;	// 20 = 0x14
	BOOL mIsTypeOverridden;	// 24 = 0x18
}
@property(retain) id fillToRect;	// G=0x32c1a6c5; S=0x32c1a4fd; converted property
@property(assign) int type;	// G=0x32cd4d7d; S=0x32c1a4e1; converted property
+ (id)defaultProperties;	// 0x32c1a409
- (id)initWithDefaults;	// 0x32c1a44d
- (id)copyWithZone:(NSZone *)zone;	// 0x32c83661
- (void)dealloc;	// 0x32c1b9ad
// converted property getter: - (id)fillToRect;	// 0x32c1a6c5
- (unsigned)hash;	// 0x32cd57cd
- (BOOL)isEqual:(id)equal;	// 0x32cd56b1
- (BOOL)isFillToRectOverridden;	// 0x32c1a6f1
- (BOOL)isTypeOverridden;	// 0x32cd4d49
// converted property setter: - (void)setFillToRect:(id)rect;	// 0x32c1a4fd
// converted property setter: - (void)setType:(int)type;	// 0x32c1a4e1
// converted property getter: - (int)type;	// 0x32cd4d7d
@end

