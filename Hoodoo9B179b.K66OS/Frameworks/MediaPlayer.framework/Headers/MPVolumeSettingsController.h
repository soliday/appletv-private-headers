/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "UITwoSidedAlertControllerDelegate.h"
#import <UITwoSidedAlertController.h> // Unknown library

@class NSString;

@interface MPVolumeSettingsController : UITwoSidedAlertController <UITwoSidedAlertControllerDelegate> {
	NSString *_audioCategory;	// 20 = 0x14
}
- (id)initWithAudioCategory:(id)audioCategory;	// 0x3097900d
- (void)audioRoutingPicker:(id)picker didSelectRouteAtIndex:(int)index;	// 0x3097927d
- (id)createBackAlert;	// 0x30979209
- (id)createFrontAlert;	// 0x309790c1
- (void)dealloc;	// 0x30979075
- (void)twoSidedAlertControllerDidDismiss:(id)twoSidedAlertController;	// 0x30979241
@end

