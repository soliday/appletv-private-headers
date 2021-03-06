/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIControl.h> // Unknown library

@class NSArray;

@interface MPPlaybackTitlesView : UIControl {
	NSArray *_labels;	// 68 = 0x44
	NSArray *_titles;	// 72 = 0x48
	BOOL _showingLoadingUI;	// 76 = 0x4c
}
@property(assign, nonatomic) BOOL showingLoadingUI;	// G=0x31dddcc1; S=0x31dddf0d; @synthesize=_showingLoadingUI
@property(retain, nonatomic) NSArray *titles;	// G=0x31dddcd1; S=0x31dddf35; @synthesize=_titles
- (id)init;	// 0x31dddf8d
- (id)initWithFrame:(CGRect)frame;	// 0x31dde0b1
- (id)_addLabel:(unsigned)label;	// 0x31dddce1
- (id)_addLoadingLabel;	// 0x31dde935
- (void)_layoutLabels;	// 0x31dde415
- (void)_layoutLoadingUI;	// 0x31dde191
- (void)_tearDownLabels;	// 0x31dde881
- (void)dealloc;	// 0x31dde055
- (void)layoutSubviews;	// 0x31dde009
// declared property setter: - (void)setShowingLoadingUI:(BOOL)ui;	// 0x31dddf0d
// declared property setter: - (void)setTitles:(id)titles;	// 0x31dddf35
// declared property getter: - (BOOL)showingLoadingUI;	// 0x31dddcc1
// declared property getter: - (id)titles;	// 0x31dddcd1
@end

