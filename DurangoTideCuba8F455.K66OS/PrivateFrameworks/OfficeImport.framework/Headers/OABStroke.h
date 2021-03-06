/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABStroke : NSObject {
}
+ (int)readCapStyle:(int)style;	// 0x32b884fd
+ (int)readCompoundType:(int)type;	// 0x32b88591
+ (int)readLineEndLength:(int)length;	// 0x32b88271
+ (int)readLineEndType:(int)type;	// 0x32b88239
+ (int)readLineEndWidth:(int)width;	// 0x32b88261
+ (id)readLineEndWithType:(int)type width:(int)width length:(int)length;	// 0x32d3132d
+ (int)readPresetDashStyle:(int)style;	// 0x32b87f25
+ (id)readStrokeFromShapeBaseManager:(id)shapeBaseManager colorPalette:(id)palette;	// 0x32b86c29
+ (int)writeCapStyle:(int)style;	// 0x32d3131d
+ (int)writeCompoundType:(int)type;	// 0x32d3126d
+ (int)writeLineEndLength:(int)length;	// 0x32d3130d
+ (int)writeLineEndType:(int)type;	// 0x32d312d5
+ (int)writeLineEndWidth:(int)width;	// 0x32d312fd
+ (int)writePresetDashStyle:(int)style;	// 0x32d31291
@end

