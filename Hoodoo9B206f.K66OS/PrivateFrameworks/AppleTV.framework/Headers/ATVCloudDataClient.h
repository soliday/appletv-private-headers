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
@property(retain, nonatomic) NSNumber *_accountDSID;	// G=0x3678f77d; S=0x3678f78d; @synthesize
@property(retain, nonatomic) NSMutableDictionary *_artworkRequestMap;	// G=0x3678f749; S=0x3678f759; @synthesize
@property(retain, nonatomic) ATVSagaClient *_cloudClient;	// G=0x3678f6e1; S=0x3678f6f1; @synthesize
@property(assign, nonatomic) ATVDataClientRef _cloudDataClient;	// G=0x3678f6c1; S=0x3678f6d1; @synthesize
@property(retain, nonatomic) ATVCloudItemPropertiesUploadNotificationTask *_itemPropertiesUploadTask;	// G=0x3678f7e5; S=0x3678f7f5; @synthesize
@property(retain, nonatomic) ML3MusicLibrary *_mlLibrary;	// G=0x3678f715; S=0x3678f725; @synthesize
@property(retain, nonatomic) NSTimer *_playerStopTimer;	// G=0x3678f819; S=0x3678f829; @synthesize
@property(retain, nonatomic) ATVCloudPushNotificationTask *_pushUpdateTask;	// G=0x3678f7b1; S=0x3678f7c1; @synthesize
+ (ATVDataClientRef)cloudDataClient;	// 0x3678f085
- (id)init;	// 0x3678f329
// declared property getter: - (id)_accountDSID;	// 0x3678f77d
// declared property getter: - (id)_artworkRequestMap;	// 0x3678f749
- (void)_cancelPlayerStopTimer;	// 0x367916ad
// declared property getter: - (id)_cloudClient;	// 0x3678f6e1
- (void)_cloudClientLibraryUpdated:(id)updated;	// 0x36790ae5
- (void)_cloudClientUpdateLibrary:(id)library;	// 0x36790a3d
// declared property getter: - (ATVDataClientRef)_cloudDataClient;	// 0x3678f6c1
- (void)_connectionProgress;	// 0x36790b85
- (void)_continueInitCloudClient;	// 0x3679062d
- (void)_deallocCloudClient;	// 0x36790769
- (void)_deleteCloudDatabase;	// 0x3679093d
- (void)_iTunesAccountChanged:(id)changed;	// 0x36790fd1
- (void)_iTunesAccountReauthenticated:(id)reauthenticated;	// 0x36791169
- (BOOL)_initCloudClient;	// 0x3678fab5
// declared property getter: - (id)_itemPropertiesUploadTask;	// 0x3678f7e5
- (void)_itemPropertiesUploadTaskNotification:(id)notification;	// 0x36790f89
- (void)_itemPropertyUpdateNotification:(id)notification;	// 0x36790d69
// declared property getter: - (id)_mlLibrary;	// 0x3678f715
- (void)_musicStoreURLBagRefreshed:(id)refreshed;	// 0x367912d5
- (void)_parentalControlAccessChanged:(id)changed;	// 0x36791421
- (void)_playerStateChanged:(id)changed;	// 0x367914bd
// declared property getter: - (id)_playerStopTimer;	// 0x3678f819
- (void)_playerStopTimerHandler:(id)handler;	// 0x36791655
// declared property getter: - (id)_pushUpdateTask;	// 0x3678f7b1
- (void)_registerPushForUser:(id)user cookies:(id)cookies;	// 0x367bd7f5
- (void)_rootCollectionUpdated:(id)updated;	// 0x367913a9
- (void)_sendConnectionMade:(id)made;	// 0x36790b35
- (void)_unregisterPush;	// 0x367bdc51
- (void)_userActivityHandler:(id)handler;	// 0x367915f9
- (void)cancelArtworkRequestForIdentifier:(id)identifier;	// 0x367bf149
- (void)cancelImageRequest:(void *)request;	// 0x3678faa5
- (void)cloudDataClient:(ATVDataClientRef)client handleQuery:(ATVMediaQueryRef)query withContext:(void *)context completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x36798621
- (void)connectWithContext:(void *)context;	// 0x3678f84d
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x367bdc8d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x367bdc91
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x367bdccd
- (void)connectionDidFinishLoading:(id)connection;	// 0x367bdc89
- (void)dealloc;	// 0x3678f4d1
- (void)didReceiveMessageForTopic:(id)topic userInfo:(id)info;	// 0x367bdcd1
- (void)disconnectWithContext:(void *)context;	// 0x3678f9dd
- (void)handleGeniusQuery:(ATVMediaQueryRef)query completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x367988f9
- (void)handleQuery:(ATVMediaQueryRef)query withContext:(void *)context completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x3678f9ed
- (void *)loadArtworkForMedia:(void *)media artworkIdentifier:(id)identifier requestedSize:(CGSize)size crop:(BOOL)crop withContext:(void *)context;	// 0x3678fa81
- (void *)loadArtworkForMedia:(void *)media artworkIdentifier:(id)identifier withContext:(void *)context;	// 0x367be559
- (void)processArtworkQuery:(ATVMediaQueryRef)query withCompletionQueue:(dispatch_queue_s *)completionQueue completionHandler:(id)handler;	// 0x367bf265
- (void)setDataClient:(ATVDataClientRef)client;	// 0x3678f5a5
// declared property setter: - (void)set_accountDSID:(id)dsid;	// 0x3678f78d
// declared property setter: - (void)set_artworkRequestMap:(id)map;	// 0x3678f759
// declared property setter: - (void)set_cloudClient:(id)client;	// 0x3678f6f1
// declared property setter: - (void)set_cloudDataClient:(ATVDataClientRef)client;	// 0x3678f6d1
// declared property setter: - (void)set_itemPropertiesUploadTask:(id)task;	// 0x3678f7f5
// declared property setter: - (void)set_mlLibrary:(id)library;	// 0x3678f725
// declared property setter: - (void)set_playerStopTimer:(id)timer;	// 0x3678f829
// declared property setter: - (void)set_pushUpdateTask:(id)task;	// 0x3678f7c1
@end

