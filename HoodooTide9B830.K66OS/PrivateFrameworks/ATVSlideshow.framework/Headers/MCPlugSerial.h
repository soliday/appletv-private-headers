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
@property(assign, nonatomic) unsigned index;	// G=0x321920f9; S=0x32192109; @synthesize=mIndex
@property(assign) MCContainerSerializer *supercontainer;	// G=0x32192169; S=0x32192179; @synthesize=mSupercontainer
@property(copy) NSDictionary *transitionAttributes;	// G=0x32191dc1; S=0x32191ea9; 
@property(assign, nonatomic) double transitionDuration;	// G=0x32192151; S=0x32191b11; @synthesize=mTransitionDuration
@property(copy) NSString *transitionID;	// G=0x32192119; S=0x3219212d; @synthesize=mTransitionID
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3219176d
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x32191805
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x32191fbd
- (void)demolish;	// 0x3219195d
- (id)imprint;	// 0x321919e1
// declared property getter: - (unsigned)index;	// 0x321920f9
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x32192109
// declared property setter: - (void)setSupercontainer:(id)supercontainer;	// 0x32192179
- (void)setTransitionAttribute:(id)attribute forKey:(id)key;	// 0x32191c4d
// declared property setter: - (void)setTransitionAttributes:(id)attributes;	// 0x32191ea9
// declared property setter: - (void)setTransitionDuration:(double)duration;	// 0x32191b11
// declared property setter: - (void)setTransitionID:(id)anId;	// 0x3219212d
// declared property getter: - (id)supercontainer;	// 0x32192169
- (id)transitionAttributeForKey:(id)key;	// 0x32191b25
// declared property getter: - (id)transitionAttributes;	// 0x32191dc1
// declared property getter: - (double)transitionDuration;	// 0x32192151
// declared property getter: - (id)transitionID;	// 0x32192119
@end

