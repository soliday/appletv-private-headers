/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface GEOLocationShiftRequester : NSObject {
	NSMapTable *_pendingRequests;	// 4 = 0x4
	NSLock *_pendingRequestsLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
}
+ (id)sharedRequester;	// 0x32881591
- (id)init;	// 0x328815fd
- (void)cancelRequest:(id)request;	// 0x32881bd9
- (Class)classForProviderID:(short)providerID;	// 0x32881cd1
- (void)dealloc;	// 0x328816d9
- (void)registerProvider:(Class)provider;	// 0x32881c91
- (void)startRequest:(id)request finished:(id)finished networkActivity:(id)activity error:(id)error;	// 0x328817e9
@end

