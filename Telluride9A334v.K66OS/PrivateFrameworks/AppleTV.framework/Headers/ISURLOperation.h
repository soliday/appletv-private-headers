/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class NSCountedSet, SSMutableURLRequestProperties, SSURLRequestProperties, NSURLConnection, NSURLRequest, NSURLResponse, ISDataProvider, NSMutableData, SSAuthenticationContext;
@protocol ISURLOperationDelegate;

__attribute__((visibility("hidden")))
@interface ISURLOperation : ISOperation {
@private
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
@property(assign, getter=_shouldSetCookies, setter=_setShouldSetCookies:) BOOL _shouldSetCookies;	// G=0x3334ad95; S=0x3334ada5; @synthesize
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x3334aced; S=0x3334ad01; @synthesize=_authenticationContext
@property(retain) ISDataProvider *dataProvider;	// G=0x3334ad25; S=0x3334ad39; @synthesize=_dataProvider
@property(assign) id<ISURLOperationDelegate> delegate;	// @dynamic
@property(retain) id request;	// G=0x3334785d; S=0x33347939; converted property
@property(copy) SSURLRequestProperties *requestProperties;	// G=0x333478d9; S=0x333479ad; 
@property(retain) NSURLResponse *response;	// G=0x3334ad5d; S=0x3334ad71; @synthesize=_response
+ (id)copyUserAgent;	// 0x33347465
- (id)init;	// 0x3334732d
- (id)_accountIdentifier;	// 0x33348a7d
- (id)_activeURL;	// 0x3334967d
- (id)_copyAcceptLanguageString;	// 0x3334969d
- (id)_copyAuthenticationContext;	// 0x33348b05
- (id)_copyConnectionProperties;	// 0x333497d9
- (id)_copyQueryStringDictionaryForRedirect:(id)redirect;	// 0x33349891
- (id)_errorWithDefaultStringsForError:(id)error;	// 0x3334999d
- (id)_errorWithDomain:(id)domain code:(int)code;	// 0x33349a59
- (void)_handleFinishedLoading;	// 0x33348b8d
- (void)_handleReceivedData:(id)data;	// 0x33348e41
- (void)_handleReceivedResponse:(id)response;	// 0x33348f2d
- (id)_handleRedirectRequest:(id)request response:(id)response;	// 0x333494a5
- (void)_logRequest:(id)request;	// 0x33349c61
- (void)_logResponseBody:(id)body;	// 0x33349e01
- (id)_requestProperties;	// 0x33348b2d
- (void)_retry;	// 0x33349f31
- (void)_run;	// 0x3334a0d1
- (BOOL)_runRequestWithURL:(id)url;	// 0x3334a195
- (id)_sanitizedStringForString:(id)string;	// 0x3334a781
- (id)_sanitizedURLForURL:(id)url;	// 0x3334a801
- (void)_sendContentLengthToDelegate:(long long)delegate;	// 0x3334a895
- (void)_sendOutputToDelegate:(id)delegate;	// 0x3334a959
- (void)_sendRequestToDelegate:(id)delegate;	// 0x3334a9d5
- (void)_sendResponseToDelegate:(id)delegate;	// 0x3334aa2d
- (void)_setActiveURLRequest:(id)request;	// 0x3334aaa9
// declared property setter: - (void)_setShouldSetCookies:(BOOL)_set;	// 0x3334ada5
// declared property getter: - (BOOL)_shouldSetCookies;	// 0x3334ad95
- (void)_stopConnection;	// 0x3334aaed
- (void)_updateProgress;	// 0x3334ab29
- (BOOL)_validateContentLength:(long long)length error:(id *)error;	// 0x3334ac49
// declared property getter: - (id)authenticationContext;	// 0x3334aced
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x333484b1
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x33348551
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x33348565
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x33348579
- (void)connection:(id)connection willSendRequestForAuthenticationChallenge:(id)authenticationChallenge;	// 0x333487ad
- (void)connectionDidFinishLoading:(id)connection;	// 0x33348a6d
// declared property getter: - (id)dataProvider;	// 0x3334ad25
- (void)dealloc;	// 0x333473a1
- (BOOL)handleRedirectFromDataProvider:(id)dataProvider;	// 0x33347ce1
- (void)handleResponse:(id)response;	// 0x33347e55
- (id)newRequestWithURL:(id)url;	// 0x33347e59
// converted property getter: - (id)request;	// 0x3334785d
// declared property getter: - (id)requestProperties;	// 0x333478d9
// declared property getter: - (id)response;	// 0x3334ad5d
- (void)run;	// 0x33347a15
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x3334ad01
// declared property setter: - (void)setDataProvider:(id)provider;	// 0x3334ad39
// converted property setter: - (void)setRequest:(id)request;	// 0x33347939
// declared property setter: - (void)setRequestProperties:(id)properties;	// 0x333479ad
// declared property setter: - (void)setResponse:(id)response;	// 0x3334ad71
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;	// 0x333484a5
@end
