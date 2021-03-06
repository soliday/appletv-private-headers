/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperationDelegate.h"
#import <NSObject.h> // Unknown library
#import "ISSingleton.h"

@class MicroPayment, NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface MicroPaymentQueue : NSObject <ISOperationDelegate, ISSingleton> {
@private
	MicroPayment *_activePayment;	// 4 = 0x4
	int _changeSetCount;	// 8 = 0x8
	NSManagedObjectContext *_context;	// 12 = 0xc
}
+ (BOOL)canMakePayments;	// 0x3680409d
+ (void)setSharedInstance:(id)instance;	// 0x36803fd5
+ (id)sharedInstance;	// 0x36804029
- (id)init;	// 0x36803ce1
- (void)_clientRefreshedFromServer:(id)server;	// 0x36805361
- (id)_firstReadyPayment;	// 0x36805401
- (void)_mainThreadNetworkTypeChanged:(id)changed;	// 0x36805371
- (void)_networkTypeChanged:(id)changed;	// 0x368053d5
- (void)_sendError:(id)error forProductID:(id)productID quantity:(id)quantity toClientWithIdentity:(id)identity;	// 0x368054e1
- (void)_setActivePayment:(id)payment;	// 0x36805681
- (void)_showPaymentsRestrictedAlert;	// 0x368056c5
- (void)addPaymentWithInfo:(id)info identity:(id)identity;	// 0x368042e5
- (void)checkInClientWithInfo:(id)info identity:(id)identity;	// 0x36804701
- (void)checkOutClientWithInfo:(id)info identity:(id)identity;	// 0x36804825
- (BOOL)checkQueues;	// 0x368040a1
- (void)dealloc;	// 0x36803ee1
- (void)finishPaymentWithInfo:(id)info identity:(id)identity;	// 0x368048d9
- (void)finishRefundWithInfo:(id)info identity:(id)identity;	// 0x36804c0d
- (void)operation:(id)operation didChangeState:(int)state;	// 0x36804fc9
- (void)operation:(id)operation failedWithError:(id)error;	// 0x36805081
- (void)operationFinished:(id)finished;	// 0x368051d9
- (void)restoreCompletedTransactionsWithInfo:(id)info identity:(id)identity;	// 0x36804dbd
- (BOOL)startFirstReadyPayment;	// 0x3680415d
@end

