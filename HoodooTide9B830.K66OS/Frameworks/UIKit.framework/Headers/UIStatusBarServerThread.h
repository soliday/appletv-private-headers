/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSThread.h> // Unknown library
#import "UIKit-Structs.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIStatusBarServerThread : NSThread {
@private
	NSMutableArray *_clientPorts;	// 52 = 0x34
	NSMutableArray *_publishers;	// 56 = 0x38
	XXStruct_rfflIA _statusBarData;	// 60 = 0x3c
	XXStruct_rfflIA _composedStatusBarData;	// 2124 = 0x84c
	XXStruct_B8mWcB _overrides;	// 4188 = 0x105c
	CFDictionaryRef _doubleHeightStatusStrings;	// 6280 = 0x1888
	CFDictionaryRef _glowAnimationStates;	// 6284 = 0x188c
	NSMutableDictionary *_glowAnimationEndTimes;	// 6288 = 0x1890
	BOOL _composedStatusBarDataValid;	// 6292 = 0x1894
}
- (void)_addClient:(unsigned)client;	// 0x3032914d
- (void)_addStatusBarItem:(int)item forPublisher:(id)publisher;	// 0x30329c0d
- (void)_addStyleOverrides:(int)overrides forPublisher:(id)publisher;	// 0x30329619
- (void)_broadcastStatusBarDataWithActions:(int)actions;	// 0x3001f1c1
- (void)_broadcastStyleOverrides;	// 0x3032956d
- (id)_doubleHeightStatusStringForStyle:(int)style;	// 0x30329a19
- (double)_glowAnimationEndTimeForStyle:(int)style;	// 0x3032986d
- (BOOL)_glowAnimationStateForStyle:(int)style;	// 0x303298dd
- (BOOL)_permanentizeStatusBarOverrideData;	// 0x30329b99
- (void)_postDoubleHeightStatus:(char *)status forStyle:(int)style;	// 0x30329a2d
- (void)_postGlowAnimationState:(BOOL)state forStyle:(int)style;	// 0x3032993d
- (void)_postStatusBarData:(XXStruct_rfflIA *)data actions:(int)actions;	// 0x3001f179
- (void)_postStatusBarOverrideData:(XXStruct_B8mWcB *)data;	// 0x30329b41
- (id)_publisherForPort:(unsigned)port;	// 0x30329261
- (void)_removeAnimationEndTimesForOverrides:(int)overrides;	// 0x303297d5
- (void)_removeClient:(CFMachPortRef)client;	// 0x30329219
- (void)_removePublisher:(CFMachPortRef)publisher;	// 0x30329431
- (void)_removeStatusBarItem:(int)item forPublisher:(id)publisher;	// 0x30329c51
- (void)_removeStyleOverrides:(int)overrides forPublisher:(id)publisher;	// 0x3032977d
- (void)_setAnimationEndTimesForOverrides:(int)overrides;	// 0x30329671
- (XXStruct_rfflIA *)_statusBarData;	// 0x3001f27d
- (XXStruct_B8mWcB *)_statusBarOverrideData;	// 0x303294b1
- (int)_styleOverrides;	// 0x303294c1
- (void)main;	// 0x30328e9d
@end

