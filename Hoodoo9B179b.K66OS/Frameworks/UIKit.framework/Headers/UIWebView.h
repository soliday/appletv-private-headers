/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIScrollViewDelegate.h"
#import "UIView.h"

@class UIScrollView, UIWebViewInternal, NSURLRequest;
@protocol UIWebViewDelegate;

@interface UIWebView : UIView <NSCoding, UIScrollViewDelegate> {
@private
	UIWebViewInternal *_internal;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;	// G=0x330fe949; S=0x330fe91d; 
@property(readonly, assign, nonatomic, getter=canGoBack) BOOL canGoBack;	// G=0x330fed0d; 
@property(readonly, assign, nonatomic, getter=canGoForward) BOOL canGoForward;	// G=0x330fed55; 
@property(assign, nonatomic) unsigned dataDetectorTypes;	// G=0x330fe8f1; S=0x330621a9; 
@property(assign, nonatomic) id<UIWebViewDelegate> delegate;	// G=0x330feb21; S=0x330feb01; 
@property(assign, nonatomic) BOOL detectsPhoneNumbers;	// G=0x330fe8bd; S=0x330fe891; 
@property(readonly, assign, nonatomic, getter=isLoading) BOOL loading;	// G=0x330feadd; 
@property(assign, nonatomic) BOOL mediaPlaybackAllowsAirPlay;	// G=0x330fea09; S=0x330fe9dd; 
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;	// G=0x330fe9a9; S=0x330fe97d; 
@property(readonly, assign, nonatomic) NSURLRequest *request;	// G=0x330febc1; 
@property(assign, nonatomic) BOOL scalesPageToFit;	// G=0x330feab9; S=0x330fea3d; 
@property(readonly, assign, nonatomic) UIScrollView *scrollView;	// G=0x330feb41; 
+ (void)_updatePersistentStoragePaths;	// 0x330fe24d
- (id)initWithCoder:(id)coder;	// 0x330fe511
- (id)initWithFrame:(CGRect)frame;	// 0x3306088d
- (BOOL)_appliesExclusiveTouchToSubviewTree;	// 0x33062f25
- (void)_beginRotation;	// 0x330fedd9
- (id)_browserView;	// 0x33062329
- (void)_define:(id)define;	// 0x331005e5
- (void)_didCompleteScrolling;	// 0x330ff441
- (void)_didRotate:(id)rotate;	// 0x330fe07d
- (id)_documentView;	// 0x33062f05
- (void)_finishRotation;	// 0x330fee19
- (void)_frameOrBoundsChanged;	// 0x330fef2d
- (BOOL)_isDeallocating;	// 0x330fe7d5
- (id)_pdfViewHandler;	// 0x331004c1
- (void)_populateArchivedSubviews:(id)subviews;	// 0x330fe601
- (Class)_printFormatterClass;	// 0x33216af1
- (void)_reportError:(id)error;	// 0x330ff539
- (void)_rescaleDocument;	// 0x330fee91
- (id)_scrollView;	// 0x33062349
- (void)_setDrawInWebThread:(BOOL)webThread;	// 0x33061739
- (void)_setDrawsCheckeredPattern:(BOOL)pattern;	// 0x330621d5
- (void)_setOverridesOrientationChangeEventHandling:(BOOL)handling;	// 0x331004e1
- (void)_setRichTextReaderViewportSettings;	// 0x33061d8d
- (void)_setScalesPageToFitViewportSettings;	// 0x330fe0f9
- (void)_setWebSelectionEnabled:(BOOL)enabled;	// 0x33100505
- (BOOL)_tryRetain;	// 0x330fe769
- (void)_updateCheckeredPattern;	// 0x33061699
- (void)_updateOpaqueAndBackgroundColor;	// 0x330617b5
- (void)_updateRequest;	// 0x330626e9
- (void)_updateScrollerViewForInputView:(id)inputView;	// 0x330ff225
- (void)_updateViewSettings;	// 0x330619f5
- (void)_webViewCommonInit:(BOOL)init;	// 0x33060985
// declared property getter: - (BOOL)allowsInlineMediaPlayback;	// 0x330fe949
// declared property getter: - (BOOL)canGoBack;	// 0x330fed0d
// declared property getter: - (BOOL)canGoForward;	// 0x330fed55
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x33100529
- (void)copy:(id)copy;	// 0x33100561
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x331003f5
// declared property getter: - (unsigned)dataDetectorTypes;	// 0x330fe8f1
- (void)dealloc;	// 0x33063cc5
// declared property getter: - (id)delegate;	// 0x330feb21
// declared property getter: - (BOOL)detectsPhoneNumbers;	// 0x330fe8bd
- (void)encodeWithCoder:(id)coder;	// 0x330fe665
- (void)goBack;	// 0x330fec7d
- (void)goForward;	// 0x330fecc5
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x33149679
// declared property getter: - (BOOL)isLoading;	// 0x330feadd
- (void)loadData:(id)data MIMEType:(id)type textEncodingName:(id)name baseURL:(id)url;	// 0x330feb8d
- (void)loadHTMLString:(id)string baseURL:(id)url;	// 0x33062379
- (void)loadRequest:(id)request;	// 0x330feb61
// declared property getter: - (BOOL)mediaPlaybackAllowsAirPlay;	// 0x330fea09
// declared property getter: - (BOOL)mediaPlaybackRequiresUserAction;	// 0x330fe9a9
- (void)modalView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x330ffa3d
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x33100419
- (oneway void)release;	// 0x33062275
- (void)reload;	// 0x330fec05
// declared property getter: - (id)request;	// 0x330febc1
- (void)restoreStateFromHistoryItem:(id)historyItem forWebView:(id)webView;	// 0x330ff285
- (id)retain;	// 0x33062231
- (unsigned)retainCount;	// 0x330fe745
- (void)saveGeolocation:(id)geolocation;	// 0x33100489
- (void)saveStateToHistoryItem:(id)historyItem forWebView:(id)webView;	// 0x330ff251
// declared property getter: - (BOOL)scalesPageToFit;	// 0x330feab9
// declared property getter: - (id)scrollView;	// 0x330feb41
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x330ff4bd
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0x330ff49d
- (void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;	// 0x330ff371
- (void)scrollViewDidScrollToTop:(id)scrollView;	// 0x330ff4cd
- (void)scrollViewDidZoom:(id)scrollView;	// 0x330ff315
- (void)scrollViewWasRemoved:(id)removed;	// 0x330ff4dd
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x330ff3e5
- (void)scrollViewWillBeginZooming:(id)scrollView withView:(id)view;	// 0x330ff2b9
- (void)select:(id)select;	// 0x3310058d
- (void)selectAll:(id)all;	// 0x331005b9
// declared property setter: - (void)setAllowsInlineMediaPlayback:(BOOL)playback;	// 0x330fe91d
- (void)setBackgroundColor:(id)color;	// 0x33062101
- (void)setBounds:(CGRect)bounds;	// 0x330ff0f9
// declared property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x330621a9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x330feb01
// declared property setter: - (void)setDetectsPhoneNumbers:(BOOL)numbers;	// 0x330fe891
- (void)setFrame:(CGRect)frame;	// 0x330608dd
// declared property setter: - (void)setMediaPlaybackAllowsAirPlay:(BOOL)play;	// 0x330fe9dd
// declared property setter: - (void)setMediaPlaybackRequiresUserAction:(BOOL)action;	// 0x330fe97d
- (void)setOpaque:(BOOL)opaque;	// 0x330ff1a1
// declared property setter: - (void)setScalesPageToFit:(BOOL)fit;	// 0x330fea3d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x330fed9d
- (void)stopLoading;	// 0x330fec4d
- (id)stringByEvaluatingJavaScriptFromString:(id)string;	// 0x330fe819
- (void)view:(id)view didSetFrame:(CGRect)frame oldFrame:(CGRect)frame3;	// 0x33062369
- (id)viewForZoomingInScrollView:(id)scrollView;	// 0x33061fe5
- (id)webView:(id)view connectionPropertiesForResource:(id)resource dataSource:(id)source;	// 0x330ff90d
- (void)webView:(id)view decidePolicyForGeolocationRequestFromOrigin:(id)origin frame:(id)frame listener:(id)listener;	// 0x330fff71
- (void)webView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x330ff611
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x330623cd
- (void)webView:(id)view decidePolicyForNewWindowAction:(id)newWindowAction request:(id)request newFrameName:(id)name decisionListener:(id)listener;	// 0x330ff5a5
- (void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;	// 0x33100361
- (void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;	// 0x33062dfd
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x33062961
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x330ff9e9
- (void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;	// 0x330ff995
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x33062acd
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x33062051
- (void)webView:(id)view didReceiveServerRedirectForProvisionalLoadForFrame:(id)frame;	// 0x330ff985
- (void)webView:(id)view didReceiveTitle:(id)title forFrame:(id)frame;	// 0x330ff899
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x33062639
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;	// 0x330ff795
- (void)webView:(id)view frame:(id)frame exceededDatabaseQuotaForSecurityOrigin:(id)securityOrigin database:(id)database;	// 0x330ff6f5
- (id)webView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;	// 0x330627bd
- (void)webView:(id)view printFrameView:(id)view2;	// 0x330ff82d
- (BOOL)webView:(id)view resource:(id)resource canAuthenticateAgainstProtectionSpace:(id)space forDataSource:(id)dataSource;	// 0x33100221
- (void)webView:(id)view resource:(id)resource didCancelAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x331001a5
- (void)webView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;	// 0x3310002d
- (void)webView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;	// 0x33062e91
- (void)webView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x331000a9
- (id)webView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;	// 0x33062891
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x330ffac1
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x330ffca5
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x330ffddd
- (void)webView:(id)view unableToImplementPolicyWithError:(id)error frame:(id)frame;	// 0x330ff6e1
- (void)webViewClose:(id)close;	// 0x330ffa5d
- (void)webViewMainFrameDidCommitLoad:(id)webViewMainFrame;	// 0x33062915
- (void)webViewMainFrameDidFinishLoad:(id)webViewMainFrame;	// 0x330629f9
- (void)webViewMainFrameDidFirstVisuallyNonEmptyLayoutInFrame:(id)webViewMainFrame;	// 0x330629cd
@end

