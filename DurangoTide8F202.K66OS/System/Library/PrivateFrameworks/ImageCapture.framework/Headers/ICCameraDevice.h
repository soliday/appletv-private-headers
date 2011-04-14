/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICDevice.h"
#import "ImageCapture-Structs.h"

@class NSString, NSArray;

@interface ICCameraDevice : ICDevice {
@private
	void *_cameraProperties;	// 8 = 0x8
}
@property(assign, getter=isAccessRestrictedAppleDevice) BOOL accessRestrictedAppleDevice;	// G=0x301cdab5; S=0x301cda91; 
@property(assign) BOOL allowsSyncingClock;	// G=0x301cdd21; S=0x301cdcfd; 
@property(readonly, assign) unsigned batteryLevel;	// G=0x301cdcb9; 
@property(readonly, assign) BOOL batteryLevelAvailable;	// G=0x301cdcd9; 
@property(assign) BOOL beingEjected;	// G=0x301cddb1; S=0x301cdd8d; 
@property(assign) unsigned contentCatalogPercentCompleted;	// G=0x301cdaf9; S=0x301cdad9; 
@property(readonly, assign) NSArray *contents;	// G=0x301cd9fd; 
@property(assign, getter=isEjectable) BOOL ejectable;	// G=0x301cddf9; S=0x301cddd5; 
@property(assign) unsigned estimatedNumberOfDownloadableItems;	// G=0x301cdc59; S=0x301cdc39; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x301cdd69; S=0x301cdd45; 
@property(readonly, assign) NSArray *mediaFiles;	// G=0x301cf5a9; 
@property(assign) unsigned numberOfDownloadableItems;	// G=0x301cdba9; S=0x301cdb89; 
@property(readonly, assign) double timeOffset;	// G=0x301cdc99; 
@property(copy) NSString *volumePath;	// G=0x301cde3d; S=0x301cde1d; 
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x301cdfd9
- (id)init;	// 0x301ce319
- (void)addFolder:(id)folder;	// 0x301cd7bd
- (void)addToMetadataFetchQ:(id)metadataFetchQ;	// 0x301d0139
- (void)addToThumbnailFetchQ:(id)thumbnailFetchQ;	// 0x301d019d
// declared property getter: - (BOOL)allowsSyncingClock;	// 0x301cdd21
// declared property getter: - (unsigned)batteryLevel;	// 0x301cdcb9
// declared property getter: - (BOOL)batteryLevelAvailable;	// 0x301cdcd9
// declared property getter: - (BOOL)beingEjected;	// 0x301cddb1
- (void)cancelDownload;	// 0x301ce2d9
// declared property getter: - (unsigned)contentCatalogPercentCompleted;	// 0x301cdaf9
// declared property getter: - (id)contents;	// 0x301cd9fd
- (void)dealloc;	// 0x301ce6a9
- (void)decrementEstimatedNumberOfDownloadableItems;	// 0x301cdc01
- (void)decrementNumberOfDownloadableItems;	// 0x301cdb51
- (id)description;	// 0x301cde5d
- (dispatch_semaphore_s *)deviceQSemaphore;	// 0x301cda51
- (double)downloadCancelTimestamp;	// 0x301cdc79
// declared property getter: - (unsigned)estimatedNumberOfDownloadableItems;	// 0x301cdc59
- (id)filesOfType:(id)type;	// 0x301cf491
- (void)finalize;	// 0x301ce52d
- (dispatch_queue_s *)generalQ;	// 0x301cda71
- (void)handleCommandCompletionNotification:(id)notification;	// 0x301cfcc1
- (void)handleImageCaptureEventNotification:(id)notification;	// 0x301cebc5
- (void)incrementEstimatedNumberOfDownloadableItems;	// 0x301cdbc9
- (void)incrementNumberOfDownloadableItems;	// 0x301cdb19
// declared property getter: - (BOOL)isAccessRestrictedAppleDevice;	// 0x301cdab5
// declared property getter: - (BOOL)isEjectable;	// 0x301cddf9
// declared property getter: - (BOOL)isLocked;	// 0x301cdd69
// declared property getter: - (id)mediaFiles;	// 0x301cf5a9
- (void)notifyDelegateOfAddedItem:(id)addedItem;	// 0x301ceaa1
// declared property getter: - (unsigned)numberOfDownloadableItems;	// 0x301cdba9
- (void)pendNotifyingDelegateOfAddedItem:(id)addedItem;	// 0x301cda1d
- (void)receivedDeviceCommandCompletion;	// 0x301ce509
- (void)removeFolder:(id)folder;	// 0x301cd72d
- (void)requestCloseSession;	// 0x301cd8a1
- (void)requestDeleteFiles:(id)files;	// 0x301d0201
- (void)requestDownloadFile:(id)file options:(id)options downloadDelegate:(id)delegate didDownloadSelector:(SEL)selector contextInfo:(void *)info;	// 0x301d033d
- (void)requestEject;	// 0x301ce825
- (void)requestOpenSession;	// 0x301ce8d5
- (void)requestSyncClock;	// 0x301cd84d
// declared property setter: - (void)setAccessRestrictedAppleDevice:(BOOL)device;	// 0x301cda91
// declared property setter: - (void)setAllowsSyncingClock:(BOOL)clock;	// 0x301cdcfd
// declared property setter: - (void)setBeingEjected:(BOOL)ejected;	// 0x301cdd8d
// declared property setter: - (void)setContentCatalogPercentCompleted:(unsigned)completed;	// 0x301cdad9
// declared property setter: - (void)setEjectable:(BOOL)ejectable;	// 0x301cddd5
// declared property setter: - (void)setEstimatedNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x301cdc39
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x301cdd45
// declared property setter: - (void)setNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x301cdb89
// declared property setter: - (void)setVolumePath:(id)path;	// 0x301cde1d
// declared property getter: - (double)timeOffset;	// 0x301cdc99
// declared property getter: - (id)volumePath;	// 0x301cde3d
@end
