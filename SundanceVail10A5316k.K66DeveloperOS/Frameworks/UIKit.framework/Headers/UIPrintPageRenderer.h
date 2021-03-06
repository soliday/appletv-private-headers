/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray;

@interface UIPrintPageRenderer : NSObject {
@private
	float _headerHeight;	// 4 = 0x4
	float _footerHeight;	// 8 = 0x8
	CGRect _paperRect;	// 12 = 0xc
	CGRect _printableRect;	// 28 = 0x1c
	NSMutableArray *_printFormatters;	// 44 = 0x2c
	CGContextRef _printContext;	// 48 = 0x30
}
@property(assign, nonatomic) float footerHeight;	// G=0x303dee99; S=0x303de909; @synthesize=_footerHeight
@property(assign, nonatomic) float headerHeight;	// G=0x303dee89; S=0x303de839; @synthesize=_headerHeight
@property(assign, nonatomic) CGRect paperRect;	// G=0x303deea9; S=0x303deecd; @synthesize=_paperRect
@property(copy, nonatomic) NSArray *printFormatters;	// G=0x303def29; S=0x303de4cd; @synthesize=_printFormatters
@property(assign, nonatomic) CGRect printableRect;	// G=0x303deee9; S=0x303def0d; @synthesize=_printableRect
- (void)_drawPage:(int)page;	// 0x303ded5d
- (void)_endPrintContext:(id)context success:(BOOL)success;	// 0x303dee29
- (int)_maxFormatterPage;	// 0x303de729
- (void)_removePrintFormatter:(id)formatter;	// 0x303de6e9
- (BOOL)_startPrintContext:(id)context printSettings:(id)settings;	// 0x303dec95
- (void)addPrintFormatter:(id)formatter startingAtPageAtIndex:(int)index;	// 0x303de511
- (void)dealloc;	// 0x303de469
- (void)drawContentForPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x303dec8d
- (void)drawFooterForPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x303dec91
- (void)drawHeaderForPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x303dec89
- (void)drawPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x303de9d9
- (void)drawPrintFormatter:(id)formatter forPageAtIndex:(int)index;	// 0x303dec2d
// declared property getter: - (float)footerHeight;	// 0x303dee99
// declared property getter: - (float)headerHeight;	// 0x303dee89
- (int)numberOfPages;	// 0x303de825
// declared property getter: - (CGRect)paperRect;	// 0x303deea9
- (void)prepareForDrawingPages:(NSRange)drawingPages;	// 0x303de835
// declared property getter: - (id)printFormatters;	// 0x303def29
- (id)printFormattersForPageAtIndex:(int)index;	// 0x303de5b1
// declared property getter: - (CGRect)printableRect;	// 0x303deee9
// declared property setter: - (void)setFooterHeight:(float)height;	// 0x303de909
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x303de839
// declared property setter: - (void)setPaperRect:(CGRect)rect;	// 0x303deecd
// declared property setter: - (void)setPrintFormatters:(id)formatters;	// 0x303de4cd
// declared property setter: - (void)setPrintableRect:(CGRect)rect;	// 0x303def0d
@end

