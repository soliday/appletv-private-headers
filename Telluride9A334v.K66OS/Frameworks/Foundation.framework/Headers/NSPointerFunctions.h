/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface NSPointerFunctions : NSObject <NSCopying> {
}
@property(assign) /*function-pointer*/ void *acquireFunction;	// G=0x3068dadd; S=0x3068da9d; 
@property(assign) /*function-pointer*/ void *descriptionFunction;	// G=0x3068dad5; S=0x3068da95; 
@property(assign) /*function-pointer*/ void *hashFunction;	// G=0x3068dac5; S=0x3068da85; 
@property(assign) /*function-pointer*/ void *isEqualFunction;	// G=0x3068dacd; S=0x3068da8d; 
@property(assign) /*function-pointer*/ void *relinquishFunction;	// G=0x3068dae5; S=0x3068daa5; 
@property(assign) /*function-pointer*/ void *sizeFunction;	// G=0x3068dabd; S=0x3068da7d; 
@property(assign) BOOL usesStrongWriteBarrier;	// G=0x3068daed; S=0x3068daad; 
@property(assign) BOOL usesWeakReadAndWriteBarriers;	// G=0x3068daf5; S=0x3068dab5; 
+ (id)allocWithZone:(NSZone *)zone;	// 0x30633d4d
+ (id)pointerFunctionsWithOptions:(unsigned)options;	// 0x3068d991
- (id)initWithOptions:(unsigned)options;	// 0x3068d9e1
// declared property getter: - (/*function-pointer*/ void *)acquireFunction;	// 0x3068dadd
- (id)copyWithZone:(NSZone *)zone;	// 0x3068da75
// declared property getter: - (/*function-pointer*/ void *)descriptionFunction;	// 0x3068dad5
// declared property getter: - (/*function-pointer*/ void *)hashFunction;	// 0x3068dac5
// declared property getter: - (/*function-pointer*/ void *)isEqualFunction;	// 0x3068dacd
// declared property getter: - (/*function-pointer*/ void *)relinquishFunction;	// 0x3068dae5
// declared property setter: - (void)setAcquireFunction:(/*function-pointer*/ void *)function;	// 0x3068da9d
// declared property setter: - (void)setDescriptionFunction:(/*function-pointer*/ void *)function;	// 0x3068da95
// declared property setter: - (void)setHashFunction:(/*function-pointer*/ void *)function;	// 0x3068da85
// declared property setter: - (void)setIsEqualFunction:(/*function-pointer*/ void *)function;	// 0x3068da8d
// declared property setter: - (void)setRelinquishFunction:(/*function-pointer*/ void *)function;	// 0x3068daa5
// declared property setter: - (void)setSizeFunction:(/*function-pointer*/ void *)function;	// 0x3068da7d
// declared property setter: - (void)setUsesStrongWriteBarrier:(BOOL)barrier;	// 0x3068daad
// declared property setter: - (void)setUsesWeakReadAndWriteBarriers:(BOOL)barriers;	// 0x3068dab5
// declared property getter: - (/*function-pointer*/ void *)sizeFunction;	// 0x3068dabd
// declared property getter: - (BOOL)usesStrongWriteBarrier;	// 0x3068daed
// declared property getter: - (BOOL)usesWeakReadAndWriteBarriers;	// 0x3068daf5
@end
