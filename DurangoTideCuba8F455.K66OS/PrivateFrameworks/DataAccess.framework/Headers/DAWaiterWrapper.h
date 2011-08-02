/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@protocol DADataclassLockWatcher;

@interface DAWaiterWrapper : NSObject {
	id<DADataclassLockWatcher> _waiter;	// 4 = 0x4
	int _dataclasses;	// 8 = 0x8
	id _completionHandler;	// 12 = 0xc
	int _waiterNum;	// 16 = 0x10
}
@property(copy) id completionHandler;	// G=0x340c6511; S=0x340c6555; @synthesize=_completionHandler
@property(assign) int dataclasses;	// G=0x340c57ad; S=0x340c57bd; @synthesize=_dataclasses
@property(retain) id<DADataclassLockWatcher> waiter;	// G=0x340c64f9; S=0x340c6529; @synthesize=_waiter
@property(readonly, assign) int waiterNum;	// G=0x340c579d; @synthesize=_waiterNum
- (id)init;	// 0x340c57d1
// declared property getter: - (id)completionHandler;	// 0x340c6511
// declared property getter: - (int)dataclasses;	// 0x340c57ad
- (void)dealloc;	// 0x340c6421
- (id)description;	// 0x340c647d
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x340c6555
// declared property setter: - (void)setDataclasses:(int)dataclasses;	// 0x340c57bd
// declared property setter: - (void)setWaiter:(id)waiter;	// 0x340c6529
// declared property getter: - (id)waiter;	// 0x340c64f9
// declared property getter: - (int)waiterNum;	// 0x340c579d
@end
