/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"

@class NSString, NSArray;

@interface CAGradientLayer : CALayer {
}
@property(retain) id colorMap;	// G=0x3134ff5d; S=0x3134ff65; 
@property(copy) NSArray *colors;	// G=0x3134f6ad; S=0x3134f6a5; 
@property(assign) CGPoint endPoint;	// G=0x3134f671; S=0x3134f669; 
@property(copy) NSArray *locations;	// G=0x3134f69d; S=0x3134f695; 
@property(assign) CGPoint startPoint;	// G=0x3134f685; S=0x3134f67d; 
@property(copy) NSString *type;	// G=0x3134f661; S=0x3134f659; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x3134f565
+ (id)defaultValueForKey:(id)key;	// 0x3134f5bd
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x3134f74d
- (void)_renderBackgroundInContext:(CGContextRef)context;	// 0x3134f991
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x3134f701
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x3134f6b5
// declared property getter: - (id)colorMap;	// 0x3134ff5d
// declared property getter: - (id)colors;	// 0x3134f6ad
- (void)didChangeValueForKey:(id)key;	// 0x3134f505
// declared property getter: - (CGPoint)endPoint;	// 0x3134f671
- (id)implicitAnimationForKeyPath:(id)keyPath;	// 0x3134fead
// declared property getter: - (id)locations;	// 0x3134f69d
// declared property setter: - (void)setColorMap:(id)map;	// 0x3134ff65
// declared property setter: - (void)setColors:(id)colors;	// 0x3134f6a5
// declared property setter: - (void)setEndPoint:(CGPoint)point;	// 0x3134f669
// declared property setter: - (void)setLocations:(id)locations;	// 0x3134f695
// declared property setter: - (void)setStartPoint:(CGPoint)point;	// 0x3134f67d
// declared property setter: - (void)setType:(id)type;	// 0x3134f659
// declared property getter: - (CGPoint)startPoint;	// 0x3134f685
// declared property getter: - (id)type;	// 0x3134f661
@end

