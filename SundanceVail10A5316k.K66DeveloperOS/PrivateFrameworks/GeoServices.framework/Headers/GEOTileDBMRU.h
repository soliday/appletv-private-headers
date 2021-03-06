/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class GEOTileKeyList, NSLock;

@interface GEOTileDBMRU : NSObject {
	GEOTileKeyList *_mru;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
}
- (id)init;	// 0x34b2a2f9
- (void)addKey:(GEOTileKey *)key;	// 0x34b2a3f5
- (id)currentList;	// 0x34b2a451
- (void)dealloc;	// 0x34b2a391
@end

