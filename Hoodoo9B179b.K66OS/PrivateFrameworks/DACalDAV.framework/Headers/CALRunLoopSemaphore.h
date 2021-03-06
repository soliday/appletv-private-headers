/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "DACalDAV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock;

@interface CALRunLoopSemaphore : NSObject {
	CFRunLoopRef _rloop;	// 4 = 0x4
	int _count;	// 8 = 0x8
	int _pipe[2];	// 12 = 0xc
	CFSocketRef _socket;	// 20 = 0x14
	CFRunLoopSourceRef _socketSource;	// 24 = 0x18
	NSLock *_countLock;	// 28 = 0x1c
}
- (id)init;	// 0x3090fb45
- (id)initWithCFRunLoop:(CFRunLoopRef)cfrunLoop;	// 0x3090fb69
- (void)awake;	// 0x3090fb41
- (void)dealloc;	// 0x3090fc99
- (void)down;	// 0x3090fded
- (void)finalize;	// 0x3090fd51
- (void)up;	// 0x3090feb5
- (int)value;	// 0x3090ff25
@end

