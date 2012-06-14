/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCPlug.h"

@class MCContainerSerializer, NSMutableDictionary, NSDictionary, NSString;

@interface MCPlugSerial : MCPlug {
	unsigned mIndex;	// 60 = 0x3c
	NSString *mTransitionID;	// 64 = 0x40
	double mTransitionDuration;	// 68 = 0x44
	NSMutableDictionary *mTransitionAttributes;	// 76 = 0x4c
	MCContainerSerializer *mSupercontainer;	// 80 = 0x50
}
@property(assign, nonatomic) unsigned index;	// G=0x30aee0f9; S=0x30aee109; @synthesize=mIndex
@property(assign) MCContainerSerializer *supercontainer;	// G=0x30aee169; S=0x30aee179; @synthesize=mSupercontainer
@property(copy) NSDictionary *transitionAttributes;	// G=0x30aeddc1; S=0x30aedea9; 
@property(assign, nonatomic) double transitionDuration;	// G=0x30aee151; S=0x30aedb11; @synthesize=mTransitionDuration
@property(copy) NSString *transitionID;	// G=0x30aee119; S=0x30aee12d; @synthesize=mTransitionID
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x30aed76d
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x30aed805
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x30aedfbd
- (void)demolish;	// 0x30aed95d
- (id)imprint;	// 0x30aed9e1
// declared property getter: - (unsigned)index;	// 0x30aee0f9
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x30aee109
// declared property setter: - (void)setSupercontainer:(id)supercontainer;	// 0x30aee179
- (void)setTransitionAttribute:(id)attribute forKey:(id)key;	// 0x30aedc4d
// declared property setter: - (void)setTransitionAttributes:(id)attributes;	// 0x30aedea9
// declared property setter: - (void)setTransitionDuration:(double)duration;	// 0x30aedb11
// declared property setter: - (void)setTransitionID:(id)anId;	// 0x30aee12d
// declared property getter: - (id)supercontainer;	// 0x30aee169
- (id)transitionAttributeForKey:(id)key;	// 0x30aedb25
// declared property getter: - (id)transitionAttributes;	// 0x30aeddc1
// declared property getter: - (double)transitionDuration;	// 0x30aee151
// declared property getter: - (id)transitionID;	// 0x30aee119
@end

