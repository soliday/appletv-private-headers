/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"
#import "ISStoreURLOperationDelegate.h"

@class SSURLBagContext;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {
	SSURLBagContext *_context;	// 60 = 0x3c
}
@property(readonly, assign) SSURLBagContext *context;	// G=0x30f0d311; @synthesize=_context
- (id)init;	// 0x30f0c41d
- (id)initWithBagContext:(id)bagContext;	// 0x30f0c491
- (void)_addHeadersToRequestProperties:(id)requestProperties;	// 0x30f0ccc5
- (id)_copyBootstrapURLs;	// 0x30f0cde1
- (id)_copyProductionBootstrapURLs;	// 0x30f0ce2d
- (id)_copySandboxBootstrapURLs;	// 0x30f0cf8d
- (void)_loadConfigurationFromURLBag:(id)urlbag;	// 0x30f0c789
- (void)_loadURLBagFromURL:(id)url;	// 0x30f0d0bd
// declared property getter: - (id)context;	// 0x30f0d311
- (void)dealloc;	// 0x30f0c4e5
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x30f0c8f9
- (BOOL)operation:(id)operation shouldSetStoreFrontID:(id)anId;	// 0x30f0cbd1
- (void)operation:(id)operation willSendRequest:(id)request;	// 0x30f0cc0d
- (void)run;	// 0x30f0c539
- (id)uniqueKey;	// 0x30f0c739
@end
