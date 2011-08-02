/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WAKView.h> // Unknown library
#import "WebKit-Structs.h"
#import "WebCoreFrameView.h"

@class WebFrameViewPrivate;

@interface WebFrameView : WAKView <WebCoreFrameView> {
@private
	WebFrameViewPrivate *_private;	// 68 = 0x44
}
@property(assign) BOOL allowsScrolling;	// G=0x30530d0d; S=0x30504b55; converted property
+ (BOOL)_canShowMIMETypeAsHTML:(id)html;	// 0x304fb799
+ (Class)_viewClassForMIMEType:(id)mimetype allowingPlugins:(BOOL)plugins;	// 0x3052f7d9
+ (id)_viewTypesAllowImageTypeOmission:(BOOL)omission;	// 0x304f39b9
- (id)initWithFrame:(CGRect)frame;	// 0x304e4e3d
- (float)_area;	// 0x30530ed9
- (id)_contentView;	// 0x30530199
- (Class)_customScrollViewClass;	// 0x305301bd
- (BOOL)_firstResponderIsFormControl;	// 0x3052f749
- (void)_forwardMouseEvent:(id)event;	// 0x3052fde1
- (void)_goBack;	// 0x3052f9e5
- (void)_goForward;	// 0x3052fa09
- (BOOL)_hasScrollBars;	// 0x30530051
- (float)_horizontalKeyboardScrollDistance;	// 0x3052fa2d
- (float)_horizontalPageScrollDistance;	// 0x30530741
- (void)_install;	// 0x304e7745
- (BOOL)_isScrollable;	// 0x3052ff41
- (id)_largestChildWithScrollBars;	// 0x3053009d
- (id)_largestScrollableChild;	// 0x3052ff55
- (id)_makeDocumentViewForDataSource:(id)dataSource;	// 0x30530de9
- (BOOL)_pageHorizontally:(BOOL)horizontally;	// 0x3052fae9
- (BOOL)_pageVertically:(BOOL)vertically;	// 0x3052fa51
- (BOOL)_scrollHorizontallyBy:(float)by;	// 0x305307a5
- (BOOL)_scrollLineHorizontally:(BOOL)horizontally;	// 0x3052fc19
- (BOOL)_scrollLineVertically:(BOOL)vertically;	// 0x3052fb81
- (BOOL)_scrollOverflowInDirection:(int)direction granularity:(int)granularity;	// 0x305309d1
- (BOOL)_scrollToBeginningOfDocument;	// 0x30530925
- (BOOL)_scrollToEndOfDocument;	// 0x3053086d
- (BOOL)_scrollVerticallyBy:(float)by;	// 0x30530809
- (id)_scrollView;	// 0x304e69fd
- (void)_setDocumentView:(id)view;	// 0x304e7471
- (void)_setWebFrame:(id)frame;	// 0x304e6325
- (float)_verticalKeyboardScrollDistance;	// 0x3052f74d
- (float)_verticalPageScrollDistance;	// 0x30530f09
- (Class)_viewClassForMIMEType:(id)mimetype;	// 0x3052f771
- (id)_webView;	// 0x30500bd1
- (Frame *)_web_frame;	// 0x30530dc5
- (id)_webcore_effectiveFirstResponder;	// 0x3053022d
- (BOOL)acceptsFirstResponder;	// 0x3052f745
// converted property getter: - (BOOL)allowsScrolling;	// 0x30530d0d
- (BOOL)becomeFirstResponder;	// 0x3052f815
- (void)dealloc;	// 0x304fe595
- (id)documentView;	// 0x304e7509
- (BOOL)documentViewShouldHandlePrint;	// 0x3052fe8d
- (void)drawRect:(CGRect)rect;	// 0x304ecb7d
- (void)finalize;	// 0x30530d69
- (BOOL)isOpaque;	// 0x3052f8e1
- (void)keyDown:(id)down;	// 0x30530281
- (void)mouseDown:(id)down;	// 0x3052fe65
- (void)mouseUp:(id)up;	// 0x3052fe79
- (void)printDocumentView;	// 0x3052fee5
- (void)scrollLineDown:(id)down;	// 0x3052fd95
- (void)scrollLineUp:(id)up;	// 0x3052fd49
- (void)scrollPageDown:(id)down;	// 0x3052fcfd
- (void)scrollPageUp:(id)up;	// 0x3052fcb1
- (void)scrollToBeginningOfDocument:(id)document;	// 0x3052f905
- (void)scrollToEndOfDocument:(id)document;	// 0x3052f975
- (BOOL)scrollView:(id)view shouldScrollToPoint:(CGPoint)point;	// 0x30500b69
// converted property setter: - (void)setAllowsScrolling:(BOOL)scrolling;	// 0x30504b55
- (void)setFrameSize:(CGSize)size;	// 0x30530a55
- (void)setNextKeyView:(id)view;	// 0x30530ca5
- (void)viewDidMoveToWindow;	// 0x304e9f09
- (CGRect)visibleRect;	// 0x30530b29
- (id)webFrame;	// 0x304e9f9d
@end
