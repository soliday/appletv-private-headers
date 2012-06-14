/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSSQLIntermediate : NSObject {
@private
	NSSQLIntermediate *_scope;	// 4 = 0x4
}
@property(readonly, retain) NSSQLIntermediate *scope;	// G=0x3228759d; converted property
+ (BOOL)expressionIsBasicKeypath:(id)keypath;	// 0x32320069
+ (BOOL)isSimpleKeypath:(id)keypath;	// 0x3226d329
- (id)initWithScope:(id)scope;	// 0x3226ac8d
- (BOOL)_canDoASubselectForExpression:(id)expression inContext:(id)context;	// 0x32320785
- (BOOL)_functionExpressionIsSubqueryFollowedByKeypath:(id)keypath;	// 0x32320dc1
- (id)_generateSQLForConstantCollection:(id)constantCollection inContext:(id)context;	// 0x323208a1
- (id)_generateSQLForConstantValue:(id)constantValue inContext:(id)context;	// 0x3226dc51
- (id)_generateSQLForExpression:(id)expression allowToMany:(BOOL)many inContext:(id)context;	// 0x3226c7c1
- (id)_generateSQLForExpressionCollection:(id)expressionCollection allowToMany:(BOOL)many inContext:(id)context;	// 0x32320a05
- (id)_generateSQLForFetchExpression:(id)fetchExpression allowToMany:(BOOL)many inContext:(id)context;	// 0x32320295
- (id)_generateSQLForFunctionExpression:(id)functionExpression allowToMany:(BOOL)many inContext:(id)context;	// 0x32320be9
- (id)_generateSQLForKeyPathExpression:(id)keyPathExpression allowToMany:(BOOL)many inContext:(id)context;	// 0x3226c9f5
- (id)_generateSQLForSubqueryExpression:(id)subqueryExpression trailingKeypath:(id)keypath inContext:(id)context;	// 0x32320169
- (id)_generateSQLForTernaryExpression:(id)ternaryExpression allowToMany:(BOOL)many inContext:(id)context;	// 0x323200fd
- (id)_generateSQLForVariableExpression:(id)variableExpression inContext:(id)context;	// 0x323211ad
- (id)_lastScopedItem;	// 0x32321159
- (void)_promoteJoinsForAggregateExpression:(id)aggregateExpression;	// 0x32320ec5
- (void)_promoteJoinsForFunctionExpression:(id)functionExpression;	// 0x32320f89
- (void)_promoteJoinsForKeypathExpression:(id)keypathExpression;	// 0x32281ef9
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)subqueryScopedKeypath;	// 0x3232112d
- (void)_promoteJoinsForSubqueryScopedKeypaths;	// 0x3226e825
- (void)_promoteJoinsForTernaryExpression:(id)ternaryExpression;	// 0x32320e69
- (BOOL)expressionIsBasicKeypath:(id)keypath;	// 0x32321295
- (id)fetchIntermediate;	// 0x3226f245
- (id)fetchIntermediateForKeypathExpression:(id)keypathExpression;	// 0x3226d7ed
- (id)generateSQLStringInContext:(id)context;	// 0x32321319
- (id)governingAlias;	// 0x323211d9
- (id)governingAliasForKeypathExpression:(id)keypathExpression;	// 0x3226d36d
- (id)governingEntityForKeypathExpression:(id)keypathExpression;	// 0x3226d27d
- (BOOL)isFunctionScoped;	// 0x323212ed
- (BOOL)isHavingScoped;	// 0x323212c1
- (BOOL)isOrScoped;	// 0x3226dc15
- (BOOL)isSelectTargetScoped;	// 0x3226cdfd
- (BOOL)isSimpleKeypath:(id)keypath;	// 0x3226d2fd
- (BOOL)isVariableBasedKeypathScopedBySubquery:(id)subquery;	// 0x323211f9
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)anIn;	// 0x32321185
- (void)promoteJoinsInKeypathsForExpression:(id)expression;	// 0x32281e85
// converted property getter: - (id)scope;	// 0x3228759d
@end

