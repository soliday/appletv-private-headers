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
@property(assign) float instanceAlphaOffset;	// G=0x302900cd; S=0x302900fd; 
@property(assign) float instanceBlueOffset;	// G=0x302900d9; S=0x30290109; 
@property(assign) CGColorRef instanceColor;	// G=0x302900b5; S=0x302900c1; 
@property(assign) int instanceCount;	// G=0x3029002d; S=0x30290039; 
@property(assign) double instanceDelay;	// G=0x30290065; S=0x30290071; 
@property(assign) float instanceGreenOffset;	// G=0x302900e5; S=0x30290115; 
@property(assign) float instanceRedOffset;	// G=0x302900f1; S=0x30290121; 
@property(assign) CATransform3D instanceTransform;	// G=0x3029007d; S=0x30290095; 
@property(assign) BOOL preservesDepth;	// G=0x30290045; S=0x30290055; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x3028fc81
+ (id)defaultValueForKey:(id)key;	// 0x3029012d
- (id)init;	// 0x3028fcd5
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x302901b5
- (id)_implicitActionForKey:(id)key;	// 0x3028fe45
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x3028fd79
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x3028fd3d
- (void)_renderSublayersInContext:(CGContextRef)context;	// 0x3028feed
- (void)didChangeValueForKey:(id)key;	// 0x3028fdb5
// declared property getter: - (float)instanceAlphaOffset;	// 0x302900cd
// declared property getter: - (float)instanceBlueOffset;	// 0x302900d9
// declared property getter: - (CGColorRef)instanceColor;	// 0x302900b5
// declared property getter: - (int)instanceCount;	// 0x3029002d
// declared property getter: - (double)instanceDelay;	// 0x30290065
// declared property getter: - (float)instanceGreenOffset;	// 0x302900e5
// declared property getter: - (float)instanceRedOffset;	// 0x302900f1
// declared property getter: - (CATransform3D)instanceTransform;	// 0x3029007d
// declared property getter: - (BOOL)preservesDepth;	// 0x30290045
// declared property setter: - (void)setInstanceAlphaOffset:(float)offset;	// 0x302900fd
// declared property setter: - (void)setInstanceBlueOffset:(float)offset;	// 0x30290109
// declared property setter: - (void)setInstanceColor:(CGColorRef)color;	// 0x302900c1
// declared property setter: - (void)setInstanceCount:(int)count;	// 0x30290039
// declared property setter: - (void)setInstanceDelay:(double)delay;	// 0x30290071
// declared property setter: - (void)setInstanceGreenOffset:(float)offset;	// 0x30290115
// declared property setter: - (void)setInstanceRedOffset:(float)offset;	// 0x30290121
// declared property setter: - (void)setInstanceTransform:(CATransform3D)transform;	// 0x30290095
// declared property setter: - (void)setPreservesDepth:(BOOL)depth;	// 0x30290055
@end

