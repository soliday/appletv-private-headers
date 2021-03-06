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
+ (id)avQueue;	// 0x306840c5
+ (id)queueWithArray:(id)array error:(id *)error;	// 0x30693aa1
- (id)init;	// 0x30693ae1
- (id)initWithArray:(id)array error:(id *)error;	// 0x30684101
- (id)initWithError:(id *)error;	// 0x3068417d
- (int)_instantiateItem;	// 0x30693af5
- (BOOL)appendItem:(id)item error:(id *)error;	// 0x30684de5
- (BOOL)appendItemsFromArray:(id)array error:(id *)error;	// 0x30690929
- (void)dealloc;	// 0x3068b865
- (unsigned)indexOfItem:(id)item;	// 0x30693af9
- (BOOL)insertItem:(id)item afterItem:(id)item2 error:(id *)error;	// 0x30693c05
- (BOOL)insertItem:(id)item atIndex:(unsigned)index error:(id *)error;	// 0x30684e21
- (BOOL)isBeingModified;	// 0x30693ea5
- (id)itemAfterItem:(id)item;	// 0x30693b59
- (id)itemAtIndex:(unsigned)index;	// 0x30686101
- (unsigned)itemCount;	// 0x306841e9
- (void)itemWasAdded:(id)added atIndex:(int)index;	// 0x30684fa5
- (void)itemWillBeRemoved:(id)item atIndex:(int)index;	// 0x3068af39
- (void)removeAllItems;	// 0x30693e45
- (BOOL)removeItem:(id)item;	// 0x30693da5
- (BOOL)removeItemAtIndex:(unsigned)index;	// 0x3068ae69
- (void)removeItemsInRange:(NSRange)range;	// 0x30693e15
@end

