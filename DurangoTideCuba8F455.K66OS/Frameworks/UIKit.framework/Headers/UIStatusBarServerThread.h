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
- (void)_addClient:(unsigned)client;	// 0x3030b9ed
- (void)_addStatusBarItem:(int)item forPublisher:(id)publisher;	// 0x3030b635
- (void)_addStyleOverrides:(int)overrides forPublisher:(id)publisher;	// 0x3030b6f1
- (void)_broadcastStatusBarDataWithActions:(int)actions;	// 0x3008c1a5
- (void)_broadcastStyleOverrides;	// 0x3030bd81
- (id)_doubleHeightStatusStringForStyle:(int)style;	// 0x3030be39
- (BOOL)_glowAnimationStateForStyle:(int)style;	// 0x3030be51
- (BOOL)_permanentizeStatusBarOverrideData;	// 0x3030b729
- (void)_postDoubleHeightStatus:(char *)status forStyle:(int)style;	// 0x3030bf55
- (void)_postGlowAnimationState:(BOOL)state forStyle:(int)style;	// 0x3030be75
- (void)_postStatusBarData:(XXStruct_LyCp7D *)data actions:(int)actions;	// 0x3008c165
- (void)_postStatusBarOverrideData:(XXStruct_3CHHFD *)data;	// 0x3030b66d
- (id)_publisherForPort:(unsigned)port;	// 0x3030bbfd
- (void)_removeClient:(CFMachPortRef)client;	// 0x3030bb01
- (void)_removePublisher:(CFMachPortRef)publisher;	// 0x3030ba91
- (void)_removeStatusBarItem:(int)item forPublisher:(id)publisher;	// 0x3030b5fd
- (void)_removeStyleOverrides:(int)overrides forPublisher:(id)publisher;	// 0x3030b6b9
- (XXStruct_LyCp7D *)_statusBarData;	// 0x3008c265
- (XXStruct_3CHHFD *)_statusBarOverrideData;	// 0x3030b3d5
- (int)_styleOverrides;	// 0x3030bb41
- (void)main;	// 0x3030b795
@end

