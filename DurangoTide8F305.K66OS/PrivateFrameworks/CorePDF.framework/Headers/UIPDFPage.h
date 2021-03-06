/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class NSString, UIPDFSelection;

@interface UIPDFPage : NSObject {
	CGPDFPageRef cgPage;	// 4 = 0x4
	unsigned pageNumber;	// 8 = 0x8
	NSString *stringInReadingOrder;	// 12 = 0xc
	UIPDFSelection *_selection;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) CGPDFPageRef CGPage;	// G=0x302cc209; @synthesize=cgPage
@property(readonly, assign, nonatomic) CGRect cropBox;	// G=0x302cc2e1; 
@property(readonly, assign, nonatomic) unsigned pageNumber;	// G=0x302cc1f9; @synthesize
@property(retain, nonatomic) UIPDFSelection *selection;	// G=0x302cc1e9; S=0x302cc365; @synthesize=_selection
- (id)initWithCGPDFPage:(CGPDFPageRef)cgpdfpage;	// 0x302cc219
// declared property getter: - (CGPDFPageRef)CGPage;	// 0x302cc209
// declared property getter: - (CGRect)cropBox;	// 0x302cc2e1
- (CGRect)cropBoxAccountForRotation;	// 0x302cc419
- (void)dealloc;	// 0x302cc26d
- (void)drawInRect:(CGRect)rect context:(CGContextRef)context;	// 0x302cc6e9
- (CGRect)mediaBox;	// 0x302cc2c5
- (CGRect)mediaBoxAccountForRotation;	// 0x302cc3f5
// declared property getter: - (unsigned)pageNumber;	// 0x302cc1f9
// declared property getter: - (id)selection;	// 0x302cc1e9
// declared property setter: - (void)setSelection:(id)selection;	// 0x302cc365
- (CGSize)size;	// 0x302cc2fd
- (id)string;	// 0x302cc329
@end

