/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRListControl, NSTimer, BRHeaderControl;

@interface BRMediaListControl : BRControl {
@private
	BRListControl *_list;	// 48 = 0x30
	BRControl *_preview;	// 52 = 0x34
	float _previewDelay;	// 56 = 0x38
	NSTimer *_previewDelayTimer;	// 60 = 0x3c
	BRHeaderControl *_header;	// 64 = 0x40
	BOOL _shareItemArtwork;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) BRHeaderControl *header;	// G=0x35e104c5; @synthesize=_header
@property(retain) id listProviders;	// G=0x35e10109; S=0x35e100cd; converted property
@property(assign) long selection;	// G=0x35e103f1; S=0x35e103b5; converted property
@property(assign) BOOL shareItemArtwork;	// G=0x35e104d5; S=0x35e104e5; @synthesize=_shareItemArtwork
@property(retain) id subtitle;	// G=0x35e10251; S=0x35e1020d; converted property
@property(retain) id title;	// G=0x35e1016d; S=0x35e10129; converted property
@property(retain) id titleImage;	// G=0x35e101ed; S=0x35e1018d; converted property
- (id)init;	// 0x35e0fba5
- (void)_cleanupPreviewDelayTimer;	// 0x35e105b1
- (void)_previewDelayTimerHandler:(id)handler;	// 0x35e105e1
- (void)_scrollWillStart:(id)_scroll;	// 0x35e104f5
- (void)_scrollWillStop:(id)_scroll;	// 0x35e10505
- (void)_updatePreviewWithDelay;	// 0x35e10515
- (id)accessibilityLabel;	// 0x35e10485
- (id)accessibilityScreenContent;	// 0x35e104a5
- (void)controlWasActivated;	// 0x35e0ff49
- (void)controlWasDeactivated;	// 0x35e10011
- (void)dealloc;	// 0x35e0fcb1
// declared property getter: - (id)header;	// 0x35e104c5
- (long)itemCount;	// 0x35e10411
- (void)layoutSubcontrols;	// 0x35e0fd55
- (id)listProviderRequester;	// 0x35e103a5
// converted property getter: - (id)listProviders;	// 0x35e10109
- (void)reload;	// 0x35e10449
// converted property getter: - (long)selection;	// 0x35e103f1
// converted property setter: - (void)setListProviders:(id)providers;	// 0x35e100cd
// converted property setter: - (void)setSelection:(long)selection;	// 0x35e103b5
// declared property setter: - (void)setShareItemArtwork:(BOOL)artwork;	// 0x35e104e5
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x35e1020d
// converted property setter: - (void)setTitle:(id)title;	// 0x35e10129
// converted property setter: - (void)setTitleImage:(id)image;	// 0x35e1018d
// declared property getter: - (BOOL)shareItemArtwork;	// 0x35e104d5
// converted property getter: - (id)subtitle;	// 0x35e10251
// converted property getter: - (id)title;	// 0x35e1016d
// converted property getter: - (id)titleImage;	// 0x35e101ed
- (void)updatePreview;	// 0x35e10271
@end
