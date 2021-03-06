/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

#import "SyncedDefaults-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SYDClient : NSObject {
@private
	dispatch_queue_s *_queue;	// 4 = 0x4
	xpc_connection_s *_connection;	// 8 = 0x8
	NSString *_bundleIdentifier;	// 12 = 0xc
}
- (id)initWithQueue:(dispatch_queue_s *)queue bundleIdentifier:(CFStringRef)identifier;	// 0x31133b7d
- (void)_createConnectionIfNecessary;	// 0x31134135
- (id)_newMessageWithName:(id)name userInfo:(id)info;	// 0x31133fd1
- (void)_resetConnection;	// 0x31134105
- (void)_sendMessage:(id)message replyHandler:(id)handler;	// 0x31133d25
- (void)_sendMessageNoReply:(id)reply;	// 0x31133dfd
- (id)_sendMessageWithReplySync:(id)replySync;	// 0x31133e99
- (void)dealloc;	// 0x311341fd
- (void)finalize;	// 0x311341b9
- (void)sendMessageWithName:(id)name;	// 0x31133ce1
- (void)sendMessageWithName:(id)name replyHandler:(id)handler;	// 0x31133c0d
- (id)sendMessageWithName:(id)name userInfo:(id)info;	// 0x31133c55
- (void)shutdown;	// 0x311340ad
@end

