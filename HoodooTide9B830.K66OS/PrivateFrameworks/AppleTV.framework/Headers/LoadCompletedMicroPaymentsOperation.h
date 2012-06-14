/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"
#import "ISStoreURLOperationDelegate.h"

@class NSMutableArray, ClientIdentity;
@protocol LoadCompletedMicroPaymentsDelegate;

__attribute__((visibility("hidden")))
@interface LoadCompletedMicroPaymentsOperation : ISOperation <ISStoreURLOperationDelegate> {
@private
	ClientIdentity *_clientIdentity;	// 60 = 0x3c
	BOOL _partialFailure;	// 64 = 0x40
	NSMutableArray *_loadedRanges;	// 68 = 0x44
}
@property(retain) ClientIdentity *clientIdentity;	// G=0x32b4059d; S=0x32b405b1; @synthesize=_clientIdentity
@property(assign) id<LoadCompletedMicroPaymentsDelegate> delegate;	// @dynamic
@property(retain) NSMutableArray *loadedRanges;	// G=0x32b405f5; S=0x32b40609; @synthesize=_loadedRanges
@property(assign, getter=isPartialFailure) BOOL partialFailure;	// G=0x32b405d5; S=0x32b405e5; @synthesize=_partialFailure
- (id)_copyResponseForApplication:(id)application startID:(id)anId endID:(id)anId3 returningError:(id *)error;	// 0x32b3fcb5
- (id)_newFetchOperationForApplication:(id)application startID:(id)anId endID:(id)anId3;	// 0x32b3fe5d
- (void)_runForApplication:(id)application;	// 0x32b40161
- (void)_sendQueueResponseToDelegate:(id)delegate;	// 0x32b40545
// declared property getter: - (id)clientIdentity;	// 0x32b4059d
- (void)dealloc;	// 0x32b3fae1
// declared property getter: - (BOOL)isPartialFailure;	// 0x32b405d5
// declared property getter: - (id)loadedRanges;	// 0x32b405f5
- (void)run;	// 0x32b3fb49
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x32b405b1
// declared property setter: - (void)setLoadedRanges:(id)ranges;	// 0x32b40609
// declared property setter: - (void)setPartialFailure:(BOOL)failure;	// 0x32b405e5
@end

