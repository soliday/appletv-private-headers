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
@property(assign) bool showMarker;	// G=0x32d0da95; S=0x32cae3ed; converted property
@property(assign, getter=isStockType) bool stockType;	// G=0x32d0daa5; S=0x32d0dab5; converted property
- (id)initWithChart:(id)chart;	// 0x32c970c9
// converted property getter: - (bool)isStockType;	// 0x32d0daa5
// converted property setter: - (void)setShowMarker:(bool)marker;	// 0x32cae3ed
// converted property setter: - (void)setStockType:(bool)type;	// 0x32d0dab5
// converted property getter: - (bool)showMarker;	// 0x32d0da95
@end

