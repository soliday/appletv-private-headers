/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation {
@private
	SSRequest *_request;	// 60 = 0x3c
}
@property(readonly, assign) SSRequest *request;	// G=0x35554b55; 
- (id)initWithRequest:(id)request;	// 0x35554a69
- (void)_beginObservingNotifications;	// 0x35554e9d
- (void)_delayedStartRequest;	// 0x35554dc1
- (void)_delayedStopRequest;	// 0x35554e49
- (void)_endObservingNotifications;	// 0x35554f11
- (void)_requestStateChangedNotification:(id)notification;	// 0x35554d09
- (void)_timer:(id)timer;	// 0x35554e8d
- (void)cancel;	// 0x35554bb5
- (void)dealloc;	// 0x35554af5
// declared property getter: - (id)request;	// 0x35554b55
- (void)run;	// 0x35554c0d
- (void)stopRunLoop;	// 0x35554cc9
@end

