/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSCondition.h> // Unknown library

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {
	NSMutableArray *_runLoopStateList;	// 8 = 0x8
}
- (id)init;	// 0x34780819
- (void)_signalRunLoopWithState:(id)state;	// 0x34780c4d
- (BOOL)_waitInMode:(id)mode untilDate:(id)date;	// 0x347809d9
- (void)broadcast;	// 0x34780b99
- (void)dealloc;	// 0x347807d1
- (void)signal;	// 0x34780721
- (void)wait;	// 0x347807b9
- (void)waitInMode:(id)mode;	// 0x34780789
- (BOOL)waitUntilDate:(id)date;	// 0x347807a1
- (BOOL)waitUntilDate:(id)date inMode:(id)mode;	// 0x3478076d
@end

