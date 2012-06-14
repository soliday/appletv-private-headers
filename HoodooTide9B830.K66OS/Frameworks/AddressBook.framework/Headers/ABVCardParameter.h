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
@property(retain) NSString *grouping;	// G=0x34ed47c1; S=0x34ed59c5; converted property
@property(assign) BOOL isPrimary;	// G=0x34ed47e1; S=0x34ed47f1; converted property
@property(readonly, retain) NSString *name;	// G=0x34ed47b1; converted property
@property(readonly, retain) NSMutableArray *types;	// G=0x34ed47a1; converted property
@property(retain) id value;	// G=0x34ed47d1; S=0x34ed5a35; converted property
- (id)initWithName:(id)name;	// 0x34ed5b11
- (void)addType:(id)type;	// 0x34ed5a11
- (void)addTypes:(id)types;	// 0x34ed59ed
- (void)dealloc;	// 0x34ed5a89
- (id)description;	// 0x34ed5925
- (void)finalize;	// 0x34ed5a5d
// converted property getter: - (id)grouping;	// 0x34ed47c1
// converted property getter: - (BOOL)isPrimary;	// 0x34ed47e1
// converted property getter: - (id)name;	// 0x34ed47b1
// converted property setter: - (void)setGrouping:(id)grouping;	// 0x34ed59c5
// converted property setter: - (void)setIsPrimary:(BOOL)primary;	// 0x34ed47f1
// converted property setter: - (void)setValue:(id)value;	// 0x34ed5a35
// converted property getter: - (id)types;	// 0x34ed47a1
// converted property getter: - (id)value;	// 0x34ed47d1
@end

