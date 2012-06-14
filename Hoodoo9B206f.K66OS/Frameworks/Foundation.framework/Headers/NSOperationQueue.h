/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSOperationQueue : NSObject {
@private
	id _private;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
@property(assign) int maxConcurrentOperationCount;	// G=0x31d7d431; S=0x31d1ee65; converted property
@property(retain) id name;	// G=0x31d7d5b9; S=0x31d7d641; converted property
@property(assign) BOOL overcommitsOperations;	// G=0x31d7d555; S=0x31d7d57d; converted property
@property(assign, getter=isSuspended) BOOL suspended;	// G=0x31d7d4ed; S=0x31d37031; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31d7ca81
+ (id)currentQueue;	// 0x31ced52d
+ (id)mainQueue;	// 0x31ced579
- (id)init;	// 0x31cf6b75
- (id)__;	// 0x31d7dbdd
- (void)__:(id)_;	// 0x31d7d84d
- (void)addOperation:(id)operation;	// 0x31cf998d
- (void)addOperationWithBlock:(id)block;	// 0x31d2d2b5
- (void)addOperations:(id)operations waitUntilFinished:(BOOL)finished;	// 0x31d7d21d
- (void)cancelAllOperations;	// 0x31d2eb01
- (void)dealloc;	// 0x31d357e5
- (id)description;	// 0x31d7d7dd
// converted property getter: - (BOOL)isSuspended;	// 0x31d7d4ed
// converted property getter: - (int)maxConcurrentOperationCount;	// 0x31d7d431
// converted property getter: - (id)name;	// 0x31d7d5b9
- (unsigned)operationCount;	// 0x31d7d3e9
- (id)operations;	// 0x31d36d59
// converted property getter: - (BOOL)overcommitsOperations;	// 0x31d7d555
// converted property setter: - (void)setMaxConcurrentOperationCount:(int)count;	// 0x31d1ee65
// converted property setter: - (void)setName:(id)name;	// 0x31d7d641
// converted property setter: - (void)setOvercommitsOperations:(BOOL)operations;	// 0x31d7d57d
// converted property setter: - (void)setSuspended:(BOOL)suspended;	// 0x31d37031
- (void)waitUntilAllOperationsAreFinished;	// 0x31d35b01
@end

