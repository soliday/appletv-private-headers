/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSURLRequest.h"
#import "Foundation-Structs.h"


@interface NSMutableURLRequest : NSURLRequest {
}
@property(assign) unsigned requestPriority;	// G=0x31db4b4d; S=0x31db4b29; converted property
- (void)addValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x31cfa38d
- (id)copyWithZone:(NSZone *)zone;	// 0x31db4579
// converted property getter: - (unsigned)requestPriority;	// 0x31db4b4d
- (void)setAllHTTPHeaderFields:(id)fields;	// 0x31d373ed
- (void)setBoundInterfaceIdentifier:(id)identifier;	// 0x31db45ad
- (void)setCachePolicy:(unsigned)policy;	// 0x31db4529
- (void)setContentDispositionEncodingFallbackArray:(id)array;	// 0x31db4b91
- (void)setHTTPBody:(id)body;	// 0x31d2453d
- (void)setHTTPBodyStream:(id)stream;	// 0x31db4a21
- (void)setHTTPContentType:(id)type;	// 0x31db4a45
- (void)setHTTPExtraCookies:(id)cookies;	// 0x31db4a61
- (void)setHTTPMethod:(id)method;	// 0x31d244f1
- (void)setHTTPReferrer:(id)referrer;	// 0x31db4a85
- (void)setHTTPShouldHandleCookies:(BOOL)handleCookies;	// 0x31d244cd
- (void)setHTTPShouldUsePipelining:(BOOL)usePipelining;	// 0x31db4b6d
- (void)setHTTPUserAgent:(id)agent;	// 0x31db4b0d
- (void)setMainDocumentURL:(id)url;	// 0x31db4555
- (void)setNetworkServiceType:(unsigned)type;	// 0x31db4589
// converted property setter: - (void)setRequestPriority:(unsigned)priority;	// 0x31db4b29
- (void)setTimeoutInterval:(double)interval;	// 0x31d34605
- (void)setURL:(id)url;	// 0x31db4505
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x31d24515
@end

