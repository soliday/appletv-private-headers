/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPFlipTransitionController.h"

@class UINavigationItem, UITextLabel, UINavigationBar;

@interface MPVideoChapterFlipTransitionController : MPFlipTransitionController {
	UINavigationBar *_navigationBar;	// 76 = 0x4c
	UINavigationItem *_originalNavigationItem;	// 80 = 0x50
	UITextLabel *_chapterGuideTitleLabel;	// 84 = 0x54
	unsigned _shouldPlayAfterFlip : 1;	// 88 = 0x58
}
@property(retain, nonatomic) UINavigationBar *navigationBar;	// G=0x34dec351; S=0x34deb2d1; @synthesize=_navigationBar
@property(assign, nonatomic) BOOL playAfterFlip;	// G=0x34deb2bd; S=0x34deb459; 
- (id)_chapterGuideTitleLabel;	// 0x34deb4c1
- (id)_copySwizzledNavigationViews;	// 0x34deb629
- (void)_done:(id)done;	// 0x34deb471
- (void)_hideNavigationAndStatusBars;	// 0x34deb821
- (void)_hideNavigationBarAnimationDidFinish:(id)_hideNavigationBarAnimation;	// 0x34deb4ad
- (int)_interfaceOrientation;	// 0x34deb999
- (void)_restoreOriginalNavigationViews:(BOOL)views;	// 0x34deb9e5
- (void)_showChapterGuideNavigationViews;	// 0x34debea1
- (void)dealloc;	// 0x34deb0e1
// declared property getter: - (id)navigationBar;	// 0x34dec351
- (void)performTransition:(unsigned)transition;	// 0x34deb175
// declared property getter: - (BOOL)playAfterFlip;	// 0x34deb2bd
// declared property setter: - (void)setNavigationBar:(id)bar;	// 0x34deb2d1
// declared property setter: - (void)setPlayAfterFlip:(BOOL)flip;	// 0x34deb459
@end

