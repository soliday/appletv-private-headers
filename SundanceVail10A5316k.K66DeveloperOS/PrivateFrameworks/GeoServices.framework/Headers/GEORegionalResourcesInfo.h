/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOResources, NSSet, GEOTileGroup;

__attribute__((visibility("hidden")))
@interface GEORegionalResourcesInfo : NSObject {
@private
	GEOTileGroup *_tileGroup;	// 4 = 0x4
	GEOResources *_resources;	// 8 = 0x8
	NSSet *_nodes;	// 12 = 0xc
}
- (id)initWithTileGroup:(id)tileGroup inResourceManifest:(id)resourceManifest;	// 0x34b57501
- (void)_createNodes;	// 0x34b57605
- (id)attributionsForKey:(GEOTileKey *)key;	// 0x34b57b29
- (void)dealloc;	// 0x34b5758d
- (void)findResourcesForTileKeys:(id)tileKeys visitor:(id)visitor;	// 0x34b5791d
@end
