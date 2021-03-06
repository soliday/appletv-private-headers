/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"

@class NSSubstringPredicateOperator;

@interface NSInPredicateOperator : NSPredicateOperator {
	unsigned _flags;	// 12 = 0xc
	NSSubstringPredicateOperator *_stringVersion;	// 16 = 0x10
}
@property(readonly, assign) unsigned flags;	// G=0x35eb02e1; converted property
@property(readonly, retain) NSSubstringPredicateOperator *stringVersion;	// G=0x35eaff99; converted property
- (id)initWithCoder:(id)coder;	// 0x35eb00b9
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier options:(unsigned)options;	// 0x35e0f36d
- (void)_setOptions:(unsigned)options;	// 0x35e0f3b5
- (id)copyWithZone:(NSZone *)zone;	// 0x35eb03a9
- (void)dealloc;	// 0x35e10ba9
- (void)encodeWithCoder:(id)coder;	// 0x35eb005d
// converted property getter: - (unsigned)flags;	// 0x35eb02e1
- (BOOL)isEqual:(id)equal;	// 0x35eb02f1
- (unsigned)options;	// 0x35eb0675
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x35eb0415
// converted property getter: - (id)stringVersion;	// 0x35eaff99
- (id)symbol;	// 0x35eb011d
@end

