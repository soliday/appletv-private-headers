/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSCoding.h"

@class NSString, NSURL, NSDictionary, NSData;

@interface SSURLConnectionResponse : NSObject <SSCoding> {
@private
	NSDictionary *_allHeaderFields;	// 4 = 0x4
	NSData *_body;	// 8 = 0x8
	long long _expectedContentLength;	// 12 = 0xc
	NSString *_mimeType;	// 20 = 0x14
	int _statusCode;	// 24 = 0x18
	NSString *_suggestedFilename;	// 28 = 0x1c
	NSString *_textEncodingName;	// 32 = 0x20
	NSURL *_url;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSString *MIMEType;	// G=0x305123f9; @synthesize=_mimeType
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x30512429; @synthesize=_url
@property(readonly, retain) NSDictionary *allHeaderFields;	// G=0x30512389; converted property
@property(readonly, assign, nonatomic) NSData *bodyData;	// G=0x305123d1; @synthesize=_body
@property(readonly, assign, nonatomic) long long expectedContentLength;	// G=0x305123e1; @synthesize=_expectedContentLength
@property(readonly, assign) int statusCode;	// G=0x305123c1; converted property
@property(readonly, assign, nonatomic) NSString *suggestedFilename;	// G=0x30512409; @synthesize=_suggestedFilename
@property(readonly, assign, nonatomic) NSString *textEncodingName;	// G=0x30512419; @synthesize=_textEncodingName
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x30512185
- (id)initWithURLResponse:(id)urlresponse bodyData:(id)data;	// 0x30511db5
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x3051234d
// declared property getter: - (id)MIMEType;	// 0x305123f9
// declared property getter: - (id)URL;	// 0x30512429
// converted property getter: - (id)allHeaderFields;	// 0x30512389
// declared property getter: - (id)bodyData;	// 0x305123d1
- (id)copyPropertyListEncoding;	// 0x30511fdd
- (void *)copyXPCEncoding;	// 0x30512151
- (void)dealloc;	// 0x30511f2d
// declared property getter: - (long long)expectedContentLength;	// 0x305123e1
// converted property getter: - (int)statusCode;	// 0x305123c1
// declared property getter: - (id)suggestedFilename;	// 0x30512409
// declared property getter: - (id)textEncodingName;	// 0x30512419
@end

