/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHParagraphStyle.h"


__attribute__((visibility("hidden")))
@interface GQHTextBox : GQHParagraphStyle {
}
+ (void)createExternalWrapSandbagStyles:(id)styles;	// 0x317d4c9d
+ (int)handleLayoutStorage:(id)storage state:(id)state;	// 0x317d44ad
+ (int)handleShapeText:(id)text boundsRect:(CGRect)rect floating:(BOOL)floating state:(id)state;	// 0x317d3c3d
+ (void)mapLayout:(id)layout style:(id)style state:(id)state;	// 0x317d46b9
+ (void)mapScaledImageFill:(id)fill style:(id)style size:(CGSize)size;	// 0x317d4b15
+ (void)mapStyle:(id)style style:(id)style2 state:(id)state;	// 0x317d38c9
+ (const char *)name;	// 0x317d38bd
+ (int)outputInnerSandbagsForFrame:(CGRect)frame drawable:(id)drawable state:(id)state;	// 0x317d5259
+ (int)outputInnerSandbagsForShape:(id)shape layoutStyle:(id)style state:(id)state;	// 0x317d3a49
+ (void)outputSandbag:(id)sandbag state:(id)state;	// 0x317d434d
+ (int)outputWrapSandbagsForFrame:(CGRect)frame columnCount:(int)count drawable:(id)drawable state:(id)state;	// 0x317d3a01
+ (BOOL)outputWrapSandbagsForFrame:(CGRect)frame columnCount:(int)count drawable:(id)drawable state:(id)state isPageFrame:(BOOL)frame5;	// 0x317d4d39
+ (int)outputWrapSandbagsForShape:(id)shape layoutStyle:(id)style state:(id)state;	// 0x317d3af1
+ (BOOL)styleNeedsImageFillMapping:(id)mapping;	// 0x317d3995
@end

