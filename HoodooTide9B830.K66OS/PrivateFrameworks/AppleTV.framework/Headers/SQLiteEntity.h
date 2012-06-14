/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "SQLiteEntity.h"
#import "NSObject.h"

@class ISSQLiteDatabase;

@protocol SQLiteEntity <NSObject>
+ (id)copyDatabaseDictionaryToSetClientDictionary:(id)setClientDictionary;
+ (id)databasePropertyToGetClientProperty:(id)getClientProperty;
+ (id)databasePropertyToSetClientProperty:(id)setClientProperty;
+ (id)databaseTable;
+ (id)databaseValueForProperty:(id)property clientValue:(id)value;
+ (id)disambiguatedSQLForProperty:(id)property;
+ (id)foreignDatabaseColumnForProperty:(id)property;
+ (id)foreignDatabaseTableForProperty:(id)property;
+ (id)foreignDatabaseTablesToDelete;
+ (id)foreignKeyColumnForTable:(id)table;
+ (id)joinClauseForProperty:(id)property;
- (BOOL)deleteFromDatabase;
- (void)getValues:(id *)values forProperties:(id *)properties count:(unsigned)count;
- (void)setExternalValuesWithDictionary:(id)dictionary;
- (BOOL)setValue:(id)value forProperty:(id)property;
- (BOOL)setValuesWithDictionary:(id)dictionary;
- (id)valueForExternalProperty:(id)externalProperty;
- (id)valueForProperty:(id)property;
@end

__attribute__((visibility("hidden")))
@interface SQLiteEntity : NSObject <SQLiteEntity> {
@private
	ISSQLiteDatabase *_database;	// 4 = 0x4
	long long _persistentID;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) ISSQLiteDatabase *database;	// G=0x32b511fd; @synthesize=_database
@property(readonly, assign, nonatomic) BOOL existsInDatabase;	// G=0x32b4f895; 
@property(readonly, assign, nonatomic) long long persistentID;	// G=0x32b5120d; @synthesize=_persistentID
+ (id)_aggregateValueForProperty:(id)property function:(id)function predicate:(id)predicate database:(id)database;	// 0x32b541b1
+ (BOOL)_insertValues:(id)values intoTable:(id)table withPersistentID:(long long)persistentID database:(id)database;	// 0x32b5096d
+ (id)anyInDatabase:(id)database predicate:(id)predicate;	// 0x32b53f9d
+ (id)copyDatabaseDictionaryToSetClientDictionary:(id)setClientDictionary;	// 0x32b4f3d9
+ (id)databasePropertyToGetClientProperty:(id)getClientProperty;	// 0x32b4f525
+ (id)databasePropertyToSetClientProperty:(id)setClientProperty;	// 0x32b4f529
+ (id)databaseTable;	// 0x32b4f531
+ (id)databaseValueForProperty:(id)property clientValue:(id)value;	// 0x32b4f52d
+ (id)disambiguatedSQLForProperty:(id)property;	// 0x32b4f579
+ (id)foreignDatabaseColumnForProperty:(id)property;	// 0x32b4f5e1
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x32b4f5e5
+ (id)foreignDatabaseTablesToDelete;	// 0x32b4f5e9
+ (id)foreignKeyColumnForTable:(id)table;	// 0x32b4f5ed
+ (id)joinClauseForProperty:(id)property;	// 0x32b4f5f1
+ (id)maxValueForProperty:(id)property predicate:(id)predicate database:(id)database;	// 0x32b544fd
+ (id)minValueForProperty:(id)property predicate:(id)predicate database:(id)database;	// 0x32b54529
+ (id)queryWithDatabase:(id)database predicate:(id)predicate;	// 0x32b54555
+ (id)queryWithDatabase:(id)database predicate:(id)predicate orderingProperties:(id)properties;	// 0x32b54579
- (id)initWithPersistentID:(long long)persistentID inDatabase:(id)database;	// 0x32b4efd5
- (id)initWithPropertyValues:(id)propertyValues inDatabase:(id)database;	// 0x32b4f029
- (id)_copyTableClusteredValuesWithValues:(id)values;	// 0x32b50df1
- (BOOL)_deleteRowFromTable:(id)table usingColumn:(id)column;	// 0x32b50fe9
// declared property getter: - (id)database;	// 0x32b511fd
- (BOOL)deleteFromDatabase;	// 0x32b4f5f5
// declared property getter: - (BOOL)existsInDatabase;	// 0x32b4f895
- (void)getValues:(id *)values forProperties:(id *)properties count:(unsigned)count;	// 0x32b4fadd
// declared property getter: - (long long)persistentID;	// 0x32b5120d
- (void)setExternalValuesWithDictionary:(id)dictionary;	// 0x32b4fe8d
- (BOOL)setValue:(id)value forProperty:(id)property;	// 0x32b4fe91
- (BOOL)setValuesWithDictionary:(id)dictionary;	// 0x32b4ff31
- (id)valueForExternalProperty:(id)externalProperty;	// 0x32b5093d
- (id)valueForProperty:(id)property;	// 0x32b50941
@end

