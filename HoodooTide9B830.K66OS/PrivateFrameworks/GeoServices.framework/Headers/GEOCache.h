/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSCache.h> // Unknown library

@class NSLock;

@interface GEOCache : NSCache {
	NSLock *_hotseatLock;	// 32 = 0x20
	void *_hotseatCache;	// 36 = 0x24
	unsigned long long _hotseatTouch;	// 40 = 0x28
	unsigned _minCapacity;	// 48 = 0x30
	BOOL _caresAboutEvictions;	// 52 = 0x34
}
@property(readonly, assign, nonatomic) unsigned minCapacity;	// G=0x35f49a21; @synthesize=_minCapacity
- (id)init;	// 0x35f48dbd
- (id)initWithMinCapacity:(unsigned)minCapacity;	// 0x35f48dd1
- (id)_addHotseatValue:(id)value forKey:(id)key;	// 0x35f48f29
- (void)_enteredBackground:(id)background;	// 0x35f49709
- (void)cache:(id)cache willEvictObject:(id)object;	// 0x35f498d1
- (void)dealloc;	// 0x35f49995
// declared property getter: - (unsigned)minCapacity;	// 0x35f49a21
- (id)objectForKey:(id)key;	// 0x35f49085
- (void)removeAllObjects;	// 0x35f49609
- (void)removeObjectForKey:(id)key;	// 0x35f494e5
- (void)setDelegate:(id)delegate;	// 0x35f48ed1
- (void)setObject:(id)object forKey:(id)key;	// 0x35f492b5
- (void)setObject:(id)object forKey:(id)key cost:(unsigned)cost;	// 0x35f492d9
- (void)willEvictObject:(id)object;	// 0x35f49991
@end

