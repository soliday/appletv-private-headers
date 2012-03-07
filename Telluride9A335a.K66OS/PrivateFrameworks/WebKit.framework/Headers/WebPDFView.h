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
@property(readonly, retain) NSString *title;	// G=0x347d9455; converted property
+ (Class)_representationClassForWebFrame:(id)webFrame;	// 0x347d94bd
+ (CGColorRef)backgroundColor;	// 0x347d951d
+ (CGColorRef)shadowColor;	// 0x347d9601
+ (id)supportedMIMETypes;	// 0x34788041
- (void)_checkPDFTitle;	// 0x347d9919
- (void)_computePageRects;	// 0x347d9b79
- (id)_pagesInRect:(CGRect)rect;	// 0x347d9f35
- (BOOL)canProvideDocumentSource;	// 0x347d944d
- (void)dataSourceUpdated:(id)updated;	// 0x347d9435
- (void)dealloc;	// 0x347da2fd
- (CGPDFDocumentRef)doc;	// 0x347d9465
- (id)documentSource;	// 0x347d9451
- (void)drawPage:(CGPDFPageRef)page;	// 0x347da171
- (void)drawRect:(CGRect)rect;	// 0x347d9e59
- (void)finishedLoadingWithDataSource:(id)dataSource;	// 0x347d9811
- (void)layout;	// 0x347d94a9
- (unsigned)pageNumberForRect:(CGRect)rect;	// 0x347d9701
- (void)receivedData:(id)data withDataSource:(id)dataSource;	// 0x347d9445
- (void)receivedError:(id)error withDataSource:(id)dataSource;	// 0x347d9449
- (CGRect)rectForPageNumber:(unsigned)pageNumber;	// 0x347d9475
- (void)setDataSource:(id)source;	// 0x347d9d65
- (void)setNeedsLayout:(BOOL)layout;	// 0x347d9439
// converted property getter: - (id)title;	// 0x347d9455
- (unsigned)totalPages;	// 0x347d96e1
- (void)viewDidMoveToHostWindow;	// 0x347d9441
- (void)viewWillMoveToHostWindow:(id)view;	// 0x347d943d
@end
