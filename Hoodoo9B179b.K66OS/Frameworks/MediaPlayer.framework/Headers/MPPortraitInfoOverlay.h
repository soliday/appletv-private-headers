/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIView.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "MPPlaybackControlsDelegate.h"

@class MPTextView, MPAVController, MPNowPlayingItemQueueInfoButton, MPAVItem, UIImage, MPPortraitControlsOverlay;

@interface MPPortraitInfoOverlay : UIView <MPPlaybackControlsDelegate> {
	id _delegate;	// 48 = 0x30
	MPAVItem *_item;	// 52 = 0x34
	MPAVController *_player;	// 56 = 0x38
	UIImage *_artworkImage;	// 60 = 0x3c
	unsigned _visibleParts;	// 64 = 0x40
	MPPortraitControlsOverlay *_controlsView;	// 68 = 0x44
	MPTextView *_displayableTextView;	// 72 = 0x48
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 76 = 0x4c
	unsigned _transitioning : 1;	// 80 = 0x50
	unsigned _allowsDetailScrubbing : 1;	// 80 = 0x50
}
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x309692d1; S=0x309692e5; 
@property(retain, nonatomic) UIImage *artworkImage;	// G=0x30968fd5; S=0x3096900d; @synthesize=_artworkImage
@property(assign, nonatomic) id delegate;	// G=0x3096a949; S=0x3096a959; @synthesize=_delegate
@property(retain, nonatomic) MPAVItem *item;	// G=0x3096a969; S=0x30969109; @synthesize=_item
@property(retain, nonatomic) MPAVController *player;	// G=0x3096a979; S=0x309695dd; @synthesize=_player
@property(assign, nonatomic) unsigned visibleParts;	// G=0x3096a989; S=0x30969271; @synthesize=_visibleParts
- (id)initWithFrame:(CGRect)frame;	// 0x30968a3d
- (BOOL)_configureNowPlayingQueueInfoButton:(id)button item:(id)item time:(double)time;	// 0x3096a271
- (id)_controlsView;	// 0x309696e9
- (void)_crossedTimeMarkerNotification:(id)notification;	// 0x309694ed
- (void)_displayableTextAvailable:(id)available;	// 0x309693e1
- (void)_displayableTextRemovalAnimationDidStop;	// 0x30969309
- (id)_displayableTextView;	// 0x309697dd
- (void)_hideControlsAndTextView;	// 0x309698d1
- (void)_hideSnapshotAnimationFinished;	// 0x30969349
- (id)_itemQueueInfoButton:(BOOL)button;	// 0x30969695
- (void)_playbackStateChanged:(id)changed;	// 0x30969435
- (void)_reloadDisplayableTextViewForItem:(id)item animate:(BOOL)animate;	// 0x30969de1
- (void)_reloadTextViewArtwork;	// 0x30969d55
- (void)_reloadViews;	// 0x3096a13d
- (void)_removeDisplayableTextWithAnimation:(BOOL)animation;	// 0x3096a005
- (void)_updateAllItemDependenciesForItem:(id)item animate:(BOOL)animate;	// 0x3096a8a1
- (void)_updateDisplayableTextViewForItem:(id)item animate:(BOOL)animate;	// 0x3096a195
- (void)_updateItemQueueInfoButtonForItem:(id)item atTime:(double)time animate:(BOOL)animate;	// 0x3096a321
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x309692d1
// declared property getter: - (id)artworkImage;	// 0x30968fd5
- (BOOL)controlsOverlay:(id)overlay shouldUseDetailScrubberForItem:(id)item;	// 0x309695c9
- (void)controlsOverlayDetailSliderInstructionOverlayWillHide:(id)controlsOverlayDetailSliderInstructionOverlay;	// 0x30969bf1
- (void)controlsOverlayDetailSliderInstructionOverlayWillShow:(id)controlsOverlayDetailSliderInstructionOverlay;	// 0x30969c75
- (void)controlsOverlayDetailSliderTrackingDidBegin:(id)controlsOverlayDetailSliderTracking;	// 0x30969cb5
- (void)controlsOverlayDetailSliderTrackingDidEnd:(id)controlsOverlayDetailSliderTracking;	// 0x30969cd5
- (void)dealloc;	// 0x30968b31
// declared property getter: - (id)delegate;	// 0x3096a949
- (void)didMoveToSuperview;	// 0x30968c65
- (void)didTransition;	// 0x30968ca1
- (BOOL)hide;	// 0x30968cdd
// declared property getter: - (id)item;	// 0x3096a969
- (void)layoutSubviews;	// 0x30968de1
// declared property getter: - (id)player;	// 0x3096a979
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x309692e5
- (void)setAlpha:(float)alpha;	// 0x30969065
// declared property setter: - (void)setArtworkImage:(id)image;	// 0x3096900d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3096a959
// declared property setter: - (void)setItem:(id)item;	// 0x30969109
// declared property setter: - (void)setPlayer:(id)player;	// 0x309695dd
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x30969271
- (void)startTicking;	// 0x30968f4d
- (void)stopTicking;	// 0x30968f6d
// declared property getter: - (unsigned)visibleParts;	// 0x3096a989
- (void)willTransition;	// 0x30968f8d
@end

