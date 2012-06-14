/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSAggregateExpression : NSExpression {
@private
	id _collection;	// 12 = 0xc
}
@property(readonly, retain) id collection;	// G=0x31642111; converted property
- (id)initWithCoder:(id)coder;	// 0x31641d95
- (id)initWithCollection:(id)collection;	// 0x31641be9
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x31642399
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x316422a9
// converted property getter: - (id)collection;	// 0x31642111
- (id)constantValue;	// 0x31642101
- (id)copyWithZone:(NSZone *)zone;	// 0x31641e55
- (void)dealloc;	// 0x3164200d
- (void)encodeWithCoder:(id)coder;	// 0x31641ced
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x316421a9
- (unsigned)hash;	// 0x31642189
- (BOOL)isEqual:(id)equal;	// 0x31642121
- (id)predicateFormat;	// 0x31642059
@end
