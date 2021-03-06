/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRController.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRTextControl, NSMutableArray, BRImageControl, NSTimer;

@interface ATVNewFeaturesController : BRController {
@private
	BOOL _iTunesStoreInitialized;	// 60 = 0x3c
	BRImageControl *_topDividerControl;	// 64 = 0x40
	BRImageControl *_bottomDividerControl;	// 68 = 0x44
	BRImageControl *_continueButtonControl;	// 72 = 0x48
	BRTextControl *_continueTextControl;	// 76 = 0x4c
	BRTextControl *_whatsNewControl;	// 80 = 0x50
	BRTextControl *_moreInfoURLControl;	// 84 = 0x54
	NSMutableArray *_featureControls;	// 88 = 0x58
	NSTimer *_storeWaitTimer;	// 92 = 0x5c
}
- (id)init;	// 0x306f8a95
- (BOOL)_anyFeaturesEnabled;	// 0x306f9009
- (CGRect)_getFrameForFeatureAtIndex:(int)index;	// 0x306f9909
- (void)_musicStoreNotification:(id)notification;	// 0x306f97ad
- (void)_storeWaitTimerFired:(id)fired;	// 0x306f850d
- (id)accessibilityLabel;	// 0x306f95c1
- (BOOL)brEventAction:(id)action;	// 0x306f86cd
- (void)dealloc;	// 0x306f8759
- (BOOL)isAccessibilityElement;	// 0x306f8489
- (void)layoutSubcontrols;	// 0x306f913d
- (void)wasPushed;	// 0x306f8541
@end

