/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SettingsNetworkSpeedTestViewController.h"
#import "BRSecureResource.h"

@class NSMutableDictionary, SettingsNetworkSpeedTestView;

@interface SettingsNetworkSpeedTestViewController : XXUnknownSuperclass <BRSecureResource> {
	SettingsNetworkSpeedTestView *_networkSpeedTestView;	// 64 = 0x40
	int _speedTestDialogLevel;	// 68 = 0x44
	int _userExpectedRate;	// 72 = 0x48
	int _currentDownloadTestNumber;	// 76 = 0x4c
	NSMutableDictionary *_userInput;	// 80 = 0x50
}
- (id)init;	// 0x7ca1
- (void)dealloc;	// 0x7c1d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x79a5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x7ae5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x730d
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x7be9
- (void)wasPopped;	// 0x7b85
@end

@interface SettingsNetworkSpeedTestViewController (CallbackHandlers)
- (void)_downloadsComplete:(id)complete;	// 0x73a5
- (void)_networkLogErrorNotification:(id)notification;	// 0x8465
- (void)_networkLogUpdateProgressUpdate:(id)update;	// 0x7fe5
- (void)_testCanceled:(id)canceled;	// 0x735d
- (void)_uploadsComplete:(id)complete;	// 0x7381
@end

@interface SettingsNetworkSpeedTestViewController (Private)
- (int)_bandwidthIntValueForRow:(long)row;	// 0x7335
- (id)_controlNameForCurrentlyExperiencingSlowDownloadScreenAtRow:(long)row;	// 0x7f91
- (id)_controlNameForInternetConnectionExpectedSpeedScreenAtRow:(long)row;	// 0x7449
- (id)_controlNameForLegalDisclosureScreenAtRow:(long)row;	// 0x7fc5
- (id)_controlNameForResultsScreenAtRow:(long)row;	// 0x7411
- (void)_postStoreConnectionErrorMessage;	// 0x78e5
- (void)_startDownloads;	// 0x74c5
- (void)_updateCurrentScreen;	// 0x751d
@end
