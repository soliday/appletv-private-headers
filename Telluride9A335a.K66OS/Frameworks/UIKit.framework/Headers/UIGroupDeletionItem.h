/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSIndexSet;

@interface UIGroupDeletionItem : NSObject {
@private
	unsigned _lastIndex;	// 4 = 0x4
	int _group;	// 8 = 0x8
	NSIndexSet *_indexes;	// 12 = 0xc
}
@property(readonly, assign) int group;	// G=0x33b7f365; converted property
@property(readonly, retain) NSIndexSet *indexes;	// G=0x33b7f375; converted property
@property(assign) unsigned lastIndex;	// G=0x33b7f385; S=0x33b7f395; converted property
- (id)initWithGroup:(int)group;	// 0x33b7f261
- (id)initWithGroup:(int)group andIndexes:(id)indexes;	// 0x33b7f275
- (id)initWithIndexes:(id)indexes inGroup:(int)group;	// 0x33b7f301
- (void)dealloc;	// 0x33b7f319
// converted property getter: - (int)group;	// 0x33b7f365
// converted property getter: - (id)indexes;	// 0x33b7f375
// converted property getter: - (unsigned)lastIndex;	// 0x33b7f385
// converted property setter: - (void)setLastIndex:(unsigned)index;	// 0x33b7f395
@end

