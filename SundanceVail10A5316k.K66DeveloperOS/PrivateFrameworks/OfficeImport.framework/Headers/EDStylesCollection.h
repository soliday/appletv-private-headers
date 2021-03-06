/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDCollection.h"


__attribute__((visibility("hidden")))
@interface EDStylesCollection : EDCollection {
@private
	unsigned mDefaultWorkbookStyleIndex;	// 8 = 0x8
}
@property(assign) unsigned defaultWorkbookStyleIndex;	// G=0x312313e9; S=0x3109c27d; converted property
- (id)init;	// 0x31095f79
- (unsigned)addObject:(id)object;	// 0x3109d605
- (id)defaultWorkbookStyle;	// 0x310bcd51
// converted property getter: - (unsigned)defaultWorkbookStyleIndex;	// 0x312313e9
- (void)removeAllObjects;	// 0x312313bd
- (void)removeObjectAtIndex:(unsigned)index;	// 0x31231391
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x3123138d
// converted property setter: - (void)setDefaultWorkbookStyleIndex:(unsigned)index;	// 0x3109c27d
@end

