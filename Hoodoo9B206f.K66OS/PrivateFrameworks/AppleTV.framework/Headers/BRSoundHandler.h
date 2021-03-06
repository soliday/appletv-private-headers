/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface BRSoundHandler : BRSingleton {
@private
	BOOL _isSoundPrefEnabled;	// 4 = 0x4
	BOOL _soundSuppressed;	// 5 = 0x5
	unsigned long _soundIDs[23];	// 8 = 0x8
}
+ (void)playSound:(int)sound;	// 0x36770f41
+ (void)reloadSoundPreference;	// 0x36770f9d
+ (void)setSingleton:(id)singleton;	// 0x36770f31
+ (void)setSoundSuppressed:(BOOL)suppressed;	// 0x36770f71
+ (id)singleton;	// 0x36770f21
- (id)init;	// 0x36770fc5
- (unsigned long)_actionIDForAlertSound:(int)alertSound;	// 0x3677110d
- (BOOL)_allowedToPlaySound;	// 0x3677119d
- (void)_playSound:(int)sound;	// 0x367711d9
- (void)_reloadSoundPreference;	// 0x36771219
- (void)_setSoundSuppressed:(BOOL)suppressed;	// 0x367711c9
- (void)dealloc;	// 0x36771021
@end

