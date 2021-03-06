/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuView.h"
#import "AppleTV-Structs.h"

@class BRMediaPlayer, BRImageControl, BRControl, BRPhotoMediaCollection, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface BRMarimbaMenuView : BRMenuView {
@private
	BRMediaPlayer *_slideshowPhotoPlayer;	// 92 = 0x5c
	BRImageControl *_listBackgroundControl;	// 96 = 0x60
	BRControl *_slideshowPreview;	// 100 = 0x64
	BRPhotoMediaCollection *_collection;	// 104 = 0x68
	NSArray *_slideshowThemeIdentifierKeys;	// 108 = 0x6c
	NSString *_nextSlideshowTheme;	// 112 = 0x70
	NSString *_newlyRequestedTheme;	// 116 = 0x74
	BRControl *_fadeThroughBlackShroudControl;	// 120 = 0x78
	BOOL _themeSwitchInFlight;	// 124 = 0x7c
	BOOL _playerVisualsChanged;	// 125 = 0x7d
	BOOL _fadeThroughBlackControlNeedsLayout;	// 126 = 0x7e
	BOOL _loopPhotos;	// 127 = 0x7f
}
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x3325afb5
- (void)_beginTransitionToNewTheme;	// 0x3325c029
- (void)_configurePhotoLooping:(BOOL)looping;	// 0x3325bf1d
- (void)_fadeInAnimationCompleted:(id)animationCompleted;	// 0x3325c4c5
- (void)_fadeOutAnimationCompleted:(id)completed;	// 0x3325c1f9
- (void)_finishTransitionToNewTheme;	// 0x3325c36d
- (void)_insertSlideshowPreview;	// 0x3325be9d
- (void)_marimbaLayerTransitionIsFinished:(id)finished;	// 0x3325c019
- (void)_playerVisualsChanged:(id)changed;	// 0x3325bd95
- (void)_prepareToBeginTransitionToNewTheme;	// 0x3325bf49
- (void)_removeSlideshowPreview;	// 0x3325be1d
- (void)controlWasActivated;	// 0x3325b2b9
- (void)controlWasDeactivated;	// 0x3325b4f9
- (id)currentTheme;	// 0x3325b9a1
- (id)currentTransitions;	// 0x3325ba89
- (void)dealloc;	// 0x3325b1ad
- (void)layoutSubcontrols;	// 0x3325b539
- (id)musicServerID;	// 0x3325bc3d
- (void)playSlideshow;	// 0x3325b679
- (id)playlistID;	// 0x3325bbe5
- (void)setLoopPhotos:(BOOL)photos;	// 0x3325bd71
- (void)setMusicServerID:(id)anId playlistID:(id)anId2 playlistRef:(ATVMediaCollectionRef)ref;	// 0x3325bacd
- (void)setMuted:(BOOL)muted;	// 0x3325b785
- (void)setTimePerSlide:(double)slide;	// 0x3325bcbd
- (void)stopSlideshow;	// 0x3325b6b5
- (void)switchToNewMenu;	// 0x3325bc95
- (BOOL)switchToTheme:(id)theme;	// 0x3325b7a5
- (void)switchToTransition:(id)transition;	// 0x3325b9e5
- (void)toggleSlideshowPlayback;	// 0x3325b73d
@end

