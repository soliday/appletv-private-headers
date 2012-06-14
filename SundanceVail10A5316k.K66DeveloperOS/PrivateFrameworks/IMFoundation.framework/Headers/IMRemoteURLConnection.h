/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSURLRequest;
@protocol OS_xpc_object;

@interface IMRemoteURLConnection : NSObject {
	NSURLRequest *_request;	// 4 = 0x4
	id _block;	// 8 = 0x8
	NSObject<OS_xpc_object> *_connection;	// 12 = 0xc
	BOOL _loading;	// 16 = 0x10
}
- (id)initWithURLRequest:(id)urlrequest completionBlock:(id)block;	// 0x34a9910d
- (BOOL)_connect;	// 0x34a98fed
- (BOOL)_disconnect;	// 0x34a98f89
- (void)_disconnected;	// 0x34a98f35
- (void)cancel;	// 0x34a99609
- (void)dealloc;	// 0x34a991b5
- (void)load;	// 0x34a99269
@end
