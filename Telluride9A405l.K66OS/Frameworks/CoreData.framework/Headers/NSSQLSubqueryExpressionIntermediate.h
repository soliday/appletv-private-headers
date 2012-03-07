/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLExpressionIntermediate.h"

@class NSSQLFetchIntermediate, NSSQLColumn, NSMutableArray, NSMutableString, NSExpression, NSString, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate {
@private
	NSExpression *_trailingKeypath;	// 16 = 0x10
	NSExpression *_variableExpression;	// 20 = 0x14
	NSSQLFetchIntermediate *_fetchIntermediate;	// 24 = 0x18
	NSSQLEntity *_selectFromEntity;	// 28 = 0x1c
	NSMutableString *_selectFromCorrelationTarget;	// 32 = 0x20
	NSString *_selectEntityAlias;	// 36 = 0x24
	NSSQLEntity *_governingEntityForVariable;	// 40 = 0x28
	NSSQLColumn *_variableColumn;	// 44 = 0x2c
	NSString *_variableAlias;	// 48 = 0x30
	NSSQLColumn *_targetColumn;	// 52 = 0x34
	NSString *_targetAlias;	// 56 = 0x38
	NSMutableArray *_keypathsToPromote;	// 60 = 0x3c
	BOOL _useDistinct;	// 64 = 0x40
	BOOL _isCount;	// 65 = 0x41
	BOOL _hasTrailingFunction;	// 66 = 0x42
	BOOL _onlyTrailIsCount;	// 67 = 0x43
	BOOL _subqueryHasTruePredicate;	// 68 = 0x44
}
- (id)initWithExpression:(id)expression trailingKeypath:(id)keypath inScope:(id)scope;	// 0x340199e9
- (void)_createCollectionJoinsForFetchInContext:(id)context;	// 0x34017409
- (void)_createSelectClauseInFetchWithContext:(id)context;	// 0x34018b85
- (id)_generateSQLForVariableExpression:(id)variableExpression inContext:(id)context;	// 0x34019711
- (BOOL)_isKeypathScopedToSubquery:(id)subquery;	// 0x34019931
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)subqueryScopedKeypath;	// 0x340195b5
- (void)_promoteJoinsForSubqueryScopedKeypaths;	// 0x340194d1
- (void)_setVariableColumn:(id)column;	// 0x34018b3d
- (void)dealloc;	// 0x34016c9d
- (id)fetchIntermediateForKeypathExpression:(id)keypathExpression;	// 0x340198dd
- (id)generateSQLStringInContext:(id)context;	// 0x34016dc9
- (id)governingAliasForKeypathExpression:(id)keypathExpression;	// 0x34019825
- (id)governingEntityForKeypathExpression:(id)keypathExpression;	// 0x34019881
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)anIn;	// 0x340192dd
- (void)selectDistinct;	// 0x34016c89
@end
