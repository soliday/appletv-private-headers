/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"

@class NSSet, NSArray, NSMutableSet;

@interface MCContainerSerializer : MCContainer {
	NSMutableSet *mPlugs;	// 28 = 0x1c
	NSArray *mCachedOrderedPlugs;	// 32 = 0x20
	double mCachedDuration;	// 36 = 0x24
}
@property(readonly, assign) unsigned countOfPlugs;	// G=0x33db889d; 
@property(readonly, assign) double duration;	// G=0x33db84f9; 
@property(readonly, assign) NSArray *orderedPlugs;	// G=0x33db972d; 
@property(readonly, assign) NSSet *plugs;	// G=0x33db8751; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x33db7de1
- (id)init;	// 0x33db7e61
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x33db7ee5
- (id)addPlugForContainer:(id)container;	// 0x33db8b8d
- (id)addPlugsForContainers:(id)containers;	// 0x33db8bf1
// declared property getter: - (unsigned)countOfPlugs;	// 0x33db889d
- (void)demolish;	// 0x33db8075
// declared property getter: - (double)duration;	// 0x33db84f9
- (id)imprint;	// 0x33db82f1
- (id)insertPlugForContainer:(id)container atIndex:(unsigned)index;	// 0x33db8c1d
- (id)insertPlugsForContainers:(id)containers atIndex:(unsigned)index;	// 0x33db8c65
- (void)movePlugsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x33db945d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33db8461
// declared property getter: - (id)orderedPlugs;	// 0x33db972d
- (id)plugAtIndex:(unsigned)index;	// 0x33db897d
// declared property getter: - (id)plugs;	// 0x33db8751
- (void)removePlugsAtIndices:(id)indices;	// 0x33db90e5
- (double)timeInForPlug:(id)plug;	// 0x33db9919
@end
