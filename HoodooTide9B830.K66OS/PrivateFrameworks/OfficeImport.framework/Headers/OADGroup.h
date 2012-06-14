/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawable.h"
#import "OfficeImport-Structs.h"
#import "OADDrawableContainer.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADGroup : OADDrawable <OADDrawableContainer> {
@private
	CGRect mLogicalBounds;	// 24 = 0x18
	NSMutableArray *mChildren;	// 40 = 0x28
}
@property(assign) CGRect logicalBounds;	// G=0x311b2dad; S=0x311b1d9d; converted property
- (id)init;	// 0x311b1a95
- (void)addChild:(id)child;	// 0x31262249
- (void)addChildren:(id)children;	// 0x311b1dc1
- (id)childAtIndex:(unsigned)index;	// 0x311b32a1
- (unsigned)childCount;	// 0x311b2d8d
- (id)children;	// 0x313872d9
- (void)dealloc;	// 0x311b447d
- (id)groupProperties;	// 0x3129d259
// converted property getter: - (CGRect)logicalBounds;	// 0x311b2dad
- (void)removeUnnecessaryOverrides;	// 0x311b2165
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;	// 0x311b1d9d
- (void)setParentTextListStyle:(id)style;	// 0x311b1e89
@end
