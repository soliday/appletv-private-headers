/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransitionController.h"

@class MPVideoView, UINavigationBar, UIView;

@interface MPVideoTransferTransitionController : MPTransitionController {
	MPVideoView *_inflightVideoView;	// 48 = 0x30
	UINavigationBar *_portraitNavigationBar;	// 52 = 0x34
	UIView *_topmostView;	// 56 = 0x38
	UIView *_transitionBehindView;	// 60 = 0x3c
}
@property(retain, nonatomic) UINavigationBar *portraitNavigationBar;	// G=0x33742061; S=0x33742b19; @synthesize=_portraitNavigationBar
@property(retain, nonatomic) UIView *topmostView;	// G=0x33742041; S=0x33742b69; @synthesize=_topmostView
@property(retain, nonatomic) UIView *transitionBehindView;	// G=0x33742051; S=0x33742b41; @synthesize=_transitionBehindView
- (id)init;	// 0x33742349
- (void)_animationDidStop;	// 0x33742181
- (void)_prepareViews;	// 0x3374238d
- (id)_topmostView;	// 0x3374214d
- (id)_topmostViewWindow;	// 0x33742111
- (void)_transformView:(id)view forOrientation:(int)orientation bounds:(CGRect)bounds;	// 0x33742905
- (void)_updateStatusBar;	// 0x33742071
- (void)dealloc;	// 0x337422c5
// declared property getter: - (id)portraitNavigationBar;	// 0x33742061
// declared property setter: - (void)setPortraitNavigationBar:(id)bar;	// 0x33742b19
// declared property setter: - (void)setTopmostView:(id)view;	// 0x33742b69
// declared property setter: - (void)setTransitionBehindView:(id)view;	// 0x33742b41
// declared property getter: - (id)topmostView;	// 0x33742041
- (void)transition:(unsigned)transition;	// 0x337426a1
// declared property getter: - (id)transitionBehindView;	// 0x33742051
@end

