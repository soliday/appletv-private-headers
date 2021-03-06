/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISURLOperation.h"

@class NSNumber;
@protocol ISStoreURLOperationDelegate;

@interface ISStoreURLOperation : ISURLOperation {
	NSNumber *_authenticatedDSID;	// 100 = 0x64
	BOOL _canSendGUIDParameter;	// 104 = 0x68
	BOOL _needsAuthentication;	// 105 = 0x69
	BOOL _needsURLBag;	// 106 = 0x6a
	BOOL _urlKnownToBeTrusted;	// 107 = 0x6b
	BOOL _useUserSpecificURLBag;	// 108 = 0x6c
}
@property(retain) NSNumber *authenticatedDSID;	// G=0x35ec52bd; S=0x35ec52d1; @synthesize=_authenticatedDSID
@property(assign) BOOL canSendGUIDParameter;	// G=0x35ec3b1d; S=0x35ec3b59; 
@property(assign) id<ISStoreURLOperationDelegate> delegate;	// @dynamic
@property(assign) BOOL needsAuthentication;	// G=0x35ec52f5; S=0x35ec5305; @synthesize=_needsAuthentication
@property(assign) BOOL needsURLBag;	// G=0x35ec5315; S=0x35ec5325; @synthesize=_needsURLBag
@property(assign) BOOL urlKnownToBeTrusted;	// G=0x35ec5335; S=0x35ec5345; @synthesize=_urlKnownToBeTrusted
@property(assign) BOOL useUserSpecificURLBag;	// G=0x35ec5355; S=0x35ec5365; @synthesize=_useUserSpecificURLBag
+ (void)_addITunesStoreHeadersToRequest:(id)request withBagContext:(id)bagContext;	// 0x35ec422d
+ (id)_restrictionsHeaderValue;	// 0x35ec4665
+ (void)addITunesStoreHeadersToRequest:(id)request;	// 0x35ec36b1
+ (void)handleITunesStoreResponseHeaders:(id)headers;	// 0x35ec36f1
+ (id)itemPingOperationWithIdentifier:(unsigned long long)identifier urlBagKey:(id)key;	// 0x35ec37f9
+ (id)pingOperationWithUrl:(id)url;	// 0x35ec3991
+ (id)propertyListOperationWithURLBagKey:(id)urlbagKey;	// 0x35ec3a41
- (id)init;	// 0x35ec3611
- (id)_account;	// 0x35ec4985
- (void)_addStandardQueryParametersForURL:(id)url;	// 0x35ec49ed
- (BOOL)_authenticateReturningError:(id *)error;	// 0x35ec4c45
- (BOOL)_canSendTokenToURL:(id)url;	// 0x35ec4d1d
- (id)_copyAuthenticationContext;	// 0x35ec3bdd
- (id)_copyURLBagContext;	// 0x35ec4d81
- (void)_runURLOperation;	// 0x35ec4ea5
- (id)_storeFrontIdentifier;	// 0x35ec51cd
- (id)_urlFromURLBagForRequestProperties:(id)requestProperties inBagContext:(id)bagContext;	// 0x35ec525d
- (id)authenticatedAccountDSID;	// 0x35ec3b99
// declared property getter: - (id)authenticatedDSID;	// 0x35ec52bd
// declared property getter: - (BOOL)canSendGUIDParameter;	// 0x35ec3b1d
- (void)dealloc;	// 0x35ec365d
- (BOOL)handleRedirectFromDataProvider:(id)dataProvider;	// 0x35ec3d49
- (void)handleResponse:(id)response;	// 0x35ec3db9
// declared property getter: - (BOOL)needsAuthentication;	// 0x35ec52f5
// declared property getter: - (BOOL)needsURLBag;	// 0x35ec5315
- (id)newRequestWithURL:(id)url;	// 0x35ec3e29
- (void)run;	// 0x35ec3ffd
// declared property setter: - (void)setAuthenticatedDSID:(id)dsid;	// 0x35ec52d1
// declared property setter: - (void)setCanSendGUIDParameter:(BOOL)parameter;	// 0x35ec3b59
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x35ec5305
// declared property setter: - (void)setNeedsURLBag:(BOOL)bag;	// 0x35ec5325
// declared property setter: - (void)setUrlKnownToBeTrusted:(BOOL)beTrusted;	// 0x35ec5345
// declared property setter: - (void)setUseUserSpecificURLBag:(BOOL)bag;	// 0x35ec5365
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;	// 0x35ec414d
// declared property getter: - (BOOL)urlKnownToBeTrusted;	// 0x35ec5335
// declared property getter: - (BOOL)useUserSpecificURLBag;	// 0x35ec5355
@end

