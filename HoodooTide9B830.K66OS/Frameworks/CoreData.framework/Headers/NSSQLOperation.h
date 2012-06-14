/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSSQLRow, NSManagedObject, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSSQLOperation : NSObject {
@private
	unsigned _databaseOperator;	// 4 = 0x4
	NSSQLRow *_rowForUpdate;	// 8 = 0x8
	NSMutableArray *_adapterOps;	// 12 = 0xc
	NSManagedObject *_object;	// 16 = 0x10
	NSSQLRow *_dbSnapshot;	// 20 = 0x14
	NSMutableDictionary *_mtmDeltas;	// 24 = 0x18
}
@property(assign) unsigned databaseOperator;	// G=0x3232e0cd; S=0x3232e45d; converted property
@property(readonly, retain) NSSQLRow *dbSnapshot;	// G=0x3232e09d; converted property
@property(readonly, retain) NSManagedObject *object;	// G=0x3232e0bd; converted property
@property(retain) NSSQLRow *rowForUpdate;	// G=0x3232e0ad; S=0x3232e5b9; converted property
- (id)initWithObject:(id)object entity:(id)entity;	// 0x3232e0fd
- (id)adapterOperations;	// 0x3232e0dd
- (void)addAdapterOperation:(id)operation;	// 0x3232e401
- (void)addDelta:(id)delta forManyToManyKey:(id)manyKey;	// 0x3232e14d
// converted property getter: - (unsigned)databaseOperator;	// 0x3232e0cd
// converted property getter: - (id)dbSnapshot;	// 0x3232e09d
- (void)dealloc;	// 0x3232e629
- (id)description;	// 0x3232e1b5
- (id)manyToManyDeltas;	// 0x3232e0ed
// converted property getter: - (id)object;	// 0x3232e0bd
- (id)objectID;	// 0x3232e599
- (void)removeAdapterOperation:(id)operation;	// 0x3232e3a5
// converted property getter: - (id)rowForUpdate;	// 0x3232e0ad
- (void)setDBSnapshot:(id)snapshot;	// 0x3232e5e1
// converted property setter: - (void)setDatabaseOperator:(unsigned)anOperator;	// 0x3232e45d
// converted property setter: - (void)setRowForUpdate:(id)update;	// 0x3232e5b9
@end
