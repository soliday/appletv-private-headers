/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"

@class SSPlayInfoResponse, SSPlayInfoRequestContext;
@protocol SSPlayInfoRequestDelegate;

@interface SSPlayInfoRequest : SSRequest {
@private
	SSPlayInfoRequestContext *_context;	// 36 = 0x24
	SSPlayInfoResponse *_response;	// 40 = 0x28
}
@property(assign, nonatomic) id<SSPlayInfoRequestDelegate> delegate;	// @dynamic
@property(readonly, assign, nonatomic) SSPlayInfoRequestContext *playInfoContext;	// G=0x324dab0d; 
@property(readonly, assign, nonatomic) SSPlayInfoResponse *playInfoResponse;	// G=0x324daadd; 
- (id)init;	// 0x324dab3d
- (id)initWithPlayInfoContext:(id)playInfoContext;	// 0x324db0d5
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324daef9
- (void)_sendResponseToDelegate:(id)delegate;	// 0x324daa71
- (id)copyPropertyListEncoding;	// 0x324dafc9
- (void)dealloc;	// 0x324db079
- (id)handleFailureResponse:(id)response;	// 0x324db295
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x324db185
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x324db365
// declared property getter: - (id)playInfoContext;	// 0x324dab0d
// declared property getter: - (id)playInfoResponse;	// 0x324daadd
@end
