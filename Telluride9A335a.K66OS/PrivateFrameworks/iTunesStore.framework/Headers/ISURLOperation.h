/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSURLRequest, SSAuthenticationContext, NSURLConnection, NSMutableData, NSCountedSet, SSMutableURLRequestProperties, NSURLResponse, SSURLRequestProperties, ISDataProvider;
@protocol ISURLOperationDelegate;

@interface ISURLOperation : ISOperation {
	NSURLRequest *_activeURLRequest;	// 60 = 0x3c
	SSAuthenticationContext *_authenticationContext;	// 64 = 0x40
	NSURLConnection *_connection;	// 68 = 0x44
	NSMutableData *_dataBuffer;	// 72 = 0x48
	ISDataProvider *_dataProvider;	// 76 = 0x4c
	int _networkRetryCount;	// 80 = 0x50
	NSCountedSet *_redirectURLs;	// 84 = 0x54
	SSMutableURLRequestProperties *_requestProperties;	// 88 = 0x58
	NSURLResponse *_response;	// 92 = 0x5c
	BOOL _shouldSetCookies;	// 96 = 0x60
}
@property(assign, getter=_shouldSetCookies, setter=_setShouldSetCookies:) BOOL _shouldSetCookies;	// G=0x30f09391; S=0x30f093a1; @synthesize
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x30f092e9; S=0x30f092fd; @synthesize=_authenticationContext
@property(retain) ISDataProvider *dataProvider;	// G=0x30f09321; S=0x30f09335; @synthesize=_dataProvider
@property(assign) id<ISURLOperationDelegate> delegate;	// @dynamic
@property(retain) id request;	// G=0x30f05d61; S=0x30f05e3d; converted property
@property(copy) SSURLRequestProperties *requestProperties;	// G=0x30f05ddd; S=0x30f05eb1; 
@property(retain) NSURLResponse *response;	// G=0x30f09359; S=0x30f0936d; @synthesize=_response
+ (id)copyUserAgent;	// 0x30f05969
- (id)init;	// 0x30f05831
- (id)_accountIdentifier;	// 0x30f06f85
- (id)_activeURL;	// 0x30f07be1
- (id)_copyAcceptLanguageString;	// 0x30f07c01
- (id)_copyAuthenticationContext;	// 0x30f0702d
- (id)_copyConnectionProperties;	// 0x30f07d3d
- (id)_copyQueryStringDictionaryForRedirect:(id)redirect;	// 0x30f07df5
- (id)_errorWithDefaultStringsForError:(id)error;	// 0x30f07f01
- (id)_errorWithDomain:(id)domain code:(int)code;	// 0x30f07fbd
- (void)_handleFinishedLoading;	// 0x30f070b5
- (void)_handleReceivedData:(id)data;	// 0x30f07369
- (void)_handleReceivedResponse:(id)response;	// 0x30f07455
- (id)_handleRedirectRequest:(id)request response:(id)response;	// 0x30f07a09
- (void)_logRequest:(id)request;	// 0x30f081c5
- (void)_logResponseBody:(id)body;	// 0x30f08365
- (id)_requestProperties;	// 0x30f07055
- (void)_retry;	// 0x30f08495
- (void)_run;	// 0x30f08635
- (BOOL)_runRequestWithURL:(id)url;	// 0x30f086f9
- (id)_sanitizedStringForString:(id)string;	// 0x30f08d49
- (id)_sanitizedURLForURL:(id)url;	// 0x30f08dc9
- (void)_sendContentLengthToDelegate:(long long)delegate;	// 0x30f08e5d
- (void)_sendOutputToDelegate:(id)delegate;	// 0x30f08f21
- (void)_sendRequestToDelegate:(id)delegate;	// 0x30f08f9d
- (void)_sendResponseToDelegate:(id)delegate;	// 0x30f08ff5
- (void)_setActiveURLRequest:(id)request;	// 0x30f09071
// declared property setter: - (void)_setShouldSetCookies:(BOOL)_set;	// 0x30f093a1
// declared property getter: - (BOOL)_shouldSetCookies;	// 0x30f09391
- (void)_stopConnection;	// 0x30f090b5
- (void)_stopIfCancelled;	// 0x30f090f1
- (void)_updateProgress;	// 0x30f09125
- (BOOL)_validateContentLength:(long long)length error:(id *)error;	// 0x30f09245
// declared property getter: - (id)authenticationContext;	// 0x30f092e9
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x30f069b9
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x30f06a59
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x30f06a6d
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x30f06a81
- (void)connection:(id)connection willSendRequestForAuthenticationChallenge:(id)authenticationChallenge;	// 0x30f06cb5
- (void)connectionDidFinishLoading:(id)connection;	// 0x30f06f75
// declared property getter: - (id)dataProvider;	// 0x30f09321
- (void)dealloc;	// 0x30f058a5
- (BOOL)handleRedirectFromDataProvider:(id)dataProvider;	// 0x30f061e5
- (void)handleResponse:(id)response;	// 0x30f06359
- (id)newRequestWithURL:(id)url;	// 0x30f0635d
// converted property getter: - (id)request;	// 0x30f05d61
// declared property getter: - (id)requestProperties;	// 0x30f05ddd
// declared property getter: - (id)response;	// 0x30f09359
- (void)run;	// 0x30f05f19
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x30f092fd
// declared property setter: - (void)setDataProvider:(id)provider;	// 0x30f09335
// converted property setter: - (void)setRequest:(id)request;	// 0x30f05e3d
// declared property setter: - (void)setRequestProperties:(id)properties;	// 0x30f05eb1
// declared property setter: - (void)setResponse:(id)response;	// 0x30f0936d
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;	// 0x30f069ad
@end

