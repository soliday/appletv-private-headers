/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"

@class NSString, NSArray;

@interface CAShapeLayer : CALayer {
}
@property(assign) CGColorRef fillColor;	// G=0x36cccc69; S=0x36cccc61; 
@property(copy) NSString *fillRule;	// G=0x36cccc59; S=0x36cccc51; 
@property(copy) NSString *lineCap;	// G=0x36cccbe9; S=0x36cccbe1; 
@property(copy) NSArray *lineDashPattern;	// G=0x36cccbd9; S=0x36cccbd1; 
@property(assign) float lineDashPhase;	// G=0x36cccbc9; S=0x36cccbc1; 
@property(copy) NSString *lineJoin;	// G=0x36cccbf9; S=0x36cccbf1; 
@property(assign) float lineWidth;	// G=0x36cccc19; S=0x36cccc11; 
@property(assign) float miterLimit;	// G=0x36cccc09; S=0x36cccc01; 
@property(assign) CGPathRef path;	// G=0x36cccc79; S=0x36cccc71; 
@property(assign) CGColorRef strokeColor;	// G=0x36cccc49; S=0x36cccc41; 
@property(assign) float strokeEnd;	// G=0x36cccc29; S=0x36cccc21; 
@property(assign) float strokeStart;	// G=0x36cccc39; S=0x36cccc31; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x36ccca79
+ (id)defaultValueForKey:(id)key;	// 0x36cccad1
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x36cccd19
- (void)_renderForegroundInContext:(CGContextRef)context;	// 0x36ccd28d
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x36cccccd
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x36cccc81
- (void)didChangeValueForKey:(id)key;	// 0x36ccca19
// declared property getter: - (CGColorRef)fillColor;	// 0x36cccc69
// declared property getter: - (id)fillRule;	// 0x36cccc59
- (id)implicitAnimationForKeyPath:(id)keyPath;	// 0x36ccd851
// declared property getter: - (id)lineCap;	// 0x36cccbe9
// declared property getter: - (id)lineDashPattern;	// 0x36cccbd9
// declared property getter: - (float)lineDashPhase;	// 0x36cccbc9
// declared property getter: - (id)lineJoin;	// 0x36cccbf9
// declared property getter: - (float)lineWidth;	// 0x36cccc19
// declared property getter: - (float)miterLimit;	// 0x36cccc09
// declared property getter: - (CGPathRef)path;	// 0x36cccc79
// declared property setter: - (void)setFillColor:(CGColorRef)color;	// 0x36cccc61
// declared property setter: - (void)setFillRule:(id)rule;	// 0x36cccc51
// declared property setter: - (void)setLineCap:(id)cap;	// 0x36cccbe1
// declared property setter: - (void)setLineDashPattern:(id)pattern;	// 0x36cccbd1
// declared property setter: - (void)setLineDashPhase:(float)phase;	// 0x36cccbc1
// declared property setter: - (void)setLineJoin:(id)join;	// 0x36cccbf1
// declared property setter: - (void)setLineWidth:(float)width;	// 0x36cccc11
// declared property setter: - (void)setMiterLimit:(float)limit;	// 0x36cccc01
// declared property setter: - (void)setPath:(CGPathRef)path;	// 0x36cccc71
// declared property setter: - (void)setStrokeColor:(CGColorRef)color;	// 0x36cccc41
// declared property setter: - (void)setStrokeEnd:(float)end;	// 0x36cccc21
// declared property setter: - (void)setStrokeStart:(float)start;	// 0x36cccc31
// declared property getter: - (CGColorRef)strokeColor;	// 0x36cccc49
// declared property getter: - (float)strokeEnd;	// 0x36cccc29
// declared property getter: - (float)strokeStart;	// 0x36cccc39
@end
