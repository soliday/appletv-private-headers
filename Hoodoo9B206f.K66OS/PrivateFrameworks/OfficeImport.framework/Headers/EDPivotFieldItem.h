/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDPivotFieldItem : NSObject {
@private
	bool mChildItems;	// 4 = 0x4
	bool mExpanded;	// 5 = 0x5
	bool mCalculatedMember;	// 6 = 0x6
	bool mMissed;	// 7 = 0x7
	bool mHidden;	// 8 = 0x8
	bool mDetailsHidden;	// 9 = 0x9
	int mType;	// 12 = 0xc
	unsigned mItemIndex;	// 16 = 0x10
}
@property(assign) bool calculatedMember;	// G=0x345c54f1; S=0x3457fa65; converted property
@property(assign) bool childItems;	// G=0x345c54d1; S=0x3457fa45; converted property
@property(assign) bool detailsHidden;	// G=0x345c5521; S=0x3457fa95; converted property
@property(assign) bool expanded;	// G=0x345c54e1; S=0x3457fa55; converted property
@property(assign) bool hidden;	// G=0x345c5511; S=0x3457fa85; converted property
@property(assign) unsigned itemIndex;	// G=0x345c5531; S=0x3457faa5; converted property
@property(assign) bool missed;	// G=0x345c5501; S=0x3457fa75; converted property
@property(assign) int type;	// G=0x345c5541; S=0x3457fc69; converted property
+ (id)pivotFieldItem;	// 0x3457f955
- (id)init;	// 0x3457f99d
// converted property getter: - (bool)calculatedMember;	// 0x345c54f1
// converted property getter: - (bool)childItems;	// 0x345c54d1
// converted property getter: - (bool)detailsHidden;	// 0x345c5521
// converted property getter: - (bool)expanded;	// 0x345c54e1
// converted property getter: - (bool)hidden;	// 0x345c5511
// converted property getter: - (unsigned)itemIndex;	// 0x345c5531
// converted property getter: - (bool)missed;	// 0x345c5501
// converted property setter: - (void)setCalculatedMember:(bool)member;	// 0x3457fa65
// converted property setter: - (void)setChildItems:(bool)items;	// 0x3457fa45
// converted property setter: - (void)setDetailsHidden:(bool)hidden;	// 0x3457fa95
// converted property setter: - (void)setExpanded:(bool)expanded;	// 0x3457fa55
// converted property setter: - (void)setHidden:(bool)hidden;	// 0x3457fa85
// converted property setter: - (void)setItemIndex:(unsigned)index;	// 0x3457faa5
// converted property setter: - (void)setMissed:(bool)missed;	// 0x3457fa75
// converted property setter: - (void)setType:(int)type;	// 0x3457fc69
// converted property getter: - (int)type;	// 0x345c5541
@end
