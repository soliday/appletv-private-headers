/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


@interface BRChapterUtilities : NSObject {
}
+ (unsigned)chapterGroupCountForMediaAsset:(id)mediaAsset;	// 0x33b368e1
+ (unsigned)chapterGroupCountForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x33b369bd
+ (long)chapterIndexForTime:(double)time chapters:(id)chapters startSearchFrom:(long)from;	// 0x33b369c9
+ (id)mediaAsset:(id)asset chapterGroupAtIndex:(unsigned)index;	// 0x33b36971
+ (BOOL)mediaAsset:(id)asset hasChapterGroupAtIndex:(unsigned)index;	// 0x33b36925
+ (id)mediaItem:(ATVMediaItemRef)item chapterGroupAtIndex:(unsigned)index;	// 0x33b369c5
+ (BOOL)mediaItem:(ATVMediaItemRef)item hasChapterGroupAtIndex:(unsigned)index;	// 0x33b369c1
@end
