/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CPRegion.h"
#import "CorePDF-Structs.h"


@interface CPLayoutArea : CPRegion {
	BOOL isFirstLayout;	// 68 = 0x44
}
@property(assign) BOOL isFirstLayout;	// G=0x3260c94d; S=0x3260c95d; converted property
@property(assign) BOOL isImageRegion;	// G=0x3260c979; S=0x3260cc25; converted property
- (id)init;	// 0x3260c981
- (void)accept:(id)accept;	// 0x3260ceb5
- (void)addColumnBreaks;	// 0x3260ccad
- (id)description;	// 0x3260c9c5
- (BOOL)isBoxRegion;	// 0x3260c96d
// converted property getter: - (BOOL)isFirstLayout;	// 0x3260c94d
- (BOOL)isGraphicalRegion;	// 0x3260c971
// converted property getter: - (BOOL)isImageRegion;	// 0x3260c979
- (BOOL)isRowRegion;	// 0x3260c975
- (BOOL)isShapeRegion;	// 0x3260c97d
- (BOOL)isSimilarTo:(id)to;	// 0x3260c949
- (CGRect)layoutAreaBounds;	// 0x3260cb11
- (id)properties;	// 0x3260ca19
- (float)selectionBottom;	// 0x3260ca79
// converted property setter: - (void)setIsFirstLayout:(BOOL)layout;	// 0x3260c95d
// converted property setter: - (void)setIsImageRegion:(BOOL)region;	// 0x3260cc25
@end

