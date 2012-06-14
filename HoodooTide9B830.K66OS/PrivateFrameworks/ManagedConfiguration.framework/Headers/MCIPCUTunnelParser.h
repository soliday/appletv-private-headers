/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCTunnelParser.h"

@class NSString, NSMutableDictionary;

@interface MCIPCUTunnelParser : MCTunnelParser {
	NSMutableDictionary *_CSR;	// 4 = 0x4
	NSString *_hostIdentifier;	// 8 = 0x8
}
- (id)_commandGetEncryptionKey:(id)key;	// 0x33b2d6e5
- (id)_commandGetProfileList:(id)list;	// 0x33b2d96d
- (id)_commandHello:(id)hello;	// 0x33b2d6c5
- (id)_commandInstallProfile:(id)profile;	// 0x33b2e109
- (id)_commandRemoveProfile:(id)profile;	// 0x33b2de05
- (id)_commandSetCertificate:(id)certificate;	// 0x33b2e311
- (void)dealloc;	// 0x33b2e4fd
- (id)processRequest:(id)request;	// 0x33b2e55d
@end

