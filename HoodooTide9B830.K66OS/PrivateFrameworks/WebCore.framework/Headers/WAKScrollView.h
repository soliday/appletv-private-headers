/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WAKView.h"
#import "WebCore-Structs.h"
#import "WebCoreFrameScrollView.h"


@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {
@private
	WAKView *_documentView;	// 68 = 0x44
	id _delegate;	// 72 = 0x48
	CGPoint _scrollOrigin;	// 76 = 0x4c
}
@property(retain) id contentView;	// G=0x35642e19; S=0x35cca4a1; converted property
@property(assign) id delegate;	// G=0x3567f119; S=0x355ef285; converted property
@property(retain) WAKView *documentView;	// G=0x355fad51; S=0x355fabd9; converted property
@property(assign) BOOL drawsBackground;	// G=0x35cca211; S=0x355ef295; converted property
@property(assign) BOOL hasHorizontalScroller;	// G=0x35cca20d; S=0x355ef29d; converted property
@property(assign) BOOL hasVerticalScroller;	// G=0x35cca209; S=0x355ef299; converted property
@property(assign) int horizontalScrollingMode;	// G=0x35cca231; S=0x35cca225; converted property
@property(readonly, assign) CGPoint scrollOrigin;	// G=0x3567eb49; converted property
@property(assign) int verticalScrollingMode;	// G=0x35cca235; S=0x35cca229; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x355eefa1
- (CGRect)actualDocumentVisibleRect;	// 0x3567e4bd
// converted property getter: - (id)contentView;	// 0x35642e19
- (void)dealloc;	// 0x357d4aa9
// converted property getter: - (id)delegate;	// 0x3567f119
- (id)description;	// 0x35cca23d
// converted property getter: - (id)documentView;	// 0x355fad51
- (CGRect)documentVisibleRect;	// 0x35642de9
- (void)drawRect:(CGRect)rect;	// 0x35cca221
// converted property getter: - (BOOL)drawsBackground;	// 0x35cca211
// converted property getter: - (BOOL)hasHorizontalScroller;	// 0x35cca20d
// converted property getter: - (BOOL)hasVerticalScroller;	// 0x35cca209
- (float)horizontalLineScroll;	// 0x35cca219
// converted property getter: - (int)horizontalScrollingMode;	// 0x35cca231
- (BOOL)inProgrammaticScroll;	// 0x35cca239
- (void)reflectScrolledClipView:(id)view;	// 0x35cca21d
// converted property getter: - (CGPoint)scrollOrigin;	// 0x3567eb49
- (void)scrollWheel:(id)wheel;	// 0x35cca369
- (void)scrollingModes:(int *)modes vertical:(int *)vertical;	// 0x355fc079
- (void)setActualScrollPosition:(CGPoint)position;	// 0x357ff525
// converted property setter: - (void)setContentView:(id)view;	// 0x35cca4a1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x355ef285
// converted property setter: - (void)setDocumentView:(id)view;	// 0x355fabd9
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x355ef295
// converted property setter: - (void)setHasHorizontalScroller:(BOOL)scroller;	// 0x355ef29d
// converted property setter: - (void)setHasVerticalScroller:(BOOL)scroller;	// 0x355ef299
// converted property setter: - (void)setHorizontalScrollingMode:(int)mode;	// 0x35cca225
- (void)setLineScroll:(float)scroll;	// 0x355ef2e9
- (void)setScrollBarsSuppressed:(BOOL)suppressed repaintOnUnsuppress:(BOOL)unsuppress;	// 0x356ac129
- (void)setScrollOrigin:(CGPoint)origin updatePositionAtAll:(BOOL)all immediately:(BOOL)immediately;	// 0x35cca459
- (void)setScrollingMode:(int)mode;	// 0x35cca22d
- (void)setScrollingModes:(int)modes vertical:(int)vertical andLock:(BOOL)lock;	// 0x355fc2a1
// converted property setter: - (void)setVerticalScrollingMode:(int)mode;	// 0x35cca229
- (float)verticalLineScroll;	// 0x35cca215
// converted property getter: - (int)verticalScrollingMode;	// 0x35cca235
@end

