/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOTileDBWriteEntry : NSObject {
	GEOTileKey _key;	// 4 = 0x4
	NSData *_data;	// 20 = 0x14
	unsigned _tileEdition;	// 24 = 0x18
	unsigned _tileSet;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x3670265d; @synthesize=_data
@property(readonly, assign, nonatomic) GEOTileKey key;	// G=0x36702641; @synthesize=_key
@property(readonly, assign, nonatomic) unsigned tileEdition;	// G=0x3670266d; @synthesize=_tileEdition
@property(readonly, assign, nonatomic) unsigned tileSet;	// G=0x3670267d; @synthesize=_tileSet
- (id)initWithKey:(GEOTileKey)key data:(id)data tileEdition:(unsigned)edition tileSet:(unsigned)set;	// 0x36702551
- (id).cxx_construct;	// 0x3670268d
// declared property getter: - (id)data;	// 0x3670265d
- (void)dealloc;	// 0x367025f5
// declared property getter: - (GEOTileKey)key;	// 0x36702641
// declared property getter: - (unsigned)tileEdition;	// 0x3670266d
// declared property getter: - (unsigned)tileSet;	// 0x3670267d
@end
