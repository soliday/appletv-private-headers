/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIWindow.h> // Unknown library

@class NPTVOutBackgroundView, MPMovieTVHUDView, MPVideoView;

@interface MPTVOutWindow : UIWindow {
	NPTVOutBackgroundView *_backgroundView;	// 124 = 0x7c
	MPMovieTVHUDView *_hudView;	// 128 = 0x80
	MPVideoView *_videoView;	// 132 = 0x84
}
@property(readonly, retain) MPVideoView *videoView;	// G=0x3375b359; converted property
- (id)init;	// 0x3375b4ad
- (void)_playbackStateChanged:(id)changed;	// 0x3375b369
- (BOOL)_setupTargetScreen:(id)screen;	// 0x3375b705
- (void)dealloc;	// 0x3375b3e9
- (BOOL)setVideoView:(id)view;	// 0x3375b8b1
// converted property getter: - (id)videoView;	// 0x3375b359
@end

