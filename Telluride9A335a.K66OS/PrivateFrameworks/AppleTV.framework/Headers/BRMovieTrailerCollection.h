/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseMediaCollection.h"

@class NSMutableArray;

@interface BRMovieTrailerCollection : BRBaseMediaCollection {
@private
	NSMutableArray *_mediaAssets;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *mediaAssets;	// G=0x341b7915; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x341b7749
- (void)addObject:(id)object;	// 0x341b78cd
- (id)artist;	// 0x341b7929
- (id)artistForSorting;	// 0x341b7965
- (id)collectionID;	// 0x341b781d
- (id)collectionType;	// 0x341b7801
- (int)count;	// 0x341b78ed
- (id)coverArt;	// 0x341b7859
- (void)dealloc;	// 0x341b77b5
- (long)duration;	// 0x341b7a19
- (BOOL)hasCoverArt;	// 0x341b7895
- (BOOL)isCompilation;	// 0x341b7925
- (BOOL)isLocal;	// 0x341b7a91
// converted property getter: - (id)mediaAssets;	// 0x341b7915
- (id)mediaType;	// 0x341b7a55
- (id)primaryGenre;	// 0x341b7ac9
- (id)title;	// 0x341b79a1
- (id)titleForSorting;	// 0x341b79dd
@end

