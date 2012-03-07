/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "OABReaderClient.h"


__attribute__((visibility("hidden")))
@interface WBOfficeArtReaderClient : NSObject <OABReaderClient> {
}
+ (bool)allowOverlap:(EshContentProperties *)overlap;	// 0x34cb7211
+ (bool)behindText:(EshContentProperties *)text;	// 0x34cb7255
+ (BOOL)escherIsFullySupported;	// 0x34cb76a9
+ (int)horizontalPosition:(EshContentProperties *)position;	// 0x34cb6ed9
+ (void)readClientDataFromGroup:(id)group toGroup:(id)group2 state:(id)state;	// 0x34d3d8d9
+ (void)readClientDataFromShape:(id)shape toGraphic:(id)graphic state:(id)state;	// 0x34cb68a9
+ (void)readClientDataFromTableCell:(id)tableCell toTableCell:(id)tableCell2 state:(id)state;	// 0x34e1a069
+ (void)readFrom:(EshContentProperties *)from to:(id)to;	// 0x34cb6d05
+ (int)relativeHorizontalPosition:(EshContentProperties *)position;	// 0x34cb6f45
+ (int)relativeVerticalPosition:(EshContentProperties *)position;	// 0x34cb7011
+ (BOOL)tablesAreAllowed;	// 0x34d3d835
+ (int)verticalPosition:(EshContentProperties *)position;	// 0x34cb6fa5
+ (double)wrapDistanceBottom:(EshContentProperties *)bottom;	// 0x34cb71ad
+ (double)wrapDistanceLeft:(EshContentProperties *)left;	// 0x34cb7071
+ (double)wrapDistanceRight:(EshContentProperties *)right;	// 0x34cb7141
+ (double)wrapDistanceTop:(EshContentProperties *)top;	// 0x34cb70dd
@end
