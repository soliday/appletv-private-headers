/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSFileAccessArbiter.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessArbiter> {
@private
	xpc_connection_s *_server;	// 4 = 0x4
	dispatch_queue_s *_queue;	// 8 = 0x8
	NSMutableDictionary *_presentersByID;	// 12 = 0xc
	NSMutableDictionary *_providersByID;	// 16 = 0x10
}
+ (id)_operationQueueForPresenter:(id)presenter;	// 0x316779b5
- (id)initWithServer:(xpc_connection_s *)server;	// 0x3167608d
- (id)_idForReactor:(id)reactor;	// 0x316761cd
- (void)_makePresenter:(id)presenter accommodateDeletionWithSubitemURL:(id)subitemURL completionHandler:(id)handler;	// 0x31677c8d
- (void)_makePresenter:(id)presenter observeChangeWithSubitemURL:(id)subitemURL;	// 0x3167812d
- (void)_makePresenter:(id)presenter observeMoveToURL:(id)url withSubitemURL:(id)subitemURL;	// 0x316782d9
- (void)_makePresenter:(id)presenter observeVersionChangeOfKind:(id)kind withClientID:(id)clientID name:(id)name subitemURL:(id)url;	// 0x31678585
- (void)_makePresenter:(id)presenter reacquireFromReadingClaimForID:(id)anId;	// 0x31679281
- (void)_makePresenter:(id)presenter reacquireFromWritingClaimForID:(id)anId;	// 0x3167995d
- (void)_makePresenter:(id)presenter relinquishToAccessClaimWithID:(id)anId ifNecessaryUsingSelector:(SEL)selector recordingRelinquishment:(id)relinquishment continuer:(id)continuer;	// 0x31678d2d
- (void)_makePresenter:(id)presenter relinquishToReadingClaimWithID:(id)anId options:(unsigned)options completionHandler:(id)handler;	// 0x31679139
- (void)_makePresenter:(id)presenter relinquishToWritingClaimWithID:(id)anId options:(unsigned)options subitemURL:(id)url completionHandler:(id)handler;	// 0x316792ad
- (void)_makePresenter:(id)presenter saveChangesWithCompletionHandler:(id)completionHandler;	// 0x31677a45
- (void)_makeProvider:(id)provider cancelProvidingItemAtURL:(id)url forAccessClaimWithID:(id)anId;	// 0x31679d21
- (void)_makeProvider:(id)provider provideItemAtURL:(id)url forAccessClaimWithID:(id)anId completionHandler:(id)handler;	// 0x31679989
- (id)_readRelinquishmentForPresenter:(id)presenter;	// 0x3167627d
- (id)_writeRelinquishmentForPresenter:(id)presenter;	// 0x31676315
- (void)addFilePresenter:(id)presenter;	// 0x31676e2d
- (void)addFileProvider:(id)provider;	// 0x3167732d
- (void)cancelAccessClaimForID:(id)anId;	// 0x316768cd
- (void)dealloc;	// 0x316760f5
- (id)filePresenters;	// 0x31677159
- (id)fileProviders;	// 0x31677625
- (void)finalize;	// 0x31676179
- (dispatch_semaphore_s *)grantAccessClaim:(id)claim synchronouslyIfPossible:(BOOL)possible;	// 0x316763ad
- (void)grantSubarbitrationClaim:(id)claim withServer:(xpc_connection_s *)server;	// 0x3167664d
- (void)handleCanceledServer;	// 0x3167a709
- (void)handleMessage:(void *)message;	// 0x31679e25
- (id)idForFileReactor:(id)fileReactor;	// 0x316777f9
- (void)removeFilePresenter:(id)presenter;	// 0x31676fd9
- (void)removeFileProvider:(id)provider;	// 0x316774d9
- (void)revokeAccessClaimForID:(id)anId;	// 0x31676549
- (void)revokeSubarbitrationClaimForID:(id)anId;	// 0x316767c9
- (void)tiePresenterForID:(id)anId toItemAtURL:(id)url;	// 0x31676cf9
- (void)writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;	// 0x316769d1
- (void)writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;	// 0x31676b39
@end

