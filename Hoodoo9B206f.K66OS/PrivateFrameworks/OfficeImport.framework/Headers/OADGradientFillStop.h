/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADGradientFillStop : NSObject <NSCopying> {
@private
	OADColor *mColor;	// 4 = 0x4
	float mPosition;	// 8 = 0x8
}
- (id)initWithColor:(id)color position:(float)position;	// 0x34440b59
- (id)color;	// 0x34442689
- (id)copyWithZone:(NSZone *)zone;	// 0x345390f9
- (void)dealloc;	// 0x34444611
- (unsigned)hash;	// 0x34614f19
- (BOOL)isEqual:(id)equal;	// 0x34570369
- (float)position;	// 0x34570439
- (void)setStyleColor:(id)color;	// 0x345392a9
@end

