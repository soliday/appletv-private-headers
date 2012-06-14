/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"

@class NSPredicate;

@interface NSTernaryExpression : NSExpression {
@private
	NSPredicate *_predicate;	// 12 = 0xc
	NSExpression *_trueExpression;	// 16 = 0x10
	NSExpression *_falseExpression;	// 20 = 0x14
}
@property(readonly, retain) NSExpression *falseExpression;	// G=0x31dc6095; converted property
@property(readonly, retain) NSPredicate *predicate;	// G=0x31dc6075; converted property
@property(readonly, retain) NSExpression *trueExpression;	// G=0x31dc6085; converted property
- (id)initWithCoder:(id)coder;	// 0x31dc5cf5
- (id)initWithPredicate:(id)predicate trueExpression:(id)expression falseExpression:(id)expression3;	// 0x31dc5ad5
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x31dc6159
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x31dc60a5
- (id)copyWithZone:(NSZone *)zone;	// 0x31dc5e11
- (void)dealloc;	// 0x31dc5b65
- (void)encodeWithCoder:(id)coder;	// 0x31dc5bf9
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x31dc6259
// converted property getter: - (id)falseExpression;	// 0x31dc6095
- (BOOL)isEqual:(id)equal;	// 0x31dc5ed1
// converted property getter: - (id)predicate;	// 0x31dc6075
- (id)predicateFormat;	// 0x31dc5fd9
// converted property getter: - (id)trueExpression;	// 0x31dc6085
@end

