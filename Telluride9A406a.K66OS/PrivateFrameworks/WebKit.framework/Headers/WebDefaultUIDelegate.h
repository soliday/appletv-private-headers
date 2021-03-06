/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDefaultUIDelegate : NSObject {
}
+ (id)sharedUIDelegate;	// 0x302b2425
- (id)webView:(id)view createWebViewWithRequest:(id)request userGesture:(BOOL)gesture;	// 0x302d9c25
- (id)webView:(id)view createWebViewWithRequest:(id)request windowFeatures:(id)features;	// 0x302d9c85
- (void)webView:(id)view didDrawRect:(CGRect)rect;	// 0x302d9c71
- (void)webView:(id)view didScrollDocumentInFrameView:(id)frameView;	// 0x302d9c75
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;	// 0x302d9c79
- (id)webView:(id)view generateReplacementFile:(id)file;	// 0x302d9c81
- (void)webView:(id)view makeFirstResponder:(id)responder;	// 0x302d9d59
- (void)webView:(id)view mouseDidMoveOverElement:(id)mouse modifierFlags:(unsigned)flags;	// 0x302c3601
- (void)webView:(id)view printFrameView:(id)view2;	// 0x302d9c6d
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x302d9c5d
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x302d9c61
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x302d9c65
- (void)webView:(id)view runOpenPanelForFileButtonWithResultListener:(id)resultListener;	// 0x302d9c69
- (void)webView:(id)view setFrame:(CGRect)frame;	// 0x302d9c59
- (void)webView:(id)view setResizable:(BOOL)resizable;	// 0x302d9c55
- (void)webView:(id)view setStatusBarVisible:(BOOL)visible;	// 0x302d9c4d
- (void)webView:(id)view setStatusText:(id)text;	// 0x302d9c39
- (void)webView:(id)view setToolbarsVisible:(BOOL)visible;	// 0x302d9c45
- (BOOL)webView:(id)view shouldReplaceUploadFile:(id)file usingGeneratedFilename:(id *)filename;	// 0x302d9c7d
- (BOOL)webViewAreToolbarsVisible:(id)visible;	// 0x302d9c41
- (void)webViewClose:(id)close;	// 0x302d9c2d
- (id)webViewFirstResponder:(id)responder;	// 0x302d9da1
- (void)webViewFocus:(id)focus;	// 0x302d9c31
- (CGRect)webViewFrame:(id)frame;	// 0x302d9d0d
- (BOOL)webViewIsResizable:(id)resizable;	// 0x302d9c51
- (BOOL)webViewIsStatusBarVisible:(id)visible;	// 0x302d9c49
- (void)webViewShow:(id)show;	// 0x302d9c29
- (id)webViewStatusText:(id)text;	// 0x302d9c3d
- (void)webViewUnfocus:(id)unfocus;	// 0x302d9c35
@end

