/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMenuView.h"

@class NSArray, BRMediaPlayer, BRImageControl, NSString, BRControl, BRPhotoMediaCollection;

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
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x35e4dde9
- (void)_beginTransitionToNewTheme;	// 0x35e4ee5d
- (void)_configurePhotoLooping:(BOOL)looping;	// 0x35e4ed51
- (void)_fadeInAnimationCompleted:(id)animationCompleted;	// 0x35e4f2f9
- (void)_fadeOutAnimationCompleted:(id)completed;	// 0x35e4f02d
- (void)_finishTransitionToNewTheme;	// 0x35e4f1a1
- (void)_insertSlideshowPreview;	// 0x35e4ecd1
- (void)_marimbaLayerTransitionIsFinished:(id)finished;	// 0x35e4ee4d
- (void)_playerVisualsChanged:(id)changed;	// 0x35e4ebc9
- (void)_prepareToBeginTransitionToNewTheme;	// 0x35e4ed7d
- (void)_removeSlideshowPreview;	// 0x35e4ec51
- (void)controlWasActivated;	// 0x35e4e0ed
- (void)controlWasDeactivated;	// 0x35e4e32d
- (id)currentTheme;	// 0x35e4e7d5
- (id)currentTransitions;	// 0x35e4e8bd
- (void)dealloc;	// 0x35e4dfe1
- (void)layoutSubcontrols;	// 0x35e4e36d
- (id)musicServerID;	// 0x35e4ea71
- (void)playSlideshow;	// 0x35e4e4ad
- (id)playlistID;	// 0x35e4ea19
- (void)setLoopPhotos:(BOOL)photos;	// 0x35e4eba5
- (void)setMusicServerID:(id)anId playlistID:(id)anId2 playlistRef:(ATVMediaCollectionRef)ref;	// 0x35e4e901
- (void)setMuted:(BOOL)muted;	// 0x35e4e5b9
- (void)setTimePerSlide:(double)slide;	// 0x35e4eaf1
- (void)stopSlideshow;	// 0x35e4e4e9
- (void)switchToNewMenu;	// 0x35e4eac9
- (BOOL)switchToTheme:(id)theme;	// 0x35e4e5d9
- (void)switchToTransition:(id)transition;	// 0x35e4e819
- (void)toggleSlideshowPlayback;	// 0x35e4e571
@end

