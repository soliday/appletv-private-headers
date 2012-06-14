/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "SQLitePropertyPredicate.h"
#import "NSCopying.h"

@class NSArray, SQLiteQuery, NSString;

__attribute__((visibility("hidden")))
@interface SQLiteContainsPredicate : SQLitePropertyPredicate <NSCopying> {
@private
	BOOL _negative;	// 8 = 0x8
	SQLiteQuery *_query;	// 12 = 0xc
	NSString *_queryProperty;	// 16 = 0x10
	id _values;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=isNegative) BOOL negative;	// G=0x32b51fd9; @synthesize=_negative
@property(readonly, assign, nonatomic) SQLiteQuery *query;	// G=0x32b51fe9; @synthesize=_query
@property(readonly, assign, nonatomic) NSString *queryProperty;	// G=0x32b51ff9; @synthesize=_queryProperty
@property(readonly, assign, nonatomic) NSArray *values;	// G=0x32b52009; @synthesize=_values
+ (id)containsPredicateWithProperty:(id)property query:(id)query queryProperty:(id)property3;	// 0x32b51b15
+ (id)containsPredicateWithProperty:(id)property values:(id)values;	// 0x32b51a75
+ (id)doesNotContainPredicateWithProperty:(id)property values:(id)values;	// 0x32b51bd9
- (id)SQLForEntityClass:(Class)entityClass;	// 0x32b51e65
- (void)bindToStatement:(sqlite3_stmt *)statement bindingIndex:(inout int *)index;	// 0x32b51c89
- (id)copyWithZone:(NSZone *)zone;	// 0x32b51c79
- (void)dealloc;	// 0x32b51a01
- (BOOL)isEqual:(id)equal;	// 0x32b51d59
// declared property getter: - (BOOL)isNegative;	// 0x32b51fd9
// declared property getter: - (id)query;	// 0x32b51fe9
// declared property getter: - (id)queryProperty;	// 0x32b51ff9
// declared property getter: - (id)values;	// 0x32b52009
@end

