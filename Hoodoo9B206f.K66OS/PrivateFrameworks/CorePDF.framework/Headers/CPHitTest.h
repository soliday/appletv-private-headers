/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class CPPage, NSMutableArray;

@interface CPHitTest : NSObject {
	CPPage *page;	// 4 = 0x4
	NSMutableArray *objectsOnPage;	// 8 = 0x8
	float mapTemp;	// 12 = 0xc
}
@property(readonly, retain) CPPage *page;	// G=0x3261d1c9; converted property
- (id)initWithPage:(id)page;	// 0x3261d1d9
- (id)column:(CGPoint)column;	// 0x3261d421
- (unsigned)columnsAt:(CGPoint)at;	// 0x3261d479
- (int)compareByReadingOrder:(CGPoint)order to:(CGPoint)to;	// 0x3261d231
- (void)dealloc;	// 0x3261d811
- (id)findBestMatch:(id)match atPoint:(CGPoint)point;	// 0x3261d871
- (void)findClickableObjects:(BOOL)objects;	// 0x3261d9bd
- (id)findObjectIn:(id)anIn at:(CGPoint)at count:(int *)count;	// 0x3261e05d
- (BOOL)hitTestGraphicObject:(id)object point:(CGPoint)point;	// 0x3261de2d
- (BOOL)hitTestParagraph:(id)paragraph point:(CGPoint)point;	// 0x3261df25
- (id)layoutArea:(CGPoint)area;	// 0x3261d4b1
- (id)objectAtPoint:(CGPoint)point;	// 0x3261d28d
// converted property getter: - (id)page;	// 0x3261d1c9
- (id)paragraph:(CGPoint)paragraph;	// 0x3261d67d
- (id)paragraphNear:(CGPoint)near;	// 0x3261d519
- (id)textLine:(CGPoint)line;	// 0x3261d2c5
@end
