/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKPaymentQueueInternal : NSObject {
@private
	NSMutableArray *_localTransactions;	// 4 = 0x4
	CFArrayRef _observers;	// 8 = 0x8
	BOOL _observingDaemon;	// 12 = 0xc
	BOOL _restoringCompletedTransaction;	// 13 = 0xd
	NSMutableArray *_transactions;	// 16 = 0x10
}
- (void)dealloc;	// 0x3683343d
@end

