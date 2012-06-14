/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMediaSelectionGroup.h"

@class AVMediaSelectionOption, NSDictionary, AVAsset, NSArray;

@interface AVMediaSelectionTrackGroup : AVMediaSelectionGroup {
	AVAsset *_asset;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	NSArray *_trackIDs;	// 16 = 0x10
	NSArray *_options;	// 20 = 0x14
	AVMediaSelectionOption *_defaultOption;	// 24 = 0x18
}
@property(readonly, retain) AVAsset *asset;	// G=0x3678f4c5; converted property
@property(readonly, retain) NSDictionary *dictionary;	// G=0x3678f4d5; converted property
@property(readonly, retain) NSArray *options;	// G=0x3678f3a9; converted property
@property(readonly, retain) NSArray *trackIDs;	// G=0x3678f3b9; converted property
- (id)initWithAsset:(id)asset dictionary:(id)dictionary;	// 0x3678ef8d
- (id)_defaultOption;	// 0x3678f4e9
- (BOOL)_isAlternateTrackGroup;	// 0x3678f4e5
// converted property getter: - (id)asset;	// 0x3678f4c5
- (void)dealloc;	// 0x3678f221
// converted property getter: - (id)dictionary;	// 0x3678f4d5
- (unsigned)hash;	// 0x3678f369
- (BOOL)isEqual:(id)equal;	// 0x3678f2ad
// converted property getter: - (id)options;	// 0x3678f3a9
// converted property getter: - (id)trackIDs;	// 0x3678f3b9
- (id)tracks;	// 0x3678f3c9
@end
