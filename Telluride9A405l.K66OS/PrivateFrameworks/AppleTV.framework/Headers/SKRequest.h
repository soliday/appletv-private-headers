/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@protocol SKRequestDelegate;

__attribute__((visibility("hidden")))
@interface SKRequest : NSObject {
@private
	id _requestInternal;	// 4 = 0x4
}
@property(assign, nonatomic) id<SKRequestDelegate> delegate;	// G=0x35f2f059; S=0x35f2f079; 
- (id)init;	// 0x35f2ed95
- (void)_beginBackgroundTask;	// 0x35f2f485
- (void)_daemonExited:(id)exited;	// 0x35f2f0d5
- (void)_endBackgroundTask;	// 0x35f2f489
- (void)_mainThreadDaemonExited:(id)exited;	// 0x35f2f101
- (id)_newIdentifier;	// 0x35f2f48d
- (void)_registerForNotifications;	// 0x35f2f4b1
- (void)_requestFailedNotification:(id)notification;	// 0x35f2f1a1
- (void)_requestFinishedNotification:(id)notification;	// 0x35f2f33d
- (void)_sendErrorToDelegate:(id)delegate;	// 0x35f2f58d
- (void)_sendFinishToDelegate;	// 0x35f2f611
- (void)_unregisterForNotifications;	// 0x35f2f689
- (void)cancel;	// 0x35f2ee5d
- (void)dealloc;	// 0x35f2edf9
// declared property getter: - (id)delegate;	// 0x35f2f059
- (BOOL)handleFinishResponse:(id)response returningError:(id *)error;	// 0x35f2f099
- (void)issueRequestForIdentifier:(id)identifier;	// 0x35f2f0a5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35f2f079
- (void)start;	// 0x35f2ef39
@end

