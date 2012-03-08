/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDDataPoint.h"

@class NSMutableArray, ODDTransitionPoint;

__attribute__((visibility("hidden")))
@interface ODDNodePoint : ODDDataPoint {
@private
	ODDNodePoint *mParent;	// 24 = 0x18
	NSMutableArray *mChildren;	// 28 = 0x1c
	ODDTransitionPoint *mParentTransition;	// 32 = 0x20
	ODDTransitionPoint *mSiblingTransition;	// 36 = 0x24
}
@property(retain) id parentTransition;	// G=0x32a2345d; S=0x329e70f5; converted property
@property(retain) id siblingTransition;	// G=0x32a0d819; S=0x329e71d1; converted property
- (void)addChild:(id)child order:(unsigned long)order;	// 0x329e6ef9
- (id)children;	// 0x329e79f9
- (void)dealloc;	// 0x329ed499
- (id)parent;	// 0x32a13275
// converted property getter: - (id)parentTransition;	// 0x32a2345d
// converted property setter: - (void)setParentTransition:(id)transition;	// 0x329e70f5
// converted property setter: - (void)setSiblingTransition:(id)transition;	// 0x329e71d1
- (void)setType:(int)type;	// 0x329e6069
// converted property getter: - (id)siblingTransition;	// 0x32a0d819
@end
