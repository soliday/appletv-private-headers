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
@property(assign) /*function-pointer*/ void *acquireFunction;	// G=0x302e4add; S=0x302e4a9d; 
@property(assign) /*function-pointer*/ void *descriptionFunction;	// G=0x302e4ad5; S=0x302e4a95; 
@property(assign) /*function-pointer*/ void *hashFunction;	// G=0x302e4ac5; S=0x302e4a85; 
@property(assign) /*function-pointer*/ void *isEqualFunction;	// G=0x302e4acd; S=0x302e4a8d; 
@property(assign) /*function-pointer*/ void *relinquishFunction;	// G=0x302e4ae5; S=0x302e4aa5; 
@property(assign) /*function-pointer*/ void *sizeFunction;	// G=0x302e4abd; S=0x302e4a7d; 
@property(assign) BOOL usesStrongWriteBarrier;	// G=0x302e4aed; S=0x302e4aad; 
@property(assign) BOOL usesWeakReadAndWriteBarriers;	// G=0x302e4af5; S=0x302e4ab5; 
+ (id)allocWithZone:(NSZone *)zone;	// 0x3028ad4d
+ (id)pointerFunctionsWithOptions:(unsigned)options;	// 0x302e4991
- (id)initWithOptions:(unsigned)options;	// 0x302e49e1
// declared property getter: - (/*function-pointer*/ void *)acquireFunction;	// 0x302e4add
- (id)copyWithZone:(NSZone *)zone;	// 0x302e4a75
// declared property getter: - (/*function-pointer*/ void *)descriptionFunction;	// 0x302e4ad5
// declared property getter: - (/*function-pointer*/ void *)hashFunction;	// 0x302e4ac5
// declared property getter: - (/*function-pointer*/ void *)isEqualFunction;	// 0x302e4acd
// declared property getter: - (/*function-pointer*/ void *)relinquishFunction;	// 0x302e4ae5
// declared property setter: - (void)setAcquireFunction:(/*function-pointer*/ void *)function;	// 0x302e4a9d
// declared property setter: - (void)setDescriptionFunction:(/*function-pointer*/ void *)function;	// 0x302e4a95
// declared property setter: - (void)setHashFunction:(/*function-pointer*/ void *)function;	// 0x302e4a85
// declared property setter: - (void)setIsEqualFunction:(/*function-pointer*/ void *)function;	// 0x302e4a8d
// declared property setter: - (void)setRelinquishFunction:(/*function-pointer*/ void *)function;	// 0x302e4aa5
// declared property setter: - (void)setSizeFunction:(/*function-pointer*/ void *)function;	// 0x302e4a7d
// declared property setter: - (void)setUsesStrongWriteBarrier:(BOOL)barrier;	// 0x302e4aad
// declared property setter: - (void)setUsesWeakReadAndWriteBarriers:(BOOL)barriers;	// 0x302e4ab5
// declared property getter: - (/*function-pointer*/ void *)sizeFunction;	// 0x302e4abd
// declared property getter: - (BOOL)usesStrongWriteBarrier;	// 0x302e4aed
// declared property getter: - (BOOL)usesWeakReadAndWriteBarriers;	// 0x302e4af5
@end

