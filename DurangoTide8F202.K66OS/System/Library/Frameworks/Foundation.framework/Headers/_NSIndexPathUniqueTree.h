/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class _NSIndexPathUniqueTreeNode, NSLock;

__attribute__((visibility("hidden")))
@interface _NSIndexPathUniqueTree : NSObject {
@private
	_NSIndexPathUniqueTreeNode *_root;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
}
- (void)_willDeallocIndexPath:(void *)path withIndexes:(unsigned *)indexes length:(unsigned)length;	// 0x32433611
- (void)awake;	// 0x3242fcd5
- (void)dealloc;	// 0x3247112d
- (void)lock;	// 0x3242fdb9
- (id)uniqueIndexPath:(id)path withIndexes:(unsigned *)indexes count:(unsigned)count;	// 0x3242fdd9
- (void)unlock;	// 0x324300d9
@end

