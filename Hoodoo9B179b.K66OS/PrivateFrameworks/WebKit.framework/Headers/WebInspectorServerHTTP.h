/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "WebInspectorServer.h"


__attribute__((visibility("hidden")))
@interface WebInspectorServerHTTP : NSObject <WebInspectorServer> {
@private
	CFSocketRef _socket;	// 4 = 0x4
	unsigned short _port;	// 8 = 0x8
	int _serverFileDescriptor;	// 12 = 0xc
}
- (id)init;	// 0x34593949
- (void)connectionReceived:(int)received;	// 0x345939a9
- (BOOL)isEnabled;	// 0x3459392d
- (void)pushListing;	// 0x34593945
- (void)start;	// 0x34593a29
- (void)stop;	// 0x345939e1
@end

