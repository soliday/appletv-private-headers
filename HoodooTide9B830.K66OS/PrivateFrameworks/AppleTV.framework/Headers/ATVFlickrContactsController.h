/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaMenuController.h"

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrContactsController : BRMediaMenuController {
@private
	ATVInternetPhotosAccount *_account;	// 160 = 0xa0
	BOOL _isScreenSaverMenu;	// 164 = 0xa4
}
+ (id)menuControllerForAccount:(id)account;	// 0x328b002d
+ (id)screenSaverMenuControllerForAccount:(id)account;	// 0x328b0075
- (id)initWithAccount:(id)account;	// 0x328b00c1
- (id)initWithAccount:(id)account forScreenSaver:(BOOL)screenSaver;	// 0x328b00d5
- (void)_handleAccountSelection:(id)selection;	// 0x328b04e1
- (void)_handleReturnToFlickrSelection:(id)flickrSelection;	// 0x328b0445
- (void)_providerUpdated:(id)updated;	// 0x328b0685
- (void)dealloc;	// 0x328b03c5
- (BOOL)isNetworkDependent;	// 0x328b0441
@end

