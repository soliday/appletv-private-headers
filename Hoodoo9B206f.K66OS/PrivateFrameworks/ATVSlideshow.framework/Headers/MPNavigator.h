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
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import <NSObject.h> // Unknown library
#import "MPTimingSupport.h"
#import "MPNavigatorSupportInternal.h"
#import "MPNavigatorSupport.h"

@class MCContainerNavigator, NSString, MCPlug, NSMutableDictionary, MPNavigatorInternal;

@interface MPNavigator : NSObject <MPNavigatorSupportInternal, MPActionableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPNavigatorSupport, MPActionSupport, MPLayerableSupport, MPActionableSupport, MPGeometrySupport, MPTimingSupport> {
	MPNavigatorInternal *_internal;	// 4 = 0x4
	NSMutableDictionary *_layers;	// 8 = 0x8
	NSMutableDictionary *_actions;	// 12 = 0xc
	MCPlug *_plug;	// 16 = 0x10
	MCContainerNavigator *_navigator;	// 20 = 0x14
	id _parent;	// 24 = 0x18
	NSMutableDictionary *_animationPaths;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x309f7bb9; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x309f65b9; converted property
@property(assign) double duration;	// G=0x309f7441; S=0x309f7461; converted property
@property(copy, nonatomic) NSString *initialLayer;	// G=0x309f6495; S=0x309f64b5; @dynamic
@property(assign) BOOL isTriggered;	// G=0x309f79e5; S=0x309f7a09; converted property
@property(readonly, retain) NSMutableDictionary *layers;	// G=0x309f65a9; converted property
@property(assign) double numberOfLoops;	// G=0x309f786d; S=0x309f788d; converted property
@property(assign) float opacity;	// G=0x309f6939; S=0x309f6959; converted property
@property(retain) id parent;	// G=0x309f5e01; S=0x309f8129; converted property
@property(assign) double phaseInDuration;	// G=0x309f757d; S=0x309f759d; converted property
@property(assign) double phaseOutDuration;	// G=0x309f76f5; S=0x309f7715; converted property
@property(retain) MCPlug *plug;	// G=0x309f7e55; S=0x309f83b9; converted property
@property(assign) CGPoint position;	// G=0x309f6a49; S=0x309f6a79; converted property
@property(assign) float rotationAngle;	// G=0x309f6c95; S=0x309f6cb5; converted property
@property(assign) float scale;	// G=0x309f7101; S=0x309f7121; converted property
@property(assign) CGSize size;	// G=0x309f6da5; S=0x309f6dd5; converted property
@property(assign) BOOL startsPaused;	// G=0x309f7af1; S=0x309f7b15; converted property
@property(assign) double timeIn;	// G=0x309f7325; S=0x309f7345; converted property
@property(assign) float xRotationAngle;	// G=0x309f6ee1; S=0x309f6f01; converted property
@property(assign) float yRotationAngle;	// G=0x309f6ff1; S=0x309f7011; converted property
@property(assign) int zIndex;	// G=0x309f7211; S=0x309f7259; converted property
@property(assign) float zPosition;	// G=0x309f6b85; S=0x309f6ba5; converted property
- (id)init;	// 0x309f452d
- (id)initWithCoder:(id)coder;	// 0x309f4f6d
- (id)actionForKey:(id)key;	// 0x309f7bc9
- (id)actionableObjectForID:(id)anId;	// 0x309f986d
// converted property getter: - (id)actions;	// 0x309f7bb9
- (id)allSlides:(BOOL)slides;	// 0x309f7e65
- (id)allSongs;	// 0x309f7f5d
- (id)animationPathForKey:(id)key;	// 0x309f65c9
// converted property getter: - (id)animationPaths;	// 0x309f65b9
- (void)cleanup;	// 0x309f8f0d
- (void)configureActions;	// 0x309f81d9
- (void)copyActions:(id)actions;	// 0x309f96d9
- (void)copyAnimationPaths:(id)paths;	// 0x309f9601
- (void)copyLayers:(id)layers;	// 0x309f946d
- (void)copyStruct:(id)aStruct;	// 0x309f9131
- (id)copyWithZone:(NSZone *)zone;	// 0x309f5b79
- (void)dealloc;	// 0x309f5c7d
// converted property getter: - (double)duration;	// 0x309f7441
- (void)encodeWithCoder:(id)coder;	// 0x309f480d
- (void)finalize;	// 0x309f5c3d
// declared property getter: - (id)initialLayer;	// 0x309f6495
// converted property getter: - (BOOL)isTriggered;	// 0x309f79e5
- (id)layerForKey:(id)key;	// 0x309f5e89
- (id)layerKey;	// 0x309f5e11
- (id)layerKeyDictionary;	// 0x309f9979
// converted property getter: - (id)layers;	// 0x309f65a9
- (id)navigatorKey;	// 0x309f5d71
// converted property getter: - (double)numberOfLoops;	// 0x309f786d
- (id)objectID;	// 0x309f80e9
// converted property getter: - (float)opacity;	// 0x309f6939
// converted property getter: - (id)parent;	// 0x309f5e01
- (id)parentDocument;	// 0x309f8051
// converted property getter: - (double)phaseInDuration;	// 0x309f757d
// converted property getter: - (double)phaseOutDuration;	// 0x309f76f5
// converted property getter: - (id)plug;	// 0x309f7e55
- (id)plugID;	// 0x309f80c9
// converted property getter: - (CGPoint)position;	// 0x309f6a49
- (void)reconnectAll;	// 0x309f97b1
- (void)removeActionForKey:(id)key;	// 0x309f7d91
- (void)removeAllLayers;	// 0x309f63c9
- (void)removeAnimationPathForKey:(id)key;	// 0x309f681d
- (void)removeLayerForKey:(id)key;	// 0x309f61e5
// converted property getter: - (float)rotationAngle;	// 0x309f6c95
// converted property getter: - (float)scale;	// 0x309f7101
- (void)setAction:(id)action forKey:(id)key;	// 0x309f7be9
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x309f65e9
- (void)setContainer:(id)container;	// 0x309f8371
// converted property setter: - (void)setDuration:(double)duration;	// 0x309f7461
// declared property setter: - (void)setInitialLayer:(id)layer;	// 0x309f64b5
// converted property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x309f7a09
- (void)setLayer:(id)layer forKey:(id)key;	// 0x309f5ea9
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x309f788d
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x309f6959
// converted property setter: - (void)setParent:(id)parent;	// 0x309f8129
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x309f759d
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x309f7715
// converted property setter: - (void)setPlug:(id)plug;	// 0x309f83b9
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x309f6a79
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x309f6cb5
// converted property setter: - (void)setScale:(float)scale;	// 0x309f7121
// converted property setter: - (void)setSize:(CGSize)size;	// 0x309f6dd5
// converted property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x309f7b15
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x309f7345
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x309f6f01
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x309f7011
// converted property setter: - (void)setZIndex:(int)index;	// 0x309f7259
// converted property setter: - (void)setZPosition:(float)position;	// 0x309f6ba5
// converted property getter: - (CGSize)size;	// 0x309f6da5
// converted property getter: - (BOOL)startsPaused;	// 0x309f7af1
// converted property getter: - (double)timeIn;	// 0x309f7325
- (id)uuid;	// 0x309f8109
// converted property getter: - (float)xRotationAngle;	// 0x309f6ee1
// converted property getter: - (float)yRotationAngle;	// 0x309f6ff1
// converted property getter: - (int)zIndex;	// 0x309f7211
// converted property getter: - (float)zPosition;	// 0x309f6b85
@end

