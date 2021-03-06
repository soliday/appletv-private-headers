/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableIndexSet;

@interface MPWeighter : NSObject {
	int _totalWeight;	// 4 = 0x4
	NSMutableArray *_weights;	// 8 = 0x8
	NSMutableArray *_items;	// 12 = 0xc
	NSMutableArray *_constraints;	// 16 = 0x10
	NSMutableArray *_usageCount;	// 20 = 0x14
	NSMutableIndexSet *_ignoreIndices;	// 24 = 0x18
	BOOL _evenlyPickByID;	// 28 = 0x1c
	BOOL _ignoreBreaks;	// 29 = 0x1d
}
- (id)init;	// 0x364781e9
- (void)addIndexToIgnore:(int)ignore;	// 0x36479de9
- (void)addItem:(id)item withWeight:(int)weight andContraints:(id)contraints;	// 0x364783b9
- (id)allConstraints;	// 0x36479e19
- (id)allItems;	// 0x36479e09
- (id)allUsageCounts;	// 0x36479e29
- (void)clearAllItems;	// 0x36479ec5
- (void)clearIgnoreIndices;	// 0x36479dc9
- (id)constraintsForItem:(id)item;	// 0x36479e39
- (int)count;	// 0x36479ea5
- (void)dealloc;	// 0x364782f9
- (int)getRandomIndex;	// 0x36479279
- (int)getRandomIndexInSubset:(id)subset;	// 0x364790ed
- (int)getRandomIndexMeetingContraints:(id)contraints;	// 0x36478475
- (int)getRandomIndexWithNoBreaksForImageCount:(int)imageCount;	// 0x36478645
- (id)getRandomItemMeetingNumberOfFaceLandscapes:(int)faceLandscapes facePortraits:(int)portraits imageLandscapes:(int)landscapes imagePortraits:(int)portraits4 vBreaks:(int)breaks hBreaks:(int)breaks6 movies:(int)movies fitsInExtraWide:(int)extraWide aspectRatios:(id)ratios;	// 0x3647883d
- (void)ignoreIndex:(int)index;	// 0x36479d49
- (void)ignoreIndices:(id)indices;	// 0x36479d89
- (id)ignoredIndices;	// 0x36479d39
- (id)imageCounts;	// 0x36479c35
- (void)increaseUsageCountOfObjectAtIndex:(int)index;	// 0x36479879
- (id)indicesEqualingConstraints:(id)constraints;	// 0x3647997d
- (id)indicesMeetingConstraints:(id)constraints;	// 0x364798ed
- (BOOL)itemAtIndex:(int)index meetsContraints:(id)contraints;	// 0x364795ad
- (int)numberOfItemsWithImageCount:(int)imageCount;	// 0x36479b61
- (void)setEvenlyPickByID:(BOOL)anId;	// 0x36479b51
- (void)setIgnoreBreaks:(BOOL)breaks;	// 0x36479d29
@end

