/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSThread.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIStatusBarServerThread : NSThread {
@private
	NSMutableArray *_clientPorts;	// 52 = 0x34
	NSMutableArray *_publishers;	// 56 = 0x38
	XXStruct_LyCp7D _statusBarData;	// 60 = 0x3c
	XXStruct_LyCp7D _composedStatusBarData;	// 1924 = 0x784
	XXStruct_3CHHFD _overrides;	// 3788 = 0xecc
	CFDictionaryRef _doubleHeightStatusStrings;	// 5680 = 0x1630
	CFDictionaryRef _glowAnimationStates;	// 5684 = 0x1634
	BOOL _composedStatusBarDataValid;	// 5688 = 0x1638
}
- (void)_addClient:(unsigned)client;	// 0x308229ed
- (void)_addStatusBarItem:(int)item forPublisher:(id)publisher;	// 0x30822635
- (void)_addStyleOverrides:(int)overrides forPublisher:(id)publisher;	// 0x308226f1
- (void)_broadcastStatusBarDataWithActions:(int)actions;	// 0x305a31a5
- (void)_broadcastStyleOverrides;	// 0x30822d81
- (id)_doubleHeightStatusStringForStyle:(int)style;	// 0x30822e39
- (BOOL)_glowAnimationStateForStyle:(int)style;	// 0x30822e51
- (BOOL)_permanentizeStatusBarOverrideData;	// 0x30822729
- (void)_postDoubleHeightStatus:(char *)status forStyle:(int)style;	// 0x30822f55
- (void)_postGlowAnimationState:(BOOL)state forStyle:(int)style;	// 0x30822e75
- (void)_postStatusBarData:(XXStruct_LyCp7D *)data actions:(int)actions;	// 0x305a3165
- (void)_postStatusBarOverrideData:(XXStruct_3CHHFD *)data;	// 0x3082266d
- (id)_publisherForPort:(unsigned)port;	// 0x30822bfd
- (void)_removeClient:(CFMachPortRef)client;	// 0x30822b01
- (void)_removePublisher:(CFMachPortRef)publisher;	// 0x30822a91
- (void)_removeStatusBarItem:(int)item forPublisher:(id)publisher;	// 0x308225fd
- (void)_removeStyleOverrides:(int)overrides forPublisher:(id)publisher;	// 0x308226b9
- (XXStruct_LyCp7D *)_statusBarData;	// 0x305a3265
- (XXStruct_3CHHFD *)_statusBarOverrideData;	// 0x308223d5
- (int)_styleOverrides;	// 0x30822b41
- (void)main;	// 0x30822795
@end
