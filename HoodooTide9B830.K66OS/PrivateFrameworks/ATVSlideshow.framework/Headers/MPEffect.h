/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "MPAnimationSupport.h"
#import "ATVSlideshow-Structs.h"
#import "MPFilterSupport.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPEffectSupport.h"
#import "MPActionableSupportInternal.h"
#import <NSObject.h> // Unknown library

@class MPEffectInternal, MPEffectContainer, MCContainerEffect, NSString, NSArray, NSMutableDictionary, MCPlugParallel, NSMutableArray, MPAudioPlaylist;
@protocol MZEffectTiming;

@interface MPEffect : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPGeometrySupport, MPEffectSupport> {
@private
	NSMutableArray *_slides;	// 4 = 0x4
	NSMutableArray *_secondarySlides;	// 8 = 0x8
	NSMutableArray *_texts;	// 12 = 0xc
	NSMutableArray *_filters;	// 16 = 0x10
	NSMutableDictionary *_attributes;	// 20 = 0x14
	NSMutableDictionary *_animationPaths;	// 24 = 0x18
	MCContainerEffect *_container;	// 28 = 0x1c
	MCPlugParallel *_plug;	// 32 = 0x20
	MPAudioPlaylist *_audioPlaylist;	// 36 = 0x24
	MPEffectContainer *_parentContainer;	// 40 = 0x28
	BOOL _replaceSlides;	// 44 = 0x2c
	BOOL _supportsEffectTiming;	// 45 = 0x2d
	NSObject<MZEffectTiming> *_effectTiming;	// 48 = 0x30
	MPEffectInternal *_internal;	// 52 = 0x34
}
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x3206a6b5; converted property
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x3206a9dd; S=0x3206a9ed; converted property
@property(assign) int audioPriority;	// G=0x3206ab75; S=0x3206ab95; converted property
@property(retain) MCContainerEffect *container;	// G=0x3206ae59; S=0x3206d5c9; converted property
@property(retain) id effectAttributes;	// G=0x32065bf9; S=0x32065c09; converted property
@property(copy, nonatomic) NSString *effectID;	// G=0x32065911; S=0x32065931; 
@property(readonly, assign, nonatomic) NSObject<MZEffectTiming> *effectTiming;	// G=0x3206ad69; @synthesize=_effectTiming
@property(readonly, retain) NSMutableArray *filters;	// G=0x32069f4d; converted property
@property(assign) double fullDuration;	// G=0x3206bc31; S=0x3206bc91; converted property
@property(assign) float height;	// G=0x3206ec31; S=0x3206ec75; converted property
@property(assign) int liveIndex;	// G=0x3206ae19; S=0x3206ae39; converted property
@property(assign, nonatomic) double mainDuration;	// G=0x32067191; S=0x320671b1; 
@property(assign) float opacity;	// G=0x32065e9d; S=0x32065ebd; converted property
@property(retain) MPEffectContainer *parentContainer;	// G=0x3206ac39; S=0x3206dff1; converted property
@property(assign, nonatomic) double phaseInDuration;	// G=0x32066a9d; S=0x32066abd; 
@property(assign, nonatomic) double phaseOutDuration;	// G=0x32066e15; S=0x32066e35; 
@property(retain) MCPlugParallel *plug;	// G=0x3206ae69; S=0x3206d00d; converted property
@property(assign) CGPoint position;	// G=0x32066171; S=0x320661a1; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x32065a65; S=0x32065a99; 
@property(assign) int randomSeed;	// G=0x3206ac49; S=0x3206ac69; converted property
@property(assign, nonatomic) BOOL replaceSlides;	// G=0x32069329; S=0x32069339; 
@property(assign) float rotationAngle;	// G=0x320664a1; S=0x320664c1; converted property
@property(assign) float scale;	// G=0x32066005; S=0x32066025; converted property
@property(retain) id scriptingAnimations;	// G=0x3206ed21; S=0x3206f085; converted property
@property(readonly, retain) NSMutableArray *secondarySlides;	// G=0x32068a6d; converted property
@property(assign) CGSize size;	// G=0x32066609; S=0x32066639; converted property
@property(readonly, assign, nonatomic) NSArray *slides;	// G=0x32067589; 
@property(readonly, assign) BOOL supportsEffectTiming;	// G=0x3206c211; converted property
@property(readonly, assign, nonatomic) NSArray *texts;	// G=0x320696f5; 
@property(assign) float width;	// G=0x3206eca9; S=0x3206eced; converted property
@property(assign) float xPosition;	// G=0x3206eb41; S=0x3206eb85; converted property
@property(assign) float xRotationAngle;	// G=0x320667cd; S=0x320667ed; converted property
@property(assign) float yPosition;	// G=0x3206ebb9; S=0x3206ebfd; converted property
@property(assign) float yRotationAngle;	// G=0x32066935; S=0x32066955; converted property
@property(assign) float zPosition;	// G=0x32066339; S=0x32066359; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x320634ed
+ (id)effectWithEffectID:(id)effectID;	// 0x3206353d
+ (id)effectWithEffectID:(id)effectID andPaths:(id)paths;	// 0x32063579
+ (id)effectWithEffectID:(id)effectID andStrings:(id)strings;	// 0x320635b9
+ (id)effectWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x320635f9
- (id)init;	// 0x320638d9
- (id)initWithCoder:(id)coder;	// 0x32064979
- (id)initWithEffectID:(id)effectID;	// 0x32063641
- (id)initWithEffectID:(id)effectID andPaths:(id)paths;	// 0x32063655
- (id)initWithEffectID:(id)effectID andStrings:(id)strings;	// 0x32063721
- (id)initWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x320637f1
- (id)_effectAttributes;	// 0x3206c169
- (void)_updateEffectTiming;	// 0x32069349
- (void)_updateTiming:(BOOL)timing;	// 0x320694e9
- (void)addFilter:(id)filter;	// 0x32069f5d
- (void)addFilters:(id)filters;	// 0x32069fbd
- (void)addSecondarySlide:(id)slide;	// 0x32068a7d
- (void)addSecondarySlides:(id)slides;	// 0x32068b09
- (void)addSlide:(id)slide;	// 0x32067599
- (void)addSlides:(id)slides;	// 0x32067625
- (void)addText:(id)text;	// 0x32069705
- (void)addTexts:(id)texts;	// 0x32069791
- (id)animationPathForKey:(id)key;	// 0x3206a6c5
// converted property getter: - (id)animationPaths;	// 0x3206a6b5
// converted property getter: - (id)audioPlaylist;	// 0x3206a9dd
// converted property getter: - (int)audioPriority;	// 0x3206ab75
- (void)cleanup;	// 0x3206ceb9
// converted property getter: - (id)container;	// 0x3206ae59
- (void)copyAnimationPaths:(id)paths;	// 0x3206cd99
- (void)copyAudioPlaylist:(id)playlist;	// 0x3206ce75
- (void)copyFilters:(id)filters;	// 0x3206cc7d
- (void)copySecondarySlides:(id)slides;	// 0x3206ca45
- (void)copySlides:(id)slides;	// 0x3206c929
- (void)copyStruct:(id)aStruct;	// 0x3206c611
- (void)copyTexts:(id)texts;	// 0x3206cb61
- (id)copyWithZone:(NSZone *)zone;	// 0x32065621
- (int)countOfFilters;	// 0x3206ea11
- (int)countOfSlides;	// 0x3206e7b1
- (int)countOfTexts;	// 0x3206e8e1
- (void)createSecondarySlidesWithPaths:(id)paths;	// 0x3206b7f9
- (void)createSlidesWithPaths:(id)paths;	// 0x3206b67d
- (void)createTextsWithDefaultStrings;	// 0x3206ae79
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor;	// 0x3206b25d
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor fillIn:(BOOL)anIn;	// 0x3206b281
- (void)dealloc;	// 0x32065785
- (id)description;	// 0x32063c15
- (void)dump;	// 0x3206bcfd
- (id)effectAttributeForKey:(id)key;	// 0x32065d19
// converted property getter: - (id)effectAttributes;	// 0x32065bf9
// declared property getter: - (id)effectID;	// 0x32065911
- (id)effectPresetID;	// 0x3206c109
// declared property getter: - (id)effectTiming;	// 0x3206ad69
- (void)encodeWithCoder:(id)coder;	// 0x3206407d
// converted property getter: - (id)filters;	// 0x32069f4d
- (void)finalize;	// 0x32065745
- (id)fullDebugLog;	// 0x3206bd25
// converted property getter: - (double)fullDuration;	// 0x3206bc31
- (BOOL)hasMovies;	// 0x3206e6d5
// converted property getter: - (float)height;	// 0x3206ec31
- (void)insertFilters:(id)filters atIndex:(int)index;	// 0x3206a001
- (void)insertObject:(id)object inFiltersAtIndex:(int)index;	// 0x3206ea51
- (void)insertObject:(id)object inSlidesAtIndex:(int)index;	// 0x3206e7f1
- (void)insertObject:(id)object inTextsAtIndex:(int)index;	// 0x3206e921
- (void)insertSecondarySlides:(id)slides atIndex:(int)index;	// 0x32068b4d
- (void)insertSlides:(id)slides atIndex:(int)index;	// 0x32067669
- (void)insertTexts:(id)texts atIndex:(int)index;	// 0x320697d5
- (BOOL)isTextOnly;	// 0x32069f05
// converted property getter: - (int)liveIndex;	// 0x3206ae19
- (double)lowestDisplayTime;	// 0x320696b9
// declared property getter: - (double)mainDuration;	// 0x32067191
- (int)maxNumberOfSecondarySlides;	// 0x3206adc9
- (int)maxNumberOfSlides;	// 0x3206ad79
- (void)moveFiltersFromIndices:(id)indices toIndex:(int)index;	// 0x3206a5d9
- (void)moveSlidesFromIndices:(id)indices toIndex:(int)index;	// 0x32068975
- (void)moveTextsFromIndices:(id)indices toIndex:(int)index;	// 0x32069e0d
- (id)nearestLayerGroup;	// 0x3206e789
- (id)nearestPlug;	// 0x3206c5d1
- (BOOL)needsParallelizer;	// 0x3206e0a1
- (id)objectID;	// 0x3206c551
- (id)objectInFiltersAtIndex:(int)index;	// 0x3206ea31
- (id)objectInSlidesAtIndex:(int)index;	// 0x3206e7d1
- (id)objectInTextsAtIndex:(int)index;	// 0x3206e901
// converted property getter: - (float)opacity;	// 0x32065e9d
// converted property getter: - (id)parentContainer;	// 0x3206ac39
- (id)parentDocument;	// 0x3206c599
// declared property getter: - (double)phaseInDuration;	// 0x32066a9d
// declared property getter: - (double)phaseOutDuration;	// 0x32066e15
// converted property getter: - (id)plug;	// 0x3206ae69
- (id)plugID;	// 0x3206c529
// converted property getter: - (CGPoint)position;	// 0x32066171
// declared property getter: - (id)presetID;	// 0x32065a65
// converted property getter: - (int)randomSeed;	// 0x3206ac49
- (void)reconfigureSlides;	// 0x3206b979
- (void)removeAllFilters;	// 0x3206a53d
- (void)removeAllSecondarySlides;	// 0x32069231
- (void)removeAllSlides;	// 0x320686f5
- (void)removeAllTexts;	// 0x32069d71
- (void)removeAnimationPathForKey:(id)key;	// 0x3206a8d5
- (void)removeFiltersAtIndices:(id)indices;	// 0x3206a311
- (void)removeObjectFromFiltersAtIndex:(int)index;	// 0x3206ea91
- (void)removeObjectFromSlidesAtIndex:(int)index;	// 0x3206e831
- (void)removeObjectFromTextsAtIndex:(int)index;	// 0x3206e961
- (void)removeSecondarySlidesAtIndices:(id)indices;	// 0x32069005
- (void)removeSlidesAtIndices:(id)indices;	// 0x32068185
- (void)removeTextsAtIndices:(id)indices;	// 0x32069b8d
- (void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;	// 0x3206eacd
- (void)replaceObjectInSlidesAtIndex:(int)index withObject:(id)object;	// 0x3206e86d
- (void)replaceObjectInTextsAtIndex:(int)index withObject:(id)object;	// 0x3206e99d
- (void)replaceSlide:(id)slide atIndex:(int)index;	// 0x3206895d
- (void)replaceSlideAtIndex:(int)index withSlide:(id)slide;	// 0x32068795
// declared property getter: - (BOOL)replaceSlides;	// 0x32069329
- (void)replaceTextsWitStrings:(id)strings;	// 0x3206afdd
// converted property getter: - (float)rotationAngle;	// 0x320664a1
// converted property getter: - (float)scale;	// 0x32066005
- (void)scaleMainDuration;	// 0x3206e2bd
// converted property getter: - (id)scriptingAnimations;	// 0x3206ed21
// converted property getter: - (id)secondarySlides;	// 0x32068a6d
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x3206a6f1
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x3206a9ed
// converted property setter: - (void)setAudioPriority:(int)priority;	// 0x3206ab95
// converted property setter: - (void)setContainer:(id)container;	// 0x3206d5c9
- (void)setEffectAttribute:(id)attribute forKey:(id)key;	// 0x32065d45
// converted property setter: - (void)setEffectAttributes:(id)attributes;	// 0x32065c09
// declared property setter: - (void)setEffectID:(id)anId;	// 0x32065931
// converted property setter: - (void)setFullDuration:(double)duration;	// 0x3206bc91
// converted property setter: - (void)setHeight:(float)height;	// 0x3206ec75
// converted property setter: - (void)setLiveIndex:(int)index;	// 0x3206ae39
// declared property setter: - (void)setMainDuration:(double)duration;	// 0x320671b1
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x32065ebd
// converted property setter: - (void)setParentContainer:(id)container;	// 0x3206dff1
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x32066abd
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x32066e35
// converted property setter: - (void)setPlug:(id)plug;	// 0x3206d00d
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x320661a1
// declared property setter: - (void)setPresetID:(id)anId;	// 0x32065a99
// converted property setter: - (void)setRandomSeed:(int)seed;	// 0x3206ac69
// declared property setter: - (void)setReplaceSlides:(BOOL)slides;	// 0x32069339
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x320664c1
// converted property setter: - (void)setScale:(float)scale;	// 0x32066025
// converted property setter: - (void)setScriptingAnimations:(id)animations;	// 0x3206f085
// converted property setter: - (void)setSize:(CGSize)size;	// 0x32066639
// converted property setter: - (void)setWidth:(float)width;	// 0x3206eced
// converted property setter: - (void)setXPosition:(float)position;	// 0x3206eb85
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x320667ed
// converted property setter: - (void)setYPosition:(float)position;	// 0x3206ebfd
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x32066955
// converted property setter: - (void)setZPosition:(float)position;	// 0x32066359
// converted property getter: - (CGSize)size;	// 0x32066609
- (id)slideInformation;	// 0x3206c221
// declared property getter: - (id)slides;	// 0x32067589
// converted property getter: - (BOOL)supportsEffectTiming;	// 0x3206c211
- (BOOL)supportsUnlimitedSlides;	// 0x320692d1
// declared property getter: - (id)texts;	// 0x320696f5
- (void)updateEffectAttributes;	// 0x3206c455
- (id)uuid;	// 0x3206c579
- (id)videoPaths;	// 0x3206c029
// converted property getter: - (float)width;	// 0x3206eca9
// converted property getter: - (float)xPosition;	// 0x3206eb41
// converted property getter: - (float)xRotationAngle;	// 0x320667cd
// converted property getter: - (float)yPosition;	// 0x3206ebb9
// converted property getter: - (float)yRotationAngle;	// 0x32066935
- (int)zIndex;	// 0x32067515
// converted property getter: - (float)zPosition;	// 0x32066339
@end

