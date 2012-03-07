/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface GEOTileAvailabilityRequester : NSObject {
	NSMapTable *_pendingRequests;	// 4 = 0x4
	NSLock *_pendingRequestsLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
}
+ (id)sharedRequester;	// 0x36721e3d
- (id)init;	// 0x36721ea9
- (void)cancelRequest:(id)request;	// 0x3672241d
- (Class)classForProviderID:(short)providerID;	// 0x36722515
- (void)dealloc;	// 0x36721f85
- (void)registerProvider:(Class)provider;	// 0x367224d5
- (void)startRequest:(id)request finished:(id)finished error:(id)error;	// 0x36722095
@end
