/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "NSCopying.h"
#import "SQLitePropertyPredicate.h"

@class NSArray, NSString, SQLiteQuery;

__attribute__((visibility("hidden")))
@interface SQLiteContainsPredicate : SQLitePropertyPredicate <NSCopying> {
@private
	BOOL _negative;	// 8 = 0x8
	SQLiteQuery *_query;	// 12 = 0xc
	NSString *_queryProperty;	// 16 = 0x10
	id _values;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=isNegative) BOOL negative;	// G=0x35f57251; @synthesize=_negative
@property(readonly, assign, nonatomic) SQLiteQuery *query;	// G=0x35f57261; @synthesize=_query
@property(readonly, assign, nonatomic) NSString *queryProperty;	// G=0x35f57271; @synthesize=_queryProperty
@property(readonly, assign, nonatomic) NSArray *values;	// G=0x35f57281; @synthesize=_values
+ (id)containsPredicateWithProperty:(id)property query:(id)query queryProperty:(id)property3;	// 0x35f56d8d
+ (id)containsPredicateWithProperty:(id)property values:(id)values;	// 0x35f56ced
+ (id)doesNotContainPredicateWithProperty:(id)property values:(id)values;	// 0x35f56e51
- (id)SQLForEntityClass:(Class)entityClass;	// 0x35f570dd
- (void)bindToStatement:(sqlite3_stmt *)statement bindingIndex:(inout int *)index;	// 0x35f56f01
- (id)copyWithZone:(NSZone *)zone;	// 0x35f56ef1
- (void)dealloc;	// 0x35f56c79
- (BOOL)isEqual:(id)equal;	// 0x35f56fd1
// declared property getter: - (BOOL)isNegative;	// 0x35f57251
// declared property getter: - (id)query;	// 0x35f57261
// declared property getter: - (id)queryProperty;	// 0x35f57271
// declared property getter: - (id)values;	// 0x35f57281
@end
