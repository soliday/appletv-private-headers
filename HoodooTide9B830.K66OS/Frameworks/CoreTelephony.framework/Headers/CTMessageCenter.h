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
+ (id)sharedMessageCenter;	// 0x347d3d35
- (id)init;	// 0x347d3d7d
- (void)acknowledgeIncomingMessageWithId:(unsigned)anId;	// 0x347d4a59
- (void)acknowledgeOutgoingMessageWithId:(unsigned)anId;	// 0x347d4aa5
- (id)allIncomingMessages;	// 0x347d4911
- (id)decodeMessage:(id)message;	// 0x347d4c69
- (id)deferredMessageWithId:(unsigned)anId;	// 0x347d4af9
- (id)encodeMessage:(id)message;	// 0x347d4c4d
- (BOOL)getCharacterCount:(int *)count andMessageSplitThreshold:(int *)threshold forSmsText:(id)smsText;	// 0x347d4f09
- (int)incomingMessageCount;	// 0x347d48d5
- (id)incomingMessageWithId:(unsigned)anId;	// 0x347d4aad
- (id)incomingMessageWithId:(unsigned)anId telephonyCenter:(CTTelephonyCenterRef)center isDeferred:(BOOL)deferred;	// 0x347d472d
- (XXStruct_K5nmsA)isDeliveryReportsEnabled:(BOOL *)enabled;	// 0x347d4c85
- (BOOL)isMmsConfigured;	// 0x347d4d4d
- (BOOL)isMmsEnabled;	// 0x347d4d35
- (XXStruct_K5nmsA)send:(id)send;	// 0x347d4599
- (XXStruct_K5nmsA)send:(id)send withMoreToFollow:(BOOL)follow;	// 0x347d45c5
- (XXStruct_K5nmsA)sendMMS:(id)mms;	// 0x347d433d
- (XXStruct_K5nmsA)sendMMSFromData:(id)data messageId:(unsigned)anId;	// 0x347d3f51
- (void)sendMessageAsSmsToShortCodeRecipients:(id)shortCodeRecipients andReplaceData:(id *)data;	// 0x347d4001
- (XXStruct_K5nmsA)sendSMS:(id)sms withMoreToFollow:(BOOL)follow;	// 0x347d3da9
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address;	// 0x347d4da1
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address withMoreToFollow:(BOOL)follow;	// 0x347d4dc5
- (void)setDeliveryReportsEnabled:(BOOL)enabled;	// 0x347d4d09
- (id)statusOfOutgoingMessages;	// 0x347d4b45
@end

