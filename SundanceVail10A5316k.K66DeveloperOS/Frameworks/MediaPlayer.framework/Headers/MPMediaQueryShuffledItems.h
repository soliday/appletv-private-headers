/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class MPReshuffledArrayIndexMap, NSArray, NSMutableArray, MPMediaQuery;

@interface MPMediaQueryShuffledItems : NSObject <NSCoding, NSCopying> {
	unsigned _activeShuffleType;	// 4 = 0x4
	BOOL _dirty;	// 8 = 0x8
	NSMutableArray *_orderedArray;	// 12 = 0xc
	MPReshuffledArrayIndexMap *_indexMap;	// 16 = 0x10
	MPMediaQuery *_sourceMediaQuery;	// 20 = 0x14
	NSArray *_sourceMediaQueryItems;	// 24 = 0x18
}
@property(assign, nonatomic) NSRange focusedRange;	// G=0x348b5379; S=0x348b5359; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x348b5061; 
@property(readonly, assign, nonatomic) unsigned realShuffleType;	// G=0x348b4c85; 
@property(readonly, assign, nonatomic) MPMediaQuery *sourceMediaQuery;	// G=0x348b62b5; @synthesize=_sourceMediaQuery
- (id)initWithCoder:(id)coder;	// 0x348b49e9
- (id)initWithSourceMediaQuery:(id)sourceMediaQuery;	// 0x348b4939
- (id)initWithSourceMediaQuery:(id)sourceMediaQuery orderedItems:(id)items indexMap:(id)map shuffleType:(unsigned)type;	// 0x348b4811
- (BOOL)_getFixedItemCount:(unsigned *)count;	// 0x348b4c95
- (id)_includeInShuffleItemsForQuery:(id)query;	// 0x348b5755
- (void)_rebuildCaches;	// 0x348b57d1
- (void)_rebuildCachesWithInitialSourceIndex:(unsigned)initialSourceIndex;	// 0x348b57e5
- (void)_rebuildGroupedCachesWithInitialSourceItemIndex:(unsigned)initialSourceItemIndex;	// 0x348b5885
- (void)_rebuildItemCachesWithInitialSourceItemIndex:(unsigned)initialSourceItemIndex;	// 0x348b5e61
- (void)_resetCaches;	// 0x348b616d
- (void)_shuffleMutableOrderedArrayWithInitialIndex:(unsigned)initialIndex;	// 0x348b61c1
- (id)copyWithZone:(NSZone *)zone;	// 0x348b4bfd
- (unsigned)count;	// 0x348b4ec1
- (void)dealloc;	// 0x348b495d
- (void)encodeWithCoder:(id)coder;	// 0x348b4b41
// declared property getter: - (NSRange)focusedRange;	// 0x348b5379
- (unsigned)indexOfItemWithPersistentID:(unsigned long long)persistentID;	// 0x348b4f65
- (unsigned)indexOfItemWithPersistentID:(unsigned long long)persistentID greaterThanOrEqualToIndex:(unsigned)index;	// 0x348b4eed
- (unsigned)indexOfObject:(id)object;	// 0x348b5001
- (unsigned)indexOfObject:(id)object greaterThanOrEqualToIndex:(unsigned)index;	// 0x348b4f89
- (void)invalidateSourceMediaQueryAndLoadItems;	// 0x348b5015
// declared property getter: - (id)items;	// 0x348b5061
- (unsigned)nonGrowingCount;	// 0x348b4e79
- (unsigned)nonRepeatingCount;	// 0x348b4d4d
- (id)objectAtIndex:(unsigned)index;	// 0x348b51c9
// declared property getter: - (unsigned)realShuffleType;	// 0x348b4c85
// declared property setter: - (void)setFocusedRange:(NSRange)range;	// 0x348b5359
- (void)shuffleAlbumsWithInitialIndex:(unsigned)initialIndex;	// 0x348b53a9
- (void)shuffleItemsWithInitialIndex:(unsigned)initialIndex;	// 0x348b559d
// declared property getter: - (id)sourceMediaQuery;	// 0x348b62b5
- (void)unshuffle;	// 0x348b5735
@end

