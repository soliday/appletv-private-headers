/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSURLRequestProperties.h"

@class NSURL, NSDictionary, NSData, NSArray, NSInputStream, NSString;

@interface SSMutableURLRequestProperties : SSURLRequestProperties {
}
@property(copy) NSData *HTTPBody;	// S=0x30511049; @dynamic
@property(retain) NSInputStream *HTTPBodyStream;	// S=0x30511a11; @dynamic
@property(copy) NSDictionary *HTTPHeaders;	// S=0x30511129; @dynamic
@property(copy) NSString *HTTPMethod;	// S=0x30511209; @dynamic
@property(assign, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;	// S=0x305112e9; @dynamic
@property(retain) NSURL *URL;	// S=0x305115c5; @dynamic
@property(copy) NSString *URLBagKey;	// S=0x305114e5; @dynamic
@property(assign) int URLBagType;	// S=0x30511b75; @dynamic
@property(copy) id URLBagURLBlock;	// S=0x30511bf5; @dynamic
@property(copy) NSArray *URLs;	// S=0x30511cd5; @dynamic
@property(assign) int allowedRetryCount;	// S=0x30510dd1; @dynamic
@property(assign) unsigned cachePolicy;	// S=0x30510e51; @dynamic
@property(copy) NSString *clientIdentifier;	// S=0x30510ed1; @dynamic
@property(assign) long long expectedContentLength;	// S=0x30510fb1; @dynamic
@property(copy) NSDictionary *requestParameters;	// S=0x3051136d; @dynamic
@property(assign) BOOL shouldProcessProtocol;	// S=0x30511af1; @dynamic
@property(assign) double timeoutInterval;	// S=0x3051144d; @dynamic
@property(copy) NSArray *userAgentComponents;	// S=0x30511629; @dynamic
- (id)copyWithZone:(NSZone *)zone;	// 0x30510dc1
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x30510dd1
// declared property setter: - (void)setCachePolicy:(unsigned)policy;	// 0x30510e51
// declared property setter: - (void)setClientIdentifier:(id)identifier;	// 0x30510ed1
// declared property setter: - (void)setExpectedContentLength:(long long)length;	// 0x30510fb1
// declared property setter: - (void)setHTTPBody:(id)body;	// 0x30511049
// declared property setter: - (void)setHTTPBodyStream:(id)stream;	// 0x30511a11
// declared property setter: - (void)setHTTPHeaders:(id)headers;	// 0x30511129
// declared property setter: - (void)setHTTPMethod:(id)method;	// 0x30511209
// declared property setter: - (void)setITunesStoreRequest:(BOOL)request;	// 0x305112e9
// declared property setter: - (void)setRequestParameters:(id)parameters;	// 0x3051136d
// declared property setter: - (void)setShouldProcessProtocol:(BOOL)processProtocol;	// 0x30511af1
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x3051144d
// declared property setter: - (void)setURL:(id)url;	// 0x305115c5
// declared property setter: - (void)setURLBagKey:(id)key;	// 0x305114e5
// declared property setter: - (void)setURLBagType:(int)type;	// 0x30511b75
// declared property setter: - (void)setURLBagURLBlock:(id)block;	// 0x30511bf5
// declared property setter: - (void)setURLs:(id)urls;	// 0x30511cd5
// declared property setter: - (void)setUserAgentComponents:(id)components;	// 0x30511629
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x30511709
- (void)setValue:(id)value forRequestParameter:(id)requestParameter;	// 0x3051188d
@end

