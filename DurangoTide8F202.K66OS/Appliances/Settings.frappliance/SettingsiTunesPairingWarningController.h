/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SettingsiTunesPairingWarningController.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SettingsiTunesPairingWarningController : XXUnknownSuperclass {
	int _type;	// 64 = 0x40
}
+ (id)warningControllerForChangingSyncHost;	// 0x194cd
+ (id)warningControllerForTurningOffSync;	// 0x19509
- (id)init;	// 0x19239
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x192d1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1942d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x19235
@end

@interface SettingsiTunesPairingWarningController (Private)
- (id)_initWithType:(int)type;	// 0x19545
- (void)_syncStatusChangedNotification;	// 0x1924d
@end

