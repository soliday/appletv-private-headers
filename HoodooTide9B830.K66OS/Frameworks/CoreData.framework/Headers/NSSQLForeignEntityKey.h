/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLColumn.h"

@class NSSQLForeignKey;

__attribute__((visibility("hidden")))
@interface NSSQLForeignEntityKey : NSSQLColumn {
@private
	NSSQLForeignKey *_foreignKey;	// 52 = 0x34
}
@property(readonly, retain) NSSQLForeignKey *foreignKey;	// G=0x3231af31; converted property
- (id)initForReadOnlyFetchingOfEntity:(id)entity toOneRelationship:(id)oneRelationship;	// 0x3231afb9
- (id)initWithEntity:(id)entity foreignKey:(id)key;	// 0x3231b0b9
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x3231b05d
- (void)dealloc;	// 0x3231af51
// converted property getter: - (id)foreignKey;	// 0x3231af31
- (void)setFKForReadOnlyFetch:(id)readOnlyFetch;	// 0x3231af41
- (id)toOneRelationship;	// 0x3231af91
@end

