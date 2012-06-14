/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MessageHeaders.h"
#import "MIME-Structs.h"

@class NSMutableDictionary, NSMutableArray;

@interface MutableMessageHeaders : MessageHeaders {
	NSMutableDictionary *_headersAdded;	// 12 = 0xc
	NSMutableArray *_headersRemoved;	// 16 = 0x10
}
- (void)_appendAddedHeaderKey:(id)key value:(id)value toData:(id)data;	// 0x35e5db19
- (void)_appendHeaderKey:(id)key value:(id)value toData:(id)data;	// 0x35e5dbdd
- (id)_copyHeaderValueForKey:(id)key;	// 0x35e5d8e1
- (id)_copyHeaderValueForKey:(id)key offset:(unsigned *)offset decoded:(BOOL)decoded;	// 0x35e5d7a5
- (id)_headerValueForKey:(id)key;	// 0x35e5e239
- (id)allHeaderKeys;	// 0x35e5e3dd
- (void)dealloc;	// 0x35e5e495
- (id)description;	// 0x35e5cf79
- (id)encodedHeaders;	// 0x35e5d409
- (id)firstHeaderForKey:(id)key;	// 0x35e5e141
- (BOOL)hasHeaderForKey:(id)key;	// 0x35e5e331
- (void)mergeHeaders:(id)headers;	// 0x35e5de4d
- (id)mutableCopy;	// 0x35e5cf05
- (void)removeHeaderForKey:(id)key;	// 0x35e5e09d
- (void)setAddressList:(id)list forKey:(id)key;	// 0x35e5d36d
- (void)setAddressListForBcc:(id)bcc;	// 0x35e5d2dd
- (void)setAddressListForCc:(id)cc;	// 0x35e5d301
- (void)setAddressListForSender:(id)sender;	// 0x35e5d349
- (void)setAddressListForTo:(id)to;	// 0x35e5d325
- (void)setHeader:(id)header forKey:(id)key;	// 0x35e5df39
- (void)setReferences:(id)references;	// 0x35e5d291
- (void)stripInternalHeaders;	// 0x35e5d185
@end
