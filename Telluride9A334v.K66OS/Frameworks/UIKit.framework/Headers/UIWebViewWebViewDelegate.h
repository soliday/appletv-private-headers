/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIWebView;

__attribute__((visibility("hidden")))
@interface UIWebViewWebViewDelegate : NSObject {
@private
	UIWebView *uiWebView;	// 4 = 0x4
}
- (id)initWithUIWebView:(id)uiwebView;	// 0x301d0e8d
- (void)_clearUIWebView;	// 0x301d34e1
- (id)webView:(id)view connectionPropertiesForResource:(id)resource dataSource:(id)source;	// 0x3026cb45
- (id)webView:(id)view createWebViewWithRequest:(id)request;	// 0x3026ca4d
- (void)webView:(id)view decidePolicyForGeolocationRequestFromOrigin:(id)origin frame:(id)frame listener:(id)listener;	// 0x3026cc79
- (void)webView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x3026cba5
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x301d1929
- (void)webView:(id)view decidePolicyForNewWindowAction:(id)newWindowAction request:(id)request newFrameName:(id)name decisionListener:(id)listener;	// 0x3026ca85
- (void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;	// 0x3026cd35
- (void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;	// 0x301d2359
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x301d1ebd
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x3026cbc5
- (void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;	// 0x3026cb85
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x301d2029
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x301d15ad
- (void)webView:(id)view didReceiveServerRedirectForProvisionalLoadForFrame:(id)frame;	// 0x3026cb65
- (void)webView:(id)view didReceiveTitle:(id)title forFrame:(id)frame;	// 0x3026cb25
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x301d1b95
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;	// 0x3026cae5
- (void)webView:(id)view frame:(id)frame exceededDatabaseQuotaForSecurityOrigin:(id)securityOrigin database:(id)database;	// 0x3026cac5
- (id)webView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;	// 0x301d1d19
- (void)webView:(id)view printFrameView:(id)view2;	// 0x3026cb05
- (BOOL)webView:(id)view resource:(id)resource canAuthenticateAgainstProtectionSpace:(id)space forDataSource:(id)dataSource;	// 0x3026ccf9
- (void)webView:(id)view resource:(id)resource didCancelAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x3026ccd9
- (void)webView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;	// 0x3026cc99
- (void)webView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;	// 0x301d23ed
- (void)webView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x3026ccb9
- (id)webView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;	// 0x301d1ded
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x3026cc05
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x3026cc25
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x3026cc59
- (void)webView:(id)view unableToImplementPolicyWithError:(id)error frame:(id)frame;	// 0x3026caa5
- (void)webViewClose:(id)close;	// 0x3026cbe5
@end

