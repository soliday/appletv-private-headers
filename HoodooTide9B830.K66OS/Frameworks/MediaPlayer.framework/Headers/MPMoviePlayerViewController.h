/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIViewController.h> // Unknown library

@class MPMoviePlayerController;

@interface MPMoviePlayerViewController : UIViewController {
@private
	id _internal;	// 156 = 0x9c
}
@property(readonly, assign, nonatomic) MPMoviePlayerController *moviePlayer;	// G=0x34677b09; 
- (id)init;	// 0x346778a1
- (id)initWithContentURL:(id)contentURL;	// 0x34677985
- (BOOL)_canReloadView;	// 0x34678161
- (void)_moviePlayerViewController_applicationDidEnterBackgroundNotification:(id)_moviePlayerViewController_application;	// 0x34678169
- (void)_moviePlayerViewController_playbackDidFinishNotification:(id)_moviePlayerViewController_playback;	// 0x346781c1
- (void)_restoreStatusBarAnimated:(BOOL)animated;	// 0x3467825d
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)window parentViewController:(id)controller;	// 0x34678165
- (BOOL)canBecomeFirstResponder;	// 0x34677c45
- (void)dealloc;	// 0x346779c9
- (void)loadView;	// 0x34677d25
// declared property getter: - (id)moviePlayer;	// 0x34677b09
- (void)remoteControlReceivedWithEvent:(id)event;	// 0x34677c49
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x34677e1d
- (void)viewDidAppear:(BOOL)view;	// 0x34677ffd
- (void)viewDidDisappear:(BOOL)view;	// 0x34678105
- (void)viewWillAppear:(BOOL)view;	// 0x34677e21
- (void)viewWillDisappear:(BOOL)view;	// 0x346780ad
@end

