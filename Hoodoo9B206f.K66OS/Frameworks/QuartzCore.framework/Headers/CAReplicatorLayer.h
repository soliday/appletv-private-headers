/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"


@interface CAReplicatorLayer : CALayer {
}
@property(assign) float instanceAlphaOffset;	// G=0x3085f405; S=0x3085f3fd; 
@property(assign) float instanceBlueOffset;	// G=0x3085f415; S=0x3085f40d; 
@property(assign) CGColorRef instanceColor;	// G=0x3085f445; S=0x3085f43d; 
@property(assign) int instanceCount;	// G=0x3085f4f5; S=0x3085f4ed; 
@property(assign) double instanceDelay;	// G=0x3085f4cd; S=0x3085f4c5; 
@property(assign) float instanceGreenOffset;	// G=0x3085f425; S=0x3085f41d; 
@property(assign) float instanceRedOffset;	// G=0x3085f435; S=0x3085f42d; 
@property(assign) CATransform3D instanceTransform;	// G=0x3085f4b1; S=0x3085f44d; 
@property(assign) BOOL preservesDepth;	// G=0x3085f4dd; S=0x3085f4d5; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x3085f31d
+ (id)defaultValueForKey:(id)key;	// 0x3085f375
- (id)init;	// 0x3085f9c5
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x3085f595
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x3085f549
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x3085f4fd
- (void)_renderSublayersInContext:(CGContextRef)context;	// 0x3085f70d
- (void)didChangeValueForKey:(id)key;	// 0x3085f931
- (id)implicitAnimationForKeyPath:(id)keyPath;	// 0x3085f87d
// declared property getter: - (float)instanceAlphaOffset;	// 0x3085f405
// declared property getter: - (float)instanceBlueOffset;	// 0x3085f415
// declared property getter: - (CGColorRef)instanceColor;	// 0x3085f445
// declared property getter: - (int)instanceCount;	// 0x3085f4f5
// declared property getter: - (double)instanceDelay;	// 0x3085f4cd
// declared property getter: - (float)instanceGreenOffset;	// 0x3085f425
// declared property getter: - (float)instanceRedOffset;	// 0x3085f435
// declared property getter: - (CATransform3D)instanceTransform;	// 0x3085f4b1
// declared property getter: - (BOOL)preservesDepth;	// 0x3085f4dd
// declared property setter: - (void)setInstanceAlphaOffset:(float)offset;	// 0x3085f3fd
// declared property setter: - (void)setInstanceBlueOffset:(float)offset;	// 0x3085f40d
// declared property setter: - (void)setInstanceColor:(CGColorRef)color;	// 0x3085f43d
// declared property setter: - (void)setInstanceCount:(int)count;	// 0x3085f4ed
// declared property setter: - (void)setInstanceDelay:(double)delay;	// 0x3085f4c5
// declared property setter: - (void)setInstanceGreenOffset:(float)offset;	// 0x3085f41d
// declared property setter: - (void)setInstanceRedOffset:(float)offset;	// 0x3085f42d
// declared property setter: - (void)setInstanceTransform:(CATransform3D)transform;	// 0x3085f44d
// declared property setter: - (void)setPreservesDepth:(BOOL)depth;	// 0x3085f4d5
@end

