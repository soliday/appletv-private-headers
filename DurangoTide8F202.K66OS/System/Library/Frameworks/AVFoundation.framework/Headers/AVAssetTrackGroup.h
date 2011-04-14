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
@property(readonly, assign, nonatomic) NSArray *trackIDs;	// G=0x30421249; @synthesize=_trackIDs
- (id)init;	// 0x3042139d
- (id)initWithAsset:(id)asset trackIDs:(id)ids;	// 0x304213b5
- (id)_assetComparisonToken;	// 0x30421239
- (void)dealloc;	// 0x30421341
- (unsigned)hash;	// 0x30421259
- (BOOL)isEqual:(id)equal;	// 0x304212a1
// declared property getter: - (id)trackIDs;	// 0x30421249
@end
