/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaPredicate.h"

@class NSSet, NSString;

@interface _MPMediaSearchStringPredicate : MPMediaPredicate {
	NSString *_searchString;	// 4 = 0x4
	NSSet *_properties;	// 8 = 0x8
}
@property(copy, nonatomic) NSSet *properties;	// G=0x3360e531; S=0x33611d99; @synthesize=_properties
@property(copy, nonatomic) NSString *searchString;	// G=0x3360e541; S=0x33611d6d; @synthesize=_searchString
+ (id)predicateWithSearchString:(id)searchString forProperties:(id)properties;	// 0x3360e935
- (id)initWithCoder:(id)coder;	// 0x3360e7f5
- (id)ML3PredicateForContainer;	// 0x3364952d
- (id)ML3PredicateForTrack;	// 0x33649561
- (id)_ML3PredicateForEntityClass:(Class)entityClass;	// 0x336496a5
- (void)dealloc;	// 0x3360e8d9
- (id)description;	// 0x3360e6ed
- (void)encodeWithCoder:(id)coder;	// 0x3360e75d
- (unsigned)hash;	// 0x3360e639
- (BOOL)isEqual:(id)equal;	// 0x3360e675
// declared property getter: - (id)properties;	// 0x3360e531
// declared property getter: - (id)searchString;	// 0x3360e541
// declared property setter: - (void)setProperties:(id)properties;	// 0x33611d99
// declared property setter: - (void)setSearchString:(id)string;	// 0x33611d6d
@end

