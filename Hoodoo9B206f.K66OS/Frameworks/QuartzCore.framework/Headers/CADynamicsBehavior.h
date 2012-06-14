/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CABehavior.h"

@class NSArray;

@interface CADynamicsBehavior : CABehavior {
}
@property(assign) float angularDrag;	// G=0x308685f5; S=0x308683c5; 
@property(assign) double collisionInterval;	// G=0x30868571; S=0x30868341; 
@property(assign) float drag;	// G=0x308685dd; S=0x308683ad; 
@property(copy) NSArray *forceFields;	// G=0x308684f5; S=0x308682c5; 
@property(assign) double minimumTimeStep;	// G=0x3086854d; S=0x3086831d; 
@property(assign) BOOL reactsToCollisions;	// G=0x3086850d; S=0x308682dd; 
@property(assign) float springScale;	// G=0x308685c5; S=0x30868395; 
@property(copy) NSArray *springs;	// G=0x308684dd; S=0x308682ad; 
@property(assign) float stoppedAngularVelocity;	// G=0x308685ad; S=0x3086837d; 
@property(assign) float stoppedVelocity;	// G=0x30868595; S=0x30868365; 
@property(assign) double timeStep;	// G=0x30868529; S=0x308682f9; 
+ (id)defaultValueForKey:(id)key;	// 0x308680fd
- (Object *)CA_copyRenderValue;	// 0x3086860d
// declared property getter: - (float)angularDrag;	// 0x308685f5
// declared property getter: - (double)collisionInterval;	// 0x30868571
// declared property getter: - (float)drag;	// 0x308685dd
// declared property getter: - (id)forceFields;	// 0x308684f5
// declared property getter: - (double)minimumTimeStep;	// 0x3086854d
// declared property getter: - (BOOL)reactsToCollisions;	// 0x3086850d
// declared property setter: - (void)setAngularDrag:(float)drag;	// 0x308683c5
// declared property setter: - (void)setCollisionInterval:(double)interval;	// 0x30868341
// declared property setter: - (void)setDrag:(float)drag;	// 0x308683ad
// declared property setter: - (void)setForceFields:(id)fields;	// 0x308682c5
// declared property setter: - (void)setMinimumTimeStep:(double)step;	// 0x3086831d
// declared property setter: - (void)setReactsToCollisions:(BOOL)collisions;	// 0x308682dd
// declared property setter: - (void)setSpringScale:(float)scale;	// 0x30868395
// declared property setter: - (void)setSprings:(id)springs;	// 0x308682ad
// declared property setter: - (void)setStoppedAngularVelocity:(float)velocity;	// 0x3086837d
// declared property setter: - (void)setStoppedVelocity:(float)velocity;	// 0x30868365
// declared property setter: - (void)setTimeStep:(double)step;	// 0x308682f9
// declared property getter: - (float)springScale;	// 0x308685c5
// declared property getter: - (id)springs;	// 0x308684dd
// declared property getter: - (float)stoppedAngularVelocity;	// 0x308685ad
// declared property getter: - (float)stoppedVelocity;	// 0x30868595
// declared property getter: - (double)timeStep;	// 0x30868529
@end

