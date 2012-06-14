/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {
	NSString *_name;	// 4 = 0x4
	NSString *_grouping;	// 8 = 0x8
	id _value;	// 12 = 0xc
	NSMutableArray *_types;	// 16 = 0x10
	BOOL _primary;	// 20 = 0x14
}
@property(retain) NSString *grouping;	// G=0x308c17c1; S=0x308c29c5; converted property
@property(assign) BOOL isPrimary;	// G=0x308c17e1; S=0x308c17f1; converted property
@property(readonly, retain) NSString *name;	// G=0x308c17b1; converted property
@property(readonly, retain) NSMutableArray *types;	// G=0x308c17a1; converted property
@property(retain) id value;	// G=0x308c17d1; S=0x308c2a35; converted property
- (id)initWithName:(id)name;	// 0x308c2b11
- (void)addType:(id)type;	// 0x308c2a11
- (void)addTypes:(id)types;	// 0x308c29ed
- (void)dealloc;	// 0x308c2a89
- (id)description;	// 0x308c2925
- (void)finalize;	// 0x308c2a5d
// converted property getter: - (id)grouping;	// 0x308c17c1
// converted property getter: - (BOOL)isPrimary;	// 0x308c17e1
// converted property getter: - (id)name;	// 0x308c17b1
// converted property setter: - (void)setGrouping:(id)grouping;	// 0x308c29c5
// converted property setter: - (void)setIsPrimary:(BOOL)primary;	// 0x308c17f1
// converted property setter: - (void)setValue:(id)value;	// 0x308c2a35
// converted property getter: - (id)types;	// 0x308c17a1
// converted property getter: - (id)value;	// 0x308c17d1
@end

