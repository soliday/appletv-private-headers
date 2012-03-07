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
+ (id)sharedUIKitDelegate;	// 0x3477ccd1
- (void)_webthread_webView:(id)view attachRootLayer:(id)layer;	// 0x347ade91
- (void)addInputString:(id)string fromVariantKey:(BOOL)variantKey;	// 0x347ade89
- (id)checkSpellingOfString:(id)string;	// 0x347adeb1
- (CGPoint)contentsPointForWebView:(id)webView;	// 0x347addf9
- (void)deleteFromInput;	// 0x347ade8d
- (CGRect)documentVisibleRectForWebView:(id)webView;	// 0x347ade11
- (int)getPasteboardChangeCount;	// 0x347adecd
- (int)getPasteboardItemsCount;	// 0x347adebd
- (BOOL)hasRichlyEditableSelection;	// 0x347adec5
- (BOOL)isUnperturbedDictationResultMarker:(id)marker;	// 0x347aded1
- (BOOL)performsTwoStepPaste:(id)paste;	// 0x347adec9
- (id)readDataFromPasteboard:(id)pasteboard withIndex:(int)index;	// 0x347adeb9
- (void)revealedSelectionByScrollingWebFrame:(id)frame;	// 0x347adea1
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x347adec1
- (void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;	// 0x347ade6d
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x347ade31
- (void)webView:(id)view didCreateOrUpdateScrollingLayer:(id)layer withContentsLayer:(id)contentsLayer scrollSize:(id)size forNode:(id)node;	// 0x347ade99
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x347ade69
- (void)webView:(id)view didFinishDocumentLoadForFrame:(id)frame;	// 0x347ade65
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x347ade35
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x3479c0fd
- (void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;	// 0x347ade71
- (void)webView:(id)view didHideFullScreenForPlugInView:(id)view2;	// 0x347ade81
- (void)webView:(id)view didObserveDeferredContentChange:(int)change forFrame:(id)frame;	// 0x347ade49
- (void)webView:(id)view didReceiveDocTypeForFrame:(id)frame;	// 0x347ade75
- (void)webView:(id)view didReceiveMessage:(id)message;	// 0x347ade85
- (void)webView:(id)view didReceiveViewportArguments:(id)arguments forFrame:(id)frame;	// 0x347ade41
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x347ade2d
- (void)webView:(id)view elementDidBlurNode:(id)element;	// 0x347a1d69
- (void)webView:(id)view elementDidFocusNode:(id)element;	// 0x3479c5e1
- (void)webView:(id)view formStateDidBlurNode:(id)formState;	// 0x347a1d65
- (void)webView:(id)view formStateDidFocusNode:(id)formState;	// 0x3479c5dd
- (void)webView:(id)view needsScrollNotifications:(id)notifications forFrame:(id)frame;	// 0x347ade45
- (id)webView:(id)view plugInViewWithArguments:(id)arguments fromPlugInPackage:(id)package;	// 0x347ade79
- (void)webView:(id)view restoreStateFromHistoryItem:(id)historyItem forFrame:(id)frame force:(BOOL)force;	// 0x347ade3d
- (void)webView:(id)view saveStateToHistoryItem:(id)historyItem forFrame:(id)frame;	// 0x347ade39
- (BOOL)webView:(id)view shouldScrollToPoint:(CGPoint)point forFrame:(id)frame;	// 0x347ade51
- (void)webView:(id)view willAddPlugInView:(id)view2;	// 0x347aded5
- (void)webView:(id)view willCloseFrame:(id)frame;	// 0x347ade61
- (void)webView:(id)view willRemoveScrollingLayer:(id)layer withContentsLayer:(id)contentsLayer forNode:(id)node;	// 0x347ade9d
- (void)webView:(id)view willShowFullScreenForPlugInView:(id)view2;	// 0x347ade7d
- (void)webViewDidCommitCompositingLayerChanges:(id)webView;	// 0x347ade95
- (void)webViewDidDrawTiles:(id)webView;	// 0x347aded9
- (void)webViewDidEndOverflowScroll:(id)webView;	// 0x347adead
- (void)webViewDidLayout:(id)webView;	// 0x347adea5
- (void)webViewDidNotSimulateClick:(id)webView;	// 0x347ade5d
- (void)webViewDidPreventDefaultForEvent:(id)webView;	// 0x347ade4d
- (void)webViewDidSimulateClick:(id)webView;	// 0x347ade55
- (void)webViewDidStartOverflowScroll:(id)webView;	// 0x347adea9
- (void)webViewWillSimulateClick:(id)webView;	// 0x347ade59
- (void)writeDataToPasteboard:(id)pasteboard;	// 0x347adeb5
@end
