/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMetadataItem.h"
#import "AVFoundation-Structs.h"

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem {
	AVChapterMetadataItemInternal *_privChapter;	// 8 = 0x8
}
- (id)init;	// 0x32688afd
- (void)_addFigAssetNotifications;	// 0x32688dc5
- (long)_chapterGroupIndex;	// 0x32689b3d
- (long)_chapterIndex;	// 0x32689b5d
- (void)_ensureValueLoadedSync;	// 0x3268a189
- (id)_initWithAsset:(id)asset chapterGroupIndex:(long)index chapterIndex:(long)index3 chapterType:(id)type locale:(id)locale time:(XXStruct_pwHToB)time duration:(XXStruct_pwHToB)duration;	// 0x32688b5d
- (void)_removeFigAssetNotifications;	// 0x3268918d
- (void)_setValueStatus:(int)status figErrorCode:(long)code;	// 0x32689db9
- (void)_takeValueFrom:(id)from;	// 0x32689899
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)keyDependsOnMetadataValue;	// 0x32689b7d
- (int)_valueStatus;	// 0x32689c4d
- (void)cancelLoading;	// 0x3268a551
- (id)commonKey;	// 0x32689769
- (id)copyWithZone:(NSZone *)zone;	// 0x3268946d
- (void)dealloc;	// 0x326892c9
- (id)description;	// 0x326895e9
- (XXStruct_pwHToB)duration;	// 0x326897fd
- (id)extraAttributes;	// 0x32689ac5
- (void)finalize;	// 0x326893e1
- (id)key;	// 0x32689749
- (id)keySpace;	// 0x32689789
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x3268a2d5
- (id)locale;	// 0x32689799
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3268947d
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x3268a26d
- (XXStruct_pwHToB)time;	// 0x326897b9
- (id)value;	// 0x32689841
@end

