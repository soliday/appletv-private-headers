/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPFullScreenVideoViewController.h"


@interface MPMoviePlayerVideoViewController : MPFullScreenVideoViewController {
	BOOL _hideNavigationBar;	// 237 = 0xed
}
@property(assign, nonatomic) BOOL hideNavigationBar;	// G=0x336066ed; S=0x336066fd; @synthesize=_hideNavigationBar
- (void)_showOverlay;	// 0x3360670d
- (void)backgroundViewDidUpdate;	// 0x336067cd
// declared property getter: - (BOOL)hideNavigationBar;	// 0x336066ed
// declared property setter: - (void)setHideNavigationBar:(BOOL)bar;	// 0x336066fd
- (void)viewDidAppear:(BOOL)view;	// 0x336067e1
@end

