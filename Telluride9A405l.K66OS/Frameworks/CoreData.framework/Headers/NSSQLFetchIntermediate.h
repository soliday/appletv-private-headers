/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSSQLSelectIntermediate, NSMutableArray, NSSQLLimitIntermediate, NSSQLEntity, NSSQLOffsetIntermediate, NSMutableSet, NSSQLWhereIntermediate, NSSQLGroupByIntermediate, NSSQLOrderIntermediate, NSSQLHavingIntermediate, NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSSQLFetchIntermediate : NSSQLIntermediate {
@private
	NSSQLEntity *_governingEntity;	// 8 = 0x8
	NSString *_governingAlias;	// 12 = 0xc
	NSString *_correlationToken;	// 16 = 0x10
	NSSQLSelectIntermediate *_selectClause;	// 20 = 0x14
	NSSQLWhereIntermediate *_whereClause;	// 24 = 0x18
	NSSQLGroupByIntermediate *_groupByClause;	// 28 = 0x1c
	NSSQLHavingIntermediate *_havingClause;	// 32 = 0x20
	NSSQLLimitIntermediate *_limitClause;	// 36 = 0x24
	NSSQLOffsetIntermediate *_offsetClause;	// 40 = 0x28
	NSSQLOrderIntermediate *_orderIntermediate;	// 44 = 0x2c
	NSMutableArray *_joinIntermediates;	// 48 = 0x30
	NSMutableDictionary *_joinKeypaths;	// 52 = 0x34
	NSMutableSet *_groupByKeypaths;	// 56 = 0x38
	BOOL _isDictionaryCountFetch;	// 60 = 0x3c
}
@property(assign, getter=isDictionaryCountFetch) BOOL dictionaryCountFetch;	// G=0x33ffa9a9; S=0x33ffa9b9; converted property
@property(retain) NSString *governingAlias;	// G=0x33f4c4d1; S=0x33ffac09; converted property
@property(retain) NSSQLEntity *governingEntity;	// G=0x33f4fe35; S=0x33ffa9e9; converted property
@property(retain) id groupByIntermediate;	// G=0x33f64549; S=0x33ffb119; converted property
@property(retain) id havingIntermediate;	// G=0x33ffa9c9; S=0x33ffb03d; converted property
@property(readonly, retain) NSMutableArray *joinIntermediates;	// G=0x33f4e7d1; converted property
@property(retain) id limitIntermediate;	// G=0x33ffa9d9; S=0x33f4c835; converted property
@property(retain) id selectIntermediate;	// G=0x33f4c5f5; S=0x33f4c5ad; converted property
- (id)initWithEntity:(id)entity alias:(id)alias inScope:(id)scope;	// 0x33f4b765
- (id)initWithScope:(id)scope;	// 0x33f4b7b9
- (id)_generateJoinSQLStringInContext:(id)context;	// 0x33f4fe71
- (void)addGroupByKeypath:(id)keypath;	// 0x33ffb0ad
- (void)addJoinIntermediate:(id)intermediate atKeypathWithComponents:(id)components;	// 0x33ffae5d
- (void)dealloc;	// 0x33f50145
- (id)fetchIntermediate;	// 0x33f4fe31
- (id)fetchIntermediateForKeypathExpression:(id)keypathExpression;	// 0x33f4e3dd
- (id)finalJoinForKeypathWithComponents:(id)components;	// 0x33ffad85
- (id)generateSQLStringInContext:(id)context;	// 0x33f4c88d
// converted property getter: - (id)governingAlias;	// 0x33f4c4d1
- (id)governingAliasForKeypathExpression:(id)keypathExpression;	// 0x33f4df5d
// converted property getter: - (id)governingEntity;	// 0x33f4fe35
- (id)governingEntityForKeypathExpression:(id)keypathExpression;	// 0x33f4de6d
- (BOOL)groupByClauseContainsKeypath:(id)keypath;	// 0x33ffb085
// converted property getter: - (id)groupByIntermediate;	// 0x33f64549
// converted property getter: - (id)havingIntermediate;	// 0x33ffa9c9
// converted property getter: - (BOOL)isDictionaryCountFetch;	// 0x33ffa9a9
- (BOOL)isFunctionScoped;	// 0x33ffb161
// converted property getter: - (id)joinIntermediates;	// 0x33f4e7d1
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)anIn;	// 0x33ffaa19
// converted property getter: - (id)limitIntermediate;	// 0x33ffa9d9
- (void)promoteToOuterJoinAtKeypathWithComponents:(id)components;	// 0x33ffac99
- (void)promoteToOuterJoinsAlongKeypathWithComponents:(id)components;	// 0x33f62cb9
- (void)selectDistinct;	// 0x33ffa9f9
// converted property getter: - (id)selectIntermediate;	// 0x33f4c5f5
- (void)setCorrelationToken:(id)token;	// 0x33ffac51
// converted property setter: - (void)setDictionaryCountFetch:(BOOL)fetch;	// 0x33ffa9b9
// converted property setter: - (void)setGoverningAlias:(id)alias;	// 0x33ffac09
// converted property setter: - (void)setGoverningEntity:(id)entity;	// 0x33ffa9e9
// converted property setter: - (void)setGroupByIntermediate:(id)intermediate;	// 0x33ffb119
// converted property setter: - (void)setHavingIntermediate:(id)intermediate;	// 0x33ffb03d
// converted property setter: - (void)setLimitIntermediate:(id)intermediate;	// 0x33f4c835
- (void)setOffsetIntermediate:(id)intermediate;	// 0x33ffaff5
- (void)setOrderIntermediate:(id)intermediate;	// 0x33f4c72d
// converted property setter: - (void)setSelectIntermediate:(id)intermediate;	// 0x33f4c5ad
- (void)setWhereIntermediate:(id)intermediate;	// 0x33f4bd05
@end

