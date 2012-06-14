/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BulletinBoard-Structs.h"
#import <NSObject.h> // Unknown library
#import "XPCProxyTarget.h"

@class NSMutableDictionary, NSMutableArray, NSMutableSet, NSDate;
@protocol BBPushDataProviderFactory;

@interface BBServer : NSObject <XPCProxyTarget> {
@private
	NSMutableSet *_observers;	// 4 = 0x4
	NSMutableSet *_listObservers;	// 8 = 0x8
	NSMutableSet *_modalAlertObservers;	// 12 = 0xc
	NSMutableSet *_bannerObservers;	// 16 = 0x10
	NSMutableSet *_lockscreenObservers;	// 20 = 0x14
	NSMutableSet *_soundObservers;	// 24 = 0x18
	NSMutableSet *_settingsObservers;	// 28 = 0x1c
	NSMutableSet *_settingsGateways;	// 32 = 0x20
	NSMutableArray *_sortedSectionIDs;	// 36 = 0x24
	unsigned _sectionOrderRule;	// 40 = 0x28
	NSMutableDictionary *_sectionInfoByID;	// 44 = 0x2c
	NSMutableDictionary *_sectionParametersByID;	// 48 = 0x30
	NSMutableDictionary *_sectionSortDescriptorsByID;	// 52 = 0x34
	NSMutableDictionary *_bulletinsByID;	// 56 = 0x38
	NSMutableDictionary *_bulletinIDsBySectionID;	// 60 = 0x3c
	NSMutableDictionary *_transactionsByObserver;	// 64 = 0x40
	NSMutableDictionary *_listBulletinIDsBySectionID;	// 68 = 0x44
	NSMutableArray *_interruptingBulletinIDs;	// 72 = 0x48
	NSMutableArray *_expiringBulletinIDs;	// 76 = 0x4c
	dispatch_source_s *_timer;	// 80 = 0x50
	NSDate *_nextScheduledFireDate;	// 84 = 0x54
	NSMutableDictionary *_dataProvidersBySection;	// 88 = 0x58
	NSMutableSet *_pushDataProviders;	// 92 = 0x5c
	NSMutableDictionary *_clearedSections;	// 96 = 0x60
	id<BBPushDataProviderFactory> _pushDataProviderFactory;	// 100 = 0x64
	int _demo_lockscreen_token;	// 104 = 0x68
@protected
	NSMutableDictionary *_bulletinRequestsByID;	// 108 = 0x6c
}
+ (void)initialize;	// 0x36d1dd1d
- (id)init;	// 0x36d1dd21
- (void)_addBulletin:(id)bulletin;	// 0x36d1f9dd
- (void)_addDataProvider:(id)provider sortSectionsNow:(BOOL)now;	// 0x36d23f91
- (void)_addInterruptingBulletin:(id)bulletin;	// 0x36d215a1
- (void)_addObserverWithConnection:(xpc_connection_s *)connection;	// 0x36d1ed09
- (void)_addPushDataProvider:(id)provider sortNowAndNotifyObservers:(BOOL)observers;	// 0x36d24241
- (void)_addSettingsGatewayWithConnection:(xpc_connection_s *)connection;	// 0x36d1f161
- (id)_allBulletinsForSectionID:(id)sectionID;	// 0x36d20291
- (void)_assignIDToBulletinRequest:(id)bulletinRequest;	// 0x36d2a965
- (void)_assignIDToBulletinRequest:(id)bulletinRequest checkAgainstBulletins:(id)bulletins;	// 0x36d2a9c1
- (id)_bulletinIDsInSortedArray:(id)sortedArray withDateForKey:(id)key beforeCutoff:(id)cutoff;	// 0x36d210a5
- (id)_bulletinRequestsForIDs:(id)ids;	// 0x36d2a869
- (id)_bulletinsForIDs:(id)ids;	// 0x36d2016d
- (void)_clearBulletinIDIfPossible:(id)possible rescheduleExpirationTimer:(BOOL)timer;	// 0x36d20879
- (void)_clearSection:(id)section;	// 0x36d1fcad
- (void)_clearTimer;	// 0x36d20c11
- (id)_clearedInfoForSectionID:(id)sectionID;	// 0x36d23759
- (id)_clearedSectionsPath;	// 0x36d24dc9
- (id)_copyDefaultEnabledWeeAppIDs;	// 0x36d2495d
- (unsigned)_countForSectionID:(id)sectionID;	// 0x36d2371d
- (id)_currentTransactionForObserver:(id)observer bulletinID:(id)anId;	// 0x36d1ffd5
- (id)_dataDirectoryPath;	// 0x36d24d3d
- (id)_defaultSectionInfoForDataProvider:(id)dataProvider;	// 0x36d253d1
- (void)_ensureDataDirectoryExists;	// 0x36d24d59
- (void)_expireBulletins;	// 0x36d21261
- (void)_expireBulletinsAndInterruptionsAndRescheduleTimerIfNecessary;	// 0x36d20f39
- (void)_expireInterruptions;	// 0x36d217f5
- (unsigned)_feedsForBulletin:(id)bulletin destinations:(int)destinations;	// 0x36d1fedd
- (unsigned)_filtersForSectionID:(id)sectionID;	// 0x36d23719
- (void)_handleSignificantTimeChange;	// 0x36d20c01
- (void)_handleSystemSleep;	// 0x36d20be1
- (void)_handleSystemWake;	// 0x36d20bf1
- (unsigned)_incrementedTransactionIDForObserver:(id)observer bulletinID:(id)anId;	// 0x36d200a9
- (unsigned)_indexForNewDate:(id)newDate inBulletinIDArray:(id)bulletinIDArray sortedAscendingByDateForKey:(id)key;	// 0x36d211c9
- (id)_interruptingBulletinIDsForFeeds:(unsigned)feeds;	// 0x36d219f1
- (id)_listBulletinsForSectionID:(id)sectionID;	// 0x36d20261
- (void)_loadAllDataProviderPluginBundles;	// 0x36d237cd
- (void)_loadAllWeeAppSections;	// 0x36d249f5
- (void)_loadClearedSections;	// 0x36d24dfd
- (void)_loadDataProviderPluginBundle:(id)bundle;	// 0x36d23bc5
- (void)_loadDataProvidersAndSettings;	// 0x36d22fa1
- (void)_loadSavedSectionInfo;	// 0x36d250bd
- (void)_modifyBulletin:(id)bulletin;	// 0x36d1fabd
- (id)_nextExpireBulletinsDate;	// 0x36d20e29
- (id)_nextExpireInterruptionsDate;	// 0x36d20ea1
- (void)_noteUserEnabledPushDeliveryForDataProvider:(id)dataProvider;	// 0x36d2432d
- (id)_observersForFeeds:(unsigned)feeds;	// 0x36d1f4a5
- (void)_publishBulletinRequest:(id)request forDataProvider:(id)dataProvider forDestinations:(int)destinations;	// 0x36d236dd
- (void)_publishBulletinsForAllDataProviders;	// 0x36d23139
- (void)_readSavedSectionOrder:(id *)order andRule:(unsigned *)rule;	// 0x36d24f6d
- (id)_removalsForListSection:(id)listSection addition:(id)addition keepAddition:(BOOL *)addition3;	// 0x36d2aac5
- (void)_removeBulletin:(id)bulletin;	// 0x36d1fc99
- (void)_removeBulletin:(id)bulletin rescheduleTimerIfAffected:(BOOL)affected;	// 0x36d1fafd
- (void)_removeObserver:(id)observer;	// 0x36d1ef4d
- (void)_removePushDataProvider:(id)provider;	// 0x36d245a5
- (void)_removeSection:(id)section;	// 0x36d1fdc5
- (void)_removeSettingsGateway:(id)gateway;	// 0x36d1f365
- (void)_scheduleExpirationForBulletin:(id)bulletin;	// 0x36d2147d
- (void)_scheduleTimerForDate:(id)date;	// 0x36d20c61
- (id)_sectionInfoArray:(BOOL)array;	// 0x36d2076d
- (id)_sectionInfoPath;	// 0x36d24f39
- (id)_sectionOrderPath;	// 0x36d24f05
- (void)_sendAddBulletin:(id)bulletin toFeeds:(unsigned)feeds;	// 0x36d1f58d
- (void)_sendModifyBulletin:(id)bulletin toFeeds:(unsigned)feeds;	// 0x36d1f6ed
- (void)_sendRemoveBulletin:(id)bulletin toFeeds:(unsigned)feeds;	// 0x36d1f865
- (void)_sendUpdateSectionInfo:(id)info;	// 0x36d1f3b5
- (void)_sendUpdateSectionOrder;	// 0x36d1f401
- (void)_sendUpdateSectionOrderRule;	// 0x36d1f43d
- (void)_setClearedInfo:(id)info forSectionID:(id)sectionID;	// 0x36d23779
- (void)_setSectionInfo:(id)info forSectionID:(id)sectionID;	// 0x36d20ad1
- (void)_sortSectionIDsUsingDefaultOrder;	// 0x36d202c1
- (void)_sortSectionIDsUsingGuideArray:(id)array;	// 0x36d20619
- (void)_updateBulletinsForDataProvider:(id)dataProvider;	// 0x36d2331d
- (void)_updateBulletinsForDataProviderIfSectionIsEnabled:(id)dataProviderIfSectionIsEnabled;	// 0x36d232b1
- (void)_updatePushSettingsForPushDataProvider:(id)pushDataProvider;	// 0x36d24429
- (void)_updateSectionParametersForDataProvider:(id)dataProvider;	// 0x36d235cd
- (id)_updatesForObserver:(id)observer bulletinIDs:(id)ids;	// 0x36d22275
- (BOOL)_verifyBulletinRequest:(id)request forDataProvider:(id)dataProvider;	// 0x36d231f1
- (void)_writeClearedSections;	// 0x36d24e89
- (void)_writeSectionInfo;	// 0x36d25291
- (void)_writeSectionOrder;	// 0x36d251e5
- (id)allBulletinIDsForSectionID:(id)sectionID;	// 0x36d1ec91
- (void)dealloc;	// 0x36d1e285
- (void)deliverResponse:(id)response;	// 0x36d29eb5
- (void)demo_lockscreen:(unsigned long long)lockscreen;	// 0x36d25451
- (void)getAttachmentAspectRatioForBulletinID:(id)bulletinID withHandler:(id)handler;	// 0x36d21cb5
- (void)getAttachmentPNGDataForBulletinID:(id)bulletinID sizeConstraints:(id)constraints withHandler:(id)handler;	// 0x36d21bcd
- (void)getSectionOrderRuleWithHandler:(id)handler;	// 0x36d21b15
- (void)getSectionParametersForSectionID:(id)sectionID withHandler:(id)handler;	// 0x36d21b8d
- (void)getSortDescriptorsForSectionID:(id)sectionID withHandler:(id)handler;	// 0x36d21b59
- (unsigned)listBulletinCapForSectionID:(id)sectionID;	// 0x36d1ecb1
- (id)listBulletinIDsForSectionID:(id)sectionID;	// 0x36d1ec71
- (void)noteFinishedWithBulletinID:(id)bulletinID;	// 0x36d29e95
- (void)observer:(id)observer clearSection:(id)section;	// 0x36d221fd
- (void)observer:(id)observer finishedWithBulletinID:(id)bulletinID transactionID:(unsigned)anId;	// 0x36d22065
- (void)observer:(id)observer getRecentUnacknowledgedBulletinsForFeeds:(unsigned)feeds withHandler:(id)handler;	// 0x36d22485
- (void)observer:(id)observer getSectionInfoWithHandler:(id)handler;	// 0x36d22249
- (void)observer:(id)observer handleResponse:(id)response;	// 0x36d21ee1
- (void)observer:(id)observer requestListBulletinsForSectionID:(id)sectionID;	// 0x36d223b9
- (void)observer:(id)observer setObserverFeed:(unsigned)feed;	// 0x36d21da1
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x36d1e4cd
- (void)publishBulletin:(id)bulletin destinations:(int)destinations;	// 0x36d1e9f5
- (void)publishBulletinRequest:(id)request destinations:(int)destinations;	// 0x36d29f1d
- (void)removeBulletinID:(id)anId fromListSection:(id)listSection;	// 0x36d1ec05
- (void)settingsGateway:(id)gateway getSectionInfoWithHandler:(id)handler;	// 0x36d22521
- (void)settingsGateway:(id)gateway setOrderedSectionIDs:(id)ids;	// 0x36d22595
- (void)settingsGateway:(id)gateway setSectionInfo:(id)info forSectionID:(id)sectionID;	// 0x36d225dd
- (void)settingsGateway:(id)gateway setSectionOrderRule:(unsigned)rule;	// 0x36d2254d
- (id)sortDescriptorsForSectionID:(id)sectionID;	// 0x36d1ece9
- (void)updateListSection:(id)section withBulletinRequests:(id)bulletinRequests;	// 0x36d2a34d
- (void)withdrawBulletinID:(id)anId;	// 0x36d1ebc5
- (void)withdrawBulletinRequestsWithPublisherBulletinID:(id)publisherBulletinID forSectionID:(id)sectionID;	// 0x36d2a765
- (void)withdrawBulletinRequestsWithRecordID:(id)recordID forSectionID:(id)sectionID;	// 0x36d2a661
@end

