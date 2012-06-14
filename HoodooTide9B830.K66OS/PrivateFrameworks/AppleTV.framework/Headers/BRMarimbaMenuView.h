/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMenuView.h"

@class NSArray, BRMediaPlayer, BRImageControl, BRControl, BRPhotoMediaCollection, NSString;

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
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x32a2df3d
- (void)_beginTransitionToNewTheme;	// 0x32a2efed
- (void)_configurePhotoLooping:(BOOL)looping;	// 0x32a2eee1
- (void)_fadeInAnimationCompleted:(id)animationCompleted;	// 0x32a2f489
- (void)_fadeOutAnimationCompleted:(id)completed;	// 0x32a2f1bd
- (void)_finishTransitionToNewTheme;	// 0x32a2f331
- (void)_insertSlideshowPreview;	// 0x32a2ee61
- (void)_marimbaLayerTransitionIsFinished:(id)finished;	// 0x32a2efdd
- (void)_playerVisualsChanged:(id)changed;	// 0x32a2ed59
- (void)_prepareToBeginTransitionToNewTheme;	// 0x32a2ef0d
- (void)_removeSlideshowPreview;	// 0x32a2ede1
- (void)controlWasActivated;	// 0x32a2e241
- (void)controlWasDeactivated;	// 0x32a2e481
- (id)currentTheme;	// 0x32a2e965
- (id)currentTransitions;	// 0x32a2ea4d
- (void)dealloc;	// 0x32a2e135
- (void)layoutSubcontrols;	// 0x32a2e4c1
- (id)musicServerID;	// 0x32a2ec01
- (void)playSlideshow;	// 0x32a2e63d
- (id)playlistID;	// 0x32a2eba9
- (void)setLoopPhotos:(BOOL)photos;	// 0x32a2ed35
- (void)setMusicServerID:(id)anId playlistID:(id)anId2 playlistRef:(ATVMediaCollectionRef)ref;	// 0x32a2ea91
- (void)setMuted:(BOOL)muted;	// 0x32a2e749
- (void)setTimePerSlide:(double)slide;	// 0x32a2ec81
- (void)stopSlideshow;	// 0x32a2e679
- (void)switchToNewMenu;	// 0x32a2ec59
- (BOOL)switchToTheme:(id)theme;	// 0x32a2e769
- (void)switchToTransition:(id)transition;	// 0x32a2e9a9
- (void)toggleSlideshowPlayback;	// 0x32a2e701
@end

