/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DAMailboxRequest.h"

@class NSString;

@interface DAMailboxFetchMessageRequest : DAMailboxRequest {
	NSString *_messageID;	// 8 = 0x8
	int _bodyFormat;	// 12 = 0xc
	int _maxSize;	// 16 = 0x10
}
@property(readonly, assign) int bodyFormat;	// G=0x36166459; converted property
@property(readonly, assign) int maxSize;	// G=0x36166469; converted property
@property(readonly, retain) NSString *messageID;	// G=0x36166449; converted property
- (id)initRequestForBodyFormat:(int)bodyFormat withMessageID:(id)messageID withBodySizeLimit:(int)bodySizeLimit;	// 0x361663b9
// converted property getter: - (int)bodyFormat;	// 0x36166459
- (void)dealloc;	// 0x36166661
- (id)description;	// 0x361665d9
- (unsigned)hash;	// 0x36166479
- (BOOL)isEqual:(id)equal;	// 0x36166515
// converted property getter: - (int)maxSize;	// 0x36166469
// converted property getter: - (id)messageID;	// 0x36166449
@end

