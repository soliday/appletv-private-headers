/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "MPActionSupport.h"
#import "MPAnimationSupport.h"
#import "ATVSlideshow-Structs.h"
#import "MPFilterSupport.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import <NSObject.h> // Unknown library
#import "MPTimingSupport.h"

@class MCMontage, NSString, MPLayerInternal, NSMutableDictionary, MCPlugParallel, NSMutableArray, MPAudioPlaylist;

@interface MPLayer : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPLayerableSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport> {
@private
	MCPlugParallel *_plug;	// 4 = 0x4
	NSMutableDictionary *_attributes;	// 8 = 0x8
	NSMutableArray *_effectContainers;	// 12 = 0xc
	NSMutableArray *_filters;	// 16 = 0x10
	NSMutableDictionary *_animationPaths;	// 20 = 0x14
	NSMutableDictionary *_actions;	// 24 = 0x18
	MPAudioPlaylist *_audioPlaylist;	// 28 = 0x1c
	MCMontage *_montage;	// 32 = 0x20
	id _parent;	// 36 = 0x24
	MPLayerInternal *_internal;	// 40 = 0x28
	BOOL _skipTimeCalculations;	// 44 = 0x2c
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x35495379; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x35493f71; converted property
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x35494fed; S=0x35494ffd; converted property
@property(assign, nonatomic) int audioPriority;	// G=0x35495001; S=0x35495021; @dynamic
@property(assign) double duration;	// G=0x35494b05; S=0x35494b25; converted property
@property(readonly, retain) NSMutableArray *effectContainers;	// G=0x35493751; converted property
@property(readonly, retain) NSMutableArray *filters;	// G=0x354938cd; converted property
@property(assign) float height;	// G=0x354979ad; S=0x354979f1; converted property
@property(assign, nonatomic) BOOL isAudioLayer;	// G=0x354951d5; S=0x354951f9; @dynamic
@property(assign) BOOL isTriggered;	// G=0x35494e19; S=0x35494e3d; converted property
@property(copy, nonatomic) NSString *layerID;	// G=0x354952e1; S=0x354952c1; @dynamic
@property(retain) MCMontage *montage;	// G=0x35495629; S=0x3549702d; converted property
@property(assign) double numberOfLoops;	// G=0x354950c5; S=0x354950e5; converted property
@property(assign) float opacity;	// G=0x35494255; S=0x35494275; converted property
@property(retain) id parent;	// G=0x35494a19; S=0x35496f7d; converted property
@property(assign) double phaseInDuration;	// G=0x35494c39; S=0x35494c59; converted property
@property(assign) double phaseOutDuration;	// G=0x35494d29; S=0x35494d49; converted property
@property(retain) MCPlugParallel *plug;	// G=0x35495619; S=0x354967e1; converted property
@property(assign) CGPoint position;	// G=0x354943e5; S=0x35494415; converted property
@property(assign) float rotationAngle;	// G=0x354945ad; S=0x354945cd; converted property
@property(assign) float scale;	// G=0x3549431d; S=0x3549433d; converted property
@property(retain) id scriptingAnimations;	// G=0x35497a9d; S=0x35497e01; converted property
@property(assign) CGSize size;	// G=0x35494675; S=0x354946a5; converted property
@property(assign) BOOL skipTimeCalculations;	// G=0x35497075; S=0x35497085; converted property
@property(assign) BOOL startsPaused;	// G=0x35494f25; S=0x35494f49; converted property
@property(assign) double timeIn;	// G=0x35494a29; S=0x35494a49; converted property
@property(copy, nonatomic) NSString *title;	// G=0x354936a5; S=0x354936c5; @dynamic
@property(assign) float width;	// G=0x35497a25; S=0x35497a69; converted property
@property(assign) float xPosition;	// G=0x354978bd; S=0x35497901; converted property
@property(assign) float xRotationAngle;	// G=0x35494775; S=0x35494795; converted property
@property(assign) float yPosition;	// G=0x35497935; S=0x35497979; converted property
@property(assign) float yRotationAngle;	// G=0x3549483d; S=0x3549485d; converted property
@property(assign) int zIndex;	// G=0x35494905; S=0x3549494d; converted property
@property(assign) float zPosition;	// G=0x354944e5; S=0x35494505; converted property
+ (id)animatedLayer;	// 0x35491529
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x35491471
+ (id)effectLayer;	// 0x3549156d
+ (id)layer;	// 0x354914a1
+ (id)sequentialLayer;	// 0x354914e5
- (id)init;	// 0x354915b1
- (id)initWithCoder:(id)coder;	// 0x354926c9
- (id)action;	// 0x35495e51
- (id)actionForKey:(id)key;	// 0x35495389
// converted property getter: - (id)actions;	// 0x35495379
- (void)addEffectContainer:(id)container;	// 0x35493761
- (void)addEffectContainers:(id)containers;	// 0x354937e5
- (void)addFilter:(id)filter;	// 0x354938dd
- (void)addFilters:(id)filters;	// 0x35493939
- (id)allSlides:(BOOL)slides;	// 0x35495639
- (id)allSongs;	// 0x354959e9
- (id)animationPathForKey:(id)key;	// 0x35493f81
// converted property getter: - (id)animationPaths;	// 0x35493f71
// converted property getter: - (id)audioPlaylist;	// 0x35494fed
// declared property getter: - (int)audioPriority;	// 0x35495001
- (void)cleanup;	// 0x354966c1
- (void)configureActions;	// 0x3549756d
- (void)copyActions:(id)actions;	// 0x354965a5
- (void)copyAnimationPaths:(id)paths;	// 0x354964cd
- (void)copyAudioPlaylist:(id)playlist;	// 0x3549667d
- (void)copyEffectContainers:(id)containers;	// 0x3549629d
- (void)copyFilters:(id)filters;	// 0x354963b1
- (void)copyStruct:(id)aStruct;	// 0x35495edd
- (id)copyWithZone:(NSZone *)zone;	// 0x35493459
- (int)countOfEffectContainers;	// 0x3549765d
- (int)countOfFilters;	// 0x3549778d
- (void)dealloc;	// 0x35493589
- (id)description;	// 0x35491951
- (void)dump;	// 0x35495b91
// converted property getter: - (double)duration;	// 0x35494b05
// converted property getter: - (id)effectContainers;	// 0x35493751
- (void)encodeWithCoder:(id)coder;	// 0x35491a79
// converted property getter: - (id)filters;	// 0x354938cd
- (void)finalize;	// 0x3549355d
- (id)fullDebugLog;	// 0x35495bb9
// converted property getter: - (float)height;	// 0x354979ad
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x35493825
- (void)insertFilters:(id)filters atIndex:(int)index;	// 0x35493979
- (void)insertObject:(id)object inEffectContainersAtIndex:(int)index;	// 0x3549769d
- (void)insertObject:(id)object inFiltersAtIndex:(int)index;	// 0x354977cd
// declared property getter: - (BOOL)isAudioLayer;	// 0x354951d5
// converted property getter: - (BOOL)isTriggered;	// 0x35494e19
// declared property getter: - (id)layerID;	// 0x354952e1
- (id)layerKey;	// 0x35495301
// converted property getter: - (id)montage;	// 0x35495629
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x354938c9
- (void)moveFiltersFromIndices:(id)indices toIndex:(int)index;	// 0x35493e99
// converted property getter: - (double)numberOfLoops;	// 0x354950c5
- (id)objectID;	// 0x35495e9d
- (id)objectInEffectContainersAtIndex:(int)index;	// 0x3549767d
- (id)objectInFiltersAtIndex:(int)index;	// 0x354977ad
// converted property getter: - (float)opacity;	// 0x35494255
// converted property getter: - (id)parent;	// 0x35494a19
- (id)parentDocument;	// 0x35495dd9
// converted property getter: - (double)phaseInDuration;	// 0x35494c39
// converted property getter: - (double)phaseOutDuration;	// 0x35494d29
// converted property getter: - (id)plug;	// 0x35495619
- (id)plugID;	// 0x35495e7d
// converted property getter: - (CGPoint)position;	// 0x354943e5
- (void)reconnectAllTransitions;	// 0x354973a5
- (void)reconnectTransitionForEffectContainerAtIndex:(int)index;	// 0x3549728d
- (void)removeActionForKey:(id)key;	// 0x35495555
- (void)removeAllEffectContainers;	// 0x3549382d
- (void)removeAllFilters;	// 0x35493dfd
- (void)removeAnimationPathForKey:(id)key;	// 0x3549417d
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x35493829
- (void)removeFiltersAtIndices:(id)indices;	// 0x35493c45
- (void)removeObjectFromEffectContainersAtIndex:(int)index;	// 0x354976dd
- (void)removeObjectFromFiltersAtIndex:(int)index;	// 0x3549780d
- (void)replaceObjectInEffectContainersAtIndex:(int)index withObject:(id)object;	// 0x35497719
- (void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;	// 0x35497849
- (void)resetStartTimes;	// 0x35497465
// converted property getter: - (float)rotationAngle;	// 0x354945ad
// converted property getter: - (float)scale;	// 0x3549431d
// converted property getter: - (id)scriptingAnimations;	// 0x35497a9d
- (void)setAction:(id)action forKey:(id)key;	// 0x354953a9
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x35493fa1
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x35494ffd
// declared property setter: - (void)setAudioPriority:(int)priority;	// 0x35495021
// converted property setter: - (void)setDuration:(double)duration;	// 0x35494b25
// converted property setter: - (void)setHeight:(float)height;	// 0x354979f1
// declared property setter: - (void)setIsAudioLayer:(BOOL)layer;	// 0x354951f9
// converted property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x35494e3d
// declared property setter: - (void)setLayerID:(id)anId;	// 0x354952c1
// converted property setter: - (void)setMontage:(id)montage;	// 0x3549702d
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x354950e5
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x35494275
// converted property setter: - (void)setParent:(id)parent;	// 0x35496f7d
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x35494c59
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x35494d49
// converted property setter: - (void)setPlug:(id)plug;	// 0x354967e1
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x35494415
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x354945cd
// converted property setter: - (void)setScale:(float)scale;	// 0x3549433d
// converted property setter: - (void)setScriptingAnimations:(id)animations;	// 0x35497e01
// converted property setter: - (void)setSize:(CGSize)size;	// 0x354946a5
// converted property setter: - (void)setSkipTimeCalculations:(BOOL)calculations;	// 0x35497085
// converted property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x35494f49
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x35494a49
// declared property setter: - (void)setTitle:(id)title;	// 0x354936c5
// converted property setter: - (void)setWidth:(float)width;	// 0x35497a69
// converted property setter: - (void)setXPosition:(float)position;	// 0x35497901
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x35494795
// converted property setter: - (void)setYPosition:(float)position;	// 0x35497979
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x3549485d
// converted property setter: - (void)setZIndex:(int)index;	// 0x3549494d
// converted property setter: - (void)setZPosition:(float)position;	// 0x35494505
// converted property getter: - (CGSize)size;	// 0x35494675
// converted property getter: - (BOOL)skipTimeCalculations;	// 0x35497075
// converted property getter: - (BOOL)startsPaused;	// 0x35494f25
// converted property getter: - (double)timeIn;	// 0x35494a29
// declared property getter: - (id)title;	// 0x354936a5
- (void)updateDurationPadding:(double)padding;	// 0x354970d9
- (void)updateMainDuration;	// 0x354971c5
- (id)uuid;	// 0x35495ebd
// converted property getter: - (float)width;	// 0x35497a25
// converted property getter: - (float)xPosition;	// 0x354978bd
// converted property getter: - (float)xRotationAngle;	// 0x35494775
// converted property getter: - (float)yPosition;	// 0x35497935
// converted property getter: - (float)yRotationAngle;	// 0x3549483d
// converted property getter: - (int)zIndex;	// 0x35494905
// converted property getter: - (float)zPosition;	// 0x354944e5
@end
