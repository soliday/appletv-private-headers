/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "SSEntity.h"

@class NSArray, SSNetworkConstraints, SSDownloadMetadata, SSXPCConnection, SSDownloadStatus, NSMutableDictionary, NSNumber;

@interface SSDownload : SSEntity <SSXPCCoding> {
@private
	NSMutableDictionary *_localAssets;	// 28 = 0x1c
	SSDownloadMetadata *_metadata;	// 32 = 0x20
	NSNumber *_prioritizeAboveDownload;	// 36 = 0x24
	SSDownloadStatus *_status;	// 40 = 0x28
}
@property(readonly, assign, getter=_XPCConnection) SSXPCConnection *_XPCConnection;	// G=0x304e94c1; 
@property(retain, nonatomic) NSArray *assets;	// G=0x304e8c6d; S=0x304e8d91; 
@property(readonly, assign, getter=isCancelable) BOOL cancelable;	// G=0x304e6e29; 
@property(readonly, assign, nonatomic) id downloadIdentifier;	// G=0x304e8c71; 
@property(readonly, assign, nonatomic, getter=isExternal) BOOL external;	// G=0x304e8cb9; 
@property(copy, nonatomic) SSDownloadMetadata *metadata;	// G=0x304e8d29; S=0x304e8d95; 
@property(copy) SSNetworkConstraints *networkConstraints;	// G=0x304e721d; S=0x304e82a1; 
@property(readonly, assign) long long persistentIdentifier;	// G=0x304e7531; 
@property(retain, nonatomic) SSDownloadStatus *status;	// G=0x304e8df5; S=0x304e8df1; 
+ (long long)_existsMessage;	// 0x304e8399
+ (long long)_getExternalValuesMessage;	// 0x304e83a1
+ (long long)_getValueMessage;	// 0x304e83a9
+ (long long)_setExternalValuesMessage;	// 0x304e83b1
+ (long long)_setValuesMessage;	// 0x304e83b9
+ (void)loadThumbnailImageDataForDownloadID:(long long)downloadID connection:(id)connection completionBlock:(id)block;	// 0x304e8815
- (id)initWithDownloadMetadata:(id)downloadMetadata;	// 0x304e8a55
- (id)initWithPersistentIdentifier:(long long)persistentIdentifier;	// 0x304e61e9
// declared property getter: - (id)_XPCConnection;	// 0x304e94c1
- (void)_addCachedExternalValues:(id)values;	// 0x304e83c1
- (void)_addCachedPropertyValues:(id)values;	// 0x304e8521
- (void)_applyPhase:(id)phase toStatus:(id)status;	// 0x304e94d5
- (id)_errorWithData:(id)data;	// 0x304e9589
- (id)_errorWithXPCReply:(void *)xpcreply;	// 0x304e9639
- (id)_initWithLocalPropertyValues:(void *)localPropertyValues;	// 0x304e629d
- (void)_legacyLoadArtworkData;	// 0x304e96f9
- (void)_resetLocalIVars;	// 0x304e879d
- (void)_resetStatus;	// 0x304e937d
- (id)_thumbnailImageURL;	// 0x304e9941
- (BOOL)addAsset:(id)asset forType:(id)type;	// 0x304e6535
// declared property getter: - (id)assets;	// 0x304e8c6d
- (id)assetsForType:(id)type;	// 0x304e6835
- (long long)bytesDownloaded;	// 0x304e6d21
- (long long)bytesTotal;	// 0x304e6d59
- (void *)copyXPCEncoding;	// 0x304e8b3d
- (void)dealloc;	// 0x304e648d
// declared property getter: - (id)downloadIdentifier;	// 0x304e8c71
- (id)downloadPhaseIdentifier;	// 0x304e6d91
- (double)estimatedSecondsRemaining;	// 0x304e6dad
- (id)failureError;	// 0x304e6ded
- (void)handleWithDownloadHandler:(id)downloadHandler completionBlock:(id)block;	// 0x304e8ca9
// declared property getter: - (BOOL)isCancelable;	// 0x304e6e29
- (BOOL)isEligibleForRestore:(id *)restore;	// 0x304e6f49
// declared property getter: - (BOOL)isExternal;	// 0x304e8cb9
- (BOOL)loadThumbnailImageData;	// 0x304e8ce5
- (void)loadThumbnailImageDataWithCompletionBlock:(id)completionBlock;	// 0x304e6fad
// declared property getter: - (id)metadata;	// 0x304e8d29
// declared property getter: - (id)networkConstraints;	// 0x304e721d
- (void)pause;	// 0x304e7281
- (double)percentComplete;	// 0x304e74fd
// declared property getter: - (long long)persistentIdentifier;	// 0x304e7531
- (void)prioritizeAboveDownload:(id)download completionBlock:(id)block;	// 0x304e754d
- (BOOL)removeAsset:(id)asset;	// 0x304e79d9
- (void)resume;	// 0x304e7bf9
// declared property setter: - (void)setAssets:(id)assets;	// 0x304e8d91
- (void)setDownloadHandler:(id)handler completionBlock:(id)block;	// 0x304e7e6d
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x304e8d95
// declared property setter: - (void)setNetworkConstraints:(id)constraints;	// 0x304e82a1
// declared property setter: - (void)setStatus:(id)status;	// 0x304e8df1
- (void)setValuesWithStoreDownloadMetadata:(id)storeDownloadMetadata;	// 0x304e8355
// declared property getter: - (id)status;	// 0x304e8df5
- (id)thumbnailImageData;	// 0x304e9335
@end

