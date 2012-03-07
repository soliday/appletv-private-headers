/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPPlaybackControlsView.h"

@class MPVideoViewController, UILabel, MPInlineAudioTransportControls, NSString, UIImageView;

@interface MPInlineAudioOverlay : MPPlaybackControlsView {
@private
	MPVideoViewController *_videoViewController;	// 144 = 0x90
	int _style;	// 148 = 0x94
	UIView *_backgroundView;	// 152 = 0x98
	MPInlineAudioTransportControls *_transportControls;	// 156 = 0x9c
	UILabel *_streamingLabel;	// 160 = 0xa0
	NSString *_playbackErrorDescription;	// 164 = 0xa4
	UILabel *_playbackErrorDescriptionLabel;	// 168 = 0xa8
	UIImageView *_leftImageView;	// 172 = 0xac
	UIImageView *_trackImageView;	// 176 = 0xb0
	UIImageView *_leftStretchImageView;	// 180 = 0xb4
	UIImageView *_rightStretchImageView;	// 184 = 0xb8
	UIImageView *_rightImageView;	// 188 = 0xbc
	UIImageView *_largeLeftImageView;	// 192 = 0xc0
	UIImageView *_largeMiddleLeftImageView;	// 196 = 0xc4
	UIImageView *_largeTrackImageView;	// 200 = 0xc8
	UIImageView *_largeMiddleRightImageView;	// 204 = 0xcc
	UIImageView *_largeRightImageView;	// 208 = 0xd0
}
@property(copy, nonatomic) NSString *playbackErrorDescription;	// G=0x34e43615; S=0x34e43199; @synthesize=_playbackErrorDescription
@property(assign, nonatomic) int style;	// G=0x34e43625; S=0x34e42eed; @synthesize=_style
@property(assign, nonatomic) MPVideoViewController *videoViewController;	// G=0x34e43635; S=0x34e432b9; @synthesize=_videoViewController
- (id)initWithFrame:(CGRect)frame;	// 0x34e40e41
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x34e42e79
- (CGRect)_frameInBackgroundViewForDescriptionLabel:(id)descriptionLabel;	// 0x34e434f9
- (void)_itemDurationDidChangeNotification:(id)_itemDuration;	// 0x34e42ea9
- (id)_newDescriptionLabel;	// 0x34e433d1
- (void)_updateVisiblePartsForAvailableRoutes;	// 0x34e43349
- (void)dealloc;	// 0x34e40f2d
- (unsigned)displayablePartsInPartMask:(unsigned)partMask;	// 0x34e42ded
- (void)layoutSubviews;	// 0x34e410ed
- (id)newProgressIndicator;	// 0x34e42b91
// declared property getter: - (id)playbackErrorDescription;	// 0x34e43615
- (void)reloadView;	// 0x34e42d69
- (void)setCurrentTime:(double)time;	// 0x34e42c45
- (void)setItem:(id)item;	// 0x34e42d0d
// declared property setter: - (void)setPlaybackErrorDescription:(id)description;	// 0x34e43199
- (void)setPlayer:(id)player;	// 0x34e42e25
// declared property setter: - (void)setStyle:(int)style;	// 0x34e42eed
// declared property setter: - (void)setVideoViewController:(id)controller;	// 0x34e432b9
// declared property getter: - (int)style;	// 0x34e43625
// declared property getter: - (id)videoViewController;	// 0x34e43635
@end
