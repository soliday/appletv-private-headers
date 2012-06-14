/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3PropertyPredicate.h"
#import "MusicLibrary-Structs.h"

@class NSString;

@interface ML3ComparisonPredicate : ML3PropertyPredicate {
@private
	id _value;	// 8 = 0x8
	NSString *_transformFunction;	// 12 = 0xc
	int _comparison;	// 16 = 0x10
	BOOL _caseInsensitive;	// 20 = 0x14
	BOOL _treatNullAsBlank;	// 21 = 0x15
}
@property(assign, nonatomic) BOOL caseInsensitive;	// G=0x34faee8d; S=0x34f84a31; @synthesize=_caseInsensitive
@property(assign, nonatomic) int comparison;	// G=0x34faee7d; S=0x34f84a21; @synthesize=_comparison
@property(readonly, assign, nonatomic) NSString *operator;	// G=0x34f86695; 
@property(copy, nonatomic) NSString *transformFunction;	// G=0x34faeead; S=0x34f84a51; @synthesize=_transformFunction
@property(assign, nonatomic) BOOL treatNullAsBlank;	// G=0x34faee9d; S=0x34f84a41; @synthesize=_treatNullAsBlank
@property(retain, nonatomic) id value;	// G=0x34faee6d; S=0x34f849fd; @synthesize=_value
+ (id)predicateWithProperty:(id)property equalToInt64:(long long)int64;	// 0x34faee25
+ (id)predicateWithProperty:(id)property equalToInteger:(int)integer;	// 0x34f84755
+ (id)predicateWithProperty:(id)property equalToValue:(id)value;	// 0x34f84795
+ (id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison;	// 0x34f8b581
+ (id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison caseInsensitive:(BOOL)insensitive;	// 0x34f8cce5
+ (id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison caseInsensitive:(BOOL)insensitive treatNullAsBlank:(BOOL)blank;	// 0x34faed51
+ (id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison transformFunction:(id)function;	// 0x34faedbd
- (id)initWithCoder:(id)coder;	// 0x34fae889
- (id)initWithProperty:(id)property value:(id)value comparison:(int)comparison caseInsensitive:(BOOL)insensitive transformFunction:(id)function treatNullAsBlank:(BOOL)blank;	// 0x34f847f5
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x34f86409
- (void)bindToSqlite3Statement:(sqlite3_stmt *)sqlite3Statement bindingIndex:(inout int *)index;	// 0x34f87a2d
// declared property getter: - (BOOL)caseInsensitive;	// 0x34faee8d
// declared property getter: - (int)comparison;	// 0x34faee7d
- (void)dealloc;	// 0x34f8c7c9
- (id)description;	// 0x34faec55
- (void)encodeWithCoder:(id)coder;	// 0x34fae9a9
- (unsigned)hash;	// 0x34faec0d
- (BOOL)isEqual:(id)equal;	// 0x34faeac5
// declared property getter: - (id)operator;	// 0x34f86695
// declared property setter: - (void)setCaseInsensitive:(BOOL)insensitive;	// 0x34f84a31
// declared property setter: - (void)setComparison:(int)comparison;	// 0x34f84a21
// declared property setter: - (void)setTransformFunction:(id)function;	// 0x34f84a51
// declared property setter: - (void)setTreatNullAsBlank:(BOOL)blank;	// 0x34f84a41
// declared property setter: - (void)setValue:(id)value;	// 0x34f849fd
// declared property getter: - (id)transformFunction;	// 0x34faeead
// declared property getter: - (BOOL)treatNullAsBlank;	// 0x34faee9d
// declared property getter: - (id)value;	// 0x34faee6d
@end

