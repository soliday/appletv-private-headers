/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class TSUFlushingManager;

__attribute__((visibility("hidden")))
@interface TSUMemoryWatcher : NSObject {
@private
	TSUFlushingManager *_flushingManager;	// 4 = 0x4
	BOOL _going;	// 8 = 0x8
	BOOL _stop;	// 9 = 0x9
}
- (id)initWithFlushingManager:(id)flushingManager;	// 0x34c6c24d
- (void)beginObserving;	// 0x34c6c28d
- (void)dealloc;	// 0x34e51fd5
- (void)stopObserving;	// 0x34e51fc1
@end
