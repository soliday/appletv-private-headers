/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3PropertyPredicate.h"
#import "MusicLibrary-Structs.h"


@interface ML3BitMaskPredicate : ML3PropertyPredicate {
@private
	long long _mask;	// 8 = 0x8
	long long _value;	// 16 = 0x10
}
@property(assign, nonatomic) long long mask;	// G=0x338016bd; S=0x338016d5; @synthesize=_mask
@property(assign, nonatomic) long long value;	// G=0x338016e9; S=0x33801701; @synthesize=_value
+ (id)predicateWithProperty:(id)property mask:(long long)mask value:(long long)value;	// 0x338015a9
- (id)initWithCoder:(id)coder;	// 0x3380134d
- (id)initWithProperty:(id)property mask:(long long)mask value:(long long)value;	// 0x338012b1
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x3380160d
- (void)bindToSqlite3Statement:(sqlite3_stmt *)sqlite3Statement bindingIndex:(inout int *)index;	// 0x33801671
- (void)dealloc;	// 0x33801321
- (id)description;	// 0x33801509
- (void)encodeWithCoder:(id)coder;	// 0x338013dd
- (BOOL)isEqual:(id)equal;	// 0x3380146d
// declared property getter: - (long long)mask;	// 0x338016bd
// declared property setter: - (void)setMask:(long long)mask;	// 0x338016d5
// declared property setter: - (void)setValue:(long long)value;	// 0x33801701
// declared property getter: - (long long)value;	// 0x338016e9
@end

