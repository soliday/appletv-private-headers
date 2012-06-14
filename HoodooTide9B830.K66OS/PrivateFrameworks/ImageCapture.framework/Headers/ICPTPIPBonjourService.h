/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library


@interface ICPTPIPBonjourService : NSObject {
	id _bonjourServiceProperties;	// 4 = 0x4
}
@property(assign) id delegate;	// G=0x3551c099; S=0x3551c0b9; converted property
- (id)initWithHostPort:(unsigned long)hostPort hostName:(id)name hostGUID:(id)guid bonjourServiceType:(id)type bonjourTXTRecords:(id)records;	// 0x3551dd65
- (void)addClient:(id)client;	// 0x3551c8d1
- (id)clientForAddress:(CFDataRef)address;	// 0x3551ce3d
- (id)clientForPID:(unsigned long)pid;	// 0x3551cf59
- (void)clientTerminated:(id)terminated;	// 0x3551c161
- (BOOL)createAndPublishNetService;	// 0x3551da55
- (int)createPTPDIPInstanceWithAddress:(CFDataRef)address fileDescriptor:(int)descriptor;	// 0x3551d061
- (BOOL)createSocket;	// 0x3551d549
- (void)dealloc;	// 0x3551c529
// converted property getter: - (id)delegate;	// 0x3551c099
- (int)destroyPTPDIPInstance:(id)instance;	// 0x3551cab1
- (void)disconnectClient:(id)client;	// 0x3551bef9
- (void)dispatchConnectionFromSocket:(int)socket withAddress:(CFDataRef)address;	// 0x3551d755
- (void)handleNetServiceError:(XXStruct_K5nmsA *)error;	// 0x3551c599
- (int)messagePTPDIPInstance:(id)instance withSocket:(int)socket;	// 0x3551cc29
- (int)numClients;	// 0x3551c699
- (CFNetServiceRef)publishedService;	// 0x3551c115
- (void)releaseNetService;	// 0x3551d9b5
- (void)releaseSocket;	// 0x3551d4e9
- (void)removeClient:(id)client;	// 0x3551c6f1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3551c0b9
- (BOOL)startService;	// 0x3551dbc1
- (void)unlockDeviceForClient:(id)client;	// 0x3551bef5
@end

