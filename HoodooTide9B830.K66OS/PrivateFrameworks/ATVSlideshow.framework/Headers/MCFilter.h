/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationPathSupport.h"
#import "MCObject.h"

@class NSMutableSet, NSSet, NSMutableDictionary, MCSlide, NSDictionary, NSString;

@interface MCFilter : MCObject <MCAnimationPathSupport> {
	NSString *mFilterID;	// 12 = 0xc
	NSMutableDictionary *mAttributes;	// 16 = 0x10
	unsigned mIndex;	// 20 = 0x14
	NSMutableSet *mAnimationPaths;	// 24 = 0x18
	MCSlide *mSlideIfSlideFilter;	// 28 = 0x1c
}
@property(readonly, assign) NSSet *animationPaths;	// G=0x32189bb1; 
@property(copy) NSDictionary *attributes;	// G=0x3218917d; S=0x32189265; 
@property(readonly, assign) unsigned countOfAnimationPaths;	// G=0x32189d01; 
@property(copy) NSString *filterID;	// G=0x321895f9; S=0x3218960d; @synthesize=mFilterID
@property(assign, nonatomic) unsigned index;	// G=0x321895d9; S=0x321895e9; @synthesize=mIndex
- (void)initAnimationPathsWithImprints:(id)imprints;	// 0x32189631
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x32188c35
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x32189371
- (void)addAnimationPath:(id)path;	// 0x3218a08d
- (id)animationPathForKey:(id)key;	// 0x32189e05
// declared property getter: - (id)animationPaths;	// 0x32189bb1
- (id)attributeForKey:(id)key;	// 0x32188ee1
// declared property getter: - (id)attributes;	// 0x3218917d
// declared property getter: - (unsigned)countOfAnimationPaths;	// 0x32189d01
- (void)demolish;	// 0x32188d31
- (void)demolishAnimationPaths;	// 0x3218983d
// declared property getter: - (id)filterID;	// 0x321895f9
- (id)imprint;	// 0x32188dc9
- (id)imprintsForAnimationPaths;	// 0x32189ad1
// declared property getter: - (unsigned)index;	// 0x321895d9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32188ea5
- (void)removeAllAnimationPaths;	// 0x3218a679
- (void)removeAnimationPathForKey:(id)key;	// 0x3218a355
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x32189009
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x32189265
// declared property setter: - (void)setFilterID:(id)anId;	// 0x3218960d
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x321895e9
@end

