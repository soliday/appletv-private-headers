/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "MLChapterTOC.h"


__attribute__((visibility("hidden")))
@interface MLITChapterTOCRep : MLChapterTOC {
@private
	unsigned _totalTimeInMS;	// 4 = 0x4
	ChapterData *_chapterDataRef;	// 8 = 0x8
	unsigned *_picCookieIndexMap;	// 12 = 0xc
	unsigned *_urlCookieIndexMap;	// 16 = 0x10
	unsigned *_nameCookieIndexMap;	// 20 = 0x14
}
@property(readonly, assign) ChapterData *chapterDataRef;	// G=0x31be6589; converted property
@property(readonly, assign) unsigned totalTimeInMS;	// G=0x31be6599; converted property
+ (unsigned **)_chapterDataCookieIndexMapForProperty:(int)property ofChapterTOC:(id)chapterTOC;	// 0x31be6829
- (id)initWithChapterDataRef:(ChapterData *)chapterDataRef totalTimeInMS:(unsigned)ms;	// 0x31be68dd
- (unsigned *)_cachedCookieIndexMapForProperty:(int)property createIfNecessary:(BOOL)necessary;	// 0x31be6b59
- (id)availableArtworkFormatIDsForArtworkGroupChapterIndex:(unsigned)artworkGroupChapterIndex;	// 0x31be65b5
- (id)availableArtworkFormatIDsForChapterIndex:(unsigned)chapterIndex;	// 0x31be65b9
- (id)bestImageDataForSize:(CGSize)size chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x31be65f9
// converted property getter: - (ChapterData *)chapterDataRef;	// 0x31be6589
- (unsigned)chapterIndexForGroupIndex:(unsigned)groupIndex groupingProperty:(int)property;	// 0x31be67e9
- (unsigned)countOfChapters;	// 0x31be6a3d
- (unsigned)countOfGroupsForProperty:(int)property;	// 0x31be6b01
- (void)dealloc;	// 0x31be69c9
- (unsigned)durationInMSOfGroupAtIndex:(unsigned)index groupingProperty:(int)property;	// 0x31be674d
- (id)getImageWithArtworkFormatID:(unsigned)artworkFormatID size:(CGSize)size chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x31be6665
- (unsigned)groupIndexAtTimeLocationInMS:(unsigned)ms groupingProperty:(int)property;	// 0x31be6721
- (unsigned)groupIndexForChapterIndex:(unsigned)chapterIndex groupingProperty:(int)property;	// 0x31be6ac5
- (id)imageDataForArtworkFormatID:(unsigned)artworkFormatID chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x31be662d
- (id)imageDataForArtworkFormatID:(unsigned)artworkFormatID size:(CGSize)size artworkChapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x31be65a9
- (unsigned)timeLocationInMSOfChapterAtIndex:(unsigned)index;	// 0x31be6a55
- (unsigned)timeLocationInMSOfGroupAtIndex:(unsigned)index groupingProperty:(int)property;	// 0x31be66f9
- (id)titlePropertyOfChapterAtIndex:(unsigned)index;	// 0x31be6c55
// converted property getter: - (unsigned)totalTimeInMS;	// 0x31be6599
- (id)urlPropertyOfChapterAtIndex:(unsigned)index;	// 0x31be6da5
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned)index;	// 0x31be6cd9
- (id)urlTitleTrimmingCharacterSet;	// 0x31be66d9
@end

