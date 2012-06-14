/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import "AssetsLibraryServices-Structs.h"
#import <NSObject.h> // Unknown library


@interface PLGatekeeperClient : NSObject {
@private
	xpc_connection_s *connection;	// 4 = 0x4
}
@property(assign, nonatomic) xpc_connection_s *connection;	// G=0x3102ac69; S=0x3102ac79; @synthesize
@property(readonly, assign, nonatomic) dispatch_queue_s *replyQueue;	// G=0x31028bcd; 
+ (id)sharedInstance;	// 0x31028bd5
- (id)init;	// 0x31028c75
- (void)addAssetWithURL:(id)url toAlbumWithUUID:(id)uuid handler:(id)handler;	// 0x31029bb9
- (void)addGroupWithName:(id)name handler:(id)handler;	// 0x310299c1
- (void)cleanupDualCameraRollAfterTellurideCorruption;	// 0x3102a92d
- (void)cleanupForStoreDemoMode;	// 0x3102ac25
- (void)cleanupModelAfteriTunesRestore;	// 0x3102a809
- (void)clearChangeStore;	// 0x3102ab45
// declared property getter: - (xpc_connection_s *)connection;	// 0x3102ac69
- (void)createPhotoLibraryDatabase;	// 0x31029e61
- (void)createPhotostreamAlbumWithStreamID:(id)streamID;	// 0x3102abcd
- (void)dataMigrationWillFinish;	// 0x3102a9b5
- (int)fileDescriptorForAssetURL:(id)assetURL;	// 0x3102900d
- (id)fileURLForAssetURL:(id)assetURL;	// 0x310290dd
- (id)fileURLForNewAssetWithType:(unsigned)type extension:(id)extension;	// 0x310294b5
- (void)finalizeOTARestoreRecreatingAlbums:(BOOL)albums;	// 0x3102a571
- (void)getPhotosAndVideosCountWithHandler:(id)handler;	// 0x3102a009
- (id)imageDataFromAssetURL:(id)assetURL format:(int)format;	// 0x310297e9
- (void)importFileSystemAssetsWaitingForReply:(BOOL)reply;	// 0x31029ee9
- (void)launchAssetsd;	// 0x31029fa1
- (id)messagesImageDataFromAssetURL:(id)assetURL format:(int)format;	// 0x310298d5
- (void)notifyAboutTerminationDueToUncaughtException:(id)uncaughtException;	// 0x3102aa3d
- (void)recalculateCachedAlbumCounts;	// 0x3102ab01
- (void)recoverFromCrashIfNeeded;	// 0x3102ab89
// declared property getter: - (dispatch_queue_s *)replyQueue;	// 0x31028bcd
- (void)requestAccessWithHandler:(id)handler;	// 0x31028d7d
- (void)requestImageFromAssetURL:(id)assetURL format:(int)format handler:(id)handler;	// 0x310295b5
- (void)saveAssetWithData:(id)data handler:(id)handler imageSurface:(IOSurfaceRef)surface previewImageSurface:(IOSurfaceRef)surface4;	// 0x310291c1
- (unsigned)secondsNeededToCleanupDualCameraRollAfterTellurideCorruption;	// 0x3102a891
- (unsigned)secondsNeededToCleanupModelAfteriTunesRestore;	// 0x3102a76d
- (dispatch_queue_s *)sendQueue;	// 0x31028bbd
// declared property setter: - (void)setConnection:(xpc_connection_s *)connection;	// 0x3102ac79
- (void)updateCameraPreviewWellImage:(id)image;	// 0x3102a3cd
- (void)updateModelAfterOTARestore;	// 0x3102a4e9
- (void)updateRestoredAssetWithUUID:(id)uuid paths:(id)paths;	// 0x3102a621
- (void)updateStackedImageCacheForAlbum:(id)album;	// 0x3102a469
- (void)updateThumbnailsForPhoto:(id)photo generatePreviewImage:(BOOL)image waitForReply:(BOOL)reply;	// 0x3102a2b1
- (void)updateThumbnailsForPhoto:(id)photo generatePreviewImage:(BOOL)image waitForReply:(BOOL)reply assignNewIndex:(BOOL)index;	// 0x3102a2d5
- (void)writeDataInBackground:(id)background toFileURL:(id)fileURL;	// 0x3102a6f5
@end

