/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ODIDrawable : NSObject {
}
+ (void)addArrowHeadToShapeProperties:(id)shapeProperties;	// 0x34628aa1
+ (id)addShapeWithBounds:(CGRect)bounds rotation:(float)rotation geometry:(id)geometry state:(id)state;	// 0x34627fd9
+ (void)map1dArrowStyleFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x34628461
+ (void)map1dArrowStyleToShape:(id)shape state:(id)state;	// 0x34628569
+ (void)mapShapeProperties:(id)properties shape:(id)shape state:(id)state;	// 0x34628a0d
+ (void)mapShapeProperties:(id)properties shapeStyle:(id)style shape:(id)shape state:(id)state;	// 0x34628999
+ (void)mapStyleAndTextFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x34628679
+ (void)mapStyleForLabelName:(id)labelName point:(id)point shape:(id)shape state:(id)state;	// 0x346283bd
+ (void)mapStyleForLabelName:(id)labelName shape:(id)shape state:(id)state;	// 0x346282fd
+ (void)mapStyleForPresentationName:(id)presentationName point:(id)point shape:(id)shape state:(id)state;	// 0x34628259
+ (void)mapStyleFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x34628125
+ (id)presentationWithName:(id)name point:(id)point;	// 0x34628721
+ (id)shapeGeometryForBezierPath:(CGPathRef)bezierPath gSpace:(CGRect)space;	// 0x34628b45
+ (id)shapeGeometryForDoubleArrowWithControlPoint:(CGPoint)controlPoint;	// 0x34627e8d
+ (id)shapeGeometryForEllipse;	// 0x34627cc9
+ (id)shapeGeometryForRectangle;	// 0x34627c71
+ (id)shapeGeometryForRightArrowWithControlPoint:(CGPoint)controlPoint;	// 0x34627dbd
+ (id)shapeGeometryForRoundedRectangleWithRadius:(float)radius;	// 0x34627d21
+ (id)shapeGeometryWithShapeType:(int)shapeType adjustValues:(const int *)values;	// 0x34627f4d
+ (CGSize)sizeOfDiagram:(id)diagram;	// 0x34628ff9
+ (id)styleForLabelName:(id)labelName styleCount:(int)count styleIndex:(int)index state:(id)state;	// 0x346288c9
+ (id)styleForPresentation:(id)presentation point:(id)point state:(id)state;	// 0x346287ed
@end

