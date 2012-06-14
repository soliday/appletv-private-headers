/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebPDFViewPrivateDelegate.h"
#import "UIDocumentPasswordViewDelegate.h"
#import "UIWebPDFViewDelegate.h"
#import <NSObject.h> // Unknown library

@class UIDocumentPasswordView, UIColor, WebPDFNSNumberFormatter, UIHighlightView, UIWebPDFView, UIWebPDFSearchController, UIWebPDFLabelView, UIView;
@protocol UIWebPDFViewHandlerDelegate;

@interface UIWebPDFViewHandler : NSObject <UIWebPDFViewPrivateDelegate, UIDocumentPasswordViewDelegate, UIWebPDFViewDelegate> {
@private
	UIWebPDFView *_pdfView;	// 4 = 0x4
	BOOL _scalesPageToFit;	// 8 = 0x8
	float _initialZoomScale;	// 12 = 0xc
	NSObject<UIWebPDFViewHandlerDelegate> *_pdfHandlerDelegate;	// 16 = 0x10
	UIHighlightView *_linkHighlightView;	// 20 = 0x14
	UIWebPDFLabelView *_pageLabelView;	// 24 = 0x18
	BOOL _showPageLabels;	// 28 = 0x1c
	BOOL _showsShadowsForHTMLContent;	// 29 = 0x1d
	BOOL _cachedScrollViewShadowsState;	// 30 = 0x1e
	UIDocumentPasswordView *_passwordEntryView;	// 32 = 0x20
	UIWebPDFSearchController *_searchController;	// 36 = 0x24
	UIColor *_backgroundColorForUnRenderedContent;	// 40 = 0x28
	BOOL _hideActivityIndicatorForUnRenderedContent;	// 44 = 0x2c
	BOOL _hidePageViewsUntilReadyToRender;	// 45 = 0x2d
	WebPDFNSNumberFormatter *_labelViewFormatter;	// 48 = 0x30
	PDFHistoryItem _pendingHistoryItemRestore;	// 52 = 0x34
}
@property(retain, nonatomic) UIColor *backgroundColorForUnRenderedContent;	// G=0x356ad409; S=0x353b086d; @synthesize=_backgroundColorForUnRenderedContent
@property(readonly, assign, nonatomic) UIView *frontView;	// G=0x353b0ced; 
@property(assign, nonatomic) BOOL hideActivityIndicatorForUnRenderedContent;	// G=0x356ad419; S=0x356aa441; @synthesize=_hideActivityIndicatorForUnRenderedContent
@property(assign, nonatomic) BOOL hidePageViewsUntilReadyToRender;	// G=0x356ad3f9; S=0x356aa40d; @synthesize=_hidePageViewsUntilReadyToRender
@property(assign, nonatomic) NSObject<UIWebPDFViewHandlerDelegate> *pdfHandlerDelegate;	// G=0x356ad3e9; S=0x353b08d1; @synthesize=_pdfHandlerDelegate
@property(readonly, assign, nonatomic) UIWebPDFView *pdfView;	// G=0x353b0d1d; 
@property(assign, nonatomic) BOOL scalesPageToFit;	// G=0x356ad3d9; S=0x354ae015; @synthesize=_scalesPageToFit
@property(readonly, assign, nonatomic) UIWebPDFSearchController *searchController;	// G=0x356aa53d; 
@property(assign, nonatomic) BOOL showPageLabels;	// G=0x356ad3c9; S=0x353b08e1; @synthesize=_showPageLabels
- (id)init;	// 0x353b06dd
- (void)_adjustContentOffsetForKeyboardIfNeeded;	// 0x356abd8d
- (void)_adjustZoomScalesForScrollViewInternal:(id)scrollViewInternal;	// 0x356aaffd
- (void)_createPDFViewIfNeeded:(id)needed;	// 0x356aa8d1
- (void)_ensurePDFViewInHierarchyForWebDocView:(id)webDocView;	// 0x356aaac1
- (CGRect)_frameForDocumentBounds:(CGRect)documentBounds;	// 0x356aa69d
- (id)_getLabelViewFormatter;	// 0x356ac955
- (id)_getPDFDocumentViewForWebView:(id)webView;	// 0x354531c5
- (BOOL)_handleAnnotationClick:(CGPDFDictionaryRef)click;	// 0x356abb65
- (BOOL)_handleDestinationActionClick:(CGPDFDictionaryRef)click destinationKey:(const char *)key;	// 0x356ab891
- (BOOL)_handleLinkActionClick:(CGPDFDictionaryRef)click;	// 0x356abad9
- (BOOL)_handleURIActionClick:(CGPDFDictionaryRef)click uriKey:(const char *)key;	// 0x356aba6d
- (void)_keyboardDidShow:(id)_keyboard;	// 0x356ac0dd
- (void)_notifyDelegateOfLinkClick:(id)linkClick;	// 0x356ab82d
- (void)_postdidDetermineDocumentBounds;	// 0x356ac355
- (CGRect)_rectForPasswordView:(id)passwordView;	// 0x356aa799
- (CGRect)_rectForPdfView:(CGRect)pdfView;	// 0x356aa60d
- (void)_removePDFViewIfWebDocViewIsNotPDF:(id)pdf;	// 0x35453fa5
- (void)_removePDFViewIfWebDocViewIsNotSamePDF:(id)pdf;	// 0x356aa845
- (void)_replacePDFViewIfPresentWithWebDocView:(id)webDocView;	// 0x35453fdd
- (void)_resultRects:(id)rects andResultViews:(id)views forSearchResult:(id)searchResult inViewCoordinates:(id)viewCoordinates;	// 0x356acd15
- (id)_scroller:(id)scroller;	// 0x35453191
- (void)_setSearchControllerDocumentToSearch;	// 0x356aa475
- (void)_showPasswordEntryViewForFile:(id)file;	// 0x356ac25d
- (void)_showPasswordErrorAlert;	// 0x356abc35
- (void)_updateViewHierarchyForDocumentView:(id)documentView ignoreIfSame:(BOOL)same;	// 0x356aac3d
- (void)adjustZoomScalesForScrollView;	// 0x356ab2a9
// declared property getter: - (id)backgroundColorForUnRenderedContent;	// 0x356ad409
- (void)clearAllViews;	// 0x354afe79
- (void)clearLinkHighlight;	// 0x354aff95
- (void)clearPageLabel;	// 0x354affd5
- (id)createLinkHighlight;	// 0x356ab3f1
- (id)createPageLabel;	// 0x356abbc1
- (void)dealloc;	// 0x354afdf5
- (void)didBeginEditingPassword:(id)password inView:(id)view;	// 0x356ac111
- (void)didDetermineDocumentBounds:(id)bounds;	// 0x356ac419
- (void)didEndEditingPassword:(id)password inView:(id)view;	// 0x356ac17d
- (void)didReceiveMemoryWarning:(id)warning;	// 0x356aa5d1
- (void)didScroll:(id)scroll;	// 0x356ac789
- (void)ensureCorrectPagesAreInstalled;	// 0x354ae8e9
// declared property getter: - (id)frontView;	// 0x353b0ced
- (void)handleScrollToAnchor:(id)anchor;	// 0x356acc6d
// declared property getter: - (BOOL)hideActivityIndicatorForUnRenderedContent;	// 0x356ad419
// declared property getter: - (BOOL)hidePageViewsUntilReadyToRender;	// 0x356ad3f9
- (void)highlightRect:(CGRect)rect;	// 0x356ab4dd
- (id)passwordForPDFView:(id)pdfview;	// 0x356ac6ed
// declared property getter: - (id)pdfHandlerDelegate;	// 0x356ad3e9
// declared property getter: - (id)pdfView;	// 0x353b0d1d
- (void)pdfView:(id)view shouldZoomToRect:(CGRect)rect;	// 0x356ac61d
- (void)pdfView:(id)view willClickAnnotation:(CGPDFDictionaryRef)annotation inRect:(CGRect)rect;	// 0x356ac6a9
- (void)removeViewFromSuperview;	// 0x356ac7d9
- (void)restoreStateFromHistoryItem:(id)historyItem forWebView:(id)webView;	// 0x3545f15d
- (void)restoreStateFromPendingHistoryItem;	// 0x356ad301
- (void)revealSearchResult:(id)result andZoomIn:(BOOL)anIn;	// 0x356acf75
- (void)saveStateToHistoryItem:(id)historyItem forWebView:(id)webView;	// 0x35456029
// declared property getter: - (BOOL)scalesPageToFit;	// 0x356ad3d9
- (void)scrollToPageNumber:(int)pageNumber animate:(BOOL)animate;	// 0x356ab651
// declared property getter: - (id)searchController;	// 0x356aa53d
// declared property setter: - (void)setBackgroundColorForUnRenderedContent:(id)unRenderedContent;	// 0x353b086d
// declared property setter: - (void)setHideActivityIndicatorForUnRenderedContent:(BOOL)unRenderedContent;	// 0x356aa441
// declared property setter: - (void)setHidePageViewsUntilReadyToRender:(BOOL)render;	// 0x356aa40d
// declared property setter: - (void)setPdfHandlerDelegate:(id)delegate;	// 0x353b08d1
// declared property setter: - (void)setScalesPageToFit:(BOOL)fit;	// 0x354ae015
// declared property setter: - (void)setShowPageLabels:(BOOL)labels;	// 0x353b08e1
- (void)shouldResetZoom:(id)zoom;	// 0x356ac665
// declared property getter: - (BOOL)showPageLabels;	// 0x356ad3c9
- (void)updatePageNumberLabelWithUserScrolling:(BOOL)userScrolling animated:(BOOL)animated;	// 0x356ac995
- (void)updateViewHierarchyForDocumentViewLoadComplete:(id)documentViewLoadComplete;	// 0x35455df9
- (void)updateViewHierarchyForDocumentViewNewLoad:(id)documentViewNewLoad;	// 0x354530fd
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)documentViewTabSwitch;	// 0x356ac921
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)documentViewTabSwitch restoringZoomScale:(float)scale andScrollPt:(CGPoint)pt;	// 0x356ac829
- (void)updateViewHierarchyForFirstNonEmptyLayoutInFrame:(id)frame;	// 0x35453f95
- (void)updateViewSettings;	// 0x356aacbd
- (void)userDidEnterPassword:(id)user forPasswordView:(id)passwordView;	// 0x356abcd5
@end

