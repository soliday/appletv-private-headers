/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRReflectionControl, NSTimer, BRMetadataLongDescriptionControl, BRCoverArtImageLayer;
@protocol BRMetadataProvider;

@interface BRMetadataLongDescriptionPreviewControl : BRControl {
@private
	id _asset;	// 48 = 0x30
	id<BRMetadataProvider> _metadataProvider;	// 52 = 0x34
	BRControl *_coverArtWrapper;	// 56 = 0x38
	BRCoverArtImageLayer *_coverArtLayer;	// 60 = 0x3c
	BRReflectionControl *_reflectionLayer;	// 64 = 0x40
	BRMetadataLongDescriptionControl *_metadataLayer;	// 68 = 0x44
	NSTimer *_timer;	// 72 = 0x48
	BOOL _showsMetadataImmediately;	// 76 = 0x4c
	BOOL _showingMetadata;	// 77 = 0x4d
}
@property(retain) id asset;	// G=0x33224725; S=0x3322453d; converted property
@property(assign) BOOL deletterboxAssetArtwork;	// G=0x33224795; S=0x33224775; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x332247d9; S=0x332247b9; converted property
@property(assign) BOOL showsMetadataImmediately;	// G=0x33224765; S=0x33224735; converted property
- (id)init;	// 0x33223d59
- (void)_coverArtChanged:(id)changed;	// 0x33224b11
- (void)_downloadStateChanged:(id)changed;	// 0x33224b8d
- (CGRect)_frameForArt:(id)art inBounds:(CGSize)bounds;	// 0x33224bcd
- (CGRect)_metadataFrameForBounds:(CGSize)bounds;	// 0x33224c89
- (void)_metadataTimerFired:(id)fired;	// 0x33224b6d
- (float)_reflectionAmountForArtFrame:(CGRect)artFrame bottomCutoff:(float)cutoff;	// 0x33224c99
- (void)_showMetadataAfterDelay;	// 0x3322491d
- (void)_updateMetadataLayer;	// 0x332249bd
- (id)accessibilityLabel;	// 0x332248a1
- (id)accessibilityScreenContent;	// 0x33224ce5
// converted property getter: - (id)asset;	// 0x33224725
- (void)controlWasActivated;	// 0x3322480d
- (void)controlWasDeactivated;	// 0x3322484d
- (void)dealloc;	// 0x33224079
// converted property getter: - (BOOL)deletterboxAssetArtwork;	// 0x33224795
- (void)layoutSubcontrols;	// 0x33224159
- (id)metadataControl;	// 0x332247fd
// converted property setter: - (void)setAsset:(id)asset;	// 0x3322453d
// converted property setter: - (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x33224775
- (void)setImageProxy:(id)proxy;	// 0x33224471
- (void)setMetadataProvider:(id)provider;	// 0x332244d1
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x332247b9
// converted property setter: - (void)setShowsMetadataImmediately:(BOOL)immediately;	// 0x33224735
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x332247d9
// converted property getter: - (BOOL)showsMetadataImmediately;	// 0x33224765
@end

