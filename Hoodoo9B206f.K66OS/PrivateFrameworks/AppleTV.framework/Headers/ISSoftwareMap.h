/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ISSoftwareMap : NSObject {
@private
	NSArray *_applications;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *applications;	// G=0x36823b1d; 
+ (void)_softwareMappingChangedNotification:(id)notification;	// 0x36823b91
+ (void)_startWatchingInstallationNotifications;	// 0x36823bc5
+ (id)applicationForBundleIdentifier:(id)bundleIdentifier;	// 0x3682388d
+ (id)applicationForBundleIdentifier:(id)bundleIdentifier applicationType:(CFStringRef)type;	// 0x368238a9
+ (id)currentMap;	// 0x368236ad
+ (BOOL)currentMapIsValid;	// 0x368236f1
+ (BOOL)haveApplicationsOfType:(CFStringRef)type;	// 0x368236a9
+ (void)invalidateCurrentMap;	// 0x3682371d
+ (id)loadedMap;	// 0x36823781
+ (void)setCurrentMap:(id)map;	// 0x36823825
+ (void)startObservingNotifications;	// 0x36823b45
- (id)init;	// 0x368235bd
- (void)_loadFromVendorBags;	// 0x36823c21
- (id)applicationForBundleIdentifier:(id)bundleIdentifier;	// 0x3682394d
- (id)applicationForItemIdentifier:(id)itemIdentifier;	// 0x36823a35
// declared property getter: - (id)applications;	// 0x36823b1d
- (id)copySoftwareUpdatesPropertyList;	// 0x36823b2d
- (id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)updatesContext;	// 0x36823b41
- (void)dealloc;	// 0x36823655
@end

