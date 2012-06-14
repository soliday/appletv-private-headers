/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaPredicate.h"

@class NSString;

@interface MPMediaPropertyPredicate : MPMediaPredicate {
@private
	MPMediaPropertyPredicateInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaPropertyPredicateInternal _internal;	// G=0x34683459; S=0x34683475; @synthesize
@property(assign, nonatomic) int comparisonType;	// G=0x34683431; S=0x34683445; 
@property(copy, nonatomic) NSString *property;	// G=0x346833b9; S=0x346833c9; 
@property(copy, nonatomic) id value;	// G=0x346833f1; S=0x34683405; 
+ (id)predicateWithValue:(id)value forProperty:(id)property;	// 0x34683279
+ (id)predicateWithValue:(id)value forProperty:(id)property comparisonType:(int)type;	// 0x3468329d
- (id)initWithCoder:(id)coder;	// 0x34682d61
- (id)ML3PredicateForContainer;	// 0x346bf55d
- (id)ML3PredicateForTrack;	// 0x346bf50d
- (id)_ML3PredicateForML3EntityProperty:(id)ml3EntityProperty;	// 0x346bf5ad
// declared property getter: - (MPMediaPropertyPredicateInternal)_internal;	// 0x34683459
// declared property getter: - (int)comparisonType;	// 0x34683431
- (void)dealloc;	// 0x34682d09
- (id)description;	// 0x346830b9
- (id)descriptionOfValue:(id)value forProperty:(id)property;	// 0x34682f85
- (void)encodeWithCoder:(id)coder;	// 0x34682ead
- (unsigned)hash;	// 0x3468322d
- (BOOL)isEqual:(id)equal;	// 0x34683171
// declared property getter: - (id)property;	// 0x346833b9
// declared property setter: - (void)setComparisonType:(int)type;	// 0x34683445
// declared property setter: - (void)setProperty:(id)property;	// 0x346833c9
// declared property setter: - (void)setValue:(id)value;	// 0x34683405
// declared property setter: - (void)set_internal:(MPMediaPropertyPredicateInternal)internal;	// 0x34683475
// declared property getter: - (id)value;	// 0x346833f1
@end
