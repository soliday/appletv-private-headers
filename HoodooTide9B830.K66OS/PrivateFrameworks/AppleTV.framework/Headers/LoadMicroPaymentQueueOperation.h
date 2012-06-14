/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class MicroPaymentQueueRequest, MicroPaymentQueueResponse, NSString;

__attribute__((visibility("hidden")))
@interface LoadMicroPaymentQueueOperation : ISOperation {
@private
	int _expectedCount;	// 60 = 0x3c
	NSString *_queueCountURLBagKey;	// 64 = 0x40
	NSString *_queuePaymentsURLBagKey;	// 68 = 0x44
	MicroPaymentQueueRequest *_request;	// 72 = 0x48
	MicroPaymentQueueResponse *_response;	// 76 = 0x4c
}
@property(assign) int expectedCount;	// G=0x32b41c8d; S=0x32b41c9d; @synthesize=_expectedCount
@property(retain) NSString *queueCountURLBagKey;	// G=0x32b41cad; S=0x32b41cc1; @synthesize=_queueCountURLBagKey
@property(retain) NSString *queuePaymentsURLBagKey;	// G=0x32b41ce5; S=0x32b41cf9; @synthesize=_queuePaymentsURLBagKey
@property(copy) MicroPaymentQueueRequest *request;	// G=0x32b41d1d; S=0x32b41d31; @synthesize=_request
@property(retain) MicroPaymentQueueResponse *response;	// G=0x32b41d55; S=0x32b41d69; @synthesize=_response
- (BOOL)_getQueueCount:(int *)count error:(id *)error;	// 0x32b41a55
- (BOOL)_loadPaymentsWithExpectedCount:(int)expectedCount error:(id *)error;	// 0x32b41b7d
- (void)dealloc;	// 0x32b418d5
// declared property getter: - (int)expectedCount;	// 0x32b41c8d
// declared property getter: - (id)queueCountURLBagKey;	// 0x32b41cad
// declared property getter: - (id)queuePaymentsURLBagKey;	// 0x32b41ce5
// declared property getter: - (id)request;	// 0x32b41d1d
// declared property getter: - (id)response;	// 0x32b41d55
- (void)run;	// 0x32b4195d
// declared property setter: - (void)setExpectedCount:(int)count;	// 0x32b41c9d
// declared property setter: - (void)setQueueCountURLBagKey:(id)key;	// 0x32b41cc1
// declared property setter: - (void)setQueuePaymentsURLBagKey:(id)key;	// 0x32b41cf9
// declared property setter: - (void)setRequest:(id)request;	// 0x32b41d31
// declared property setter: - (void)setResponse:(id)response;	// 0x32b41d69
@end

