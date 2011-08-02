/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSDictionary, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMShapeBuilder : NSObject {
@private
	int _type;	// 4 = 0x4
	OADOrientedBounds *_orientedBounds;	// 8 = 0x8
	int _format;	// 12 = 0xc
	NSDictionary *_adjustValues;	// 16 = 0x10
}
+ (CGRect)canonicalBounds;	// 0x32b185e5
- (CGAffineTransform)affineTransform;	// 0x32ba2149
- (CGPathRef)createShapeWithTransform:(CGAffineTransform)transform;	// 0x32cc7611
- (void)dealloc;	// 0x32b19121
- (BOOL)isOffice12;	// 0x32b9f881
- (float)maxAdjustedValue;	// 0x32b9f84d
- (void)setAdjustValues:(id)values;	// 0x32b1821d
- (void)setFileFormat:(int)format;	// 0x32b18265
- (void)setOrientedBounds:(id)bounds;	// 0x32b181d5
- (void)setShapeType:(int)type;	// 0x32b1820d
@end
