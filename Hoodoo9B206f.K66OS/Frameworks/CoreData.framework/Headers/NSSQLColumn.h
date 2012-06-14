/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLProperty.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLColumn : NSSQLProperty {
@private
	NSString *_columnName;	// 24 = 0x18
	int _sqlType;	// 28 = 0x1c
	unsigned _precision;	// 32 = 0x20
	int _scale;	// 36 = 0x24
	unsigned _fetchIndex;	// 40 = 0x28
	unsigned _slot;	// 44 = 0x2c
	unsigned _allowAliasing;	// 48 = 0x30
}
@property(assign) BOOL allowAliasing;	// G=0x36240b69; S=0x3623d8f5; converted property
@property(readonly, retain) NSString *columnName;	// G=0x3623fc41; converted property
@property(readonly, assign) unsigned fetchIndex;	// G=0x36244461; converted property
@property(assign) unsigned precision;	// G=0x36255ca9; S=0x362d5a8d; converted property
@property(assign) int scale;	// G=0x36255cb9; S=0x362d5a9d; converted property
@property(readonly, assign) unsigned slot;	// G=0x36244451; converted property
- (id)initForReadOnlyFetching;	// 0x36255d09
- (id)initWithColumnName:(id)columnName sqlType:(unsigned)type;	// 0x362335d5
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x3622d439
- (void)_setColumnName:(id)name;	// 0x3622d591
- (void)_setFetchIndex:(unsigned)index;	// 0x3622d70d
- (void)_setSQLType:(unsigned)type;	// 0x3622d5d9
- (void)_setSlotIfDefault:(unsigned)aDefault;	// 0x3622df21
// converted property getter: - (BOOL)allowAliasing;	// 0x36240b69
- (id)cloneForReadOnlyFetching;	// 0x362d5aad
// converted property getter: - (id)columnName;	// 0x3623fc41
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x36255ae1
- (void)dealloc;	// 0x36243a75
- (id)description;	// 0x362d5ae1
// converted property getter: - (unsigned)fetchIndex;	// 0x36244461
// converted property getter: - (unsigned)precision;	// 0x36255ca9
- (unsigned)roughSizeEstimate;	// 0x36244471
// converted property getter: - (int)scale;	// 0x36255cb9
// converted property setter: - (void)setAllowAliasing:(BOOL)aliasing;	// 0x3623d8f5
// converted property setter: - (void)setPrecision:(unsigned)precision;	// 0x362d5a8d
// converted property setter: - (void)setScale:(int)scale;	// 0x362d5a9d
// converted property getter: - (unsigned)slot;	// 0x36244451
- (unsigned)sqlType;	// 0x36233d85
@end

