/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class MicroPaymentQueueResponse, MicroPaymentQueueRequest, NSString;

__attribute__((visibility("hidden")))
@interface LoadMicroPaymentQueuePaymentsOperation : ISOperation {
@private
	MicroPaymentQueueRequest *_request;	// 60 = 0x3c
	MicroPaymentQueueResponse *_response;	// 64 = 0x40
	NSString *_urlBagKey;	// 68 = 0x44
}
@property(retain) NSString *URLBagKey;	// G=0x331d9f71; S=0x331d9f85; @synthesize=_urlBagKey
@property(copy) MicroPaymentQueueRequest *request;	// G=0x331d9f01; S=0x331d9f15; @synthesize=_request
@property(retain) MicroPaymentQueueResponse *response;	// G=0x331d9f39; S=0x331d9f4d; @synthesize=_response
// declared property getter: - (id)URLBagKey;	// 0x331d9f71
- (BOOL)_appendRangeRequestsToResponse:(id)response error:(id *)error;	// 0x331d9a21
- (BOOL)_loadResponseReturningError:(id *)error;	// 0x331d9c1d
- (BOOL)_parsePropertyList:(id)list error:(id *)error;	// 0x331d9dc1
- (void)dealloc;	// 0x331d991d
// declared property getter: - (id)request;	// 0x331d9f01
// declared property getter: - (id)response;	// 0x331d9f39
- (void)run;	// 0x331d9991
// declared property setter: - (void)setRequest:(id)request;	// 0x331d9f15
// declared property setter: - (void)setResponse:(id)response;	// 0x331d9f4d
// declared property setter: - (void)setURLBagKey:(id)key;	// 0x331d9f85
@end

