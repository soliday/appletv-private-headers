/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class ML3MusicLibrary;

@interface ML3Entity : NSObject {
@private
	ML3MusicLibrary *_library;	// 4 = 0x4
	long long _persistentID;	// 8 = 0x8
}
@property(readonly, assign) BOOL existsInLibrary;	// G=0x35d30c85; 
@property(assign) ML3MusicLibrary *library;	// G=0x35d1f5b9; S=0x35d32665; @synthesize=_library
@property(readonly, assign) long long persistentID;	// G=0x35d24af9; @synthesize=_persistentID
+ (BOOL)_deleteRowForPersistentIDs:(const long long *)persistentIDs count:(unsigned)count library:(id)library table:(id)table usingColumn:(id)column;	// 0x35d31c11
+ (id)aggregateQueryWithUnitQuery:(id)unitQuery foreignPersistentIDProperty:(id)property;	// 0x35d20109
+ (id)allProperties;	// 0x35d32349
+ (id)anyInLibrary:(id)library predicate:(id)predicate;	// 0x35d175d9
+ (id)collectionClassesToUpdateBeforeDelete;	// 0x35d32345
+ (id)defaultOrderingProperties;	// 0x35d31259
+ (BOOL)deleteFromLibrary:(id)library deletionType:(int)type persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x35d31dd1
+ (id)directCollectionQueryWithAggregateQuery:(id)aggregateQuery predicate:(id)predicate usingSections:(BOOL)sections;	// 0x35d3ef15
+ (id)disambiguatedSQLForProperty:(id)property;	// 0x35d17b81
+ (void)enumeratePersistentIDsInLibrary:(id)library afterRevision:(long long)revision usingBlock:(id)block;	// 0x35d3247d
+ (id)extraTablesToDelete;	// 0x35d3233d
+ (id)extraTablesToInsert;	// 0x35d2493d
+ (id)foreignColumnForProperty:(id)property;	// 0x35d31265
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x35d31261
+ (id)foreignPropertyForProperty:(id)property entityClass:(Class)aClass;	// 0x35d20559
+ (BOOL)incrementRevisionWithLibrary:(id)library persistentID:(long long)anId deletionType:(int)type;	// 0x35d302ad
+ (id)indexableSQLForProperties:(id)properties;	// 0x35d3234d
+ (BOOL)insertValues:(id)values intoTable:(id)table persistentID:(long long)anId library:(id)library;	// 0x35d24561
+ (BOOL)insertionChangesLibraryContents;	// 0x35d24945
+ (id)joinClauseForProperty:(id)property;	// 0x35d17c65
+ (BOOL)libraryContentsChangeForProperty:(id)property;	// 0x35d31c0d
+ (id)newWithDictionary:(id)dictionary inLibrary:(id)library;	// 0x35d22161
+ (id)newWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x35d31185
+ (id)newWithPersistentID:(long long)persistentID inLibrary:(id)library;	// 0x35d1ef19
+ (id)orderingSQLForProperties:(id)properties directionality:(id)directionality;	// 0x35d1e555
+ (id)persistentIDColumnForTable:(id)table;	// 0x35d32341
+ (void)predisambiguateProperties:(id)properties toDictionary:(id)dictionary;	// 0x35d1d45d
+ (id)predisambiguatedProperties;	// 0x35d17c0d
+ (id)queryWithLibrary:(id)library predicate:(id)predicate;	// 0x35d20999
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties;	// 0x35d1f775
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties usingSections:(BOOL)sections;	// 0x35d1d72d
+ (id)queryWithLibrary:(id)library predicate:(id)predicate usingSections:(BOOL)sections;	// 0x35d3ee99
+ (id)replacerWithProperties:(id)properties databaseHandle:(sqlite3 *)handle;	// 0x35d59059
+ (int)revisionTrackingCode;	// 0x35d32475
+ (id)sectionPropertyForProperty:(id)property;	// 0x35d3125d
+ (id)subselectPropertyForProperty:(id)property;	// 0x35d31181
+ (id)subselectStatementForProperty:(id)property;	// 0x35d182bd
+ (id)unsettableProperties;	// 0x35d2453d
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x35d22fdd
- (id)initWithPersistentID:(long long)persistentID inLibrary:(id)library;	// 0x35d1ef49
- (id)copyInLibrary:(id)library;	// 0x35d309a9
- (id)copyWithZone:(NSZone *)zone;	// 0x35d30b31
- (BOOL)deleteFromLibrary;	// 0x35d322e9
- (id)description;	// 0x35d30c29
- (void)didChangeValueForProperties:(const id *)properties count:(unsigned)count;	// 0x35d25905
// declared property getter: - (BOOL)existsInLibrary;	// 0x35d30c85
- (void)getValues:(id *)values forProperties:(id *)properties count:(unsigned)count;	// 0x35d1f025
- (unsigned)hash;	// 0x35d30c19
- (void)incrementRevision;	// 0x35d3260d
- (BOOL)isEqual:(id)equal;	// 0x35d30b95
// declared property getter: - (id)library;	// 0x35d1f5b9
- (BOOL)matchesPredicate:(id)predicate;	// 0x35d30f65
- (id)newSelectSQLForProperties:(id *)properties count:(unsigned)count predicate:(id)predicate;	// 0x35d1f1a5
// declared property getter: - (long long)persistentID;	// 0x35d24af9
// declared property setter: - (void)setLibrary:(id)library;	// 0x35d32665
- (BOOL)setValue:(id)value forProperty:(id)property;	// 0x35d24fd9
- (BOOL)setValues:(const id *)values forProperties:(const id *)properties count:(unsigned)count;	// 0x35d25001
- (BOOL)setValuesForPropertiesWithDictionary:(id)dictionary;	// 0x35d257e1
- (id)valueForProperty:(id)property;	// 0x35d2096d
@end

