/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSDictionary, NSMutableDictionary, NSNumber;

@interface SSURLBagContext : NSObject <SSXPCCoding, NSCopying> {
@private
	int _allowedRetryCount;	// 4 = 0x4
	BOOL _allowsExpiredBags;	// 8 = 0x8
	int _bagType;	// 12 = 0xc
	NSMutableDictionary *_httpHeaders;	// 16 = 0x10
	BOOL _ignoresDiskCache;	// 20 = 0x14
	NSNumber *_userIdentifier;	// 24 = 0x18
	BOOL _usesCachedBagsOnly;	// 28 = 0x1c
}
@property(copy, nonatomic) NSDictionary *allHTTPHeaders;	// G=0x34e68a79; S=0x34e68b31; 
@property(assign, nonatomic) int allowedRetryCount;	// G=0x34e6933d; S=0x34e6934d; @synthesize=_allowedRetryCount
@property(assign, nonatomic) BOOL allowsExpiredBags;	// G=0x34e6935d; S=0x34e6936d; @synthesize=_allowsExpiredBags
@property(assign, nonatomic) int bagType;	// G=0x34e6937d; S=0x34e6938d; @synthesize=_bagType
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x34e68ab1; 
@property(readonly, assign, nonatomic) CFStringRef diskCacheExpirationTimeKey;	// G=0x34e68e35; 
@property(readonly, assign, nonatomic) NSString *diskCachePath;	// G=0x34e68e7d; 
@property(assign, nonatomic) BOOL ignoresDiskCache;	// G=0x34e6939d; S=0x34e693ad; @synthesize=_ignoresDiskCache
@property(retain, nonatomic) NSNumber *userIdentifier;	// G=0x34e693bd; S=0x34e693cd; @synthesize=_userIdentifier
@property(assign, nonatomic) BOOL usesCachedBagsOnly;	// G=0x34e693dd; S=0x34e693ed; @synthesize=_usesCachedBagsOnly
+ (id)contextWithBagType:(int)bagType;	// 0x34e68a25
- (id)init;	// 0x34e68981
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x34e690a9
// declared property getter: - (id)allHTTPHeaders;	// 0x34e68a79
// declared property getter: - (int)allowedRetryCount;	// 0x34e6933d
// declared property getter: - (BOOL)allowsExpiredBags;	// 0x34e6935d
// declared property getter: - (int)bagType;	// 0x34e6937d
// declared property getter: - (id)cacheKey;	// 0x34e68ab1
- (id)copyWithZone:(NSZone *)zone;	// 0x34e68fc9
- (id)copyXPCEncoding;	// 0x34e6923d
- (void)dealloc;	// 0x34e689c1
- (id)description;	// 0x34e68c4d
// declared property getter: - (CFStringRef)diskCacheExpirationTimeKey;	// 0x34e68e35
// declared property getter: - (id)diskCachePath;	// 0x34e68e7d
- (unsigned)hash;	// 0x34e68ce1
// declared property getter: - (BOOL)ignoresDiskCache;	// 0x34e6939d
- (BOOL)isEqual:(id)equal;	// 0x34e68d31
// declared property setter: - (void)setAllHTTPHeaders:(id)headers;	// 0x34e68b31
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x34e6934d
// declared property setter: - (void)setAllowsExpiredBags:(BOOL)bags;	// 0x34e6936d
// declared property setter: - (void)setBagType:(int)type;	// 0x34e6938d
// declared property setter: - (void)setIgnoresDiskCache:(BOOL)cache;	// 0x34e693ad
// declared property setter: - (void)setUserIdentifier:(id)identifier;	// 0x34e693cd
// declared property setter: - (void)setUsesCachedBagsOnly:(BOOL)only;	// 0x34e693ed
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x34e68b75
// declared property getter: - (id)userIdentifier;	// 0x34e693bd
// declared property getter: - (BOOL)usesCachedBagsOnly;	// 0x34e693dd
- (id)valueForHTTPHeaderField:(id)httpheaderField;	// 0x34e68c05
@end
