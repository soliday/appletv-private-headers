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


@interface NSExpression : NSObject <NSCoding, NSCopying> {
@private
	void *_reserved;	// 4 = 0x4
	unsigned _expressionType;	// 8 = 0x8
}
@property(readonly, assign) unsigned expressionType;	// G=0x3158aaed; converted property
+ (id)_newKeyPathExpressionForString:(id)string;	// 0x3158aa95
+ (id)expressionForAggregate:(id)aggregate;	// 0x31642a5d
+ (id)expressionForBlock:(id)block arguments:(id)arguments;	// 0x31642ce9
+ (id)expressionForConstantValue:(id)constantValue;	// 0x315a8b51
+ (id)expressionForEvaluatedObject;	// 0x315a5461
+ (id)expressionForFunction:(id)function arguments:(id)arguments;	// 0x315a7409
+ (id)expressionForFunction:(id)function selectorName:(id)name arguments:(id)arguments;	// 0x31642af9
+ (id)expressionForIntersectSet:(id)intersectSet with:(id)with;	// 0x31642c41
+ (id)expressionForKeyPath:(id)keyPath;	// 0x3158aa29
+ (id)expressionForMinusSet:(id)minusSet with:(id)with;	// 0x31642c95
+ (id)expressionForSubquery:(id)subquery usingIteratorVariable:(id)variable predicate:(id)predicate;	// 0x31642aa5
+ (id)expressionForSymbolicString:(id)symbolicString;	// 0x31642a15
+ (id)expressionForTernaryWithPredicate:(id)predicate trueExpression:(id)expression falseExpression:(id)expression3;	// 0x31642b99
+ (id)expressionForUnionSet:(id)unionSet with:(id)with;	// 0x31642bed
+ (id)expressionForVariable:(id)variable;	// 0x316429cd
+ (id)expressionForVariableNameAssignment:(id)variableNameAssignment expression:(id)expression;	// 0x31642b4d
+ (id)expressionWithFormat:(id)format;	// 0x3164293d
+ (id)expressionWithFormat:(id)format argumentArray:(id)array;	// 0x316428d9
+ (id)expressionWithFormat:(id)format arguments:(void *)arguments;	// 0x31642969
- (id)initWithCoder:(id)coder;	// 0x315a57e5
- (id)initWithExpressionType:(unsigned)expressionType;	// 0x31582b09
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x31643061
- (BOOL)_shouldUseParensWithDescription;	// 0x3164305d
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x315a62a5
- (id)arguments;	// 0x31642f19
- (id)collection;	// 0x31642fa9
- (id)constantValue;	// 0x31642e65
- (id)copyWithZone:(NSZone *)zone;	// 0x31642dc5
- (id)description;	// 0x31642e0d
- (void)encodeWithCoder:(id)coder;	// 0x31642d3d
- (id)expressionBlock;	// 0x31643039
// converted property getter: - (unsigned)expressionType;	// 0x3158aaed
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x31642de9
- (id)falseExpression;	// 0x31643015
- (id)function;	// 0x31642ead
- (id)keyPath;	// 0x31642e41
- (id)leftExpression;	// 0x31642f3d
- (id)operand;	// 0x31642ed1
- (id)predicate;	// 0x31642f85
- (id)predicateFormat;	// 0x31642e1d
- (id)rightExpression;	// 0x31642f61
- (SEL)selector;	// 0x31642ef5
- (id)subexpression;	// 0x31642fcd
- (id)trueExpression;	// 0x31642ff1
- (id)variable;	// 0x31642e89
@end

