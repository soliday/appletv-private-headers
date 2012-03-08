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
@property(readonly, assign, nonatomic) unsigned countOfPlugs;	// G=0x3559b98d; 
@property(readonly, assign) double duration;	// G=0x3559b655; 
@property(readonly, assign) NSArray *orderedPlugs;	// G=0x3559c7d9; 
@property(readonly, assign) NSSet *plugs;	// G=0x3559b861; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3559aff1
- (id)init;	// 0x3559b071
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3559b0ed
- (id)addPlugForContainer:(id)container;	// 0x3559bc19
- (id)addPlugsForContainers:(id)containers;	// 0x3559bca9
// declared property getter: - (unsigned)countOfPlugs;	// 0x3559b98d
- (void)demolish;	// 0x3559b27d
// declared property getter: - (double)duration;	// 0x3559b655
- (id)imprint;	// 0x3559b48d
- (id)insertPlugForContainer:(id)container atIndex:(unsigned)index;	// 0x3559bcdd
- (id)insertPlugsForContainers:(id)containers atIndex:(unsigned)index;	// 0x3559bd5d
- (void)movePlugsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x3559c4ed
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3559b5b5
// declared property getter: - (id)orderedPlugs;	// 0x3559c7d9
- (id)plugAtIndex:(unsigned)index;	// 0x3559ba49
// declared property getter: - (id)plugs;	// 0x3559b861
- (void)removeAllPlugs;	// 0x3559c785
- (void)removePlugsAtIndices:(id)indices;	// 0x3559c1c1
- (double)timeInForPlug:(id)plug;	// 0x3559c9b9
@end
