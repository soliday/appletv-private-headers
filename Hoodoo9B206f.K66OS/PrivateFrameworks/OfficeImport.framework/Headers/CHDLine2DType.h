/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDLineType.h"


__attribute__((visibility("hidden")))
@interface CHDLine2DType : CHDLineType {
@private
	bool mShowMarker;	// 28 = 0x1c
	bool mStockType;	// 29 = 0x1d
}
@property(assign) bool showMarker;	// G=0x345d9cad; S=0x34556639; converted property
@property(assign, getter=isStockType) bool stockType;	// G=0x345d9cbd; S=0x345d9ccd; converted property
- (id)initWithChart:(id)chart;	// 0x34547fd9
// converted property getter: - (bool)isStockType;	// 0x345d9cbd
// converted property setter: - (void)setShowMarker:(bool)marker;	// 0x34556639
// converted property setter: - (void)setStockType:(bool)type;	// 0x345d9ccd
// converted property getter: - (bool)showMarker;	// 0x345d9cad
@end

