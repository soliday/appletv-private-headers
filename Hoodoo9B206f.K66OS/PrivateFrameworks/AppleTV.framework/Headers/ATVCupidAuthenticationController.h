/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVSharedCredentialsAuthenticationController.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface ATVCupidAuthenticationController : ATVSharedCredentialsAuthenticationController {
@private
	ATVMediaQueryRef _query;	// 92 = 0x5c
	NSTimer *_spinnerTimer;	// 96 = 0x60
	BOOL _accountOptionsPreviouslySet;	// 100 = 0x64
}
- (void)_queryComplete:(id)complete;	// 0x3677fe35
- (void)_showSpinner;	// 0x3677ff01
- (void)dealloc;	// 0x3677f729
- (BOOL)handleDisplayForAuthCancelledError:(id)authCancelledError;	// 0x3677fa4d
- (BOOL)handleDisplayForAuthFailureError:(id)authFailureError userName:(id)name attempAuthorizationAgain:(BOOL *)again;	// 0x3677fcb9
- (BOOL)performPostAuthenticationOperationsWithUser:(id)user accountOptionsPreviouslySet:(BOOL)set;	// 0x3677f7c9
- (void)wasPopped;	// 0x3677f775
@end

