/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WAKView.h> // Unknown library
#import "WebKit-Structs.h"
#import "WebPDFDocumentView.h"
#import "WebPDFDocumentRepresentation.h"

@class NSString;

@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {
@private
	BOOL dataSourceHasBeenSet;	// 68 = 0x44
	CGPDFDocumentRef _PDFDocument;	// 72 = 0x48
	NSString *_title;	// 76 = 0x4c
	CGRect *_pageRects;	// 80 = 0x50
}
@property(readonly, retain) NSString *title;	// G=0x352a144d; converted property
+ (Class)_representationClassForWebFrame:(id)webFrame;	// 0x352a14b5
+ (CGColorRef)backgroundColor;	// 0x352a1515
+ (CGColorRef)shadowColor;	// 0x352a15f9
+ (id)supportedMIMETypes;	// 0x3524ffb1
- (void)_checkPDFTitle;	// 0x352a1911
- (void)_computePageRects;	// 0x352a1b71
- (id)_pagesInRect:(CGRect)rect;	// 0x352a1f2d
- (BOOL)canProvideDocumentSource;	// 0x352a1445
- (void)dataSourceUpdated:(id)updated;	// 0x352a142d
- (void)dealloc;	// 0x352a22f5
- (CGPDFDocumentRef)doc;	// 0x352a145d
- (id)documentSource;	// 0x352a1449
- (void)drawPage:(CGPDFPageRef)page;	// 0x352a2169
- (void)drawRect:(CGRect)rect;	// 0x352a1e51
- (void)finishedLoadingWithDataSource:(id)dataSource;	// 0x352a1809
- (void)layout;	// 0x352a14a1
- (unsigned)pageNumberForRect:(CGRect)rect;	// 0x352a16f9
- (void)receivedData:(id)data withDataSource:(id)dataSource;	// 0x352a143d
- (void)receivedError:(id)error withDataSource:(id)dataSource;	// 0x352a1441
- (CGRect)rectForPageNumber:(unsigned)pageNumber;	// 0x352a146d
- (void)setDataSource:(id)source;	// 0x352a1d5d
- (void)setNeedsLayout:(BOOL)layout;	// 0x352a1431
// converted property getter: - (id)title;	// 0x352a144d
- (unsigned)totalPages;	// 0x352a16d9
- (void)viewDidMoveToHostWindow;	// 0x352a1439
- (void)viewWillMoveToHostWindow:(id)view;	// 0x352a1435
@end

