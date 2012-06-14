/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADStroke;

__attribute__((visibility("hidden")))
@interface OADTableCellBorderStyle : NSObject {
@private
	OADStroke *mLeftStroke;	// 4 = 0x4
	OADStroke *mRightStroke;	// 8 = 0x8
	OADStroke *mTopStroke;	// 12 = 0xc
	OADStroke *mBottomStroke;	// 16 = 0x10
	OADStroke *mHorzInsideStroke;	// 20 = 0x14
	OADStroke *mVertInsideStroke;	// 24 = 0x18
	OADStroke *mTopLeftToBottomRightStroke;	// 28 = 0x1c
	OADStroke *mBottomLeftToTopRightStroke;	// 32 = 0x20
}
@property(retain) id bottomLeftToTopRightStroke;	// G=0x3461b1fd; S=0x3461be55; converted property
@property(retain) id bottomStroke;	// G=0x3454fabd; S=0x34524a19; converted property
@property(retain) id horzInsideStroke;	// G=0x3454facd; S=0x34524a59; converted property
@property(retain) id leftStroke;	// G=0x3454faed; S=0x34524959; converted property
@property(retain) id rightStroke;	// G=0x3454fb0d; S=0x34524999; converted property
@property(retain) id topLeftToBottomRightStroke;	// G=0x3461b1ed; S=0x3461be95; converted property
@property(retain) id topStroke;	// G=0x3454fa9d; S=0x345249d9; converted property
@property(retain) id vertInsideStroke;	// G=0x3454fb1d; S=0x34524a99; converted property
+ (id)defaultAxisParallelStroke;	// 0x3461bacd
+ (id)defaultObliqueStroke;	// 0x3461bab1
+ (id)defaultStyle;	// 0x3461b929
- (void)applyOverridesFrom:(id)from;	// 0x3461bb29
// converted property getter: - (id)bottomLeftToTopRightStroke;	// 0x3461b1fd
// converted property getter: - (id)bottomStroke;	// 0x3454fabd
- (void)dealloc;	// 0x345266ad
// converted property getter: - (id)horzInsideStroke;	// 0x3454facd
// converted property getter: - (id)leftStroke;	// 0x3454faed
// converted property getter: - (id)rightStroke;	// 0x3454fb0d
// converted property setter: - (void)setBottomLeftToTopRightStroke:(id)topRightStroke;	// 0x3461be55
// converted property setter: - (void)setBottomStroke:(id)stroke;	// 0x34524a19
// converted property setter: - (void)setHorzInsideStroke:(id)stroke;	// 0x34524a59
// converted property setter: - (void)setLeftStroke:(id)stroke;	// 0x34524959
// converted property setter: - (void)setRightStroke:(id)stroke;	// 0x34524999
// converted property setter: - (void)setTopLeftToBottomRightStroke:(id)bottomRightStroke;	// 0x3461be95
// converted property setter: - (void)setTopStroke:(id)stroke;	// 0x345249d9
// converted property setter: - (void)setVertInsideStroke:(id)stroke;	// 0x34524a99
- (id)shallowCopy;	// 0x3461bcdd
- (id)stroke:(int)stroke;	// 0x3461bed5
// converted property getter: - (id)topLeftToBottomRightStroke;	// 0x3461b1ed
// converted property getter: - (id)topStroke;	// 0x3454fa9d
// converted property getter: - (id)vertInsideStroke;	// 0x3454fb1d
@end

