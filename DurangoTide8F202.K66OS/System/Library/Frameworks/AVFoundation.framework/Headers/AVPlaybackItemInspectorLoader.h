/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetInspectorLoader.h"


@interface AVPlaybackItemInspectorLoader : AVAssetInspectorLoader {
	OpaqueFigPlaybackItem *_playbackItem;	// 68 = 0x44
	OpaqueFigFormatReaderLoader *_formatReaderLoader;	// 72 = 0x48
}
@property(readonly, assign, nonatomic, getter=_playbackItem) OpaqueFigPlaybackItem *playbackItem;	// G=0x30418ff1; 
- (id)initWithURL:(id)url playbackItem:(OpaqueFigPlaybackItem *)item;	// 0x3041b5b1
- (void)_addFigObjectNotifications;	// 0x3041b415
- (OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)figErrorCode;	// 0x3041a991
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;	// 0x3041a731
- (OpaqueFigFormatReaderLoader *)_formatReaderLoader;	// 0x30419001
- (BOOL)_inspectionRequiresAFormatReader;	// 0x30419011
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)keys;	// 0x3041a9d5
// declared property getter: - (OpaqueFigPlaybackItem *)_playbackItem;	// 0x30418ff1
- (id)_playbackItemPropertiesForKeys:(id)keys;	// 0x3041a755
- (void)_removeFigObjectNotifications;	// 0x3041b1a1
- (id)assetInspector;	// 0x3041916d
- (void)cancelLoading;	// 0x30419b45
- (void)dealloc;	// 0x30419c05
- (void)finalize;	// 0x30419ba5
- (unsigned)hash;	// 0x3041bf1d
- (BOOL)isEqual:(id)equal;	// 0x3041b769
@end
