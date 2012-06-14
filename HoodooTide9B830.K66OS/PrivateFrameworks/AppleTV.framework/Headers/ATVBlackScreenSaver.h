/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "ATVScreenSaverPluginProtocol.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface ATVBlackScreenSaver : NSObject <ATVScreenSaverPluginProtocol> {
@private
	BRControl *_blackShroudOfDeath;	// 4 = 0x4
}
- (id)init;	// 0x328f5ea9
- (void)dealloc;	// 0x328f5f35
- (id)screenSaverControl;	// 0x328f5f81
- (void)setScreenSaverAutoFired:(BOOL)fired;	// 0x328f5f91
- (BOOL)usesVideoPlayback;	// 0x328f5f95
@end

