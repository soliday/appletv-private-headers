/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDGraphic.h"
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"

@class GQDTTableModel, GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDTTable : GQDGraphic <GQDNameMappable> {
@private
	GQDTTableModel *mModel;	// 40 = 0x28
	GQDSStyle *mStyle;	// 44 = 0x2c
	BOOL mIsStreamed;	// 48 = 0x30
}
@property(retain) id model;	// G=0x30496e7d; S=0x30496ead; converted property
@property(retain) id tableStyle;	// G=0x30496e8d; S=0x30496eed; converted property
+ (const StateSpec *)stateForReading;	// 0x30496e71
- (void)dealloc;	// 0x30497179
- (id)defaultVectorStyleForVectorType:(int)vectorType;	// 0x30496f2d
- (BOOL)isStreamed;	// 0x30496e9d
// converted property getter: - (id)model;	// 0x30496e7d
// converted property setter: - (void)setModel:(id)model;	// 0x30496ead
// converted property setter: - (void)setTableStyle:(id)style;	// 0x30496eed
// converted property getter: - (id)tableStyle;	// 0x30496e8d
- (int)walkTableWithGenerator:(Class)generator state:(id)state;	// 0x30497071
@end
