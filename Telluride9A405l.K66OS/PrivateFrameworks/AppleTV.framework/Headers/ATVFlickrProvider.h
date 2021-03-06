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
@property(readonly, retain) NSString *uniqueID;	// G=0x35cd830d; converted property
+ (id)providerOfPersistentAccounts;	// 0x35cd7d89
- (id)init;	// 0x35cd7dc1
- (BOOL)_accountIconLoadedForAccount:(id)account updateData:(id)data;	// 0x35cd945d
- (void)_accountToRemove:(id)remove;	// 0x35cd89b5
- (id)_accountWithName:(id)name;	// 0x35cd9e5d
- (id)_assetWithIdentifier:(id)identifier parentCollection:(id)collection;	// 0x35cd9ddd
- (BOOL)_assetsLoadedForCollection:(id)collection updateData:(id)data;	// 0x35cd966d
- (id)_cachedAccountIconForIconPath:(id)iconPath;	// 0x35cd9cd9
- (id)_collectionWithIdentifier:(id)identifier withParentAccount:(id)parentAccount;	// 0x35cd9d5d
- (BOOL)_contactsLoadedForAccount:(id)account updateData:(id)data;	// 0x35cd9511
- (id)_data;	// 0x35cd9d4d
- (BOOL)_handlesObject:(id)object;	// 0x35cd8ee9
- (BOOL)_imageLoadedForAsset:(id)asset updateData:(id)data;	// 0x35cd9b79
- (id)_initForPersistentAccounts;	// 0x35cd8321
- (void)_listenerUpdate:(id)update;	// 0x35cd8b39
- (id)_loadAccountsFromPersistentAccounts;	// 0x35cd848d
- (BOOL)_mediaLoadedForAccount:(id)account updateData:(id)data;	// 0x35cd8eed
- (void)_newAccountToAdd:(id)add;	// 0x35cd86c5
- (id)_persistentAccounts;	// 0x35cd8435
- (void)_postUpdateNotification:(id)notification;	// 0x35cd8eb1
- (void)_processChangeToObject:(id)object;	// 0x35cd8b89
- (void)_sendUpdateNotification;	// 0x35cd8d4d
- (void)_sendUpdateNotificationAfterDelay;	// 0x35cd8d19
- (id)accessibilityLabel;	// 0x35cd831d
- (BOOL)accountIsPersistent:(id)persistent;	// 0x35cd8085
- (id)controlFactory;	// 0x35cd7f85
- (id)dataAtIndex:(long)index;	// 0x35cd7fbd
- (long)dataCount;	// 0x35cd7f95
- (void)dealloc;	// 0x35cd7ea1
- (void)handleDataUpdate:(id)update updateData:(id)data;	// 0x35cd811d
- (id)hashForDataAtIndex:(long)index;	// 0x35cd8029
// converted property getter: - (id)uniqueID;	// 0x35cd830d
@end

