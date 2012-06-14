/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVMetadataItem.h"

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem {
	AVChapterMetadataItemInternal *_privChapter;	// 8 = 0x8
}
- (id)init;	// 0x366fd9c1
- (void)_addFigAssetNotifications;	// 0x366fdc5d
- (long)_chapterGroupIndex;	// 0x366fe991
- (long)_chapterIndex;	// 0x366fe9b1
- (void)_ensureValueLoadedSync;	// 0x366fefed
- (id)_initWithAsset:(id)asset chapterGroupIndex:(long)index chapterIndex:(long)index3 chapterType:(id)type locale:(id)locale time:(XXStruct_pwHToB)time duration:(XXStruct_pwHToB)duration;	// 0x366fda21
- (void)_removeFigAssetNotifications;	// 0x366fe00d
- (void)_setValueStatus:(int)status figErrorCode:(long)code;	// 0x366fec0d
- (void)_takeValueFrom:(id)from;	// 0x366fe6f9
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)keyDependsOnMetadataValue;	// 0x366fe9d1
- (int)_valueStatus;	// 0x366fea8d
- (void)cancelLoading;	// 0x366ff3c5
- (id)commonKey;	// 0x366fe5c9
- (id)copyWithZone:(NSZone *)zone;	// 0x366fe2b5
- (void)dealloc;	// 0x366fe11d
- (id)description;	// 0x366fe425
- (XXStruct_pwHToB)duration;	// 0x366fe65d
- (id)extraAttributes;	// 0x366fe919
- (void)finalize;	// 0x366fe229
- (id)key;	// 0x366fe5a9
- (id)keySpace;	// 0x366fe5e9
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x366ff139
- (id)locale;	// 0x366fe5f9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x366fe2c5
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x366ff0d1
- (XXStruct_pwHToB)time;	// 0x366fe619
- (id)value;	// 0x366fe6a1
@end
