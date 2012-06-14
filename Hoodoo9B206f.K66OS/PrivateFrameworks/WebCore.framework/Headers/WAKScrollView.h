/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WAKView.h"
#import "WebCoreFrameScrollView.h"
#import "WebCore-Structs.h"


@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {
@private
	WAKView *_documentView;	// 68 = 0x44
	id _delegate;	// 72 = 0x48
	CGPoint _scrollOrigin;	// 76 = 0x4c
}
@property(retain) id contentView;	// G=0x331cae19; S=0x338524a1; converted property
@property(assign) id delegate;	// G=0x33207119; S=0x33177285; converted property
@property(retain) WAKView *documentView;	// G=0x33182d51; S=0x33182bd9; converted property
@property(assign) BOOL drawsBackground;	// G=0x33852211; S=0x33177295; converted property
@property(assign) BOOL hasHorizontalScroller;	// G=0x3385220d; S=0x3317729d; converted property
@property(assign) BOOL hasVerticalScroller;	// G=0x33852209; S=0x33177299; converted property
@property(assign) int horizontalScrollingMode;	// G=0x33852231; S=0x33852225; converted property
@property(readonly, assign) CGPoint scrollOrigin;	// G=0x33206b49; converted property
@property(assign) int verticalScrollingMode;	// G=0x33852235; S=0x33852229; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x33176fa1
- (CGRect)actualDocumentVisibleRect;	// 0x332064bd
// converted property getter: - (id)contentView;	// 0x331cae19
- (void)dealloc;	// 0x3335caa9
// converted property getter: - (id)delegate;	// 0x33207119
- (id)description;	// 0x3385223d
// converted property getter: - (id)documentView;	// 0x33182d51
- (CGRect)documentVisibleRect;	// 0x331cade9
- (void)drawRect:(CGRect)rect;	// 0x33852221
// converted property getter: - (BOOL)drawsBackground;	// 0x33852211
// converted property getter: - (BOOL)hasHorizontalScroller;	// 0x3385220d
// converted property getter: - (BOOL)hasVerticalScroller;	// 0x33852209
- (float)horizontalLineScroll;	// 0x33852219
// converted property getter: - (int)horizontalScrollingMode;	// 0x33852231
- (BOOL)inProgrammaticScroll;	// 0x33852239
- (void)reflectScrolledClipView:(id)view;	// 0x3385221d
// converted property getter: - (CGPoint)scrollOrigin;	// 0x33206b49
- (void)scrollWheel:(id)wheel;	// 0x33852369
- (void)scrollingModes:(int *)modes vertical:(int *)vertical;	// 0x33184079
- (void)setActualScrollPosition:(CGPoint)position;	// 0x33387525
// converted property setter: - (void)setContentView:(id)view;	// 0x338524a1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x33177285
// converted property setter: - (void)setDocumentView:(id)view;	// 0x33182bd9
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x33177295
// converted property setter: - (void)setHasHorizontalScroller:(BOOL)scroller;	// 0x3317729d
// converted property setter: - (void)setHasVerticalScroller:(BOOL)scroller;	// 0x33177299
// converted property setter: - (void)setHorizontalScrollingMode:(int)mode;	// 0x33852225
- (void)setLineScroll:(float)scroll;	// 0x331772e9
- (void)setScrollBarsSuppressed:(BOOL)suppressed repaintOnUnsuppress:(BOOL)unsuppress;	// 0x33234129
- (void)setScrollOrigin:(CGPoint)origin updatePositionAtAll:(BOOL)all immediately:(BOOL)immediately;	// 0x33852459
- (void)setScrollingMode:(int)mode;	// 0x3385222d
- (void)setScrollingModes:(int)modes vertical:(int)vertical andLock:(BOOL)lock;	// 0x331842a1
// converted property setter: - (void)setVerticalScrollingMode:(int)mode;	// 0x33852229
- (float)verticalLineScroll;	// 0x33852215
// converted property getter: - (int)verticalScrollingMode;	// 0x33852235
@end

