/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NSCopying.h"
#import "AppleTV-Structs.h"
#import "SQLitePropertyPredicate.h"


__attribute__((visibility("hidden")))
@interface SQLiteComparisonPredicate : SQLitePropertyPredicate <NSCopying> {
@private
	int _comparisonType;	// 8 = 0x8
	id _value;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) int comparisonType;	// G=0x3335f9e5; @synthesize=_comparisonType
@property(readonly, assign, nonatomic) id value;	// G=0x3335f9f5; @synthesize=_value
+ (id)predicateWithProperty:(id)property equalToValue:(id)value;	// 0x3335f43d
+ (id)predicateWithProperty:(id)property value:(id)value comparisonType:(int)type;	// 0x3335f461
- (id)SQLForEntityClass:(Class)entityClass;	// 0x3335f875
- (id)_comparisonTypeString;	// 0x3335f8e9
- (void)bindToStatement:(sqlite3_stmt *)statement bindingIndex:(inout int *)index;	// 0x3335f5a1
// declared property getter: - (int)comparisonType;	// 0x3335f9e5
- (id)copyWithZone:(NSZone *)zone;	// 0x3335f591
- (void)dealloc;	// 0x3335f545
- (unsigned)hash;	// 0x3335f769
- (BOOL)isEqual:(id)equal;	// 0x3335f7b1
// declared property getter: - (id)value;	// 0x3335f9f5
@end
