/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAsset.h"

@class AVAssetCache, AVURLAssetInternal, NSURL, NSString;
@protocol AVURLAssetFailedURLRequestHandling;

@interface AVURLAsset : AVAsset {
@private
	AVURLAssetInternal *_asset;	// 8 = 0x8
}
@property(readonly, copy, nonatomic) NSURL *URL;	// G=0x30e6a4e5; 
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x30e6ccc1; 
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x30e6e7f1; 
@property(assign, nonatomic, setter=setFailedURLRequestDelegate:) id<AVURLAssetFailedURLRequestHandling> failedURLRequestDelegate;	// G=0x30e6a505; S=0x30e6e865; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x30e6cced; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x30e6cd21; 
+ (id)URLAssetWithURL:(id)url options:(id)options;	// 0x30e6c289
+ (id)_avfValidationPlist;	// 0x30e6a4b5
+ (void)_ensureAudiovisualTypes;	// 0x30e6c381
+ (id)audiovisualMIMETypes;	// 0x30e6c321
+ (id)audiovisualTypes;	// 0x30e6c351
+ (void)initialize;	// 0x30e6c3ad
+ (BOOL)isPlayableExtendedMIMEType:(id)type;	// 0x30e6c2d5
- (id)init;	// 0x30e6ccad
- (id)initWithURL:(id)url options:(id)options;	// 0x30e6cb35
// declared property getter: - (id)URL;	// 0x30e6a4e5
- (CFURLRef)_URL;	// 0x30e6c4a5
- (unsigned)_addChapterMetadataItem:(id)item withDuration:(XXStruct_pwHToB)duration timeRange:(XXStruct_yD8eWC)range toChapters:(id)chapters fromIndex:(unsigned)index;	// 0x30e6d7bd
- (void)_addFigAssetNotifications;	// 0x30e6c9d1
- (id)_assetInspector;	// 0x30e6c6b1
- (id)_assetInspectorLoader;	// 0x30e6a4c5
- (id)_chapterGroupInfo;	// 0x30e6cdad
- (id)_errorForFigNotificationPayload:(CFDictionaryRef)figNotificationPayload key:(CFStringRef)key;	// 0x30e6cad5
- (OpaqueFigFormatReader *)_formatReader;	// 0x30e6c685
- (void)_removeFigAssetNotifications;	// 0x30e6c8cd
- (void)_setAssetInspectorLoader:(id)loader;	// 0x30e6c6dd
- (void)_tracksDidChange;	// 0x30e6c4b5
// declared property getter: - (id)assetCache;	// 0x30e6ccc1
- (id)availableChapterLocales;	// 0x30e6d035
// declared property getter: - (id)cacheKey;	// 0x30e6e7f1
- (void)cancelLoading;	// 0x30e6c479
- (id)chapterMetadataGroupsWithTitleLocale:(id)titleLocale containingItemsWithCommonKeys:(id)commonKeys;	// 0x30e6da61
- (void)dealloc;	// 0x30e6c7fd
- (id)description;	// 0x30e6c739
- (id)downloadDestinationURL;	// 0x30e6cd81
// declared property getter: - (id)failedURLRequestDelegate;	// 0x30e6a505
- (void)finalize;	// 0x30e6c7a5
- (void)finishHandlingFailedURLRequestWithResponseProperties:(id)responseProperties;	// 0x30e6e941
- (id)lyrics;	// 0x30e6c44d
- (id)resolvedURL;	// 0x30e6cd55
// declared property setter: - (void)setFailedURLRequestDelegate:(id)delegate;	// 0x30e6e865
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x30e6cced
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x30e6cd21
- (id)tracks;	// 0x30e6c4f5
@end
