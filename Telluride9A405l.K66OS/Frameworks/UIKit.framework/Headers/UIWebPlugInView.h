/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <WAKView.h> // Unknown library

@class UIView, UIWebDocumentView, CALayer;

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
@property(assign, nonatomic) BOOL isMapViewPlugIn;	// G=0x32e7a081; S=0x32dc3db5; @synthesize=_isMapViewPlugIn
@property(assign, nonatomic) BOOL isQuickTimePlugIn;	// G=0x32e7a071; S=0x32dc3da5; @synthesize=_isQuickTimePlugIn
@property(assign, nonatomic, getter=isParentedInLayer) BOOL parentedInLayer;	// G=0x32dc4615; S=0x32dc4b81; @synthesize=_parentedInLayer
- (id)initWithWebView:(id)webView plugInView:(id)view;	// 0x32dc3c51
- (void)_attachPluginLayerOnMainThread;	// 0x32dc4add
- (void)_connectPluginLayers;	// 0x32dc42fd
- (void)_detachPluginLayerOnMainThread;	// 0x32dc524d
- (void)_disconnectPluginLayers;	// 0x32dc525d
- (void)_reshapeOnMainThread;	// 0x32dc3f4d
- (void)_viewDidMoveToWindowOnMainThread;	// 0x32dc4229
- (void)attachPluginLayer;	// 0x32dc4a59
- (void)dealloc;	// 0x32dc542d
- (void)detachPluginLayer;	// 0x32dc51c9
- (void)drawRect:(CGRect)rect;	// 0x32dc4bb9
- (void)forwardInvocation:(id)invocation;	// 0x32dc5f91
- (void)invalidateGState;	// 0x32dc3e59
// declared property getter: - (BOOL)isMapViewPlugIn;	// 0x32e7a081
- (BOOL)isParented;	// 0x32dc4b41
// declared property getter: - (BOOL)isParentedInLayer;	// 0x32dc4615
// declared property getter: - (BOOL)isQuickTimePlugIn;	// 0x32e7a071
- (void)layout;	// 0x32e79ee1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x32dc3ef9
- (void)mouseDown:(id)down;	// 0x32e79f6d
- (void)mouseUp:(id)up;	// 0x32e79fa9
- (id)objectForWebScript;	// 0x32e79f25
- (id)plugInView;	// 0x32dc44e9
- (id)pluginLayer;	// 0x32dc45e1
- (void)reshape;	// 0x32dc3e99
- (BOOL)respondsToSelector:(SEL)selector;	// 0x32dc44f9
- (void)setFrame:(CGRect)frame;	// 0x32dc3dc5
- (void)setFrameSize:(CGSize)size;	// 0x32e79e3d
// declared property setter: - (void)setIsMapViewPlugIn:(BOOL)anIn;	// 0x32dc3db5
// declared property setter: - (void)setIsQuickTimePlugIn:(BOOL)anIn;	// 0x32dc3da5
// declared property setter: - (void)setParentedInLayer:(BOOL)layer;	// 0x32dc4b81
- (void)setWebView:(id)view;	// 0x32e79fe5
- (void)viewDidMoveToWindow;	// 0x32dc4171
- (void)webPlugInDestroy;	// 0x32dc53e9
- (void)webPlugInInitialize;	// 0x32dc4559
- (void)webPlugInStart;	// 0x32dc459d
- (void)webPlugInStop;	// 0x32dc53a5
- (BOOL)willProvidePluginLayer;	// 0x32dc4625
@end
