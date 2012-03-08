/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDChartType.h"


__attribute__((visibility("hidden")))
@interface CHDChartTypeWithGrouping : CHDChartType {
@private
	int mGrouping;	// 24 = 0x18
}
@property(assign) int grouping;	// G=0x32996fe1; S=0x329ff629; converted property
- (id)initWithChart:(id)chart;	// 0x3298e999
- (id)chdGroupingString;	// 0x32a81efd
// converted property getter: - (int)grouping;	// 0x32996fe1
- (bool)isGroupingStacked;	// 0x3298ebd1
// converted property setter: - (void)setGrouping:(int)grouping;	// 0x329ff629
@end
