/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class NSArray, NSMutableSet, SSXPCConnection, SSDownloadManagerOptions;

@interface SSDownloadManager : NSObject {
@private
	dispatch_queue_s *_accessQueue;	// 4 = 0x4
	NSArray *_activeDownloads;	// 8 = 0x8
	BOOL _activeDownloadsChanged;	// 12 = 0xc
	dispatch_queue_s *_backgroundQueue;	// 16 = 0x10
	SSXPCConnection *_connection;	// 20 = 0x14
	NSArray *_downloads;	// 24 = 0x18
	BOOL _downloadsChanged;	// 28 = 0x1c
	BOOL _isUsingNetwork;	// 29 = 0x1d
	SSXPCConnection *_observerConnection;	// 32 = 0x20
	dispatch_queue_s *_observerQueue;	// 36 = 0x24
	CFArrayRef _observers;	// 40 = 0x28
	SSDownloadManagerOptions *_options;	// 44 = 0x2c
	NSMutableSet *_removedDownloads;	// 48 = 0x30
}
@property(readonly, assign) NSArray *activeDownloads;	// G=0x33ca6f71; 
@property(readonly, assign) NSArray *downloads;	// G=0x33ca7859; 
@property(readonly, assign) SSDownloadManagerOptions *managerOptions;	// G=0x33ca7ccd; 
@property(readonly, assign, getter=isUsingNetwork) BOOL usingNetwork;	// G=0x33ca7bf9; 
+ (id)EBookDownloadKinds;	// 0x33ca82d5
+ (id)EBookDownloadManager;	// 0x33ca8065
+ (id)IPodDownloadKinds;	// 0x33ca8309
+ (id)IPodDownloadManager;	// 0x33ca8135
+ (void)_sendGlobalHandler:(id)handler;	// 0x33ca8d19
+ (void)_triggerDownloads;	// 0x33ca87ed
+ (void)reevaluateBackgroundDownloadsForBundleIdentifiers:(id)bundleIdentifiers;	// 0x33ca83d9
+ (void)removePersistenceIdentifier:(id)identifier;	// 0x33ca6e65
+ (void)retryAllRestoreDownloads;	// 0x33ca847d
+ (void)setDownloadHandler:(id)handler;	// 0x33ca6f09
+ (id)softwareDownloadKinds;	// 0x33ca852d
+ (id)softwareDownloadManager;	// 0x33ca8205
- (id)initWithDownloadKinds:(id)downloadKinds;	// 0x33ca6b1d
- (id)initWithManagerOptions:(id)managerOptions;	// 0x33ca6b95
- (id)_XPCConnection;	// 0x33ca8d09
- (void)_connectAsObserver;	// 0x33ca8ddd
- (id)_copyDownloadKindsUsingNetwork;	// 0x33ca9091
- (id)_copyDownloads;	// 0x33ca9275
- (id)_copyDownloadsForMessage:(long long)message downloadIDs:(void *)ids;	// 0x33ca93e5
- (void)_finishDownloads:(id)downloads;	// 0x33ca88a9
- (void)_handleDownloadStatesChanged:(void *)changed;	// 0x33caa1f5
- (void)_handleDownloadsChanged:(void *)changed;	// 0x33ca9725
- (void)_handleDownloadsRemoved:(void *)removed;	// 0x33ca9eb1
- (void)_handleMessage:(void *)message fromServerConnection:(xpc_connection_s *)serverConnection;	// 0x33caa9e5
- (void)_handleReply:(void *)reply forDownloads:(id)downloads message:(void *)message isRetry:(BOOL)retry block:(id)block;	// 0x33caaa99
- (id)_initSSDownloadManager;	// 0x33ca699d
- (void)_insertDownloads:(id)downloads before:(id)before after:(id)after completionBlock:(id)block;	// 0x33caad19
- (void)_loadDownloadKindsUsingNetwork;	// 0x33caaf89
- (void)_moveDownload:(id)download before:(id)before after:(id)after completionBlock:(id)block;	// 0x33cab145
- (void *)_newOptionsDictionary;	// 0x33cab201
- (void)_sendMessage:(void *)message withCompletionBlock:(id)completionBlock;	// 0x33cab2d5
- (void)_sendMessageToObservers:(SEL)observers;	// 0x33cab475
- (void)_sendObserverConnection;	// 0x33cab685
- (void)_willFinishDownloads:(id)downloads;	// 0x33ca8aa1
// declared property getter: - (id)activeDownloads;	// 0x33ca6f71
- (void)addDownloads:(id)downloads completionBlock:(id)block;	// 0x33ca71f9
- (void)addObserver:(id)observer;	// 0x33ca75d5
- (BOOL)canCancelDownload:(id)download;	// 0x33ca76a5
- (void)cancelAllDownloadsWithCompletionBlock:(id)completionBlock;	// 0x33ca76bd
- (void)cancelDownloads:(id)downloads completionBlock:(id)block;	// 0x33ca7749
- (void)dealloc;	// 0x33ca6c59
// declared property getter: - (id)downloads;	// 0x33ca7859
- (void)finishDownloads:(id)downloads;	// 0x33ca79e5
- (void)getDownloadsUsingBlock:(id)block;	// 0x33ca7a19
- (void)insertDownloads:(id)downloads afterDownload:(id)download completionBlock:(id)block;	// 0x33ca7bb1
- (void)insertDownloads:(id)downloads beforeDownload:(id)download completionBlock:(id)block;	// 0x33ca7bd5
// declared property getter: - (BOOL)isUsingNetwork;	// 0x33ca7bf9
// declared property getter: - (id)managerOptions;	// 0x33ca7ccd
- (void)moveDownload:(id)download afterDownload:(id)download2 completionBlock:(id)block;	// 0x33ca7d05
- (void)moveDownload:(id)download beforeDownload:(id)download2 completionBlock:(id)block;	// 0x33ca7d29
- (void)pauseDownloads:(id)downloads completionBlock:(id)block;	// 0x33ca7d4d
- (void)reloadFromServer;	// 0x33ca8561
- (void)removeObserver:(id)observer;	// 0x33ca7f6d
- (void)resumeDownloads:(id)downloads completionBlock:(id)block;	// 0x33ca7e5d
- (void)setDownloads:(id)downloads completionBlock:(id)block;	// 0x33ca8045
- (void)setDownloads:(id)downloads forKinds:(id)kinds completionBlock:(id)block;	// 0x33ca85b1
@end

