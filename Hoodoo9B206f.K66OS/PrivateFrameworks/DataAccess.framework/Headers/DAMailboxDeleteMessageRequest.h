/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DAMailboxRequest.h"

@class NSString;

@interface DAMailboxDeleteMessageRequest : DAMailboxRequest {
	NSString *_messageID;	// 8 = 0x8
}
@property(readonly, retain) NSString *messageID;	// G=0x31eb6061; converted property
- (id)initRequestWithMessageID:(id)messageID;	// 0x31eb5ffd
- (void)dealloc;	// 0x31eb617d
- (id)description;	// 0x31eb6115
- (unsigned)hash;	// 0x31eb6071
- (BOOL)isEqual:(id)equal;	// 0x31eb6091
// converted property getter: - (id)messageID;	// 0x31eb6061
@end

