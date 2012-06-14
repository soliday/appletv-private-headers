/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSRecursiveLock;

@interface AVQueue : NSObject {
@private
	NSRecursiveLock *_mutex;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
	void *_reserved;	// 12 = 0xc
	int _isBeingModifiedCount;	// 16 = 0x10
}
+ (id)avQueue;	// 0x323cc0c5
+ (id)queueWithArray:(id)array error:(id *)error;	// 0x323dbaa1
- (id)init;	// 0x323dbae1
- (id)initWithArray:(id)array error:(id *)error;	// 0x323cc101
- (id)initWithError:(id *)error;	// 0x323cc17d
- (int)_instantiateItem;	// 0x323dbaf5
- (BOOL)appendItem:(id)item error:(id *)error;	// 0x323ccde5
- (BOOL)appendItemsFromArray:(id)array error:(id *)error;	// 0x323d8929
- (void)dealloc;	// 0x323d3865
- (unsigned)indexOfItem:(id)item;	// 0x323dbaf9
- (BOOL)insertItem:(id)item afterItem:(id)item2 error:(id *)error;	// 0x323dbc05
- (BOOL)insertItem:(id)item atIndex:(unsigned)index error:(id *)error;	// 0x323cce21
- (BOOL)isBeingModified;	// 0x323dbea5
- (id)itemAfterItem:(id)item;	// 0x323dbb59
- (id)itemAtIndex:(unsigned)index;	// 0x323ce101
- (unsigned)itemCount;	// 0x323cc1e9
- (void)itemWasAdded:(id)added atIndex:(int)index;	// 0x323ccfa5
- (void)itemWillBeRemoved:(id)item atIndex:(int)index;	// 0x323d2f39
- (void)removeAllItems;	// 0x323dbe45
- (BOOL)removeItem:(id)item;	// 0x323dbda5
- (BOOL)removeItemAtIndex:(unsigned)index;	// 0x323d2e69
- (void)removeItemsInRange:(NSRange)range;	// 0x323dbe15
@end

