/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDefaultUIKitDelegate : NSObject {
}
+ (id)sharedUIKitDelegate;	// 0x35244c41
- (void)_webthread_webView:(id)view attachRootLayer:(id)layer;	// 0x35275e8d
- (void)addInputString:(id)string fromVariantKey:(BOOL)variantKey;	// 0x35275e85
- (id)checkSpellingOfString:(id)string;	// 0x35275ead
- (CGPoint)contentsPointForWebView:(id)webView;	// 0x35275df5
- (void)deleteFromInput;	// 0x35275e89
- (CGRect)documentVisibleRectForWebView:(id)webView;	// 0x35275e0d
- (int)getPasteboardChangeCount;	// 0x35275ec9
- (int)getPasteboardItemsCount;	// 0x35275eb9
- (BOOL)hasRichlyEditableSelection;	// 0x35275ec1
- (BOOL)isUnperturbedDictationResultMarker:(id)marker;	// 0x35275ecd
- (BOOL)performsTwoStepPaste:(id)paste;	// 0x35275ec5
- (id)readDataFromPasteboard:(id)pasteboard withIndex:(int)index;	// 0x35275eb5
- (void)revealedSelectionByScrollingWebFrame:(id)frame;	// 0x35275e9d
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x35275ebd
- (void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;	// 0x35275e69
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x35275e2d
- (void)webView:(id)view didCreateOrUpdateScrollingLayer:(id)layer withContentsLayer:(id)contentsLayer scrollSize:(id)size forNode:(id)node;	// 0x35275e95
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x35275e65
- (void)webView:(id)view didFinishDocumentLoadForFrame:(id)frame;	// 0x35275e61
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x35275e31
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x352640f5
- (void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;	// 0x35275e6d
- (void)webView:(id)view didHideFullScreenForPlugInView:(id)view2;	// 0x35275e7d
- (void)webView:(id)view didObserveDeferredContentChange:(int)change forFrame:(id)frame;	// 0x35275e45
- (void)webView:(id)view didReceiveDocTypeForFrame:(id)frame;	// 0x35275e71
- (void)webView:(id)view didReceiveMessage:(id)message;	// 0x35275e81
- (void)webView:(id)view didReceiveViewportArguments:(id)arguments forFrame:(id)frame;	// 0x35275e3d
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x35275e29
- (void)webView:(id)view elementDidBlurNode:(id)element;	// 0x35269d61
- (void)webView:(id)view elementDidFocusNode:(id)element;	// 0x352645d9
- (void)webView:(id)view formStateDidBlurNode:(id)formState;	// 0x35269d5d
- (void)webView:(id)view formStateDidFocusNode:(id)formState;	// 0x352645d5
- (void)webView:(id)view needsScrollNotifications:(id)notifications forFrame:(id)frame;	// 0x35275e41
- (id)webView:(id)view plugInViewWithArguments:(id)arguments fromPlugInPackage:(id)package;	// 0x35275e75
- (void)webView:(id)view restoreStateFromHistoryItem:(id)historyItem forFrame:(id)frame force:(BOOL)force;	// 0x35275e39
- (void)webView:(id)view saveStateToHistoryItem:(id)historyItem forFrame:(id)frame;	// 0x35275e35
- (BOOL)webView:(id)view shouldScrollToPoint:(CGPoint)point forFrame:(id)frame;	// 0x35275e4d
- (void)webView:(id)view willAddPlugInView:(id)view2;	// 0x35275ed1
- (void)webView:(id)view willCloseFrame:(id)frame;	// 0x35275e5d
- (void)webView:(id)view willRemoveScrollingLayer:(id)layer withContentsLayer:(id)contentsLayer forNode:(id)node;	// 0x35275e99
- (void)webView:(id)view willShowFullScreenForPlugInView:(id)view2;	// 0x35275e79
- (void)webViewDidCommitCompositingLayerChanges:(id)webView;	// 0x35275e91
- (void)webViewDidDrawTiles:(id)webView;	// 0x35275ed5
- (void)webViewDidEndOverflowScroll:(id)webView;	// 0x35275ea9
- (void)webViewDidLayout:(id)webView;	// 0x35275ea1
- (void)webViewDidNotSimulateClick:(id)webView;	// 0x35275e59
- (void)webViewDidPreventDefaultForEvent:(id)webView;	// 0x35275e49
- (void)webViewDidSimulateClick:(id)webView;	// 0x35275e51
- (void)webViewDidStartOverflowScroll:(id)webView;	// 0x35275ea5
- (void)webViewWillSimulateClick:(id)webView;	// 0x35275e55
- (void)writeDataToPasteboard:(id)pasteboard;	// 0x35275eb1
@end

