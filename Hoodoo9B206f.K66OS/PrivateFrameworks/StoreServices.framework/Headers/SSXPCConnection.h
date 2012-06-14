/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library


@interface SSXPCConnection : NSObject {
@private
	xpc_connection_s *_connection;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	id _disconnectBlock;	// 12 = 0xc
	dispatch_queue_s *_replyQueue;	// 16 = 0x10
	id _messageBlock;	// 20 = 0x14
}
@property(copy) id disconnectBlock;	// G=0x327e80bd; S=0x327e8529; 
@property(copy) id messageBlock;	// G=0x327e826d; S=0x327e861d; 
- (id)init;	// 0x327e7f59
- (id)initWithServiceName:(id)serviceName;	// 0x327e7f6d
- (id)initWithXPCConnection:(xpc_connection_s *)xpcconnection;	// 0x327e7fb9
- (id)_initSSXPCConnection;	// 0x327e7f09
- (void)_reloadEventHandler;	// 0x327e87b9
- (dispatch_queue_s *)copyReplyQueue;	// 0x327e8409
- (xpc_endpoint_s *)createXPCEndpoint;	// 0x327e80a9
- (void)dealloc;	// 0x327e8005
// declared property getter: - (id)disconnectBlock;	// 0x327e80bd
// declared property getter: - (id)messageBlock;	// 0x327e826d
- (void)sendMessage:(void *)message;	// 0x327e84ed
- (void)sendMessage:(void *)message withReply:(id)reply;	// 0x327e8501
// declared property setter: - (void)setDisconnectBlock:(id)block;	// 0x327e8529
// declared property setter: - (void)setMessageBlock:(id)block;	// 0x327e861d
- (void)setReplyQueue:(dispatch_queue_s *)queue;	// 0x327e8711
@end

