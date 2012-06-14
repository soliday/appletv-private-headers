/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class SBJsonUTF8Stream, NSString;

__attribute__((visibility("hidden")))
@interface SBJsonTokeniser : NSObject {
@private
	SBJsonUTF8Stream *_stream;	// 4 = 0x4
	NSString *_error;	// 8 = 0x8
}
@property(copy) NSString *error;	// G=0x36903d19; S=0x36903d2d; @synthesize=_error
- (id)init;	// 0x36903021
- (void)appendData:(id)data;	// 0x369030d1
- (void)dealloc;	// 0x36903085
- (BOOL)decodeEscape:(unsigned short)escape into:(unsigned short *)into;	// 0x3690319d
- (BOOL)decodeHexQuad:(unsigned short *)quad;	// 0x36903211
// declared property getter: - (id)error;	// 0x36903d19
- (int)getNumberToken:(id *)token;	// 0x36903605
- (int)getStringToken:(id *)token;	// 0x369032a5
- (int)getToken:(id *)token;	// 0x36903acd
- (int)match:(const char *)match length:(unsigned)length retval:(int)retval;	// 0x369030f1
// declared property setter: - (void)setError:(id)error;	// 0x36903d2d
@end

