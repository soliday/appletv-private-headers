/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPointerFunctions.h"


__attribute__((visibility("hidden")))
@interface NSConcretePointerFunctions : NSPointerFunctions {
@private
	NSSlice slice;	// 4 = 0x4
}
@property(assign) /*function-pointer*/ void *acquireFunction;	// G=0x31a7b99d; S=0x31a7b8f5; converted property
@property(assign) /*function-pointer*/ void *descriptionFunction;	// G=0x31a7b989; S=0x31a7b8e1; converted property
@property(assign) /*function-pointer*/ void *hashFunction;	// G=0x31a7b961; S=0x31a1cdfd; converted property
@property(assign) /*function-pointer*/ void *isEqualFunction;	// G=0x31a7b975; S=0x31a1ce15; converted property
@property(assign) /*function-pointer*/ void *relinquishFunction;	// G=0x31a7b9b1; S=0x31a7b909; converted property
@property(assign) /*function-pointer*/ void *sizeFunction;	// G=0x31a7b94d; S=0x31a7b8cd; converted property
@property(assign) BOOL usesStrongWriteBarrier;	// G=0x31a7b9c5; S=0x31a7b91d; converted property
@property(assign) BOOL usesWeakReadAndWriteBarriers;	// G=0x31a7b9d9; S=0x31a7b935; converted property
+ (void)initializeBackingStore:(NSSlice *)store sentinel:(BOOL)sentinel compactable:(BOOL)compactable;	// 0x319e89bd
+ (bool)initializeSlice:(NSSlice *)slice withOptions:(unsigned)options;	// 0x319e8741
- (id)initWithOptions:(unsigned)options;	// 0x31a1cda1
// converted property getter: - (/*function-pointer*/ void *)acquireFunction;	// 0x31a7b99d
- (id)copyWithZone:(NSZone *)zone;	// 0x31a7b879
// converted property getter: - (/*function-pointer*/ void *)descriptionFunction;	// 0x31a7b989
- (unsigned)hash;	// 0x31a7b8bd
// converted property getter: - (/*function-pointer*/ void *)hashFunction;	// 0x31a7b961
- (BOOL)isEqual:(id)equal;	// 0x31a7b8c1
// converted property getter: - (/*function-pointer*/ void *)isEqualFunction;	// 0x31a7b975
// converted property getter: - (/*function-pointer*/ void *)relinquishFunction;	// 0x31a7b9b1
// converted property setter: - (void)setAcquireFunction:(/*function-pointer*/ void *)function;	// 0x31a7b8f5
// converted property setter: - (void)setDescriptionFunction:(/*function-pointer*/ void *)function;	// 0x31a7b8e1
// converted property setter: - (void)setHashFunction:(/*function-pointer*/ void *)function;	// 0x31a1cdfd
// converted property setter: - (void)setIsEqualFunction:(/*function-pointer*/ void *)function;	// 0x31a1ce15
// converted property setter: - (void)setRelinquishFunction:(/*function-pointer*/ void *)function;	// 0x31a7b909
// converted property setter: - (void)setSizeFunction:(/*function-pointer*/ void *)function;	// 0x31a7b8cd
// converted property setter: - (void)setUsesStrongWriteBarrier:(BOOL)barrier;	// 0x31a7b91d
// converted property setter: - (void)setUsesWeakReadAndWriteBarriers:(BOOL)barriers;	// 0x31a7b935
// converted property getter: - (/*function-pointer*/ void *)sizeFunction;	// 0x31a7b94d
// converted property getter: - (BOOL)usesStrongWriteBarrier;	// 0x31a7b9c5
// converted property getter: - (BOOL)usesWeakReadAndWriteBarriers;	// 0x31a7b9d9
@end
