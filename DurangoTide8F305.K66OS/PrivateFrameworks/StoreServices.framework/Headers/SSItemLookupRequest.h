/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"

@class NSMutableDictionary;
@protocol SSItemLookupRequestDelegate;

@interface SSItemLookupRequest : SSRequest {
@private
	NSMutableDictionary *_parameters;	// 36 = 0x24
}
@property(assign, nonatomic) id<SSItemLookupRequestDelegate> delegate;	// @dynamic
- (id)init;	// 0x324c7a85
- (id)_convertedValueForValue:(id)value;	// 0x324c7be1
- (id)_copyItemsFromResponse:(id)response userInfo:(id)info;	// 0x324c7fc9
- (id)_copyStringParameters;	// 0x324c7e19
- (id)_errorForStatusCode:(int)statusCode;	// 0x324c77d9
- (void)_sendItemsToDelegate:(id)delegate;	// 0x324c776d
- (void)dealloc;	// 0x324c7a3d
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x324c7841
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x324c7ac5
- (void)setValue:(id)value forParameter:(id)parameter;	// 0x324c7915
- (id)valueForParameter:(id)parameter;	// 0x324c78f5
@end

