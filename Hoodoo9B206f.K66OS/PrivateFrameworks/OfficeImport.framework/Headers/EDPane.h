/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDReference;

__attribute__((visibility("hidden")))
@interface EDPane : NSObject {
@private
	double mXSplitPosition;	// 4 = 0x4
	double mYSplitPosition;	// 12 = 0xc
	EDReference *mTopLeftCell;	// 20 = 0x14
	int mActivePane;	// 24 = 0x18
}
@property(assign) int activePane;	// G=0x345d00a5; S=0x3447edf5; converted property
@property(retain) id topLeftCell;	// G=0x345d0095; S=0x3447ee2d; converted property
@property(assign) double xSplitPosition;	// G=0x345d0065; S=0x3447ee05; converted property
@property(assign) double ySplitPosition;	// G=0x345d007d; S=0x3447ee19; converted property
+ (id)pane;	// 0x3447ed49
- (id)init;	// 0x3447ed91
// converted property getter: - (int)activePane;	// 0x345d00a5
- (void)dealloc;	// 0x34485981
// converted property setter: - (void)setActivePane:(int)pane;	// 0x3447edf5
// converted property setter: - (void)setTopLeftCell:(id)cell;	// 0x3447ee2d
// converted property setter: - (void)setXSplitPosition:(double)position;	// 0x3447ee05
// converted property setter: - (void)setYSplitPosition:(double)position;	// 0x3447ee19
// converted property getter: - (id)topLeftCell;	// 0x345d0095
// converted property getter: - (double)xSplitPosition;	// 0x345d0065
// converted property getter: - (double)ySplitPosition;	// 0x345d007d
@end

