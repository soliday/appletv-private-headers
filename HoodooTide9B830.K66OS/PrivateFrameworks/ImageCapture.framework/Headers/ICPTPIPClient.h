/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library


@interface ICPTPIPClient : NSObject {
@private
	id _clientProperties;	// 4 = 0x4
}
@property(assign) CFFileDescriptorRef fdref;	// G=0x3551bf89; S=0x3551bfa9; converted property
@property(assign) int pid;	// G=0x3551befd; S=0x3551bf1d; converted property
@property(assign) BOOL registered;	// G=0x3551bf41; S=0x3551bf65; converted property
@property(assign) int remoteAddress;	// G=0x3551c011; S=0x3551c031; converted property
@property(assign) CFMessagePortRef remotePort;	// G=0x3551bfcd; S=0x3551bfed; converted property
@property(assign) int serverFD;	// G=0x3551c055; S=0x3551c075; converted property
- (id)init;	// 0x3551c4c5
// converted property getter: - (CFFileDescriptorRef)fdref;	// 0x3551bf89
// converted property getter: - (int)pid;	// 0x3551befd
// converted property getter: - (BOOL)registered;	// 0x3551bf41
// converted property getter: - (int)remoteAddress;	// 0x3551c011
// converted property getter: - (CFMessagePortRef)remotePort;	// 0x3551bfcd
// converted property getter: - (int)serverFD;	// 0x3551c055
// converted property setter: - (void)setFdref:(CFFileDescriptorRef)fdref;	// 0x3551bfa9
// converted property setter: - (void)setPid:(int)pid;	// 0x3551bf1d
// converted property setter: - (void)setRegistered:(BOOL)registered;	// 0x3551bf65
// converted property setter: - (void)setRemoteAddress:(int)address;	// 0x3551c031
// converted property setter: - (void)setRemotePort:(CFMessagePortRef)port;	// 0x3551bfed
// converted property setter: - (void)setServerFD:(int)fd;	// 0x3551c075
@end

