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
+ (id)menuControllerForAccount:(id)account;	// 0x3016de11
+ (id)screenSaverMenuControllerForAccount:(id)account;	// 0x3016de59
- (id)initWithAccount:(id)account;	// 0x3016dea5
- (id)initWithAccount:(id)account forScreenSaver:(BOOL)screenSaver;	// 0x3016deb9
- (void)_handleAccountSelection:(id)selection;	// 0x3016e2c5
- (void)_handleReturnToFlickrSelection:(id)flickrSelection;	// 0x3016e229
- (void)_providerUpdated:(id)updated;	// 0x3016e469
- (void)dealloc;	// 0x3016e1a9
- (BOOL)isNetworkDependent;	// 0x3016e225
@end
