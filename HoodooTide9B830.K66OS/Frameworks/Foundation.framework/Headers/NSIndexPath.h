/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface NSIndexPath : NSObject <NSCopying, NSCoding> {
@private
	unsigned *_indexes;	// 4 = 0x4
	unsigned _hash;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	void *_reserved;	// 16 = 0x10
}
@property(readonly, assign) unsigned hash;	// G=0x315ac575; converted property
@property(readonly, assign) unsigned length;	// G=0x3159398d; converted property
+ (id)indexPathWithIndex:(unsigned)index;	// 0x315e1f71
+ (id)indexPathWithIndexes:(unsigned *)indexes length:(unsigned)length;	// 0x3159399d
- (id)init;	// 0x315b8f31
- (id)initWithCoder:(id)coder;	// 0x315e1c41
- (id)initWithIndex:(unsigned)index;	// 0x315e1a75
- (id)initWithIndexes:(unsigned *)indexes length:(unsigned)length;	// 0x315938cd
- (int)compare:(id)compare;	// 0x315acfdd
- (id)copyWithZone:(NSZone *)zone;	// 0x315ac565
- (void)dealloc;	// 0x31594739
- (id)description;	// 0x315e2061
- (void)encodeWithCoder:(id)coder;	// 0x315e1a95
- (void)getIndexes:(unsigned *)indexes;	// 0x315e2035
// converted property getter: - (unsigned)hash;	// 0x315ac575
- (unsigned)indexAtPosition:(unsigned)position;	// 0x315939dd
- (id)indexPathByAddingIndex:(unsigned)index;	// 0x315b8f45
- (id)indexPathByRemovingLastIndex;	// 0x315e1fad
- (BOOL)isEqual:(id)equal;	// 0x315ac5c5
// converted property getter: - (unsigned)length;	// 0x3159398d
@end

