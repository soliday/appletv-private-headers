/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "VMUAddressRange.h"

@class VMUSymbolOwner, NSString;

@interface VMURegion : VMUAddressRange <NSCoding, NSCopying> {
	VMUSymbolOwner *_owner;	// 20 = 0x14
	NSString *_name;	// 24 = 0x18
}
@property(readonly, retain) NSString *name;	// G=0x31f7303d; converted property
@property(retain) VMUSymbolOwner *owner;	// G=0x31f7302d; S=0x31f737d5; converted property
+ (id)regionWithOwner:(id)owner name:(id)name addressRange:(VMURange)range;	// 0x31f73171
- (id)initWithCoder:(id)coder;	// 0x31f734d9
- (id)initWithOwner:(id)owner name:(id)name addressRange:(VMURange)range;	// 0x31f730d5
- (VMURange)addressRange;	// 0x31f7304d
- (int)compare:(id)compare;	// 0x31f73075
- (id)copyWithZone:(NSZone *)zone;	// 0x31f731cd
- (void)dealloc;	// 0x31f73251
- (id)description;	// 0x31f732a5
- (void)encodeWithCoder:(id)coder;	// 0x31f73489
- (unsigned)hash;	// 0x31f73335
- (BOOL)isEqual:(id)equal;	// 0x31f73379
- (BOOL)isEqualToRegion:(id)region;	// 0x31f733ed
// converted property getter: - (id)name;	// 0x31f7303d
// converted property getter: - (id)owner;	// 0x31f7302d
// converted property setter: - (void)setOwner:(id)owner;	// 0x31f737d5
@end
