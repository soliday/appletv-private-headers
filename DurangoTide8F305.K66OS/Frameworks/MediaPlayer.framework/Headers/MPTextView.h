/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPSwipableView.h"

@class NSString, UITextLabel, UIProgressIndicator, NSMutableString, UIImage, UIWebDocumentView, UIView, UIScrollView, UIImageView;

@interface MPTextView : MPSwipableView {
	UIImage *_albumArtwork;	// 72 = 0x48
	NSString *_rawText;	// 76 = 0x4c
	NSMutableString *_text;	// 80 = 0x50
	UIImageView *_background;	// 84 = 0x54
	UIImageView *_faderView;	// 88 = 0x58
	UIWebDocumentView *_webView;	// 92 = 0x5c
	UIView *_headerView;	// 96 = 0x60
	UIScrollView *_scrollView;	// 100 = 0x64
	UITextLabel *_loadingLabel;	// 104 = 0x68
	UIProgressIndicator *_loadingIndicator;	// 108 = 0x6c
	BOOL _scrollIndicatorFlashDisabled;	// 112 = 0x70
	BOOL _needsLayout;	// 113 = 0x71
}
@property(retain, nonatomic) UIImage *artwork;	// G=0x33757e49; S=0x33758a95; @synthesize=_albumArtwork
@property(retain, nonatomic) UIView *headerView;	// G=0x33757e39; S=0x33757fc5; @synthesize=_headerView
- (id)initWithFrame:(CGRect)frame;	// 0x3375859d
- (void)_addLoadingUI;	// 0x33759351
- (void)_addTextUI;	// 0x33757f29
- (void)_createTextUIIfNeeded;	// 0x33758325
- (CGImageRef)_newFaderImage:(BOOL)image;	// 0x33758fb5
- (CGImageRef)_newFaderImageBackgroundWithSize:(CGSize)size;	// 0x33759131
- (void)_removeLoadingUI;	// 0x33757eb1
- (void)_removeTextUI;	// 0x33757e91
- (void)_updateFaderImage:(BOOL)image;	// 0x337589b1
- (void)_updateLoadingUIForWillLoad:(BOOL)_updateLoadingUIFor;	// 0x33758025
// declared property getter: - (id)artwork;	// 0x33757e49
- (void)dealloc;	// 0x337581d5
- (BOOL)hasText;	// 0x33757e25
// declared property getter: - (id)headerView;	// 0x33757e39
- (void)layoutSubviews;	// 0x33758725
- (void)movedFromSuperview:(id)superview;	// 0x337580ed
- (void)movedToSuperview:(id)superview;	// 0x33758139
- (void)noteDidSnapshot;	// 0x33758095
- (void)noteWillSnapshot;	// 0x337580c1
// declared property setter: - (void)setArtwork:(id)artwork;	// 0x33758a95
// declared property setter: - (void)setHeaderView:(id)view;	// 0x33757fc5
- (void)setNeedsLayout;	// 0x33757e59
- (void)setScrollIndicatorFlashDisabled:(BOOL)disabled;	// 0x33757e15
- (void)setText:(id)text willLoad:(BOOL)load;	// 0x33758bc9
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x33758511
@end
