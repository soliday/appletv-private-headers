/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetMakeReadyForInspectionLoader.h"
#import "AVFoundation-Structs.h"

@class NSArray;

@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader {
	OpaqueFigPlaybackItem *_playbackItem;	// 48 = 0x30
	NSArray *_trackIDs;	// 52 = 0x34
	BOOL _shouldCacheDuration;	// 56 = 0x38
	XXStruct_pwHToB _cachedDuration;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic, getter=_playbackItem) OpaqueFigPlaybackItem *playbackItem;	// G=0x30b168ed; 
- (id)initWithURL:(id)url playbackItem:(OpaqueFigPlaybackItem *)item trackIDs:(id)ids dynamicBehavior:(BOOL)behavior;	// 0x30b16231
- (void)_addFigObjectNotifications;	// 0x30b16325
- (OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)figErrorCode;	// 0x30b168fd
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;	// 0x30b16945
- (BOOL)_inspectionRequiresAFormatReader;	// 0x30b16941
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)keys;	// 0x30b16a21
// declared property getter: - (OpaqueFigPlaybackItem *)_playbackItem;	// 0x30b168ed
- (id)_playbackItemPropertiesForKeys:(id)keys;	// 0x30b16971
- (void)_removeFigObjectNotifications;	// 0x30b165e1
- (id)assetInspector;	// 0x30b16829
- (void)cancelLoading;	// 0x30b16895
- (void)dealloc;	// 0x30b166a5
- (XXStruct_pwHToB)duration;	// 0x30b16ab1
- (void)finalize;	// 0x30b16719
- (unsigned)hash;	// 0x30b167e1
- (BOOL)isEqual:(id)equal;	// 0x30b16771
@end
