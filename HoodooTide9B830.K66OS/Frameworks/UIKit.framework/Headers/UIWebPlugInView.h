/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <WAKView.h> // Unknown library

@class UIView, CALayer, UIWebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebPlugInView : WAKView {
@private
	UIWebDocumentView *_webView;	// 68 = 0x44
	CALayer *_hostingLayer;	// 72 = 0x48
	UIView *_uiView;	// 76 = 0x4c
	CFRunLoopObserverRef _mainRunLoopDrawObserver;	// 80 = 0x50
	BOOL _isFullScreen;	// 84 = 0x54
	BOOL _parentedInLayer;	// 85 = 0x55
	BOOL _isQuickTimePlugIn;	// 86 = 0x56
	BOOL _isMapViewPlugIn;	// 87 = 0x57
}
@property(assign, nonatomic) BOOL isMapViewPlugIn;	// G=0x30220135; S=0x301676e9; @synthesize=_isMapViewPlugIn
@property(assign, nonatomic) BOOL isQuickTimePlugIn;	// G=0x30220125; S=0x301676d9; @synthesize=_isQuickTimePlugIn
@property(assign, nonatomic, getter=isParentedInLayer) BOOL parentedInLayer;	// G=0x30167f49; S=0x301684b5; @synthesize=_parentedInLayer
- (id)initWithWebView:(id)webView plugInView:(id)view;	// 0x30167585
- (void)_attachPluginLayerOnMainThread;	// 0x30168411
- (void)_connectPluginLayers;	// 0x30167c31
- (void)_detachPluginLayerOnMainThread;	// 0x30168b81
- (void)_disconnectPluginLayers;	// 0x30168b91
- (void)_reshapeOnMainThread;	// 0x30167881
- (void)_viewDidMoveToWindowOnMainThread;	// 0x30167b5d
- (void)attachPluginLayer;	// 0x3016838d
- (void)dealloc;	// 0x30168d61
- (void)detachPluginLayer;	// 0x30168afd
- (void)drawRect:(CGRect)rect;	// 0x301684ed
- (void)forwardInvocation:(id)invocation;	// 0x301698c5
- (void)invalidateGState;	// 0x3016778d
// declared property getter: - (BOOL)isMapViewPlugIn;	// 0x30220135
- (BOOL)isParented;	// 0x30168475
// declared property getter: - (BOOL)isParentedInLayer;	// 0x30167f49
// declared property getter: - (BOOL)isQuickTimePlugIn;	// 0x30220125
- (void)layout;	// 0x3021ff95
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3016782d
- (void)mouseDown:(id)down;	// 0x30220021
- (void)mouseUp:(id)up;	// 0x3022005d
- (id)objectForWebScript;	// 0x3021ffd9
- (id)plugInView;	// 0x30167e1d
- (id)pluginLayer;	// 0x30167f15
- (void)reshape;	// 0x301677cd
- (BOOL)respondsToSelector:(SEL)selector;	// 0x30167e2d
- (void)setFrame:(CGRect)frame;	// 0x301676f9
- (void)setFrameSize:(CGSize)size;	// 0x3021fef1
// declared property setter: - (void)setIsMapViewPlugIn:(BOOL)anIn;	// 0x301676e9
// declared property setter: - (void)setIsQuickTimePlugIn:(BOOL)anIn;	// 0x301676d9
// declared property setter: - (void)setParentedInLayer:(BOOL)layer;	// 0x301684b5
- (void)setWebView:(id)view;	// 0x30220099
- (void)viewDidMoveToWindow;	// 0x30167aa5
- (void)webPlugInDestroy;	// 0x30168d1d
- (void)webPlugInInitialize;	// 0x30167e8d
- (void)webPlugInStart;	// 0x30167ed1
- (void)webPlugInStop;	// 0x30168cd9
- (BOOL)willProvidePluginLayer;	// 0x30167f59
@end

