/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"

@class NSArray, NSMutableSet, NSSet;

@interface MCContainerSerializer : MCContainer {
	NSMutableSet *mPlugs;	// 28 = 0x1c
	NSArray *mCachedOrderedPlugs;	// 32 = 0x20
	double mCachedDuration;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) unsigned countOfPlugs;	// G=0x3218794d; 
@property(readonly, assign) double duration;	// G=0x32187615; 
@property(readonly, assign) NSArray *orderedPlugs;	// G=0x32188799; 
@property(readonly, assign) NSSet *plugs;	// G=0x32187821; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x32186fb1
- (id)init;	// 0x32187031
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x321870ad
- (id)addPlugForContainer:(id)container;	// 0x32187bd9
- (id)addPlugsForContainers:(id)containers;	// 0x32187c69
// declared property getter: - (unsigned)countOfPlugs;	// 0x3218794d
- (void)demolish;	// 0x3218723d
// declared property getter: - (double)duration;	// 0x32187615
- (id)imprint;	// 0x3218744d
- (id)insertPlugForContainer:(id)container atIndex:(unsigned)index;	// 0x32187c9d
- (id)insertPlugsForContainers:(id)containers atIndex:(unsigned)index;	// 0x32187d1d
- (void)movePlugsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x321884ad
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32187575
// declared property getter: - (id)orderedPlugs;	// 0x32188799
- (id)plugAtIndex:(unsigned)index;	// 0x32187a09
// declared property getter: - (id)plugs;	// 0x32187821
- (void)removeAllPlugs;	// 0x32188745
- (void)removePlugsAtIndices:(id)indices;	// 0x32188181
- (double)timeInForPlug:(id)plug;	// 0x32188979
@end

