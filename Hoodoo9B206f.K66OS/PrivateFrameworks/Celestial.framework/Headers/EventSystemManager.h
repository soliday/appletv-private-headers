/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library
#import "Celestial-Structs.h"

@class NSMutableArray;

@interface EventSystemManager : NSObject {
	IOHIDEventSystemClientRef eventSystemClient;	// 4 = 0x4
	NSMutableArray *clientList;	// 8 = 0x8
	CFRunLoopRef runLoop;	// 12 = 0xc
	BOOL manageAccel;	// 16 = 0x10
	int accelEventIndex;	// 20 = 0x14
	int accelUpdateInternalUS;	// 24 = 0x18
}
@property(readonly, retain) NSMutableArray *clientList;	// G=0x32463661; converted property
@property(readonly, assign) IOHIDEventSystemClientRef eventSystemClient;	// G=0x324635a1; converted property
+ (id)sharedEventSystem;	// 0x32463489
- (id)init;	// 0x324634d1
- (void)addClient:(id)client;	// 0x32463a69
// converted property getter: - (id)clientList;	// 0x32463661
- (void)dealloc;	// 0x32463555
// converted property getter: - (IOHIDEventSystemClientRef)eventSystemClient;	// 0x324635a1
- (BOOL)managingAccel;	// 0x32463671
- (void)refreshEventSystem;	// 0x3246372d
- (void)removeClient:(id)client;	// 0x32463ae9
- (void)setAccelUpdateInterval:(double)interval;	// 0x32463681
- (void)updateClientState;	// 0x324635d9
@end
