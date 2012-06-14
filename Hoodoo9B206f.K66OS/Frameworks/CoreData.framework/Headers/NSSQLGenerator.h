/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLGenerator : NSObject {
@private
	NSSQLCore *_persistentStore;	// 4 = 0x4
}
+ (void)initialize;	// 0x36258b31
- (id)initWithPersistentStore:(id)persistentStore;	// 0x3623a2c5
- (id)_predicateForSpecificEntity:(id)specificEntity;	// 0x362f1ca9
- (id)_predicateRestrictingSuperentitiesForEntity:(id)entity;	// 0x362f1f29
- (id)_predicateRestrictingToSubentitiesForEntity:(id)entity;	// 0x362f1de9
- (void)generateGroupByIntermediatesForProperties:(id)properties inContext:(id)context;	// 0x362f1ba9
- (void)generateHavingIntermediateForPredicate:(id)predicate inContext:(id)context;	// 0x362f1b21
- (void)generateIntermediateForLimit:(unsigned)limit inContext:(id)context;	// 0x3623dba9
- (void)generateIntermediateForOffset:(unsigned)offset inContext:(id)context;	// 0x362f1c29
- (id)generateIntermediatesForFetchInContext:(id)context countOnly:(BOOL)only;	// 0x3623c461
- (void)generateOrderIntermediateInContext:(id)context;	// 0x3623da39
- (void)generateSelectIntermediateInContext:(id)context;	// 0x3623d191
- (void)generateWhereIntermediatesInContext:(id)context;	// 0x3623cccd
- (id)initializeContextForFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance nestingLevel:(unsigned)level;	// 0x3623a759
- (id)newSQLStatementForFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance countOnly:(BOOL)only nestingLevel:(unsigned)level;	// 0x3623a305
- (id)predicateForFetchRequestInContext:(id)context;	// 0x3623ad51
@end

