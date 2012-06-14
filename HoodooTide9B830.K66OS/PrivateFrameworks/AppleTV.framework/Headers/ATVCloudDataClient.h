/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVPushNotificationListener.h"
#import <NSObject.h> // Unknown library

@class ATVSagaClient, ATVCloudItemPropertiesUploadNotificationTask, ATVCloudPushNotificationTask, NSTimer, NSNumber, NSMutableDictionary, ML3MusicLibrary;

@interface ATVCloudDataClient : NSObject <ATVPushNotificationListener> {
@private
	dispatch_queue_s *_artworkProcessingQueue;	// 4 = 0x4
	unsigned short _concurrentArtworkRequestCount;	// 8 = 0x8
	BOOL _deauthenticationInProgress;	// 10 = 0xa
	BOOL _deviceActivated;	// 11 = 0xb
	unsigned _uploadInterval;	// 12 = 0xc
	ATVDataClientRef _cloudDataClient;	// 16 = 0x10
	ATVSagaClient *_cloudClient;	// 20 = 0x14
	ML3MusicLibrary *_mlLibrary;	// 24 = 0x18
	NSMutableDictionary *_artworkRequestMap;	// 28 = 0x1c
	NSNumber *_accountDSID;	// 32 = 0x20
	ATVCloudPushNotificationTask *_pushUpdateTask;	// 36 = 0x24
	ATVCloudItemPropertiesUploadNotificationTask *_itemPropertiesUploadTask;	// 40 = 0x28
	NSTimer *_playerStopTimer;	// 44 = 0x2c
}
@property(retain, nonatomic) NSNumber *_accountDSID;	// G=0x32ad3601; S=0x32ad3611; @synthesize
@property(retain, nonatomic) NSMutableDictionary *_artworkRequestMap;	// G=0x32ad35cd; S=0x32ad35dd; @synthesize
@property(retain, nonatomic) ATVSagaClient *_cloudClient;	// G=0x32ad3565; S=0x32ad3575; @synthesize
@property(assign, nonatomic) ATVDataClientRef _cloudDataClient;	// G=0x32ad3545; S=0x32ad3555; @synthesize
@property(retain, nonatomic) ATVCloudItemPropertiesUploadNotificationTask *_itemPropertiesUploadTask;	// G=0x32ad3669; S=0x32ad3679; @synthesize
@property(retain, nonatomic) ML3MusicLibrary *_mlLibrary;	// G=0x32ad3599; S=0x32ad35a9; @synthesize
@property(retain, nonatomic) NSTimer *_playerStopTimer;	// G=0x32ad369d; S=0x32ad36ad; @synthesize
@property(retain, nonatomic) ATVCloudPushNotificationTask *_pushUpdateTask;	// G=0x32ad3635; S=0x32ad3645; @synthesize
+ (ATVDataClientRef)cloudDataClient;	// 0x32ad2f09
- (id)init;	// 0x32ad31ad
// declared property getter: - (id)_accountDSID;	// 0x32ad3601
// declared property getter: - (id)_artworkRequestMap;	// 0x32ad35cd
- (void)_cancelPlayerStopTimer;	// 0x32ad5531
// declared property getter: - (id)_cloudClient;	// 0x32ad3565
- (void)_cloudClientLibraryUpdated:(id)updated;	// 0x32ad4969
- (void)_cloudClientUpdateLibrary:(id)library;	// 0x32ad48c1
// declared property getter: - (ATVDataClientRef)_cloudDataClient;	// 0x32ad3545
- (void)_connectionProgress;	// 0x32ad4a09
- (void)_continueInitCloudClient;	// 0x32ad44b1
- (void)_deallocCloudClient;	// 0x32ad45ed
- (void)_deleteCloudDatabase;	// 0x32ad47c1
- (void)_iTunesAccountChanged:(id)changed;	// 0x32ad4e55
- (void)_iTunesAccountReauthenticated:(id)reauthenticated;	// 0x32ad4fed
- (BOOL)_initCloudClient;	// 0x32ad3939
// declared property getter: - (id)_itemPropertiesUploadTask;	// 0x32ad3669
- (void)_itemPropertiesUploadTaskNotification:(id)notification;	// 0x32ad4e0d
- (void)_itemPropertyUpdateNotification:(id)notification;	// 0x32ad4bed
// declared property getter: - (id)_mlLibrary;	// 0x32ad3599
- (void)_musicStoreURLBagRefreshed:(id)refreshed;	// 0x32ad5159
- (void)_parentalControlAccessChanged:(id)changed;	// 0x32ad52a5
- (void)_playerStateChanged:(id)changed;	// 0x32ad5341
// declared property getter: - (id)_playerStopTimer;	// 0x32ad369d
- (void)_playerStopTimerHandler:(id)handler;	// 0x32ad54d9
// declared property getter: - (id)_pushUpdateTask;	// 0x32ad3635
- (void)_registerPushForUser:(id)user cookies:(id)cookies;	// 0x32b01679
- (void)_rootCollectionUpdated:(id)updated;	// 0x32ad522d
- (void)_sendConnectionMade:(id)made;	// 0x32ad49b9
- (void)_unregisterPush;	// 0x32b01ad5
- (void)_userActivityHandler:(id)handler;	// 0x32ad547d
- (void)cancelArtworkRequestForIdentifier:(id)identifier;	// 0x32b02fcd
- (void)cancelImageRequest:(void *)request;	// 0x32ad3929
- (void)cloudDataClient:(ATVDataClientRef)client handleQuery:(ATVMediaQueryRef)query withContext:(void *)context completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x32adc4a5
- (void)connectWithContext:(void *)context;	// 0x32ad36d1
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x32b01b11
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x32b01b15
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x32b01b51
- (void)connectionDidFinishLoading:(id)connection;	// 0x32b01b0d
- (void)dealloc;	// 0x32ad3355
- (void)didReceiveMessageForTopic:(id)topic userInfo:(id)info;	// 0x32b01b55
- (void)disconnectWithContext:(void *)context;	// 0x32ad3861
- (void)handleGeniusQuery:(ATVMediaQueryRef)query completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x32adc77d
- (void)handleQuery:(ATVMediaQueryRef)query withContext:(void *)context completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x32ad3871
- (void *)loadArtworkForMedia:(void *)media artworkIdentifier:(id)identifier requestedSize:(CGSize)size crop:(BOOL)crop withContext:(void *)context;	// 0x32ad3905
- (void *)loadArtworkForMedia:(void *)media artworkIdentifier:(id)identifier withContext:(void *)context;	// 0x32b023dd
- (void)processArtworkQuery:(ATVMediaQueryRef)query withCompletionQueue:(dispatch_queue_s *)completionQueue completionHandler:(id)handler;	// 0x32b030e9
- (void)setDataClient:(ATVDataClientRef)client;	// 0x32ad3429
// declared property setter: - (void)set_accountDSID:(id)dsid;	// 0x32ad3611
// declared property setter: - (void)set_artworkRequestMap:(id)map;	// 0x32ad35dd
// declared property setter: - (void)set_cloudClient:(id)client;	// 0x32ad3575
// declared property setter: - (void)set_cloudDataClient:(ATVDataClientRef)client;	// 0x32ad3555
// declared property setter: - (void)set_itemPropertiesUploadTask:(id)task;	// 0x32ad3679
// declared property setter: - (void)set_mlLibrary:(id)library;	// 0x32ad35a9
// declared property setter: - (void)set_playerStopTimer:(id)timer;	// 0x32ad36ad
// declared property setter: - (void)set_pushUpdateTask:(id)task;	// 0x32ad3645
@end

