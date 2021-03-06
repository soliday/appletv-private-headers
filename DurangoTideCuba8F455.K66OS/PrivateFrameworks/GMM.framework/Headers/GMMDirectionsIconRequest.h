/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library

@class NSMutableArray, GMMClientCapabilities;

@interface GMMDirectionsIconRequest : PBRequest {
@private
	GMMClientCapabilities *_capabilities;	// 4 = 0x4
	int _cachedIconVersion;	// 8 = 0x8
	BOOL _hasCachedIconVersion;	// 12 = 0xc
	NSMutableArray *_cachedIconIDs;	// 16 = 0x10
}
@property(retain, nonatomic) NSMutableArray *cachedIconIDs;	// G=0x34445c31; S=0x344462c9; @synthesize=_cachedIconIDs
@property(readonly, assign, nonatomic) int cachedIconIDsCount;	// G=0x344461cd; 
@property(assign, nonatomic) int cachedIconVersion;	// G=0x34445c51; S=0x34445c11; @synthesize=_cachedIconVersion
@property(retain, nonatomic) GMMClientCapabilities *capabilities;	// G=0x34445c61; S=0x344462a1; @synthesize=_capabilities
@property(readonly, assign, nonatomic) BOOL hasCachedIconVersion;	// G=0x34445c41; @synthesize=_hasCachedIconVersion
@property(readonly, assign, nonatomic) BOOL hasCapabilities;	// G=0x34445bfd; 
- (id)init;	// 0x3444624d
- (void)addCachedIconID:(long long)anId;	// 0x3444608d
- (long long)cachedIconIDAtIndex:(unsigned)index;	// 0x344460d1
// declared property getter: - (id)cachedIconIDs;	// 0x34445c31
// declared property getter: - (int)cachedIconIDsCount;	// 0x344461cd
// declared property getter: - (int)cachedIconVersion;	// 0x34445c51
// declared property getter: - (id)capabilities;	// 0x34445c61
- (void)dealloc;	// 0x344461f1
- (id)description;	// 0x34445c71
// declared property getter: - (BOOL)hasCachedIconVersion;	// 0x34445c41
// declared property getter: - (BOOL)hasCapabilities;	// 0x34445bfd
- (BOOL)readFrom:(id)from;	// 0x34445eb1
- (unsigned)requestTypeCode;	// 0x34445c2d
- (Class)responseClass;	// 0x3444628d
- (void)setCachedIconID:(long long)anId atIndex:(unsigned)index;	// 0x34446145
// declared property setter: - (void)setCachedIconIDs:(id)ids;	// 0x344462c9
// declared property setter: - (void)setCachedIconVersion:(int)version;	// 0x34445c11
// declared property setter: - (void)setCapabilities:(id)capabilities;	// 0x344462a1
- (void)writeTo:(id)to;	// 0x34445d89
@end

