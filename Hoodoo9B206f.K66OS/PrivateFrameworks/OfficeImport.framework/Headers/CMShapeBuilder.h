/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class OADOrientedBounds, NSDictionary;

__attribute__((visibility("hidden")))
@interface CMShapeBuilder : NSObject {
@private
	int _type;	// 4 = 0x4
	OADOrientedBounds *_orientedBounds;	// 8 = 0x8
	int _format;	// 12 = 0xc
	NSDictionary *_adjustValues;	// 16 = 0x10
}
+ (CGRect)canonicalBounds;	// 0x3443cff1
- (CGAffineTransform)affineTransform;	// 0x3447c4b1
- (CGPathRef)createShapeWithTransform:(CGAffineTransform)transform;	// 0x34669ead
- (void)dealloc;	// 0x3443d495
- (BOOL)isOffice12;	// 0x34443955
- (float)maxAdjustedValue;	// 0x34443929
- (void)setAdjustValues:(id)values;	// 0x3443cbe9
- (void)setFileFormat:(int)format;	// 0x3443cc39
- (void)setOrientedBounds:(id)bounds;	// 0x3443cb99
- (void)setShapeType:(int)type;	// 0x3443cbd9
@end

