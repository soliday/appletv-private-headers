/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "MPActionSupport.h"
#import "MPAnimationSupport.h"
#import <NSObject.h> // Unknown library
#import "MPLayerableSupportInternal.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import "MPTimingSupport.h"
#import "MPNavigatorSupportInternal.h"
#import "MPNavigatorSupport.h"
#import "MPAutomaticLayerSupport.h"
#import "MPManualLayerSupport.h"

@class NSMutableDictionary, NSString, MPAudioPlaylist, NSArray, NSMutableArray, MCContainerParallelizer, NSDictionary, MPLayerGroupInternal, MCPlugParallel;

@interface MPLayerGroup : NSObject <MPActionableSupportInternal, MPNavigatorSupportInternal, MPLayerableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPActionableSupport, MPAudioSupport, MPLayerableSupport, MPNavigatorSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport, MPAutomaticLayerSupport, MPManualLayerSupport> {
	MPLayerGroupInternal *_internal;	// 4 = 0x4
	NSMutableArray *_userProvidedVideoPaths;	// 8 = 0x8
	NSMutableArray *_userProvidedAudioPaths;	// 12 = 0xc
	MCPlugParallel *_plug;	// 16 = 0x10
	MCContainerParallelizer *_parallelizer;	// 20 = 0x14
	MPAudioPlaylist *_audioPlaylist;	// 24 = 0x18
	NSMutableArray *_layers;	// 28 = 0x1c
	NSMutableDictionary *_layerDictionary;	// 32 = 0x20
	id _parent;	// 36 = 0x24
	NSMutableDictionary *_authoringOptions;	// 40 = 0x28
	NSMutableDictionary *_animationPaths;	// 44 = 0x2c
	NSMutableDictionary *_actions;	// 48 = 0x30
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x36454be9; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x364542f1; converted property
@property(copy, nonatomic) NSArray *audioPaths;	// G=0x364536cd; S=0x364536dd; @dynamic
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x3645288d; S=0x364528a1; converted property
@property(retain) id authoredVersionInfo;	// G=0x3645818d; S=0x364581ad; converted property
@property(retain) NSMutableDictionary *authoringOptions;	// G=0x364514f9; S=0x3645163d; converted property
@property(assign, nonatomic) BOOL autoAdjustDuration;	// G=0x36453d91; S=0x36453db5; @dynamic
@property(assign, nonatomic) CGColorRef backgroundCGColor;	// G=0x36452d79; S=0x36452dd5; @dynamic
@property(retain) id container;	// G=0x36455b0d; S=0x36455b1d; converted property
@property(assign) double duration;	// G=0x36452591; S=0x36452639; converted property
@property(assign) double durationPadding;	// G=0x36457021; S=0x36457041; converted property
@property(assign, nonatomic) NSDictionary *initialState;	// G=0x3645321d; S=0x3645323d; 
@property(assign) BOOL isTriggered;	// G=0x364527a5; S=0x364527c9; converted property
@property(assign) int lastSlideUsed;	// G=0x36459fb9; S=0x36459f01; converted property
@property(readonly, retain) NSMutableArray *layers;	// G=0x36451809; converted property
@property(assign, nonatomic) int loopingMode;	// G=0x36452cc9; S=0x36452ce9; @dynamic
@property(assign) double numberOfLoops;	// G=0x364538f5; S=0x36453919; converted property
@property(assign) float opacity;	// G=0x3645453d; S=0x3645455d; converted property
@property(retain) id parent;	// G=0x3645287d; S=0x364557d5; converted property
@property(assign) double phaseInDuration;	// G=0x36453a99; S=0x36453ab9; converted property
@property(assign) double phaseOutDuration;	// G=0x36453c09; S=0x36453c29; converted property
@property(retain) MCPlugParallel *plug;	// G=0x36454da5; S=0x36455c71; converted property
@property(assign) CGPoint position;	// G=0x364545f1; S=0x36454621; converted property
@property(assign) float rotationAngle;	// G=0x36454765; S=0x36454785; converted property
@property(assign) float scale;	// G=0x36454a41; S=0x36454a61; converted property
@property(assign) CGSize size;	// G=0x36454819; S=0x36454849; converted property
@property(assign) BOOL startsPaused;	// G=0x36452811; S=0x36452835; converted property
@property(assign) double timeIn;	// G=0x36452729; S=0x36452749; converted property
@property(readonly, assign, nonatomic) NSString *uuid;	// G=0x364531fd; 
@property(copy, nonatomic) NSArray *videoPaths;	// G=0x3645357d; S=0x3645368d; @dynamic
@property(assign) float xRotationAngle;	// G=0x364548d9; S=0x364548f9; converted property
@property(assign) float yRotationAngle;	// G=0x3645498d; S=0x364549ad; converted property
@property(assign) int zIndex;	// G=0x36454af5; S=0x36454b79; converted property
@property(assign) float zPosition;	// G=0x364546b1; S=0x364546d1; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3644ed49
- (id)init;	// 0x3644edc9
- (id)initWithCoder:(id)coder;	// 0x3644faf9
- (id)absoluteVideoPaths;	// 0x36455549
- (id)actionForKey:(id)key;	// 0x36454bf9
- (id)actionableObjectForID:(id)anId;	// 0x3645a029
// converted property getter: - (id)actions;	// 0x36454be9
- (void)addAudioPath:(id)path;	// 0x36453365
- (void)addAudioPaths:(id)paths;	// 0x364533d1
- (void)addLayer:(id)layer;	// 0x36451819
- (void)addLayers:(id)layers;	// 0x36451875
- (void)addVideoPath:(id)path;	// 0x3645328d
- (void)addVideoPaths:(id)paths;	// 0x364532f9
- (id)allEffectContainers;	// 0x36454db5
- (id)allEffects;	// 0x36454ead
- (id)allSlides:(BOOL)slides;	// 0x36454fad
- (id)allSongs;	// 0x3645517d
- (id)animationPathForKey:(id)key;	// 0x36454301
// converted property getter: - (id)animationPaths;	// 0x364542f1
- (double)aspectRatioDidChange:(float)aspectRatio atTime:(double)time;	// 0x36458be5
// declared property getter: - (id)audioPaths;	// 0x364536cd
// converted property getter: - (id)audioPlaylist;	// 0x3645288d
// converted property getter: - (id)authoredVersionInfo;	// 0x3645818d
- (id)authoringOptionForKey:(id)key;	// 0x3645161d
// converted property getter: - (id)authoringOptions;	// 0x364514f9
// declared property getter: - (BOOL)autoAdjustDuration;	// 0x36453d91
// declared property getter: - (CGColorRef)backgroundCGColor;	// 0x36452d79
- (void)cachePaths;	// 0x36455771
- (void)cleanup;	// 0x36456a4d
- (void)configureActions;	// 0x364558c5
// converted property getter: - (id)container;	// 0x36455b0d
- (void)copyActions:(id)actions;	// 0x36458089
- (void)copyAnimationPaths:(id)paths;	// 0x36457f85
- (void)copyAudioPlaylist:(id)playlist;	// 0x36457f41
- (void)copyLayerDictionary:(id)dictionary;	// 0x36457e3d
- (void)copyLayers:(id)layers;	// 0x36457d11
- (void)copyStruct:(id)aStruct;	// 0x36457911
- (id)copyWithZone:(NSZone *)zone;	// 0x364509a5
- (int)countOfLayers;	// 0x3645a321
- (void)dealloc;	// 0x36450b49
- (BOOL)detectFacesInBackground;	// 0x3645a2e5
// converted property getter: - (double)duration;	// 0x36452591
// converted property getter: - (double)durationPadding;	// 0x36457021
- (void)encodeWithCoder:(id)coder;	// 0x3644f161
- (void)finalize;	// 0x36450b09
// declared property getter: - (id)initialState;	// 0x3645321d
- (void)insertLayers:(id)layers atIndex:(int)index;	// 0x364518b5
- (void)insertObject:(id)object inLayersAtIndex:(int)index;	// 0x3645a449
// converted property getter: - (BOOL)isTriggered;	// 0x364527a5
- (id)keyedLayers;	// 0x36453e4d
// converted property getter: - (int)lastSlideUsed;	// 0x36459fb9
- (id)layerForKey:(id)key;	// 0x36453e5d
- (id)layerKey;	// 0x36453dd5
- (id)layerKeyDictionary;	// 0x3645a2c5
// converted property getter: - (id)layers;	// 0x36451809
- (BOOL)layersCanPositionZIndex;	// 0x36455759
// declared property getter: - (int)loopingMode;	// 0x36452cc9
- (id)mainLayers;	// 0x3645375d
- (void)moveLayersFromIndices:(id)indices toIndex:(int)index;	// 0x3645219d
- (id)navigatorKey;	// 0x36450ca9
- (BOOL)nearingEndWithOptions:(id)options;	// 0x364581cd
- (BOOL)needsToRemoveFadeIn;	// 0x3645952d
// converted property getter: - (double)numberOfLoops;	// 0x364538f5
- (id)objectID;	// 0x36455739
- (id)objectInLayersAtIndex:(int)index;	// 0x3645a341
- (id)observer;	// 0x36455775
// converted property getter: - (float)opacity;	// 0x3645453d
- (id)orderedVideoPaths;	// 0x3645358d
// converted property getter: - (id)parent;	// 0x3645287d
- (id)parentDocument;	// 0x36455699
// converted property getter: - (double)phaseInDuration;	// 0x36453a99
// converted property getter: - (double)phaseOutDuration;	// 0x36453c09
// converted property getter: - (id)plug;	// 0x36454da5
- (id)plugID;	// 0x36455719
// converted property getter: - (CGPoint)position;	// 0x364545f1
- (double)posterTime;	// 0x36455379
- (void)reconfigureLoopingMode;	// 0x36457271
- (void)reconnectAll;	// 0x364570b9
- (void)removeActionForKey:(id)key;	// 0x36454d2d
- (void)removeAllAudioPaths;	// 0x3645373d
- (void)removeAllLayers;	// 0x36451c0d
- (void)removeAllVideoPaths;	// 0x3645371d
- (void)removeAnimationPathForKey:(id)key;	// 0x364544b1
- (double)removeFadeInIfNeeded;	// 0x36459801
- (void)removeLayerForKey:(id)key;	// 0x36454071
- (void)removeLayersAtIndices:(id)indices;	// 0x36451d61
- (void)removeObjectFromLayersAtIndex:(int)index;	// 0x3645a489
- (void)removePath:(id)path;	// 0x3645343d
- (void)removePaths:(id)paths;	// 0x364534c5
- (void)replaceObjectInLayersAtIndex:(int)index withObject:(id)object;	// 0x3645a4c5
- (void)resetDuration;	// 0x36456c49
// converted property getter: - (float)rotationAngle;	// 0x36454765
// converted property getter: - (float)scale;	// 0x36454a41
- (void)setAction:(id)action forKey:(id)key;	// 0x36454c19
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x36454321
// declared property setter: - (void)setAudioPaths:(id)paths;	// 0x364536dd
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x364528a1
// converted property setter: - (void)setAuthoredVersionInfo:(id)info;	// 0x364581ad
- (void)setAuthoringOption:(id)option forKey:(id)key;	// 0x36451509
// converted property setter: - (void)setAuthoringOptions:(id)options;	// 0x3645163d
// declared property setter: - (void)setAutoAdjustDuration:(BOOL)duration;	// 0x36453db5
// declared property setter: - (void)setBackgroundCGColor:(CGColorRef)color;	// 0x36452dd5
- (void)setBackgroundColorString:(id)string;	// 0x36452d99
// converted property setter: - (void)setContainer:(id)container;	// 0x36455b1d
// converted property setter: - (void)setDuration:(double)duration;	// 0x36452639
// converted property setter: - (void)setDurationPadding:(double)padding;	// 0x36457041
// declared property setter: - (void)setInitialState:(id)state;	// 0x3645323d
- (void)setIsDocumentLayerGroup:(BOOL)group;	// 0x3645a009
// converted property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x364527c9
// converted property setter: - (void)setLastSlideUsed:(int)used;	// 0x36459f01
- (void)setLayer:(id)layer forKey:(id)key;	// 0x36453e7d
// declared property setter: - (void)setLoopingMode:(int)mode;	// 0x36452ce9
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x36453919
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x3645455d
// converted property setter: - (void)setParent:(id)parent;	// 0x364557d5
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x36453ab9
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x36453c29
// converted property setter: - (void)setPlug:(id)plug;	// 0x36455c71
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x36454621
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x36454785
// converted property setter: - (void)setScale:(float)scale;	// 0x36454a61
// converted property setter: - (void)setSize:(CGSize)size;	// 0x36454849
// converted property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x36452835
- (unsigned)setStyleID:(id)anId;	// 0x36450d25
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x36452749
- (void)setUsedAllPaths:(BOOL)paths;	// 0x36459ee1
// declared property setter: - (void)setVideoPaths:(id)paths;	// 0x3645368d
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x364548f9
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x364549ad
// converted property setter: - (void)setZIndex:(int)index;	// 0x36454b79
// converted property setter: - (void)setZPosition:(float)position;	// 0x364546d1
// converted property getter: - (CGSize)size;	// 0x36454819
// converted property getter: - (BOOL)startsPaused;	// 0x36452811
- (id)styleID;	// 0x36450cf9
// converted property getter: - (double)timeIn;	// 0x36452729
// declared property getter: - (id)uuid;	// 0x364531fd
- (id)valueInLayersWithName:(id)name;	// 0x3645a361
- (double)videoDuration;	// 0x36452419
// declared property getter: - (id)videoPaths;	// 0x3645357d
// converted property getter: - (float)xRotationAngle;	// 0x364548d9
// converted property getter: - (float)yRotationAngle;	// 0x3645498d
// converted property getter: - (int)zIndex;	// 0x36454af5
// converted property getter: - (float)zPosition;	// 0x364546b1
@end

