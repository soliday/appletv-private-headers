/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSArray, NSData;

@interface SSPlayInfoRequestContext : NSObject <SSCoding, NSCopying> {
@private
	NSString *_playerGUID;	// 4 = 0x4
	NSData *_sic;	// 8 = 0x8
	NSArray *_sinfs;	// 12 = 0xc
}
@property(copy, nonatomic) NSData *SICData;	// G=0x324f1659; S=0x324f1669; @synthesize=_sic
@property(copy, nonatomic) NSString *playerGUID;	// G=0x324f1625; S=0x324f1635; @synthesize=_playerGUID
@property(copy, nonatomic) NSArray *sinfs;	// G=0x324f168d; S=0x324f169d; @synthesize=_sinfs
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324f151d
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x324f15e9
// declared property getter: - (id)SICData;	// 0x324f1659
- (id)copyPropertyListEncoding;	// 0x324f1445
- (id)copyWithZone:(NSZone *)zone;	// 0x324f13a1
- (void *)copyXPCEncoding;	// 0x324f14e9
- (void)dealloc;	// 0x324f132d
// declared property getter: - (id)playerGUID;	// 0x324f1625
// declared property setter: - (void)setPlayerGUID:(id)guid;	// 0x324f1635
// declared property setter: - (void)setSICData:(id)data;	// 0x324f1669
// declared property setter: - (void)setSinfs:(id)sinfs;	// 0x324f169d
// declared property getter: - (id)sinfs;	// 0x324f168d
@end

