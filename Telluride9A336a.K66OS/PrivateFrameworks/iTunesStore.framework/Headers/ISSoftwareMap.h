/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "iTunesStore-Structs.h"

@class NSArray;

@interface ISSoftwareMap : NSObject {
	NSArray *_applications;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *applications;	// G=0x35ed23b5; 
+ (void)_startWatchingInstallationNotifications;	// 0x35ed2739
+ (id)applicationForBundleIdentifier:(id)bundleIdentifier;	// 0x35ed1d9d
+ (id)applicationForBundleIdentifier:(id)bundleIdentifier applicationType:(CFStringRef)type;	// 0x35ed1db9
+ (id)currentMap;	// 0x35ed1bbd
+ (BOOL)currentMapIsValid;	// 0x35ed1c01
+ (BOOL)haveApplicationsOfType:(CFStringRef)type;	// 0x35ed1a11
+ (void)invalidateCurrentMap;	// 0x35ed1c2d
+ (id)loadedMap;	// 0x35ed1c91
+ (void)setCurrentMap:(id)map;	// 0x35ed1d35
+ (void)startObservingNotifications;	// 0x35ed26ed
- (id)init;	// 0x35ed1925
- (void)_loadFromMobileInstallation;	// 0x35ed27e1
- (id)_newSoftwareUpdateDictionaryForApplication:(id)application;	// 0x35ed2879
- (id)_softwareUpdatesAccountsStringForApplications:(id)applications;	// 0x35ed2915
- (id)applicationForBundleIdentifier:(id)bundleIdentifier;	// 0x35ed21e5
- (id)applicationForItemIdentifier:(id)itemIdentifier;	// 0x35ed22cd
// declared property getter: - (id)applications;	// 0x35ed23b5
- (id)copySoftwareUpdatesPropertyList;	// 0x35ed23c5
- (id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)updatesContext;	// 0x35ed23d9
- (void)dealloc;	// 0x35ed19bd
@end

