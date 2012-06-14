/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImage;

__attribute__((visibility("hidden")))
@interface BRMultiPartWidgetLayer : BRControl {
@private
	BOOL _suppressAnimations;	// 49 = 0x31
	BRControl *_topRightCornerControl;	// 52 = 0x34
	BRControl *_topEdgeControl;	// 56 = 0x38
	BRControl *_topLeftCornerControl;	// 60 = 0x3c
	BRControl *_rightEdgeControl;	// 64 = 0x40
	BRControl *_bottomRightCornerControl;	// 68 = 0x44
	BRControl *_bottomEdgeControl;	// 72 = 0x48
	BRControl *_bottomLeftCornerControl;	// 76 = 0x4c
	BRControl *_leftEdgeControl;	// 80 = 0x50
	BRControl *_centerControl;	// 84 = 0x54
	BRControl *_bottomDecoControl;	// 88 = 0x58
	BRControl *_topDecoControl;	// 92 = 0x5c
	float _centerOverlapFactor;	// 96 = 0x60
	float _sourceArtSceneHeight;	// 100 = 0x64
}
@property(assign, nonatomic) BRImage *bottomDeco;	// G=0x32a4efcd; S=0x32a4efa1; 
@property(assign, nonatomic) BRControl *bottomDecoControl;	// G=0x32a4fb81; S=0x32a4fb91; @synthesize=_bottomDecoControl
@property(assign, nonatomic) BRImage *bottomEdge;	// G=0x32a4ef69; S=0x32a4ef3d; 
@property(assign, nonatomic) BRControl *bottomEdgeControl;	// G=0x32a4fb01; S=0x32a4fb11; @synthesize=_bottomEdgeControl
@property(assign, nonatomic) BRImage *bottomLeftCorner;	// G=0x32a4edd9; S=0x32a4edad; 
@property(assign, nonatomic) BRControl *bottomLeftCornerControl;	// G=0x32a4fb21; S=0x32a4fb31; @synthesize=_bottomLeftCornerControl
@property(assign, nonatomic) BRImage *bottomRightCorner;	// G=0x32a4ed75; S=0x32a4ed49; 
@property(assign, nonatomic) BRControl *bottomRightCornerControl;	// G=0x32a4fae1; S=0x32a4faf1; @synthesize=_bottomRightCornerControl
@property(assign, nonatomic) BRImage *center;	// G=0x32a4f095; S=0x32a4f069; 
@property(assign, nonatomic) BRControl *centerControl;	// G=0x32a4fb61; S=0x32a4fb71; @synthesize=_centerControl
@property(assign, nonatomic) float centerOverlapFactor;	// G=0x32a4fbc1; S=0x32a4f32d; @synthesize=_centerOverlapFactor
@property(assign, nonatomic) BRImage *leftEdge;	// G=0x32a4eea1; S=0x32a4ee75; 
@property(assign, nonatomic) BRControl *leftEdgeControl;	// G=0x32a4fb41; S=0x32a4fb51; @synthesize=_leftEdgeControl
@property(assign, nonatomic) BRImage *rightEdge;	// G=0x32a4ee3d; S=0x32a4ee11; 
@property(assign, nonatomic) BRControl *rightEdgeControl;	// G=0x32a4fac1; S=0x32a4fad1; @synthesize=_rightEdgeControl
@property(assign, nonatomic) float sourceArtSceneHeight;	// G=0x32a4fbd1; S=0x32a4fbe1; @synthesize=_sourceArtSceneHeight
@property(assign, nonatomic) BRImage *topDeco;	// G=0x32a4f031; S=0x32a4f005; 
@property(assign, nonatomic) BRControl *topDecoControl;	// G=0x32a4fba1; S=0x32a4fbb1; @synthesize=_topDecoControl
@property(assign, nonatomic) BRImage *topEdge;	// G=0x32a4ef05; S=0x32a4eed9; 
@property(assign, nonatomic) BRControl *topEdgeControl;	// G=0x32a4fa81; S=0x32a4fa91; @synthesize=_topEdgeControl
@property(assign, nonatomic) BRImage *topLeftCorner;	// G=0x32a4ed11; S=0x32a4ece5; 
@property(assign, nonatomic) BRControl *topLeftCornerControl;	// G=0x32a4faa1; S=0x32a4fab1; @synthesize=_topLeftCornerControl
@property(assign, nonatomic) BRImage *topRightCorner;	// G=0x32a4ecad; S=0x32a4ec81; 
@property(assign, nonatomic) BRControl *topRightCornerControl;	// G=0x32a4fa61; S=0x32a4fa71; @synthesize=_topRightCornerControl
- (id)init;	// 0x32a4ec25
- (id)_defaultActions;	// 0x32a4fbf1
- (void)_setImage:(id)image inControlNamed:(id)controlNamed withAntialiasingMask:(unsigned)antialiasingMask;	// 0x32a4fcf1
- (float)animationDuration;	// 0x32a4f479
- (id)animationTimingFunction;	// 0x32a4f481
// declared property getter: - (id)bottomDeco;	// 0x32a4efcd
// declared property getter: - (id)bottomDecoControl;	// 0x32a4fb81
// declared property getter: - (id)bottomEdge;	// 0x32a4ef69
// declared property getter: - (id)bottomEdgeControl;	// 0x32a4fb01
// declared property getter: - (id)bottomLeftCorner;	// 0x32a4edd9
// declared property getter: - (id)bottomLeftCornerControl;	// 0x32a4fb21
// declared property getter: - (id)bottomRightCorner;	// 0x32a4ed75
// declared property getter: - (id)bottomRightCornerControl;	// 0x32a4fae1
// declared property getter: - (id)center;	// 0x32a4f095
// declared property getter: - (id)centerControl;	// 0x32a4fb61
// declared property getter: - (float)centerOverlapFactor;	// 0x32a4fbc1
- (void)clearImageMap;	// 0x32a4f0cd
- (CGSize)edgeSize;	// 0x32a4f1c9
- (void)layoutSubcontrols;	// 0x32a4f4ad
// declared property getter: - (id)leftEdge;	// 0x32a4eea1
// declared property getter: - (id)leftEdgeControl;	// 0x32a4fb41
// declared property getter: - (id)rightEdge;	// 0x32a4ee3d
// declared property getter: - (id)rightEdgeControl;	// 0x32a4fac1
// declared property setter: - (void)setBottomDeco:(id)deco;	// 0x32a4efa1
// declared property setter: - (void)setBottomDecoControl:(id)control;	// 0x32a4fb91
// declared property setter: - (void)setBottomEdge:(id)edge;	// 0x32a4ef3d
// declared property setter: - (void)setBottomEdgeControl:(id)control;	// 0x32a4fb11
// declared property setter: - (void)setBottomLeftCorner:(id)corner;	// 0x32a4edad
// declared property setter: - (void)setBottomLeftCornerControl:(id)control;	// 0x32a4fb31
// declared property setter: - (void)setBottomRightCorner:(id)corner;	// 0x32a4ed49
// declared property setter: - (void)setBottomRightCornerControl:(id)control;	// 0x32a4faf1
// declared property setter: - (void)setCenter:(id)center;	// 0x32a4f069
// declared property setter: - (void)setCenterControl:(id)control;	// 0x32a4fb71
// declared property setter: - (void)setCenterOverlapFactor:(float)factor;	// 0x32a4f32d
// declared property setter: - (void)setLeftEdge:(id)edge;	// 0x32a4ee75
// declared property setter: - (void)setLeftEdgeControl:(id)control;	// 0x32a4fb51
// declared property setter: - (void)setRightEdge:(id)edge;	// 0x32a4ee11
// declared property setter: - (void)setRightEdgeControl:(id)control;	// 0x32a4fad1
// declared property setter: - (void)setSourceArtSceneHeight:(float)height;	// 0x32a4fbe1
- (void)setSuppressAnimations:(BOOL)animations;	// 0x32a4f34d
// declared property setter: - (void)setTopDeco:(id)deco;	// 0x32a4f005
// declared property setter: - (void)setTopDecoControl:(id)control;	// 0x32a4fbb1
// declared property setter: - (void)setTopEdge:(id)edge;	// 0x32a4eed9
// declared property setter: - (void)setTopEdgeControl:(id)control;	// 0x32a4fa91
// declared property setter: - (void)setTopLeftCorner:(id)corner;	// 0x32a4ece5
// declared property setter: - (void)setTopLeftCornerControl:(id)control;	// 0x32a4fab1
// declared property setter: - (void)setTopRightCorner:(id)corner;	// 0x32a4ec81
// declared property setter: - (void)setTopRightCornerControl:(id)control;	// 0x32a4fa71
// declared property getter: - (float)sourceArtSceneHeight;	// 0x32a4fbd1
// declared property getter: - (id)topDeco;	// 0x32a4f031
// declared property getter: - (id)topDecoControl;	// 0x32a4fba1
// declared property getter: - (id)topEdge;	// 0x32a4ef05
// declared property getter: - (id)topEdgeControl;	// 0x32a4fa81
// declared property getter: - (id)topLeftCorner;	// 0x32a4ed11
// declared property getter: - (id)topLeftCornerControl;	// 0x32a4faa1
// declared property getter: - (id)topRightCorner;	// 0x32a4ecad
// declared property getter: - (id)topRightCornerControl;	// 0x32a4fa61
- (void)updateAnimations;	// 0x32a4f395
@end

