/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLAdapter : NSObject {
@private
	NSMutableArray *_connections;	// 4 = 0x4
	NSSQLCore *_sqlCore;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *connections;	// G=0x33fe1c61; converted property
@property(readonly, retain) NSSQLCore *sqlCore;	// G=0x33f3e541; converted property
- (id)initWithSQLCore:(id)sqlcore;	// 0x33f3e1dd
- (id)_newSelectStatementWithFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance;	// 0x33f48c41
- (id)_originalRowForUpdate:(id)update;	// 0x33fe1e15
// converted property getter: - (id)connections;	// 0x33fe1c61
- (id)createConnection;	// 0x33fe36f5
- (void)dealloc;	// 0x33f5f78d
- (Class)generatorClass;	// 0x33fe1d61
- (BOOL)hasOpenConnections;	// 0x33fe1c7d
- (id)newCopyAndInsertStatementForManyToMany:(id)many toManyToMany:(id)many2 intermediateTableName:(id)name invertColumns:(BOOL)columns;	// 0x33fe23fd
- (id)newCountStatementWithFetchRequest:(id)fetchRequest;	// 0x33fe3315
- (id)newCreateIndexStatementForColumn:(id)column;	// 0x33fe2c85
- (id)newCreateIndexStatementForColumnWithName:(id)name inTableWithName:(id)name2;	// 0x33fe2bd5
- (id)newCreateIndexStatementForColumns:(id)columns;	// 0x33fe2eb1
- (id)newCreatePrimaryKeyTableStatement;	// 0x33fe20b1
- (id)newCreateTableStatementForEntity:(id)entity;	// 0x33fe1ef1
- (id)newCreateTableStatementForManyToMany:(id)many;	// 0x33fe28d1
- (id)newDeleteStatementWithCorrelation:(id)correlation;	// 0x33fe30bd
- (id)newDeleteStatementWithRow:(id)row;	// 0x33fe1e59
- (id)newDropTableStatementForTableNamed:(id)tableNamed;	// 0x33fe27a5
- (id)newGeneratorWithStatement:(id)statement;	// 0x33fe366d
- (id)newInsertStatementWithCorrelation:(id)correlation;	// 0x33fe324d
- (id)newInsertStatementWithRow:(id)row;	// 0x33fe1d7d
- (id)newPrimaryKeyInitializeStatementForEntity:(id)entity withInitialMaxPK:(long long)initialMaxPK;	// 0x33fe21ed
- (id)newRenameTableStatementFrom:(id)from to:(id)to;	// 0x33fe2825
- (id)newRenameTableStatementFromManyToMany:(id)many toManyToMany:(id)many2 orToRandomSpot:(id)randomSpot;	// 0x33fe2325
- (id)newSQLStringForResettingPrimaryKeMaxWithEntities:(id)entities;	// 0x33fe2d0d
- (id)newSelectStatementWithFetchRequest:(id)fetchRequest;	// 0x33f48c2d
- (id)newStatementWithEntity:(id)entity;	// 0x33f4af95
- (id)newStatementWithSQLString:(id)sqlstring;	// 0x33f40619
- (id)newStatementWithoutEntity;	// 0x33fe1d09
- (id)newUpdateStatementWithCorrelation:(id)correlation;	// 0x33fe3185
- (id)newUpdateStatementWithRow:(id)row;	// 0x33fe3551
- (void)registerConnection:(id)connection;	// 0x33f3e561
// converted property getter: - (id)sqlCore;	// 0x33f3e541
- (unsigned)sqlTypeForExpressionConstantValue:(id)expressionConstantValue;	// 0x33f4ed91
- (Class)statementClass;	// 0x33fe1d45
- (BOOL)supportsCorrelatedSubqueries;	// 0x33fe1c79
- (id)type;	// 0x33fe2e7d
- (id)typeStringForColumn:(id)column;	// 0x33fe1c71
- (id)typeStringForSQLType:(unsigned)sqltype;	// 0x33fe1c75
- (void)unregisterConnection:(id)connection;	// 0x33fe2ce9
- (id)url;	// 0x33f3e655
@end

