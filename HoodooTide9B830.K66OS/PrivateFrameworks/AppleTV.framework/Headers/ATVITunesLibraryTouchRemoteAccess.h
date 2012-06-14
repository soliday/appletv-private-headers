/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"
#import "ATVITunesTouchRemoteManager.h"


@interface ATVITunesLibraryTouchRemoteAccess : BRSingleton <ATVITunesTouchRemoteManager> {
@private
	id<ATVITunesTouchRemoteManager> _delegate;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x328f1029
+ (id)singleton;	// 0x328f1019
- (void)dealloc;	// 0x328f1039
- (void)pairWithTouchRemote:(id)touchRemote withPIN:(id)pin;	// 0x328f1129
- (id)pairableTouchRemotes;	// 0x328f1109
- (id)pairedTouchRemotes;	// 0x328f10c5
- (BOOL)removePairedTouchRemote:(id)remote;	// 0x328f10e5
- (unsigned long)sendGeneralPurposeMessage:(id)message;	// 0x328f1149
- (void)setITunesTouchRemoteManagerDelegate:(id)delegate;	// 0x328f1085
@end

