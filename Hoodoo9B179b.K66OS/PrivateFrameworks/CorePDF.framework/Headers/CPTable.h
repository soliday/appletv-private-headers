/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CPChunk.h"
#import "CPDisposable.h"
#import "CorePDF-Structs.h"
#import "CPGraphicUser.h"


@interface CPTable : CPChunk <CPDisposable, CPGraphicUser> {
	CGRect tableBounds;	// 52 = 0x34
	unsigned rowCount;	// 68 = 0x44
	float *rowY;	// 72 = 0x48
	unsigned columnCount;	// 76 = 0x4c
	float *columnX;	// 80 = 0x50
	CGColorRef backgroundColor;	// 84 = 0x54
	unsigned backgroundGraphicCount;	// 88 = 0x58
	CPGraphicObject **backgroundGraphics;	// 92 = 0x5c
	unsigned usedGraphicCount;	// 96 = 0x60
	BOOL disposed;	// 100 = 0x64
}
@property(readonly, assign) CGColorRef backgroundColor;	// G=0x3484bc51; converted property
@property(readonly, assign, nonatomic) unsigned backgroundGraphicCount;	// G=0x3484ba71; @synthesize
@property(assign, nonatomic) unsigned columnCount;	// G=0x3484ba11; S=0x3484bd35; 
@property(readonly, assign, nonatomic) float *columnX;	// G=0x3484ba81; @synthesize
@property(assign, nonatomic) unsigned rowCount;	// G=0x3484ba01; S=0x3484bd81; 
@property(readonly, assign, nonatomic) float *rowY;	// G=0x3484ba91; @synthesize
@property(readonly, assign, nonatomic) CGRect tableBounds;	// G=0x3484baa1; @synthesize
@property(readonly, assign) unsigned usedGraphicCount;	// G=0x3484ba61; converted property
- (id)initWithBounds:(CGRect)bounds;	// 0x3484bac5
// converted property getter: - (CGColorRef)backgroundColor;	// 0x3484bc51
- (id)backgroundGraphicAtIndex:(unsigned)index;	// 0x3484ba21
// declared property getter: - (unsigned)backgroundGraphicCount;	// 0x3484ba71
// declared property getter: - (unsigned)columnCount;	// 0x3484ba11
// declared property getter: - (float *)columnX;	// 0x3484ba81
- (void)dealloc;	// 0x3484bdcd
- (void)dispose;	// 0x3484be4d
- (void)finalize;	// 0x3484be0d
- (void)incrementUsedGraphicCount;	// 0x3484ba4d
// declared property getter: - (unsigned)rowCount;	// 0x3484ba01
// declared property getter: - (float *)rowY;	// 0x3484ba91
- (void)setBackgroundGraphics:(id)graphics;	// 0x3484bb19
// declared property setter: - (void)setColumnCount:(unsigned)count;	// 0x3484bd35
// declared property setter: - (void)setRowCount:(unsigned)count;	// 0x3484bd81
// declared property getter: - (CGRect)tableBounds;	// 0x3484baa1
// converted property getter: - (unsigned)usedGraphicCount;	// 0x3484ba61
@end

