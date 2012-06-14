/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABPredicate.h"

@class NSString;

@interface ABPhonePredicate : ABPredicate {
@private
	NSString *_phoneNumber;	// 8 = 0x8
	NSString *_country;	// 12 = 0xc
	NSString *_dbCountry;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *country;	// G=0x34ec7375; S=0x34ec74c1; @synthesize=_country
@property(readonly, assign, nonatomic) NSString *dbCountry;	// G=0x34ec74e5; @synthesize=_dbCountry
@property(copy, nonatomic) NSString *phoneNumber;	// G=0x34ec7385; S=0x34ec749d; @synthesize=_phoneNumber
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x34ec759d
// declared property getter: - (id)country;	// 0x34ec7375
// declared property getter: - (id)dbCountry;	// 0x34ec74e5
- (void)dealloc;	// 0x34ec7429
- (void)evaluateCallbackWithSqliteContext:(sqlite3_context *)sqliteContext predicateContext:(void *)context values:(Mem **)values count:(int)count;	// 0x34ec7509
- (BOOL)hasCallback;	// 0x34ec7371
- (BOOL)isValid;	// 0x34ec7395
// declared property getter: - (id)phoneNumber;	// 0x34ec7385
- (id)predicateFormat;	// 0x34ec73c5
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x34ec7361
- (id)queryWhereString;	// 0x34ec7365
// declared property setter: - (void)setCountry:(id)country;	// 0x34ec74c1
// declared property setter: - (void)setPhoneNumber:(id)number;	// 0x34ec749d
@end

