/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDLayoutObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDShape : ODDLayoutObject {
@private
	int mType;	// 4 = 0x4
	int mPresetType;	// 8 = 0x8
	NSMutableArray *mAdjustments;	// 12 = 0xc
}
@property(assign) int presetType;	// G=0x34623a01; S=0x34623a11; converted property
@property(assign) int type;	// G=0x346239e1; S=0x346239f1; converted property
- (id)init;	// 0x34623a31
- (void)addAdjustment:(id)adjustment;	// 0x34623a95
- (id)adjustments;	// 0x34623a21
- (void)dealloc;	// 0x34623ab9
// converted property getter: - (int)presetType;	// 0x34623a01
// converted property setter: - (void)setPresetType:(int)type;	// 0x34623a11
// converted property setter: - (void)setType:(int)type;	// 0x346239f1
// converted property getter: - (int)type;	// 0x346239e1
@end

