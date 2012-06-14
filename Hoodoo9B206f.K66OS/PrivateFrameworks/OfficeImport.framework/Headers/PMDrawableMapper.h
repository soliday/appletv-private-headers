/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDrawableMapper.h"
#import "OfficeImport-Structs.h"

@class OADShape, CMDrawingContext;

__attribute__((visibility("hidden")))
@interface PMDrawableMapper : CMDrawableMapper {
@private
	OADShape *mShape;	// 80 = 0x50
	CMDrawingContext *mDrawingContext;	// 84 = 0x54
	BOOL mTopLevelMapper;	// 88 = 0x58
}
@property(retain) id drawingContext;	// G=0x34443195; S=0x343765a1; converted property
@property(assign, getter=isTopLevelMapper) BOOL topLevelMapper;	// G=0x3437577d; S=0x34376471; converted property
+ (id)orientedBoundsForDrawable:(id)drawable;	// 0x343761f1
- (void)dealloc;	// 0x3437578d
// converted property getter: - (id)drawingContext;	// 0x34443195
// converted property getter: - (BOOL)isTopLevelMapper;	// 0x3437577d
- (void)mapAt:(id)at withState:(id)state;	// 0x34375a09
- (void)mapBounds;	// 0x34376051
- (void)mapChartAt:(id)at withState:(id)state;	// 0x3455aee5
- (void)mapDiagramAt:(id)at withState:(id)state;	// 0x3453e639
- (void)mapFreeForm:(id)form orientedBounds:(id)bounds transformedBounds:(CGRect *)bounds3 state:(id)state;	// 0x344be0ad
- (void)mapOfficeArtGroupAt:(id)at withState:(id)state;	// 0x34442bd1
- (void)mapOfficeArtImageAt:(id)at withState:(id)state;	// 0x3443a325
- (void)mapOfficeArtShapeAt:(id)at withState:(id)state;	// 0x343765e1
- (void)mapRectangularShapeAt:(id)at withState:(id)state;	// 0x34376bf5
- (void)mapShapeAsBackgroundAt:(id)at withState:(id)state;	// 0x3443c695
// converted property setter: - (void)setDrawingContext:(id)context;	// 0x343765a1
// converted property setter: - (void)setTopLevelMapper:(BOOL)mapper;	// 0x34376471
- (CGRect)shapeTextBoxWithState:(id)state;	// 0x3443dc39
- (CGRect)slideRect;	// 0x3466bda5
- (CGRect)transformRectToPage:(CGRect)page;	// 0x34376fa5
@end

