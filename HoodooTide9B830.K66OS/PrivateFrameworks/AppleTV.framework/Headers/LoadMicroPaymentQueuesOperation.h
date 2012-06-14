/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class NSArray, MicroPaymentQueueResponse, ClientIdentity;

__attribute__((visibility("hidden")))
@interface LoadMicroPaymentQueuesOperation : ISOperation {
@private
	ClientIdentity *_clientIdentity;	// 60 = 0x3c
	int _expectedRefundCount;	// 64 = 0x40
	int _reason;	// 68 = 0x44
	MicroPaymentQueueResponse *_paymentsResponse;	// 72 = 0x48
	MicroPaymentQueueResponse *_refundsResponse;	// 76 = 0x4c
	NSArray *_userDSIDs;	// 80 = 0x50
}
@property(retain) ClientIdentity *clientIdentity;	// G=0x32b42d9d; S=0x32b42db1; @synthesize=_clientIdentity
@property(assign) int expectedRefundCount;	// G=0x32b42dd5; S=0x32b42de5; @synthesize=_expectedRefundCount
@property(retain) MicroPaymentQueueResponse *paymentsResponse;	// G=0x32b42df5; S=0x32b42e09; @synthesize=_paymentsResponse
@property(assign) int reason;	// G=0x32b42e2d; S=0x32b42e3d; @synthesize=_reason
@property(retain) MicroPaymentQueueResponse *refundsResponse;	// G=0x32b42e4d; S=0x32b42e61; @synthesize=_refundsResponse
@property(retain) NSArray *userDSIDs;	// G=0x32b42e85; S=0x32b42e99; @synthesize=_userDSIDs
- (id)_URLBagContext;	// 0x32b42d4d
- (BOOL)_appendAutoRenewQueueToResponse:(id)response error:(id *)error;	// 0x32b42639
- (BOOL)_appendNormalQueueToResponse:(id)response error:(id *)error;	// 0x32b42759
- (BOOL)_appendToResponse:(id)response usingOperation:(id)operation error:(id *)error;	// 0x32b4288d
- (BOOL)_checkRefundsQueue:(id *)queue;	// 0x32b42af9
- (BOOL)_shouldCheckAutoRenewQueue;	// 0x32b42cdd
- (BOOL)_shouldCheckRefundsQueue;	// 0x32b42d49
// declared property getter: - (id)clientIdentity;	// 0x32b42d9d
- (void)dealloc;	// 0x32b42419
// declared property getter: - (int)expectedRefundCount;	// 0x32b42dd5
// declared property getter: - (id)paymentsResponse;	// 0x32b42df5
// declared property getter: - (int)reason;	// 0x32b42e2d
// declared property getter: - (id)refundsResponse;	// 0x32b42e4d
- (void)run;	// 0x32b424a1
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x32b42db1
// declared property setter: - (void)setExpectedRefundCount:(int)count;	// 0x32b42de5
// declared property setter: - (void)setPaymentsResponse:(id)response;	// 0x32b42e09
// declared property setter: - (void)setReason:(int)reason;	// 0x32b42e3d
// declared property setter: - (void)setRefundsResponse:(id)response;	// 0x32b42e61
// declared property setter: - (void)setUserDSIDs:(id)dsids;	// 0x32b42e99
// declared property getter: - (id)userDSIDs;	// 0x32b42e85
@end

