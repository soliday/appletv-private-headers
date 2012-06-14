/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLColumn.h"

@class NSSQLForeignKey;

__attribute__((visibility("hidden")))
@interface NSSQLForeignOrderKey : NSSQLColumn {
@private
	NSSQLForeignKey *_foreignKey;	// 52 = 0x34
}
@property(readonly, retain) NSSQLForeignKey *foreignKey;	// G=0x323602dd; converted property
- (id)initForReadOnlyFetchingOfEntity:(id)entity toOneRelationship:(id)oneRelationship;	// 0x32360365
- (id)initWithEntity:(id)entity foreignKey:(id)key;	// 0x32360465
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x32360409
- (void)dealloc;	// 0x323602fd
// converted property getter: - (id)foreignKey;	// 0x323602dd
- (void)setFKForReadOnlyFetch:(id)readOnlyFetch;	// 0x323602ed
- (id)toOneRelationship;	// 0x3236033d
@end

