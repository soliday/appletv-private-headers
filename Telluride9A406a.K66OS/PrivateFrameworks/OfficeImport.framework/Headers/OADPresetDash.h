/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDash.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADPresetDash : OADDash {
@private
	unsigned char mType;	// 12 = 0xc
	unsigned mIsTypeOverridden : 1;	// 13 = 0xd
}
@property(assign) int type;	// G=0x328a5f25; S=0x32899a5d; converted property
+ (id)defaultProperties;	// 0x32899a15
- (id)initWithDefaults;	// 0x328db0f5
- (id)copyWithZone:(NSZone *)zone;	// 0x32987f11
- (id)equivalentCustomDash;	// 0x328ecda1
- (unsigned)hash;	// 0x32ac3395
- (BOOL)isEqual:(id)equal;	// 0x328a5e35
- (BOOL)isTypeOverridden;	// 0x328a5ee9
// converted property setter: - (void)setType:(int)type;	// 0x32899a5d
// converted property getter: - (int)type;	// 0x328a5f25
@end

