/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPServerObject : NSObject {
@private
	int _clientPID;	// 4 = 0x4
	XXStruct_kUSYWB *_clientAuditToken;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) XXStruct_kUSYWB *clientAuditToken;	// G=0x3468cc11; @synthesize=_clientAuditToken
@property(readonly, assign, nonatomic) int clientPID;	// G=0x3468cc01; @synthesize=_clientPID
+ (id)_center;	// 0x3468c5d5
- (id)init;	// 0x3468c591
- (id)_forwardMessage:(id)message userInfo:(id)info auditToken:(XXStruct_kUSYWB *)token;	// 0x3468c8f5
- (void)_registerNotificationsForSelectors;	// 0x3468c7a9
// declared property getter: - (XXStruct_kUSYWB *)clientAuditToken;	// 0x3468cc11
// declared property getter: - (int)clientPID;	// 0x3468cc01
@end

