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
+ (void)createExternalWrapSandbagStyles:(id)styles;	// 0x36c75b89
+ (int)handleLayoutStorage:(id)storage state:(id)state;	// 0x36c75259
+ (int)handleShapeText:(id)text boundsRect:(CGRect)rect floating:(BOOL)floating state:(id)state;	// 0x36c74b45
+ (void)mapLayout:(id)layout style:(id)style state:(id)state;	// 0x36c7548d
+ (void)mapScaledImageFill:(id)fill style:(id)style size:(CGSize)size;	// 0x36c759e1
+ (void)mapStyle:(id)style style:(id)style2 state:(id)state;	// 0x36c74a89
+ (const char *)name;	// 0x36c75481
+ (int)outputInnerSandbagsForFrame:(CGRect)frame drawable:(id)drawable state:(id)state;	// 0x36c761cd
+ (int)outputInnerSandbagsForShape:(id)shape layoutStyle:(id)style state:(id)state;	// 0x36c7681d
+ (void)outputSandbag:(id)sandbag state:(id)state;	// 0x36c766b5
+ (int)outputWrapSandbagsForFrame:(CGRect)frame columnCount:(int)count drawable:(id)drawable state:(id)state;	// 0x36c75c21
+ (BOOL)outputWrapSandbagsForFrame:(CGRect)frame columnCount:(int)count drawable:(id)drawable state:(id)state isPageFrame:(BOOL)frame5;	// 0x36c75c61
+ (int)outputWrapSandbagsForShape:(id)shape layoutStyle:(id)style state:(id)state;	// 0x36c768d5
+ (BOOL)styleNeedsImageFillMapping:(id)mapping;	// 0x36c75975
@end
