/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@protocol BRAppliance;

__attribute__((visibility("hidden")))
@interface BRApplianceColumnControl : BRControl {
@private
	id<BRAppliance> _appliance;	// 44 = 0x2c
	BRControl *_applianceLabel;	// 48 = 0x30
	float _headerWidth;	// 52 = 0x34
	float _maxCategoryWidth;	// 56 = 0x38
}
@property(readonly, assign) float headerWidth;	// G=0x329eb0fd; converted property
@property(assign) float maxCategoryWidth;	// G=0x329e7e15; S=0x329e7e05; converted property
- (id)initWithAppliance:(id)appliance;	// 0x329e8059
- (id)accessibilityLabel;	// 0x329e7e59
- (void)dealloc;	// 0x329e7ffd
// converted property getter: - (float)headerWidth;	// 0x329eb0fd
- (void)layoutSubcontrols;	// 0x329eb439
// converted property getter: - (float)maxCategoryWidth;	// 0x329e7e15
- (void)reload;	// 0x329e7e79
- (void)resetMaxCategoryWidth;	// 0x329e7e45
- (void)resetMetrics;	// 0x329e7e25
// converted property setter: - (void)setMaxCategoryWidth:(float)width;	// 0x329e7e05
@end

