/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "DATask.h"
#import "NSURLConnectionDelegate.h"
#import "DAEAS-Structs.h"
#import <NSObject.h> // Unknown library

@class ASTaskManager, NSDate, NSHTTPURLResponse, NSURLConnection, NSURLRequest, ASItem, NSTimer, DATaskManager, ASParseContext, NSMutableSet, NSString, NSError;

@interface ASTask : NSObject <DATask, NSURLConnectionDelegate> {
	BOOL _haveSwitchedCodePage;	// 4 = 0x4
	BOOL _haveParsedCommand;	// 5 = 0x5
	ASItem *_currentlyParsingItem;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	NSHTTPURLResponse *_response;	// 16 = 0x10
	ASParseContext *_parseContext;	// 20 = 0x14
	NSURLConnection *_connection;	// 24 = 0x18
@private
	NSURLRequest *_request;	// 28 = 0x1c
	NSMutableSet *_attemptedIdentities;	// 32 = 0x20
	BOOL _isFakingIt;	// 36 = 0x24
	BOOL _didSendRequest;	// 37 = 0x25
	BOOL _didFailWithError;	// 38 = 0x26
	BOOL _didCancel;	// 39 = 0x27
	BOOL _didReceiveResponse;	// 40 = 0x28
	BOOL _didReceiveData;	// 41 = 0x29
	BOOL _didFinishLoading;	// 42 = 0x2a
	BOOL _didReset;	// 43 = 0x2b
	BOOL _finished;	// 44 = 0x2c
	BOOL _inDelegateCallout;	// 45 = 0x2d
	BOOL _finishedByTimeoutEnforcer;	// 46 = 0x2e
	int _interfaceBinding;	// 48 = 0x30
	void *_context;	// 52 = 0x34
	BOOL _isExclusive;	// 56 = 0x38
	BOOL _receivedBadPasswordResponse;	// 57 = 0x39
	BOOL _askedToCancelWhileModal;	// 58 = 0x3a
	BOOL _haveCheckedForTopLevelError;	// 59 = 0x3b
	BOOL _handledTopLevelError;	// 60 = 0x3c
	int _taskID;	// 64 = 0x40
	ASTaskManager *_taskManager;	// 68 = 0x44
	int _modalReason;	// 72 = 0x48
	int _modalPushCount;	// 76 = 0x4c
	NSString *_lastKnownPolicyKey;	// 80 = 0x50
	NSError *_passwordNotificationError;	// 84 = 0x54
	NSString *_lastKnownPassword;	// 88 = 0x58
	NSDate *_dateConnectionWentOut;	// 92 = 0x5c
	NSTimer *_timeoutEnforcer;	// 96 = 0x60
@protected
	BOOL _retry;	// 100 = 0x64
}
@property(assign, nonatomic) BOOL askedToCancelWhileModal;	// G=0x31e0bf31; S=0x31e0bf41; @synthesize=_askedToCancelWhileModal
@property(assign, nonatomic) void *context;	// G=0x31e0be9d; S=0x31e0bead; @synthesize=_context
@property(retain, nonatomic) ASItem *currentlyParsingItem;	// G=0x31e0befd; S=0x31e0bf0d; @synthesize=_currentlyParsingItem
@property(assign, nonatomic) id delegate;	// G=0x31e0be7d; S=0x31e0be8d; @synthesize=_delegate
@property(assign, nonatomic) int interfaceBinding;	// G=0x31e0bebd; S=0x31e0becd; @synthesize=_interfaceBinding
@property(assign, nonatomic) BOOL isExclusive;	// G=0x31e0bedd; S=0x31e0beed; @synthesize=_isExclusive
@property(retain, nonatomic) NSString *lastKnownPassword;	// G=0x31e0bf51; S=0x31e0bf61; @synthesize=_lastKnownPassword
@property(readonly, assign) int taskID;	// G=0x31e06441; converted property
@property(assign, nonatomic) DATaskManager *taskManager;	// G=0x31e0be6d; S=0x31e0bd45; @synthesize=_taskManager
@property(retain, nonatomic) NSTimer *timeoutEnforcer;	// G=0x31e0bf85; S=0x31e0be15; @synthesize=_timeoutEnforcer
+ (void)_restoreDefaultTaskTimeout;	// 0x31e06489
+ (void)_setDefaultTaskTimeout:(double)timeout;	// 0x31e06475
- (id)init;	// 0x31e05ee1
- (id)_HTTPMethodForRequest:(id)request;	// 0x31e06465
- (id)_applyAuthenticationChain:(CFArrayRef)chain toRequest:(id)request;	// 0x31e09215
- (void)_continuePerformTask;	// 0x31e0816d
- (id)_createBodyData;	// 0x31e07b95
- (id)_easVersion;	// 0x31e06535
- (void)_failImmediately;	// 0x31e07bbd
- (void)_handleBadPasswordResponse;	// 0x31e09361
- (BOOL)_handleCertificateError:(id)error;	// 0x31e09561
- (BOOL)_handleRedirect:(id)redirect;	// 0x31e0961d
- (void)_initFakeParseContext;	// 0x31e0bb01
- (BOOL)_isWBXML;	// 0x31e06575
- (id)_policyKey;	// 0x31e06555
- (void)_popModal;	// 0x31e07da5
- (void)_pushModalForReason:(int)reason;	// 0x31e07d41
- (BOOL)_shouldRedirectToHTTPForRequest:(id)request;	// 0x31e06461
- (BOOL)_shouldSendAuthForRequest:(id)request;	// 0x31e0645d
- (void)_timeoutEnforcerFired:(id)fired;	// 0x31e06e49
- (id)_url;	// 0x31e064f9
// declared property getter: - (BOOL)askedToCancelWhileModal;	// 0x31e0bf31
- (BOOL)attemptRetryWithStatus:(int)status error:(id)error;	// 0x31e08b5d
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x31e090c5
- (BOOL)checkForErrorInContext:(id)context;	// 0x31e066e9
- (id)command;	// 0x31e065a9
- (int)commandCode;	// 0x31e065c5
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x31e0aa41
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x31e0b3b5
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x31e0aadd
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x31e099c5
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x31e0b07d
- (void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;	// 0x31e09929
- (id)connection:(id)connection needNewBodyStream:(id)stream;	// 0x31e0a391
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x31e0a3ed
- (int)connectionActionForResponse:(id)response;	// 0x31e06d5d
- (void)connectionDidFinishLoading:(id)connection;	// 0x31e0acc5
- (id)contentType;	// 0x31e06d2d
// declared property getter: - (void *)context;	// 0x31e0be9d
// declared property getter: - (id)currentlyParsingItem;	// 0x31e0befd
- (void)dealloc;	// 0x31e06025
// declared property getter: - (id)delegate;	// 0x31e0be7d
- (id)description;	// 0x31e06251
- (void)didCallOutToDelegate;	// 0x31e08dd1
- (void)didProcessContext:(id)context;	// 0x31e06d3d
- (BOOL)expectsWBXML;	// 0x31e065a5
- (void)finishWithError:(id)error;	// 0x31e08e59
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x31e06665
- (void)handleTopLevelErrorStatus:(id)status;	// 0x31e0b8b1
- (id)httpMethod;	// 0x31e06451
// declared property getter: - (int)interfaceBinding;	// 0x31e0bebd
// declared property getter: - (BOOL)isExclusive;	// 0x31e0bedd
- (BOOL)isInCallOutToDelegate;	// 0x31e08e49
// declared property getter: - (id)lastKnownPassword;	// 0x31e0bf51
- (void)loadRequest:(id)request;	// 0x31e06f1d
- (int)numDownloadedElements;	// 0x31e0bcb5
- (id)parameterData;	// 0x31e06611
- (double)percentComplete;	// 0x31e06ba9
- (void)performTask;	// 0x31e07c69
- (BOOL)processContext:(id)context;	// 0x31e06661
- (void)reportStatusWithError:(id)error;	// 0x31e0bcb9
- (id)requestBody;	// 0x31e06619
- (id)requestBodyStreamOutKnownSize:(int *)size;	// 0x31e06615
- (BOOL)requiresEASVersionInformaton;	// 0x31e06d55
- (void)reset;	// 0x31e0bb81
- (id)responseContentType;	// 0x31e06401
// declared property setter: - (void)setAskedToCancelWhileModal:(BOOL)cancelWhileModal;	// 0x31e0bf41
// declared property setter: - (void)setContext:(void *)context;	// 0x31e0bead
// declared property setter: - (void)setCurrentlyParsingItem:(id)item;	// 0x31e0bf0d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31e0be8d
// declared property setter: - (void)setInterfaceBinding:(int)binding;	// 0x31e0becd
// declared property setter: - (void)setIsExclusive:(BOOL)exclusive;	// 0x31e0beed
// declared property setter: - (void)setLastKnownPassword:(id)password;	// 0x31e0bf61
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x31e0bd45
// declared property setter: - (void)setTimeoutEnforcer:(id)enforcer;	// 0x31e0be15
- (BOOL)shouldHandlePasswordErrors;	// 0x31e09925
- (BOOL)shouldHoldPowerAssertion;	// 0x31e06d59
- (BOOL)shouldLogIncomingData;	// 0x31e06d51
- (BOOL)shouldReportTimeInNetwork;	// 0x31e0bcb1
- (void)startModal;	// 0x31e07de9
// converted property getter: - (int)taskID;	// 0x31e06441
// declared property getter: - (id)taskManager;	// 0x31e0be6d
- (void)taskManagerDidFailToUpdatePolicyKey;	// 0x31e0812d
- (void)taskManagerDidFindEASVersion;	// 0x31e0800d
- (void)taskManagerDidUpdatePolicyKey;	// 0x31e0809d
- (int)taskStatusForError:(id)error;	// 0x31e06bb9
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x31e06bb5
- (void)tearDownResources;	// 0x31e07abd
// declared property getter: - (id)timeoutEnforcer;	// 0x31e0bf85
- (double)timeoutInterval;	// 0x31e064a1
- (void)willCallOutToDelegate;	// 0x31e08c21
- (void)willProcessContext;	// 0x31e06d39
@end

