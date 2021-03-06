/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class NSData, NSString, ClientIdentity;

__attribute__((visibility("hidden")))
@interface ConfirmMicroPaymentOperation : ISOperation {
@private
	NSString *_buyParameters;	// 60 = 0x3c
	ClientIdentity *_clientIdentity;	// 64 = 0x40
	NSString *_productIdentifier;	// 68 = 0x44
	int _quantity;	// 72 = 0x48
	NSData *_requestData;	// 76 = 0x4c
}
@property(retain) NSString *buyParameters;	// G=0x32b3e909; S=0x32b3e91d; @synthesize=_buyParameters
@property(retain) ClientIdentity *clientIdentity;	// G=0x32b3e941; S=0x32b3e955; @synthesize=_clientIdentity
@property(retain) NSString *productIdentifier;	// G=0x32b3e979; S=0x32b3e98d; @synthesize=_productIdentifier
@property(assign) int quantity;	// G=0x32b3e9b1; S=0x32b3e9c1; @synthesize=_quantity
@property(retain) NSData *requestData;	// G=0x32b3e9d1; S=0x32b3e9e5; @synthesize=_requestData
- (BOOL)_canPromptWithServerDialog:(id)serverDialog;	// 0x32b3db1d
- (id)_copyQueryStringDictionaryForApplication:(id)application;	// 0x32b3dbd1
- (id)_copyResponseForApplication:(id)application returningError:(id *)error;	// 0x32b3dfa1
- (id)_copyResponseReturningError:(id *)error;	// 0x32b3e355
- (id)_errorForFailureType:(id)failureType;	// 0x32b3e4e1
- (void)_fetchAndDisplayConfirmation;	// 0x32b3e569
- (BOOL)_promptUserWithServerDialog:(id)serverDialog returningError:(id *)error;	// 0x32b3e75d
// declared property getter: - (id)buyParameters;	// 0x32b3e909
// declared property getter: - (id)clientIdentity;	// 0x32b3e941
- (void)dealloc;	// 0x32b3d9f9
// declared property getter: - (id)productIdentifier;	// 0x32b3e979
// declared property getter: - (int)quantity;	// 0x32b3e9b1
// declared property getter: - (id)requestData;	// 0x32b3e9d1
- (void)run;	// 0x32b3daa5
// declared property setter: - (void)setBuyParameters:(id)parameters;	// 0x32b3e91d
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x32b3e955
// declared property setter: - (void)setProductIdentifier:(id)identifier;	// 0x32b3e98d
// declared property setter: - (void)setQuantity:(int)quantity;	// 0x32b3e9c1
// declared property setter: - (void)setRequestData:(id)data;	// 0x32b3e9e5
@end

