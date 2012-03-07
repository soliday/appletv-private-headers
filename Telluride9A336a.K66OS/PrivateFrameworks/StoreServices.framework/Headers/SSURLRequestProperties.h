/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "SSCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSDictionary, NSData, NSArray, NSInputStream, NSString, NSURL;

@interface SSURLRequestProperties : NSObject <SSCoding, NSCoding, NSCopying, NSMutableCopying> {
@private
	int _allowedRetryCount;	// 4 = 0x4
	unsigned _cachePolicy;	// 8 = 0x8
	NSString *_clientIdentifier;	// 12 = 0xc
	dispatch_queue_s *_dispatchQueue;	// 16 = 0x10
	long long _expectedContentLength;	// 20 = 0x14
	NSData *_httpBody;	// 28 = 0x1c
	NSInputStream *_httpBodyStream;	// 32 = 0x20
	NSDictionary *_httpHeaders;	// 36 = 0x24
	NSString *_httpMethod;	// 40 = 0x28
	BOOL _isITunesStoreRequest;	// 44 = 0x2c
	NSDictionary *_requestParameters;	// 48 = 0x30
	BOOL _shouldProcessProtocol;	// 52 = 0x34
	double _timeoutInterval;	// 56 = 0x38
	NSString *_urlBagKey;	// 64 = 0x40
	int _urlBagType;	// 68 = 0x44
	id _urlBagURLBlock;	// 72 = 0x48
	NSArray *_urls;	// 76 = 0x4c
	NSArray *_userAgentComponents;	// 80 = 0x50
}
@property(readonly, assign) NSData *HTTPBody;	// G=0x341fe8ed; 
@property(readonly, assign) NSInputStream *HTTPBodyStream;	// G=0x341ffd3d; 
@property(readonly, assign) NSDictionary *HTTPHeaders;	// G=0x341fea89; 
@property(readonly, assign) NSString *HTTPMethod;	// G=0x341fec25; 
@property(readonly, assign, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;	// G=0x341fedc1; 
@property(readonly, assign) NSURL *URL;	// G=0x341ff3b5; 
@property(readonly, assign) NSString *URLBagKey;	// G=0x341ff219; 
@property(readonly, assign) int URLBagType;	// G=0x341ffed9; 
@property(readonly, assign) id URLBagURLBlock;	// G=0x341fffa9; 
@property(readonly, assign) NSArray *URLs;	// G=0x34200159; 
@property(readonly, assign) int allowedRetryCount;	// G=0x341fe4c5; 
@property(readonly, assign) unsigned cachePolicy;	// G=0x341fe595; 
@property(readonly, assign) BOOL canBeResolved;	// G=0x341ff9e9; 
@property(readonly, assign) NSString *clientIdentifier;	// G=0x341fe665; 
@property(readonly, assign) long long expectedContentLength;	// G=0x341fe801; 
@property(readonly, assign) NSDictionary *requestParameters;	// G=0x341feeb1; 
@property(readonly, assign) BOOL shouldProcessProtocol;	// G=0x341ff04d; 
@property(readonly, assign) double timeoutInterval;	// G=0x341ff121; 
@property(readonly, assign) NSArray *userAgentComponents;	// G=0x341ff585; 
- (id)init;	// 0x341fcdd1
- (id)initWithCoder:(id)coder;	// 0x341fd4a5
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x341fe1c5
- (id)initWithURL:(id)url;	// 0x341fcde5
- (id)initWithURLRequest:(id)urlrequest;	// 0x341fce45
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x341fe489
// declared property getter: - (id)HTTPBody;	// 0x341fe8ed
// declared property getter: - (id)HTTPBodyStream;	// 0x341ffd3d
// declared property getter: - (id)HTTPHeaders;	// 0x341fea89
// declared property getter: - (id)HTTPMethod;	// 0x341fec25
// declared property getter: - (id)URL;	// 0x341ff3b5
// declared property getter: - (id)URLBagKey;	// 0x341ff219
// declared property getter: - (int)URLBagType;	// 0x341ffed9
// declared property getter: - (id)URLBagURLBlock;	// 0x341fffa9
// declared property getter: - (id)URLs;	// 0x34200159
- (id)_initCommon;	// 0x341fcd81
// declared property getter: - (int)allowedRetryCount;	// 0x341fe4c5
// declared property getter: - (unsigned)cachePolicy;	// 0x341fe595
// declared property getter: - (BOOL)canBeResolved;	// 0x341ff9e9
// declared property getter: - (id)clientIdentifier;	// 0x341fe665
- (id)copyPropertyListEncoding;	// 0x341fde51
- (id)copyURLRequest;	// 0x341ffb01
- (id)copyWithZone:(NSZone *)zone;	// 0x341fdaed
- (void *)copyXPCEncoding;	// 0x341fe191
- (void)dealloc;	// 0x341fd025
- (id)description;	// 0x341ff721
- (void)encodeWithCoder:(id)coder;	// 0x341fd125
// declared property getter: - (long long)expectedContentLength;	// 0x341fe801
- (BOOL)isEqual:(id)equal;	// 0x341ff7c5
// declared property getter: - (BOOL)isITunesStoreRequest;	// 0x341fedc1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x341fdafd
// declared property getter: - (id)requestParameters;	// 0x341feeb1
// declared property getter: - (BOOL)shouldProcessProtocol;	// 0x341ff04d
// declared property getter: - (double)timeoutInterval;	// 0x341ff121
// declared property getter: - (id)userAgentComponents;	// 0x341ff585
@end
