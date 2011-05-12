/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"

@class NSData, NSString, NSNumber;

@interface FTRelayCancelMessage : FTMessage {
	NSString *_peerID;	// 24 = 0x18
	NSData *_peerPushToken;	// 28 = 0x1c
	NSNumber *_relayType;	// 32 = 0x20
	NSNumber *_reason;	// 36 = 0x24
	NSData *_relayConnectionID;	// 40 = 0x28
	NSData *_selfRelayIP;	// 44 = 0x2c
	NSNumber *_selfRelayPort;	// 48 = 0x30
	NSData *_peerRelayIP;	// 52 = 0x34
	NSNumber *_peerRelayPort;	// 56 = 0x38
}
@property(copy) NSString *peerID;	// G=0x31c170c5; S=0x31c1719d; @synthesize=_peerID
@property(copy) NSData *peerPushToken;	// G=0x31c170dd; S=0x31c171c5; @synthesize=_peerPushToken
@property(copy) NSData *peerRelayIP;	// G=0x31c1716d; S=0x31c172b5; @synthesize=_peerRelayIP
@property(copy) NSNumber *peerRelayPort;	// G=0x31c17185; S=0x31c172dd; @synthesize=_peerRelayPort
@property(copy) NSNumber *reason;	// G=0x31c1710d; S=0x31c17215; @synthesize=_reason
@property(copy) NSData *relayConnectionID;	// G=0x31c17125; S=0x31c1723d; @synthesize=_relayConnectionID
@property(copy) NSNumber *relayType;	// G=0x31c170f5; S=0x31c171ed; @synthesize=_relayType
@property(copy) NSData *selfRelayIP;	// G=0x31c1713d; S=0x31c17265; @synthesize=_selfRelayIP
@property(copy) NSNumber *selfRelayPort;	// G=0x31c17155; S=0x31c1728d; @synthesize=_selfRelayPort
- (id)bagKey;	// 0x31c169c9
- (void)dealloc;	// 0x31c16ab9
- (id)messageBody;	// 0x31c16b91
// declared property getter: - (id)peerID;	// 0x31c170c5
// declared property getter: - (id)peerPushToken;	// 0x31c170dd
// declared property getter: - (id)peerRelayIP;	// 0x31c1716d
// declared property getter: - (id)peerRelayPort;	// 0x31c17185
// declared property getter: - (id)reason;	// 0x31c1710d
// declared property getter: - (id)relayConnectionID;	// 0x31c17125
// declared property getter: - (id)relayType;	// 0x31c170f5
- (id)requiredKeys;	// 0x31c169d5
// declared property getter: - (id)selfRelayIP;	// 0x31c1713d
// declared property getter: - (id)selfRelayPort;	// 0x31c17155
// declared property setter: - (void)setPeerID:(id)anId;	// 0x31c1719d
// declared property setter: - (void)setPeerPushToken:(id)token;	// 0x31c171c5
// declared property setter: - (void)setPeerRelayIP:(id)ip;	// 0x31c172b5
// declared property setter: - (void)setPeerRelayPort:(id)port;	// 0x31c172dd
// declared property setter: - (void)setReason:(id)reason;	// 0x31c17215
// declared property setter: - (void)setRelayConnectionID:(id)anId;	// 0x31c1723d
// declared property setter: - (void)setRelayType:(id)type;	// 0x31c171ed
// declared property setter: - (void)setSelfRelayIP:(id)ip;	// 0x31c17265
// declared property setter: - (void)setSelfRelayPort:(id)port;	// 0x31c1728d
@end
