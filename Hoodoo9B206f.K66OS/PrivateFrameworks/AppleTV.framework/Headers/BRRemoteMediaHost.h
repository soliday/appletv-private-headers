/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaHost.h"


__attribute__((visibility("hidden")))
@interface BRRemoteMediaHost : BRMediaHost {
@private
	BOOL _hostFound;	// 44 = 0x2c
	BOOL _hostValid;	// 45 = 0x2d
}
@property(assign) BOOL hostFound;	// G=0x36739f9d; S=0x36739fad; converted property
@property(assign) BOOL hostValid;	// G=0x36739fbd; S=0x36739fcd; converted property
// converted property getter: - (BOOL)hostFound;	// 0x36739f9d
- (id)hostID;	// 0x36739f59
// converted property getter: - (BOOL)hostValid;	// 0x36739fbd
// converted property setter: - (void)setHostFound:(BOOL)found;	// 0x36739fad
// converted property setter: - (void)setHostValid:(BOOL)valid;	// 0x36739fcd
@end

