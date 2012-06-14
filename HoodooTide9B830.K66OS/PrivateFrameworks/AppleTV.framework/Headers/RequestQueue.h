/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperationDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSLock;

__attribute__((visibility("hidden")))
@interface RequestQueue : NSObject <ISOperationDelegate> {
@private
	NSLock *_lock;	// 4 = 0x4
	NSMutableDictionary *_operationsByIdentifier;	// 8 = 0x8
}
- (id)init;	// 0x32b4e3c9
- (void)cancelRequestWithIdentifier:(id)identifier;	// 0x32b4e541
- (void)dealloc;	// 0x32b4e42d
- (void)enqueueRequestOperation:(id)operation;	// 0x32b4e651
- (void)operation:(id)operation failedWithError:(id)error;	// 0x32b4e82d
- (void)operationFinished:(id)finished;	// 0x32b4e8fd
- (id)requestOperationForIdentifier:(id)identifier;	// 0x32b4e7a5
- (void)sendError:(id)error forOperation:(id)operation;	// 0x32b4e825
- (void)sendResponseForOperation:(id)operation;	// 0x32b4e829
@end
