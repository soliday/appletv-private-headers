/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"

@class NSData, NSString, NSNumber;

@interface FTRelayInitateMessage : FTMessage {
	NSData *_selfPushToken;	// 24 = 0x18
	NSNumber *_selfNatType;	// 28 = 0x1c
	NSNumber *_selfNATIP;	// 32 = 0x20
	NSString *_peerID;	// 36 = 0x24
	NSData *_peerPushToken;	// 40 = 0x28
	NSNumber *_peerNatType;	// 44 = 0x2c
	NSNumber *_peerNATIP;	// 48 = 0x30
	NSNumber *_relayType;	// 52 = 0x34
	NSData *_relayConnectionId;	// 56 = 0x38
	NSData *_relayTransactionIdAlloc;	// 60 = 0x3c
	NSData *_relayTokenAllocReq;	// 64 = 0x40
	NSData *_selfRelayIP;	// 68 = 0x44
	NSNumber *_selfRelayPort;	// 72 = 0x48
	NSData *_peerRelayIP;	// 76 = 0x4c
	NSNumber *_peerRelayPort;	// 80 = 0x50
}
@property(copy) NSString *peerID;	// G=0x34730905; S=0x34730a9d; @synthesize=_peerID
@property(copy) NSNumber *peerNATIP;	// G=0x3473094d; S=0x34730b15; @synthesize=_peerNATIP
@property(copy) NSNumber *peerNatType;	// G=0x34730935; S=0x34730aed; @synthesize=_peerNatType
@property(copy) NSData *peerPushToken;	// G=0x3473091d; S=0x34730ac5; @synthesize=_peerPushToken
@property(copy) NSData *peerRelayIP;	// G=0x347309f5; S=0x34730c2d; @synthesize=_peerRelayIP
@property(copy) NSNumber *peerRelayPort;	// G=0x34730a0d; S=0x34730c55; @synthesize=_peerRelayPort
@property(copy) NSData *relayConnectionId;	// G=0x3473097d; S=0x34730b65; @synthesize=_relayConnectionId
@property(copy) NSData *relayTokenAllocReq;	// G=0x347309ad; S=0x34730bb5; @synthesize=_relayTokenAllocReq
@property(copy) NSData *relayTransactionIdAlloc;	// G=0x34730995; S=0x34730b8d; @synthesize=_relayTransactionIdAlloc
@property(copy) NSNumber *relayType;	// G=0x34730965; S=0x34730b3d; @synthesize=_relayType
@property(copy) NSNumber *selfNATIP;	// G=0x347308ed; S=0x34730a75; @synthesize=_selfNATIP
@property(copy) NSNumber *selfNatType;	// G=0x347308d5; S=0x34730a4d; @synthesize=_selfNatType
@property(copy) NSData *selfPushToken;	// G=0x347308bd; S=0x34730a25; @synthesize=_selfPushToken
@property(copy) NSData *selfRelayIP;	// G=0x347309c5; S=0x34730bdd; @synthesize=_selfRelayIP
@property(copy) NSNumber *selfRelayPort;	// G=0x347309dd; S=0x34730c05; @synthesize=_selfRelayPort
- (id)bagKey;	// 0x34730129
- (void)dealloc;	// 0x34730391
- (void)handleResponseDictionary:(id)dictionary;	// 0x34730135
- (id)messageBody;	// 0x347304d5
// declared property getter: - (id)peerID;	// 0x34730905
// declared property getter: - (id)peerNATIP;	// 0x3473094d
// declared property getter: - (id)peerNatType;	// 0x34730935
// declared property getter: - (id)peerPushToken;	// 0x3473091d
// declared property getter: - (id)peerRelayIP;	// 0x347309f5
// declared property getter: - (id)peerRelayPort;	// 0x34730a0d
// declared property getter: - (id)relayConnectionId;	// 0x3473097d
// declared property getter: - (id)relayTokenAllocReq;	// 0x347309ad
// declared property getter: - (id)relayTransactionIdAlloc;	// 0x34730995
// declared property getter: - (id)relayType;	// 0x34730965
- (id)requiredKeys;	// 0x347302cd
// declared property getter: - (id)selfNATIP;	// 0x347308ed
// declared property getter: - (id)selfNatType;	// 0x347308d5
// declared property getter: - (id)selfPushToken;	// 0x347308bd
// declared property getter: - (id)selfRelayIP;	// 0x347309c5
// declared property getter: - (id)selfRelayPort;	// 0x347309dd
// declared property setter: - (void)setPeerID:(id)anId;	// 0x34730a9d
// declared property setter: - (void)setPeerNATIP:(id)natip;	// 0x34730b15
// declared property setter: - (void)setPeerNatType:(id)type;	// 0x34730aed
// declared property setter: - (void)setPeerPushToken:(id)token;	// 0x34730ac5
// declared property setter: - (void)setPeerRelayIP:(id)ip;	// 0x34730c2d
// declared property setter: - (void)setPeerRelayPort:(id)port;	// 0x34730c55
// declared property setter: - (void)setRelayConnectionId:(id)anId;	// 0x34730b65
// declared property setter: - (void)setRelayTokenAllocReq:(id)req;	// 0x34730bb5
// declared property setter: - (void)setRelayTransactionIdAlloc:(id)alloc;	// 0x34730b8d
// declared property setter: - (void)setRelayType:(id)type;	// 0x34730b3d
// declared property setter: - (void)setSelfNATIP:(id)natip;	// 0x34730a75
// declared property setter: - (void)setSelfNatType:(id)type;	// 0x34730a4d
// declared property setter: - (void)setSelfPushToken:(id)token;	// 0x34730a25
// declared property setter: - (void)setSelfRelayIP:(id)ip;	// 0x34730bdd
// declared property setter: - (void)setSelfRelayPort:(id)port;	// 0x34730c05
@end

