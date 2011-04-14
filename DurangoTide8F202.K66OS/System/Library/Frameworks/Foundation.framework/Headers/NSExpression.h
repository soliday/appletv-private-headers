/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "Foundation-Structs.h"
#import "NSCoding.h"


@interface NSExpression : NSObject <NSCoding, NSCopying> {
@private
	void *_reserved;	// 4 = 0x4
	unsigned _expressionType;	// 8 = 0x8
}
@property(readonly, assign) unsigned expressionType;	// G=0x324266b1; converted property
+ (id)_keyPathExpressionForString:(id)string;	// 0x324cd7a9
+ (id)expressionForAggregate:(id)aggregate;	// 0x324cd901
+ (id)expressionForBlock:(id)block arguments:(id)arguments;	// 0x324cd679
+ (id)expressionForConstantValue:(id)constantValue;	// 0x324426c1
+ (id)expressionForEvaluatedObject;	// 0x3243e4d9
+ (id)expressionForFunction:(id)function arguments:(id)arguments;	// 0x324cdd69
+ (id)expressionForFunction:(id)function selectorName:(id)name arguments:(id)arguments;	// 0x324cd869
+ (id)expressionForIntersectSet:(id)intersectSet with:(id)with;	// 0x324cd711
+ (id)expressionForKeyPath:(id)keyPath;	// 0x32426439
+ (id)expressionForMinusSet:(id)minusSet with:(id)with;	// 0x324cd6c5
+ (id)expressionForSubquery:(id)subquery usingIteratorVariable:(id)variable predicate:(id)predicate;	// 0x324cd8b5
+ (id)expressionForSymbolicString:(id)symbolicString;	// 0x324cd941
+ (id)expressionForTernaryWithPredicate:(id)predicate trueExpression:(id)expression falseExpression:(id)expression3;	// 0x324cd7d9
+ (id)expressionForUnionSet:(id)unionSet with:(id)with;	// 0x324cd75d
+ (id)expressionForVariable:(id)variable;	// 0x324cd981
+ (id)expressionForVariableNameAssignment:(id)variableNameAssignment expression:(id)expression;	// 0x324cd825
+ (id)expressionWithFormat:(id)format;	// 0x324cdd3d
+ (id)expressionWithFormat:(id)format argumentArray:(id)array;	// 0x324cda19
+ (id)expressionWithFormat:(id)format arguments:(void *)arguments;	// 0x324cd9c1
- (id)initWithCoder:(id)coder;	// 0x324cd57d
- (id)initWithExpressionType:(unsigned)expressionType;	// 0x32415f71
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x324cdcf9
- (BOOL)_shouldUseParensWithDescription;	// 0x324cd565
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x32440f31
- (id)arguments;	// 0x324cdb91
- (id)collection;	// 0x324cdb01
- (id)constantValue;	// 0x324cdc45
- (id)copyWithZone:(NSZone *)zone;	// 0x324cdcd5
- (id)description;	// 0x324cd569
- (void)encodeWithCoder:(id)coder;	// 0x324cd601
- (id)expressionBlock;	// 0x324cda71
// converted property getter: - (unsigned)expressionType;	// 0x324266b1
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x324cdcb1
- (id)falseExpression;	// 0x324cda95
- (id)function;	// 0x324cdbfd
- (id)keyPath;	// 0x324cdc69
- (id)leftExpression;	// 0x324cdb6d
- (id)operand;	// 0x324cdbd9
- (id)predicate;	// 0x324cdb25
- (id)predicateFormat;	// 0x324cdc8d
- (id)rightExpression;	// 0x324cdb49
- (SEL)selector;	// 0x324cdbb5
- (id)subexpression;	// 0x324cdadd
- (id)trueExpression;	// 0x324cdab9
- (id)variable;	// 0x324cdc21
@end
