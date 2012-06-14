/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ABFavoritesEntry : NSObject {
@private
	int _abUid;	// 4 = 0x4
	int _abIdentifier;	// 8 = 0x8
	NSString *_value;	// 12 = 0xc
	int _property;	// 16 = 0x10
	int _type;	// 20 = 0x14
	unsigned _dirty : 1;	// 24 = 0x18
	NSString *_label;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	NSString *_abDatabaseUUID;	// 36 = 0x24
	void *_addressBook;	// 40 = 0x28
}
@property(readonly, retain) NSString *label;	// G=0x308cc57d; converted property
@property(readonly, assign) int property;	// G=0x308cbc41; converted property
@property(readonly, assign) int type;	// G=0x308cbc81; converted property
@property(readonly, retain) NSString *value;	// G=0x308cbc61; converted property
+ (void)_runLookup;	// 0x308cc9a9
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x308cbcc5
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation addressBook:(void *)book;	// 0x308cc675
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x308cbca1
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier type:(int)type;	// 0x308cc3b5
- (void *)ABPerson;	// 0x308cc54d
- (int)_abUid;	// 0x308cbc91
- (void)_lookupChanged:(id)changed;	// 0x308cc0e9
- (void)_lookupNotFound;	// 0x308cc02d
- (void)_postEntryChanged;	// 0x308cbfe5
- (void)_queueLookup;	// 0x308cc879
- (void)_unqueueLookup;	// 0x308cbf91
- (void)dealloc;	// 0x308cc5c5
- (id)dictionaryRepresentation;	// 0x308cbcd9
- (void)dictionaryRepresentation:(id *)representation isDirty:(BOOL *)dirty;	// 0x308cbe75
- (id)displayName;	// 0x308cbc09
- (int)identifier;	// 0x308cbc71
- (BOOL)isEqual:(id)equal;	// 0x308cbeb1
// converted property getter: - (id)label;	// 0x308cc57d
- (id)nonLocalizedLabel;	// 0x308cbc51
// converted property getter: - (int)property;	// 0x308cbc41
- (void)recheckAddressBook;	// 0x308cbf81
// converted property getter: - (int)type;	// 0x308cbc81
// converted property getter: - (id)value;	// 0x308cbc61
@end

