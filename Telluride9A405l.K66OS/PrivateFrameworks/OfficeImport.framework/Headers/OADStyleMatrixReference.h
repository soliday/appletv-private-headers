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
@interface OADStyleMatrixReference : NSObject <NSCopying> {
@private
	unsigned long mMatrixIndex;	// 4 = 0x4
	OADColor *mColor;	// 8 = 0x8
}
@property(retain) id color;	// G=0x30d9bc15; S=0x30d9b629; converted property
@property(assign) unsigned long matrixIndex;	// G=0x30d9bbc5; S=0x30d9b619; converted property
+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long)matrixIndex color:(id)color;	// 0x30e88c95
- (id)initWithMatrixIndex:(unsigned long)matrixIndex color:(id)color;	// 0x30dc342d
- (void)applyToEffectsInProperties:(id)properties styleMatrix:(id)matrix;	// 0x30e88ce1
- (void)applyToFillInProperties:(id)properties styleMatrix:(id)matrix;	// 0x30e88df1
- (void)applyToStrokeInProperties:(id)properties styleMatrix:(id)matrix;	// 0x30e88f25
// converted property getter: - (id)color;	// 0x30d9bc15
- (id)copyWithZone:(NSZone *)zone;	// 0x30db08e9
- (void)dealloc;	// 0x30d9e155
// converted property getter: - (unsigned long)matrixIndex;	// 0x30d9bbc5
// converted property setter: - (void)setColor:(id)color;	// 0x30d9b629
// converted property setter: - (void)setMatrixIndex:(unsigned long)index;	// 0x30d9b619
@end

