/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSDate, NSString;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface ATVFlickrProvider : NSObject <BRProvider> {
@private
	NSMutableArray *_persistentAccounts;	// 4 = 0x4
	id<BRControlFactory> _controlFactory;	// 8 = 0x8
	NSDate *_lastUpdateDate;	// 12 = 0xc
	BOOL _updatePending;	// 16 = 0x10
	NSString *_uniqueID;	// 20 = 0x14
}
@property(readonly, retain) NSString *uniqueID;	// G=0x36572da1; converted property
+ (id)providerOfPersistentAccounts;	// 0x3657281d
- (id)init;	// 0x36572855
- (BOOL)_accountIconLoadedForAccount:(id)account updateData:(id)data;	// 0x36573ee9
- (void)_accountToRemove:(id)remove;	// 0x36573445
- (id)_accountWithName:(id)name;	// 0x365748e9
- (id)_assetWithIdentifier:(id)identifier parentCollection:(id)collection;	// 0x36574869
- (BOOL)_assetsLoadedForCollection:(id)collection updateData:(id)data;	// 0x365740f9
- (id)_cachedAccountIconForIconPath:(id)iconPath;	// 0x36574765
- (id)_collectionWithIdentifier:(id)identifier withParentAccount:(id)parentAccount;	// 0x365747e9
- (BOOL)_contactsLoadedForAccount:(id)account updateData:(id)data;	// 0x36573f9d
- (id)_data;	// 0x365747d9
- (BOOL)_handlesObject:(id)object;	// 0x36573975
- (BOOL)_imageLoadedForAsset:(id)asset updateData:(id)data;	// 0x36574605
- (id)_initForPersistentAccounts;	// 0x36572db5
- (void)_listenerUpdate:(id)update;	// 0x365735c5
- (id)_loadAccountsFromPersistentAccounts;	// 0x36572f21
- (BOOL)_mediaLoadedForAccount:(id)account updateData:(id)data;	// 0x36573979
- (void)_newAccountToAdd:(id)add;	// 0x36573159
- (id)_persistentAccounts;	// 0x36572ec9
- (void)_postUpdateNotification:(id)notification;	// 0x3657393d
- (void)_processChangeToObject:(id)object;	// 0x36573615
- (void)_sendUpdateNotification;	// 0x365737d9
- (void)_sendUpdateNotificationAfterDelay;	// 0x365737a5
- (id)accessibilityLabel;	// 0x36572db1
- (BOOL)accountIsPersistent:(id)persistent;	// 0x36572b19
- (id)controlFactory;	// 0x36572a19
- (id)dataAtIndex:(long)index;	// 0x36572a51
- (long)dataCount;	// 0x36572a29
- (void)dealloc;	// 0x36572935
- (void)handleDataUpdate:(id)update updateData:(id)data;	// 0x36572bb1
- (id)hashForDataAtIndex:(long)index;	// 0x36572abd
// converted property getter: - (id)uniqueID;	// 0x36572da1
@end

