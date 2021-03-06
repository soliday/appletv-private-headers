/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library

@class NSHTTPURLResponse, NSError, NSString, NSDictionary;

@interface AAResponse : NSObject {
	NSDictionary *_responseDictionary;	// 4 = 0x4
	NSHTTPURLResponse *_httpResponse;	// 8 = 0x8
	NSError *_error;	// 12 = 0xc
}
@property(retain, nonatomic) NSError *error;	// G=0x342ea361; S=0x342ea371; @synthesize=_error
@property(readonly, assign, nonatomic) NSString *protocolVersion;	// G=0x342ea2b5; 
@property(readonly, assign, nonatomic) NSDictionary *responseDictionary;	// G=0x342ea351; @synthesize=_responseDictionary
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;	// 0x342e9b4d
- (void)_parseResponse:(id)response;	// 0x342e9935
- (void)dealloc;	// 0x342ea2dd
// declared property getter: - (id)error;	// 0x342ea361
// declared property getter: - (id)protocolVersion;	// 0x342ea2b5
// declared property getter: - (id)responseDictionary;	// 0x342ea351
// declared property setter: - (void)setError:(id)error;	// 0x342ea371
@end

