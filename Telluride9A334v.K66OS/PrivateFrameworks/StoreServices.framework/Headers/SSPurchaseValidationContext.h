/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, NSIndexSet;

@interface SSPurchaseValidationContext : NSObject <NSCopying> {
@private
	NSIndexSet *_allowedDeviceIdentifiers;	// 4 = 0x4
	long long _diskSpaceAvailable;	// 8 = 0x8
	id _sizeLimitBlock;	// 16 = 0x10
	NSString *_systemName;	// 20 = 0x14
	NSString *_systemVersion;	// 24 = 0x18
}
@property(copy, nonatomic) NSIndexSet *allowedDeviceIdentifiers;	// G=0x324e5e75; S=0x324e5e85; @synthesize=_allowedDeviceIdentifiers
@property(assign, nonatomic) long long diskSpaceAvailable;	// G=0x324e5ea9; S=0x324e5ec1; @synthesize=_diskSpaceAvailable
@property(copy, nonatomic) id sizeLimitBlock;	// G=0x324e5ed5; S=0x324e5ee5; @synthesize=_sizeLimitBlock
@property(copy, nonatomic) NSString *systemName;	// G=0x324e5f09; S=0x324e5f19; @synthesize=_systemName
@property(copy, nonatomic) NSString *systemVersion;	// G=0x324e5f3d; S=0x324e5f4d; @synthesize=_systemVersion
- (BOOL)_isAnyIPad;	// 0x324e5d25
- (BOOL)_isAnyIPod;	// 0x324e5d4d
- (id)_supportedDeviceForOffer:(id)offer;	// 0x324e5d99
// declared property getter: - (id)allowedDeviceIdentifiers;	// 0x324e5e75
- (id)copyWithZone:(NSZone *)zone;	// 0x324e5c49
- (void)dealloc;	// 0x324e5bc1
// declared property getter: - (long long)diskSpaceAvailable;	// 0x324e5ea9
// declared property setter: - (void)setAllowedDeviceIdentifiers:(id)identifiers;	// 0x324e5e85
// declared property setter: - (void)setDiskSpaceAvailable:(long long)available;	// 0x324e5ec1
// declared property setter: - (void)setSizeLimitBlock:(id)block;	// 0x324e5ee5
// declared property setter: - (void)setSystemName:(id)name;	// 0x324e5f19
// declared property setter: - (void)setSystemVersion:(id)version;	// 0x324e5f4d
// declared property getter: - (id)sizeLimitBlock;	// 0x324e5ed5
// declared property getter: - (id)systemName;	// 0x324e5f09
// declared property getter: - (id)systemVersion;	// 0x324e5f3d
@end

