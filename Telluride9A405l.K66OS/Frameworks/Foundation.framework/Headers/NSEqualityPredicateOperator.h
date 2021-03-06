/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


@interface NSEqualityPredicateOperator : NSPredicateOperator {
@private
	BOOL _negate;	// 12 = 0xc
	unsigned _options;	// 16 = 0x10
}
@property(assign, getter=isNegation) BOOL negation;	// G=0x3028d3ed; S=0x3032be9d; converted property
@property(readonly, assign) unsigned options;	// G=0x3028a675; converted property
- (id)initWithCoder:(id)coder;	// 0x3032bca9
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier negate:(BOOL)negate;	// 0x30267091
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier negate:(BOOL)negate options:(unsigned)options;	// 0x3026705d
- (void)_setOptions:(unsigned)options;	// 0x3032bead
- (id)copyWithZone:(NSZone *)zone;	// 0x3028d10d
- (void)encodeWithCoder:(id)coder;	// 0x3032bbd5
- (BOOL)isEqual:(id)equal;	// 0x3032bebd
// converted property getter: - (BOOL)isNegation;	// 0x3028d3ed
// converted property getter: - (unsigned)options;	// 0x3028a675
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x3028c7dd
- (id)predicateFormat;	// 0x3032bd85
// converted property setter: - (void)setNegation:(BOOL)negation;	// 0x3032be9d
@end

