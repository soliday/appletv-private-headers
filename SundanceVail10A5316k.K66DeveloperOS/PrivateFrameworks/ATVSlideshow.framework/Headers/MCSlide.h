/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MCObject.h"
#import "MCAnimationPathSupport.h"
#import "MCFilterSupport.h"

@class MCSong, MCContainerEffect, NSSet, NSDictionary, NSMutableSet, NSString, NSArray, MCPlugSlide, NSMutableDictionary, MCAssetVideo;

@interface MCSlide : MCObject <MCAnimationPathSupport, MCFilterSupport> {
@private
	id *mSlideAsset;	// 16 = 0x10
	NSMutableDictionary *mFrameAttributes;	// 20 = 0x14
	NSMutableSet *mAnimationPaths;	// 24 = 0x18
	NSMutableSet *mFilters;	// 28 = 0x1c
	NSArray *mCachedOrderedFilters;	// 32 = 0x20
	unsigned mFlags;	// 36 = 0x24
	MCPlugSlide *mPlug;	// 40 = 0x28
	MCSong *mSong;	// 44 = 0x2c
	unsigned mIndex;	// 48 = 0x30
	float mAudioVolume;	// 52 = 0x34
	double mAudioFadeInDuration;	// 56 = 0x38
	double mAudioFadeOutDuration;	// 64 = 0x40
	float mAudioDuckLevel;	// 72 = 0x48
	double mAudioDuckInDuration;	// 76 = 0x4c
	double mAudioDuckOutDuration;	// 84 = 0x54
	double mStartTime;	// 92 = 0x5c
	double mDuration;	// 100 = 0x64
	NSString *mFrameID;	// 108 = 0x6c
	MCContainerEffect *mContainer;	// 112 = 0x70
}
@property(readonly, assign) NSSet *animationPaths;	// G=0x36554b21; 
@property(retain) MCAssetVideo *asset;	// G=0x36551c11; S=0x36551db5; 
@property(assign, nonatomic) double audioDuckInDuration;	// G=0x36554441; S=0x36554459; @synthesize=mAudioDuckInDuration
@property(assign, nonatomic) float audioDuckLevel;	// G=0x36554421; S=0x36554431; @synthesize=mAudioDuckLevel
@property(assign, nonatomic) double audioDuckOutDuration;	// G=0x3655446d; S=0x36554485; @synthesize=mAudioDuckOutDuration
@property(assign, nonatomic) double audioFadeInDuration;	// G=0x365543c9; S=0x365543e1; @synthesize=mAudioFadeInDuration
@property(assign, nonatomic) double audioFadeOutDuration;	// G=0x365543f5; S=0x3655440d; @synthesize=mAudioFadeOutDuration
@property(assign, nonatomic) float audioVolume;	// G=0x365543a9; S=0x365543b9; @synthesize=mAudioVolume
@property(assign, nonatomic) CGPoint center;	// G=0x36552765; S=0x365527d1; 
@property(assign) MCContainerEffect *container;	// G=0x36554501; S=0x36554515; @synthesize=mContainer
@property(readonly, assign) unsigned countOfAnimationPaths;	// G=0x36554c71; 
@property(readonly, assign, nonatomic) unsigned countOfFilters;	// G=0x36556279; 
@property(readonly, assign) unsigned char countOfLayouts;	// G=0x36553bb5; 
@property(assign, nonatomic) unsigned char currentLayoutIndex;	// G=0x36553be1; S=0x36553bf5; 
@property(assign, nonatomic) double duration;	// G=0x365544b1; S=0x365536c9; @synthesize=mDuration
@property(readonly, assign) BOOL durationIsDefined;	// G=0x365536b5; 
@property(readonly, assign) NSSet *filters;	// G=0x36556129; 
@property(copy) NSDictionary *frameAttributes;	// G=0x365539a1; S=0x36553a9d; 
@property(copy) NSString *frameID;	// G=0x365544c9; S=0x365544dd; @synthesize=mFrameID
@property(assign, nonatomic) unsigned index;	// G=0x36554389; S=0x36554399; @synthesize=mIndex
@property(copy) NSString *kenBurnsType;	// G=0x365521d5; S=0x36552379; 
@property(readonly, assign) NSArray *orderedFilters;	// G=0x36555e55; 
@property(retain) MCPlugSlide *plug;	// G=0x36553425; S=0x36553529; @synthesize=mPlug
@property(assign, nonatomic) float rotation;	// G=0x36552db1; S=0x36552e09; 
@property(assign, nonatomic) float scale;	// G=0x36552aa9; S=0x36552b01; 
@property(readonly, assign) MCSong *song;	// G=0x365530b9; @synthesize=mSong
@property(assign, nonatomic) double startTime;	// G=0x36554499; S=0x36553671; @synthesize=mStartTime
@property(readonly, assign) BOOL startTimeIsDefined;	// G=0x3655365d; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x365503d1
- (id)init;	// 0x36550591
- (void)initAnimationPathsWithImprints:(id)imprints;	// 0x3655452d
- (void)initFiltersWithImprints:(id)imprints;	// 0x365559c5
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x365505e1
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x36553c85
- (void)addAnimationPath:(id)path;	// 0x36555045
- (id)addFilterWithFilterID:(id)filterID;	// 0x36556699
- (id)animationPathForKey:(id)key;	// 0x36554d75
// declared property getter: - (id)animationPaths;	// 0x36554b21
// declared property getter: - (id)asset;	// 0x36551c11
// declared property getter: - (double)audioDuckInDuration;	// 0x36554441
// declared property getter: - (float)audioDuckLevel;	// 0x36554421
// declared property getter: - (double)audioDuckOutDuration;	// 0x3655446d
// declared property getter: - (double)audioFadeInDuration;	// 0x365543c9
// declared property getter: - (double)audioFadeOutDuration;	// 0x365543f5
// declared property getter: - (float)audioVolume;	// 0x365543a9
// declared property getter: - (CGPoint)center;	// 0x36552765
// declared property getter: - (id)container;	// 0x36554501
// declared property getter: - (unsigned)countOfAnimationPaths;	// 0x36554c71
// declared property getter: - (unsigned)countOfFilters;	// 0x36556279
// declared property getter: - (unsigned char)countOfLayouts;	// 0x36553bb5
// declared property getter: - (unsigned char)currentLayoutIndex;	// 0x36553be1
- (void)demolish;	// 0x36550fc5
- (void)demolishAnimationPaths;	// 0x36554751
- (void)demolishFilters;	// 0x36555b45
// declared property getter: - (double)duration;	// 0x365544b1
// declared property getter: - (BOOL)durationIsDefined;	// 0x365536b5
- (id)filterAtIndex:(unsigned)index;	// 0x3655637d
// declared property getter: - (id)filters;	// 0x36556129
- (id)frameAttributeForKey:(id)key;	// 0x365536f5
// declared property getter: - (id)frameAttributes;	// 0x365539a1
// declared property getter: - (id)frameID;	// 0x365544c9
- (id)imprint;	// 0x3655131d
- (id)imprintsForAnimationPaths;	// 0x36554a21
- (id)imprintsForFilters;	// 0x36555d55
// declared property getter: - (unsigned)index;	// 0x36554389
- (id)insertFilterWithFilterID:(id)filterID atIndex:(unsigned)index;	// 0x365566cd
// declared property getter: - (id)kenBurnsType;	// 0x365521d5
- (void)moveFiltersAtIndices:(id)indices toIndex:(unsigned)index;	// 0x36556dd5
- (void)observeFilter:(id)filter;	// 0x365570c1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x36551b69
// declared property getter: - (id)orderedFilters;	// 0x36555e55
// declared property getter: - (id)plug;	// 0x36553425
- (void)removeAllAnimationPaths;	// 0x36555681
- (void)removeAllFilters;	// 0x36556d81
- (void)removeAnimationPathForKey:(id)key;	// 0x36555315
- (void)removeFiltersAtIndices:(id)indices;	// 0x36556a49
// declared property getter: - (float)rotation;	// 0x36552db1
// declared property getter: - (float)scale;	// 0x36552aa9
// declared property setter: - (void)setAsset:(id)asset;	// 0x36551db5
// declared property setter: - (void)setAudioDuckInDuration:(double)duration;	// 0x36554459
// declared property setter: - (void)setAudioDuckLevel:(float)level;	// 0x36554431
// declared property setter: - (void)setAudioDuckOutDuration:(double)duration;	// 0x36554485
// declared property setter: - (void)setAudioFadeInDuration:(double)duration;	// 0x365543e1
// declared property setter: - (void)setAudioFadeOutDuration:(double)duration;	// 0x3655440d
// declared property setter: - (void)setAudioVolume:(float)volume;	// 0x365543b9
// declared property setter: - (void)setCenter:(CGPoint)center;	// 0x365527d1
// declared property setter: - (void)setContainer:(id)container;	// 0x36554515
// declared property setter: - (void)setCurrentLayoutIndex:(unsigned char)index;	// 0x36553bf5
// declared property setter: - (void)setDuration:(double)duration;	// 0x365536c9
- (void)setFrameAttribute:(id)attribute forKey:(id)key;	// 0x3655382d
// declared property setter: - (void)setFrameAttributes:(id)attributes;	// 0x36553a9d
// declared property setter: - (void)setFrameID:(id)anId;	// 0x365544dd
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x36554399
// declared property setter: - (void)setKenBurnsType:(id)type;	// 0x36552379
// declared property setter: - (void)setPlug:(id)plug;	// 0x36553529
// declared property setter: - (void)setRotation:(float)rotation;	// 0x36552e09
// declared property setter: - (void)setScale:(float)scale;	// 0x36552b01
- (void)setSongForAsset:(id)asset;	// 0x365531bd
// declared property setter: - (void)setStartTime:(double)time;	// 0x36553671
// declared property getter: - (id)song;	// 0x365530b9
// declared property getter: - (double)startTime;	// 0x36554499
// declared property getter: - (BOOL)startTimeIsDefined;	// 0x3655365d
- (void)undefineDuration;	// 0x3655369d
- (void)undefineStartTime;	// 0x36553645
- (void)unobserveFilter:(id)filter;	// 0x36557145
@end
