/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSAttributeDescription;

__attribute__((visibility("hidden")))
@interface NSSQLBindVariable : NSObject {
@private
	int _cd_rc;	// 4 = 0x4
	id _value;	// 8 = 0x8
	unsigned _sqlType;	// 12 = 0xc
	unsigned _index;	// 16 = 0x10
	long long _int64;	// 20 = 0x14
	NSAttributeDescription *_attributeDescription;	// 28 = 0x1c
}
@property(readonly, retain) NSAttributeDescription *attributeDescription;	// G=0x32303565; converted property
@property(assign) unsigned index;	// G=0x32303555; S=0x3226f4c1; converted property
@property(assign) long long int64;	// G=0x323035f5; S=0x32303529; converted property
@property(readonly, assign) unsigned sqlType;	// G=0x32271175; converted property
@property(assign) unsigned unsignedInt;	// G=0x323035bd; S=0x3230353d; converted property
@property(retain) id value;	// G=0x322711a5; S=0x32303575; converted property
- (id)initWithInt64:(long long)int64 sqlType:(unsigned)type;	// 0x323036f9
- (id)initWithUnsignedInt:(unsigned)unsignedInt sqlType:(unsigned)type;	// 0x323036b9
- (id)initWithValue:(id)value sqlType:(unsigned)type attributeDescription:(id)description;	// 0x3226e585
- (BOOL)_isDeallocating;	// 0x32303635
- (BOOL)_tryRetain;	// 0x3230365d
// converted property getter: - (id)attributeDescription;	// 0x32303565
- (void)dealloc;	// 0x32271a15
- (BOOL)hasObjectValue;	// 0x32271185
// converted property getter: - (unsigned)index;	// 0x32303555
// converted property getter: - (long long)int64;	// 0x323035f5
- (oneway void)release;	// 0x3226e671
- (id)retain;	// 0x3226e639
- (unsigned)retainCount;	// 0x32303515
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x3226f4c1
// converted property setter: - (void)setInt64:(long long)a64;	// 0x32303529
// converted property setter: - (void)setUnsignedInt:(unsigned)int;	// 0x3230353d
// converted property setter: - (void)setValue:(id)value;	// 0x32303575
// converted property getter: - (unsigned)sqlType;	// 0x32271175
// converted property getter: - (unsigned)unsignedInt;	// 0x323035bd
// converted property getter: - (id)value;	// 0x322711a5
@end

