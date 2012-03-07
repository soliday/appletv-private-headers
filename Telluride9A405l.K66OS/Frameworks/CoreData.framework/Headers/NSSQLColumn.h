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
@property(assign) BOOL allowAliasing;	// G=0x33f4f735; S=0x33f4c4c1; converted property
@property(readonly, retain) NSString *columnName;	// G=0x33f4e80d; converted property
@property(readonly, assign) unsigned fetchIndex;	// G=0x33f5302d; converted property
@property(assign) unsigned precision;	// G=0x33f64a0d; S=0x33fe4185; converted property
@property(assign) int scale;	// G=0x33f64a1d; S=0x33fe4195; converted property
@property(readonly, assign) unsigned slot;	// G=0x33f5301d; converted property
- (id)initForReadOnlyFetching;	// 0x33f64a6d
- (id)initWithColumnName:(id)columnName sqlType:(unsigned)type;	// 0x33f4209d
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x33f3bf15
- (void)_setColumnName:(id)name;	// 0x33f3c06d
- (void)_setFetchIndex:(unsigned)index;	// 0x33f3c1e9
- (void)_setSQLType:(unsigned)type;	// 0x33f3c0b5
- (void)_setSlotIfDefault:(unsigned)aDefault;	// 0x33f3c9fd
// converted property getter: - (BOOL)allowAliasing;	// 0x33f4f735
- (id)cloneForReadOnlyFetching;	// 0x33fe41a5
// converted property getter: - (id)columnName;	// 0x33f4e80d
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x33f64845
- (void)dealloc;	// 0x33f52641
- (id)description;	// 0x33fe41d9
// converted property getter: - (unsigned)fetchIndex;	// 0x33f5302d
// converted property getter: - (unsigned)precision;	// 0x33f64a0d
- (unsigned)roughSizeEstimate;	// 0x33f5303d
// converted property getter: - (int)scale;	// 0x33f64a1d
// converted property setter: - (void)setAllowAliasing:(BOOL)aliasing;	// 0x33f4c4c1
// converted property setter: - (void)setPrecision:(unsigned)precision;	// 0x33fe4185
// converted property setter: - (void)setScale:(int)scale;	// 0x33fe4195
// converted property getter: - (unsigned)slot;	// 0x33f5301d
- (unsigned)sqlType;	// 0x33f42951
@end
