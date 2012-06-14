/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OABStroke : NSObject {
}
+ (int)readCapStyle:(int)style;	// 0x343f0fd9
+ (int)readCompoundType:(int)type;	// 0x343f1075
+ (int)readLineEndLength:(int)length;	// 0x343f0d3d
+ (int)readLineEndType:(int)type;	// 0x343f0d01
+ (int)readLineEndWidth:(int)width;	// 0x343f0d29
+ (id)readLineEndWithType:(int)type width:(int)width length:(int)length;	// 0x34670d85
+ (int)readPresetDashStyle:(int)style;	// 0x343f09d5
+ (id)readStrokeFromShapeBaseManager:(id)shapeBaseManager colorPalette:(id)palette;	// 0x343ef279
+ (int)writeCapStyle:(int)style;	// 0x34670d71
+ (int)writeCompoundType:(int)type;	// 0x34670cc1
+ (int)writeLineEndLength:(int)length;	// 0x34670d5d
+ (int)writeLineEndType:(int)type;	// 0x34670d21
+ (int)writeLineEndWidth:(int)width;	// 0x34670d49
+ (int)writePresetDashStyle:(int)style;	// 0x34670ce1
+ (void)writePresetDashStyleForCustomDash:(id)customDash toStroke:(EshStroke *)stroke state:(id)state;	// 0x34670e2d
@end

