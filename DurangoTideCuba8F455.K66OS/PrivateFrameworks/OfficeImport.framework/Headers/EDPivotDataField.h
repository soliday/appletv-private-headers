/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EDPivotDataField : NSObject {
@private
	int mBaseField;	// 4 = 0x4
	unsigned mBaseItem;	// 8 = 0x8
	unsigned mFieldId;	// 12 = 0xc
	unsigned mNumFmtId;	// 16 = 0x10
	NSString *mName;	// 20 = 0x14
	int mFormat;	// 24 = 0x18
}
@property(assign) int baseField;	// G=0x32cf4ea9; S=0x32cf4eb9; converted property
@property(assign) unsigned baseItem;	// G=0x32cf4ec9; S=0x32cf4ed9; converted property
@property(assign) unsigned fieldId;	// G=0x32cf4ee9; S=0x32cf4ef9; converted property
@property(retain) id name;	// G=0x32cf4f29; S=0x32cf56b9; converted property
@property(assign) unsigned numFmtId;	// G=0x32cf4f09; S=0x32cf4f19; converted property
@property(assign) int showDataAs;	// G=0x32cf4f39; S=0x32cf4f49; converted property
+ (id)pivotDataField;	// 0x32cf56f5
- (id)init;	// 0x32cf51f1
// converted property getter: - (int)baseField;	// 0x32cf4ea9
// converted property getter: - (unsigned)baseItem;	// 0x32cf4ec9
- (void)dealloc;	// 0x32cf5735
// converted property getter: - (unsigned)fieldId;	// 0x32cf4ee9
// converted property getter: - (id)name;	// 0x32cf4f29
// converted property getter: - (unsigned)numFmtId;	// 0x32cf4f09
// converted property setter: - (void)setBaseField:(int)field;	// 0x32cf4eb9
// converted property setter: - (void)setBaseItem:(unsigned)item;	// 0x32cf4ed9
// converted property setter: - (void)setFieldId:(unsigned)anId;	// 0x32cf4ef9
// converted property setter: - (void)setName:(id)name;	// 0x32cf56b9
// converted property setter: - (void)setNumFmtId:(unsigned)anId;	// 0x32cf4f19
// converted property setter: - (void)setShowDataAs:(int)as;	// 0x32cf4f49
// converted property getter: - (int)showDataAs;	// 0x32cf4f39
@end

