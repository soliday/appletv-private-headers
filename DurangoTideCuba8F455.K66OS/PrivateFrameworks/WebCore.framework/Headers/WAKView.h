/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "WAKResponder.h"

@class NSMutableSet;

@interface WAKView : WAKResponder {
@private
	WKViewContext viewContext;	// 4 = 0x4
	WKView *viewRef;	// 60 = 0x3c
	NSMutableSet *subviewReferences;	// 64 = 0x40
}
@property(assign) unsigned autoresizingMask;	// G=0x31b1d2a5; S=0x315b2391; converted property
@property(assign) CGRect frame;	// G=0x315b1eed; S=0x31617ca1; converted property
@property(assign) BOOL needsDisplay;	// G=0x31b1cfb1; S=0x316c5bed; converted property
@property(retain) id nextKeyView;	// G=0x315f4015; S=0x315b2479; converted property
@property(assign) float scale;	// G=0x315f51b5; S=0x315f50a9; converted property
+ (void)_addViewWrapper:(id)wrapper;	// 0x315b1b79
+ (void)_removeViewWrapper:(id)wrapper;	// 0x31609ea5
+ (CFDictionaryRef)_viewWrappers;	// 0x315b1bad
+ (id)_wrapperForViewRef:(WKView *)viewRef;	// 0x315bbd71
+ (id)focusView;	// 0x31b1cff1
- (id)init;	// 0x3169bd81
- (id)initWithFrame:(CGRect)frame;	// 0x315b19b5
- (void)_appendDescriptionToString:(id)string atLevel:(int)level;	// 0x31b1d019
- (void)_handleEvent:(id)event;	// 0x317766e1
- (BOOL)_handleResponderCall:(int)call;	// 0x317307b5
- (id)_initWithViewRef:(WKView *)viewRef;	// 0x315bbe95
- (void)_setDrawsOwnDescendants:(BOOL)descendants;	// 0x315bc4d9
- (id)_subviewReferences;	// 0x315b242d
- (WKView *)_viewRef;	// 0x315b1bdd
- (BOOL)accessibilityIsIgnored;	// 0x317b0389
- (void)addSubview:(id)subview;	// 0x315b23dd
// converted property getter: - (unsigned)autoresizingMask;	// 0x31b1d2a5
- (CGRect)bounds;	// 0x315bc471
- (CGPoint)convertPoint:(CGPoint)point fromView:(id)view;	// 0x3172e0ad
- (CGPoint)convertPoint:(CGPoint)point toView:(id)view;	// 0x31735fbd
- (CGRect)convertRect:(CGRect)rect fromView:(id)view;	// 0x316f1791
- (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x31658995
- (CGSize)convertSize:(CGSize)size toView:(id)view;	// 0x317753ed
- (void)dealloc;	// 0x31609dd5
- (id)description;	// 0x31b1d1c1
- (void)display;	// 0x31b1d37d
- (void)displayIfNeeded;	// 0x31b1cfb5
- (void)displayRect:(CGRect)rect;	// 0x31b1d335
- (void)displayRectIgnoringOpacity:(CGRect)opacity;	// 0x316f191d
- (void)displayRectIgnoringOpacity:(CGRect)opacity inContext:(CGContextRef)context;	// 0x31b1d305
- (void)drawRect:(CGRect)rect;	// 0x316055f1
// converted property getter: - (CGRect)frame;	// 0x315b1eed
- (void)frameSizeChanged;	// 0x315ca735
- (id)hitTest:(CGPoint)test;	// 0x317764bd
- (BOOL)inLiveResize;	// 0x31b1cfcd
- (void)invalidateGState;	// 0x315caf9d
- (BOOL)isDescendantOf:(id)of;	// 0x31743cc5
- (id)lastScrollableAncestor;	// 0x31b1d395
- (void)layout;	// 0x31b1cfd5
- (void)layoutIfNeeded;	// 0x31b1cfd9
- (void)lockFocus;	// 0x31b1d2d5
- (BOOL)mouse:(CGPoint)mouse inRect:(CGRect)rect;	// 0x317765fd
// converted property getter: - (BOOL)needsDisplay;	// 0x31b1cfb1
- (BOOL)needsPanelToBecomeKey;	// 0x31b1cfb9
// converted property getter: - (id)nextKeyView;	// 0x315f4015
- (id)nextResponder;	// 0x31b1cfdd
- (id)nextValidKeyView;	// 0x31b1cfc1
- (id)previousKeyView;	// 0x31b1cfc5
- (id)previousValidKeyView;	// 0x31b1cfbd
- (void)releaseGState;	// 0x31b1cfc9
- (void)removeFromSuperview;	// 0x317179a5
// converted property getter: - (float)scale;	// 0x315f51b5
- (void)scrollPoint:(CGPoint)point;	// 0x31786349
- (BOOL)scrollRectToVisible:(CGRect)visible;	// 0x31b1d275
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x315b2391
- (void)setBoundsSize:(CGSize)size;	// 0x315ca56d
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x31617ca1
- (void)setFrameOrigin:(CGPoint)origin;	// 0x31b1d361
- (void)setFrameSize:(CGSize)size;	// 0x3163de19
- (void)setHidden:(BOOL)hidden;	// 0x316ebb11
// converted property setter: - (void)setNeedsDisplay:(BOOL)display;	// 0x316c5bed
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x316025fd
- (void)setNeedsLayout:(BOOL)layout;	// 0x31b1cfd1
// converted property setter: - (void)setNextKeyView:(id)view;	// 0x315b2479
// converted property setter: - (void)setScale:(float)scale;	// 0x315f50a9
- (id)subviews;	// 0x31604dc5
- (id)superview;	// 0x315f47a1
- (void)unlockFocus;	// 0x31b1d2bd
- (void)viewDidMoveToWindow;	// 0x315f493d
- (void)viewWillDraw;	// 0x31604d99
- (CGRect)visibleRect;	// 0x31b1d2ed
- (void)willRemoveSubview:(id)subview;	// 0x31717a59
- (id)window;	// 0x315b3d11
@end
