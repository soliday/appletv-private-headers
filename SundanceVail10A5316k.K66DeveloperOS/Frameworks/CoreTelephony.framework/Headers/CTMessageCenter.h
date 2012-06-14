/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "CoreTelephony-Structs.h"
#import <NSObject.h> // Unknown library


@interface CTMessageCenter : NSObject {
}
+ (id)sharedMessageCenter;	// 0x35d53bc1
- (id)init;	// 0x35d53c09
- (void)acknowledgeIncomingMessageWithId:(unsigned)anId;	// 0x35d55b85
- (void)acknowledgeOutgoingMessageWithId:(unsigned)anId;	// 0x35d55e55
- (void)addMessageOfType:(int)type toArray:(id)array withIdsFromArray:(id)array3;	// 0x35d55765
- (id)allIncomingMessages;	// 0x35d55839
- (void)dealloc;	// 0x35d53ca9
- (id)decodeMessage:(id)message;	// 0x35d561c5
- (id)deferredMessageWithId:(unsigned)anId;	// 0x35d55e71
- (id)encodeMessage:(id)message;	// 0x35d561a9
- (BOOL)getCharacterCount:(int *)count andMessageSplitThreshold:(int *)threshold forSmsText:(id)smsText;	// 0x35d56579
- (int)incomingMessageCount;	// 0x35d55561
- (id)incomingMessageWithId:(unsigned)anId;	// 0x35d55e5d
- (id)incomingMessageWithId:(unsigned)anId isDeferred:(BOOL)deferred;	// 0x35d54d99
- (XXStruct_K5nmsA)isDeliveryReportsEnabled:(BOOL *)enabled;	// 0x35d561e1
- (BOOL)isMmsConfigured;	// 0x35d5620d
- (BOOL)isMmsEnabled;	// 0x35d561f5
- (XXStruct_K5nmsA)send:(id)send;	// 0x35d54bf1
- (XXStruct_K5nmsA)send:(id)send withMoreToFollow:(BOOL)follow;	// 0x35d54c1d
- (XXStruct_K5nmsA)sendMMS:(id)mms;	// 0x35d549b5
- (XXStruct_K5nmsA)sendMMSFromData:(id)data messageId:(unsigned)anId;	// 0x35d54259
- (void)sendMessageAsSmsToShortCodeRecipients:(id)shortCodeRecipients andReplaceData:(id *)data;	// 0x35d54651
- (XXStruct_K5nmsA)sendSMS:(id)sms withMoreToFollow:(BOOL)follow;	// 0x35d53ce9
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address;	// 0x35d56411
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address withMoreToFollow:(BOOL)follow;	// 0x35d56435
- (void)setDeliveryReportsEnabled:(BOOL)enabled;	// 0x35d561f1
- (id)statusOfOutgoingMessages;	// 0x35d55e85
@end
