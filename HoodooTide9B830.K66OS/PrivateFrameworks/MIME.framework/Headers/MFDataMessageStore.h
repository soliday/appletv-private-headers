/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MessageStore.h"

@class NSData;

@interface MFDataMessageStore : MessageStore {
	NSData *_data;	// 24 = 0x18
	Class _messageClass;	// 28 = 0x1c
}
- (id)initWithData:(id)data;	// 0x36d30c05
- (id)_cachedBodyDataForMessage:(id)message valueIfNotPresent:(id)present;	// 0x36d30c5d
- (id)_cachedBodyForMessage:(id)message valueIfNotPresent:(id)present;	// 0x36d30bf9
- (id)_cachedHeadersForMessage:(id)message valueIfNotPresent:(id)present;	// 0x36d30bfd
- (id)account;	// 0x36d30bf5
- (id)bodyDataForMessage:(id)message isComplete:(BOOL *)complete isPartial:(BOOL *)partial downloadIfNecessary:(BOOL)necessary;	// 0x36d30c7d
- (void)dealloc;	// 0x36d30ed9
- (id)headerDataForMessage:(id)message downloadIfNecessary:(BOOL)necessary;	// 0x36d30d5d
- (id)mailboxUid;	// 0x36d30c01
- (id)message;	// 0x36d30e39
- (void)setMessageClass:(Class)aClass;	// 0x36d30be5
- (id)storePath;	// 0x36d30ed5
- (void)writeUpdatedMessageDataToDisk;	// 0x36d30be1
@end

