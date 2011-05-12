/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Predicate.h"
#import "MusicLibrary-Structs.h"

@class NSArray, NSString;

@interface ML3SearchStringPredicate : ML3Predicate {
@private
	NSArray *_properties;	// 4 = 0x4
	NSString *_searchString;	// 8 = 0x8
}
@property(copy, nonatomic) NSArray *properties;	// G=0x333e4c49; S=0x333bba19; @synthesize=_properties
@property(copy, nonatomic) NSString *searchString;	// G=0x333e4c39; S=0x333bba45; @synthesize=_searchString
+ (id)predicateWithConcatenatedProperties:(id)concatenatedProperties searchString:(id)string;	// 0x333bb979
- (id)initWithCoder:(id)coder;	// 0x333e5131
- (id)initWithConcatenatedProperties:(id)concatenatedProperties searchString:(id)string;	// 0x333bb9c1
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x333bba71
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x333bbb75
- (void)bindToSqlite3Statement:(sqlite3_stmt *)sqlite3Statement bindingIndex:(inout int *)index;	// 0x333bbcf9
- (void)dealloc;	// 0x333bbe39
- (id)description;	// 0x333e4f09
- (void)encodeWithCoder:(id)coder;	// 0x333e50b5
- (unsigned)hash;	// 0x333e4f9d
- (BOOL)isEqual:(id)equal;	// 0x333e4fe5
// declared property getter: - (id)properties;	// 0x333e4c49
// declared property getter: - (id)searchString;	// 0x333e4c39
// declared property setter: - (void)setProperties:(id)properties;	// 0x333bba19
// declared property setter: - (void)setSearchString:(id)string;	// 0x333bba45
@end
