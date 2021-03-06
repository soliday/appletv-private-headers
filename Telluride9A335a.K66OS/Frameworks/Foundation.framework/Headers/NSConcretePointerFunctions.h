/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPointerFunctions.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSConcretePointerFunctions : NSPointerFunctions {
@private
	NSSlice slice;	// 4 = 0x4
}
@property(assign) /*function-pointer*/ void *acquireFunction;	// G=0x32097941; S=0x32097889; converted property
@property(assign) /*function-pointer*/ void *descriptionFunction;	// G=0x3209792d; S=0x32097875; converted property
@property(assign) /*function-pointer*/ void *hashFunction;	// G=0x32097905; S=0x3203ddd5; converted property
@property(assign) /*function-pointer*/ void *isEqualFunction;	// G=0x32097919; S=0x3203ddf5; converted property
@property(assign) /*function-pointer*/ void *relinquishFunction;	// G=0x32097955; S=0x3209789d; converted property
@property(assign) /*function-pointer*/ void *sizeFunction;	// G=0x320978f1; S=0x32097861; converted property
@property(assign) BOOL usesStrongWriteBarrier;	// G=0x32097969; S=0x320978b1; converted property
@property(assign) BOOL usesWeakReadAndWriteBarriers;	// G=0x3209797d; S=0x320978d1; converted property
+ (void)initializeBackingStore:(NSSlice *)store sentinel:(BOOL)sentinel compactable:(BOOL)compactable;	// 0x32009bcd
+ (bool)initializeSlice:(NSSlice *)slice withOptions:(unsigned)options;	// 0x32009961
- (id)initWithOptions:(unsigned)options;	// 0x3203dd79
// converted property getter: - (/*function-pointer*/ void *)acquireFunction;	// 0x32097941
- (id)copyWithZone:(NSZone *)zone;	// 0x3209780d
// converted property getter: - (/*function-pointer*/ void *)descriptionFunction;	// 0x3209792d
- (unsigned)hash;	// 0x32097851
// converted property getter: - (/*function-pointer*/ void *)hashFunction;	// 0x32097905
- (BOOL)isEqual:(id)equal;	// 0x32097855
// converted property getter: - (/*function-pointer*/ void *)isEqualFunction;	// 0x32097919
// converted property getter: - (/*function-pointer*/ void *)relinquishFunction;	// 0x32097955
// converted property setter: - (void)setAcquireFunction:(/*function-pointer*/ void *)function;	// 0x32097889
// converted property setter: - (void)setDescriptionFunction:(/*function-pointer*/ void *)function;	// 0x32097875
// converted property setter: - (void)setHashFunction:(/*function-pointer*/ void *)function;	// 0x3203ddd5
// converted property setter: - (void)setIsEqualFunction:(/*function-pointer*/ void *)function;	// 0x3203ddf5
// converted property setter: - (void)setRelinquishFunction:(/*function-pointer*/ void *)function;	// 0x3209789d
// converted property setter: - (void)setSizeFunction:(/*function-pointer*/ void *)function;	// 0x32097861
// converted property setter: - (void)setUsesStrongWriteBarrier:(BOOL)barrier;	// 0x320978b1
// converted property setter: - (void)setUsesWeakReadAndWriteBarriers:(BOOL)barriers;	// 0x320978d1
// converted property getter: - (/*function-pointer*/ void *)sizeFunction;	// 0x320978f1
// converted property getter: - (BOOL)usesStrongWriteBarrier;	// 0x32097969
// converted property getter: - (BOOL)usesWeakReadAndWriteBarriers;	// 0x3209797d
@end

