/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EXDrawing : NSObject {
}
+ (void)readAbsoluteAnchorNode:(xmlNode *)node state:(id)state;	// 0x312e50f1
+ (EDCellAnchorMarker)readAnchorMarkerFromNode:(xmlNode *)node;	// 0x312cc2b5
+ (void)readClientDataFromParentNode:(xmlNode *)parentNode state:(id)state;	// 0x312cc7cd
+ (void)readDrawableNode:(xmlNode *)node anchor:(id)anchor state:(id)state;	// 0x312cc37d
+ (void)readFromPart:(id)part state:(id)state;	// 0x312cbf95
+ (void)readOneCellAnchorNode:(xmlNode *)node state:(id)state;	// 0x312f3e41
+ (void)readTwoCellAnchorNode:(xmlNode *)node state:(id)state;	// 0x312cc0ed
@end

