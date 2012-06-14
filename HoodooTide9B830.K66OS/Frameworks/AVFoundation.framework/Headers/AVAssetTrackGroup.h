/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVTrackGroup.h"

@class NSArray;

@interface AVAssetTrackGroup : AVTrackGroup {
@private
	id _assetComparisonToken;	// 8 = 0x8
	NSArray *_trackIDs;	// 12 = 0xc
}
@property(readonly, retain) NSArray *trackIDs;	// G=0x35e7e3d1; converted property
- (id)init;	// 0x35e7e259
- (id)initWithAsset:(id)asset trackIDs:(id)ids;	// 0x35e7e199
- (id)_assetComparisonToken;	// 0x35e7e3c1
- (void)dealloc;	// 0x35e7e26d
- (unsigned)hash;	// 0x35e7e375
- (BOOL)isEqual:(id)equal;	// 0x35e7e2cd
// converted property getter: - (id)trackIDs;	// 0x35e7e3d1
@end

