/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileReactorProxy.h"


__attribute__((visibility("hidden")))
@interface NSFilePresenterProxy : NSFileReactorProxy {
@private
	BOOL _isInSuperArbiter;	// 20 = 0x14
	unsigned _writingRelinquishmentCount;	// 24 = 0x18
	id _currentWriterPurposeID;	// 28 = 0x1c
	id _postwritingProcedure;	// 32 = 0x20
	BOOL _didObserveMovingByWriter;	// 36 = 0x24
	BOOL _didObserveVersionChangingByWriter;	// 37 = 0x25
}
@property(readonly, retain) id currentWriterPurposeID;	// G=0x35ef0119; converted property
+ (id)urlWithItemURL:(id)itemURL subitemPath:(id)path;	// 0x35eef385
- (void)accommodateDeletionWithSubitemPath:(id)subitemPath completionHandler:(id)handler;	// 0x35eef659
- (void)beforeReacquiringFromWriterInvokeProcedure:(id)writerInvokeProcedure;	// 0x35ef0151
// converted property getter: - (id)currentWriterPurposeID;	// 0x35ef0119
- (void)dealloc;	// 0x35eef171
- (BOOL)didObserveMoving;	// 0x35ef01a5
- (void)forwardObservationMessageWithKind:(id)kind parameters:(id)parameters;	// 0x35ef0035
- (void)forwardRelinquishmentMessageWithKind:(id)kind parameters:(id)parameters resultHandler:(id)handler;	// 0x35eefae9
- (void)forwardUsingMessageSender:(id)sender;	// 0x35eef21d
- (BOOL)hasRelinquishedToWriter;	// 0x35ef0101
- (void)observeChangeByWriterWithPurposeID:(id)purposeID;	// 0x35eef791
- (void)observeChangeOfSubitemAtURL:(id)url byWriterWithPurposeID:(id)purposeID;	// 0x35eef8b5
- (void)observeMoveByWriterWithPurposeID:(id)purposeID;	// 0x35eef809
- (void)observeMoveOfSubitemAtURL:(id)url toURL:(id)url2 byWriterWithPurposeID:(id)purposeID;	// 0x35eef939
- (void)observeVersionChangeOfKind:(id)kind withClientID:(id)clientID name:(id)name subitemPath:(id)path;	// 0x35eef9d5
- (void)relinquishToReadingClaimWithID:(id)anId options:(unsigned)options purposeID:(id)anId3 resultHandler:(id)handler;	// 0x35eef2bd
- (void)relinquishToWritingClaimWithID:(id)anId options:(unsigned)options purposeID:(id)anId3 subitemPath:(id)path resultHandler:(id)handler;	// 0x35eef411
- (void)resetMoveObserving;	// 0x35ef0191
- (void)saveChangesWithCompletionHandler:(id)completionHandler;	// 0x35eef585
- (void)setInSuperarbiter;	// 0x35eef2a9
- (void)setItemLocation:(id)location;	// 0x35eef1d1
@end

