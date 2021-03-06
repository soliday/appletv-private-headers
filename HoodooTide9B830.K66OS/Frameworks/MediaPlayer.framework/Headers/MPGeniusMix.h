/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "SSDownloadManagerObserver.h"

@class NSString, MPMediaPlaylist, MPMediaQuery, NSArray;

@interface MPGeniusMix : NSObject <SSDownloadManagerObserver, NSCoding, NSCopying> {
@private
	MPMediaPlaylist *_playlist;	// 4 = 0x4
	MPMediaQuery *_seedTracksQuery;	// 8 = 0x8
	NSArray *_representativeArtists;	// 12 = 0xc
	NSArray *_representativeImageItems;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) float downloadProgress;	// G=0x346aad79; 
@property(readonly, assign, nonatomic) BOOL isCloudMix;	// G=0x346aaeb9; 
@property(readonly, assign, nonatomic) BOOL isDownloading;	// G=0x346aaf05; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x346aaf35; 
@property(readonly, assign, nonatomic) MPMediaPlaylist *playlist;	// G=0x346ac03d; @synthesize=_playlist
@property(readonly, assign, nonatomic) NSArray *representativeArtists;	// G=0x346aaf61; 
@property(readonly, assign, nonatomic) MPMediaQuery *seedTracksQuery;	// G=0x346aba09; 
+ (id)artworkCacheDirectoryPath;	// 0x346aa62d
+ (id)artworkImageForMediaItem:(id)mediaItem;	// 0x346aa631
- (id)initWithCoder:(id)coder;	// 0x346aa275
- (id)initWithMPMediaPlaylist:(id)mpmediaPlaylist;	// 0x346a9fa9
- (id)_cacheDirectoryPath;	// 0x346abac1
- (id)_cachedRepresentativeImagePath;	// 0x346abb7d
- (unsigned long long)_entityArtworkCacheHashForRepresentativeItems:(id)representativeItems;	// 0x346abbb1
- (id)_representativeImageItemsWithMaxCount:(unsigned)maxCount;	// 0x346abd71
- (BOOL)canPlayUsingNetworkType:(int)type;	// 0x346aa809
- (void)cancelDownload;	// 0x346aa695
- (id)copyWithZone:(NSZone *)zone;	// 0x346aa425
- (unsigned)countOfRepresentativeImagesWithMaxCount:(unsigned)maxCount;	// 0x346aa98d
- (void)dealloc;	// 0x346aa031
- (id)description;	// 0x346aa0e9
- (void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;	// 0x346aa469
- (void)downloadMixWithCompletionHandler:(id)completionHandler;	// 0x346aaa25
// declared property getter: - (float)downloadProgress;	// 0x346aad79
- (void)encodeWithCoder:(id)coder;	// 0x346aa3b9
- (unsigned)hash;	// 0x346aa179
// declared property getter: - (BOOL)isCloudMix;	// 0x346aaeb9
// declared property getter: - (BOOL)isDownloading;	// 0x346aaf05
- (BOOL)isEqual:(id)equal;	// 0x346aa1bd
// declared property getter: - (id)name;	// 0x346aaf35
// declared property getter: - (id)playlist;	// 0x346ac03d
// declared property getter: - (id)representativeArtists;	// 0x346aaf61
- (CGImageRef)representativeImageWithSize:(CGSize)size count:(unsigned)count;	// 0x346ab1e9
- (CGImageRef)representativeImageWithSize:(CGSize)size count:(unsigned)count cacheOnly:(BOOL)only;	// 0x346ab20d
// declared property getter: - (id)seedTracksQuery;	// 0x346aba09
@end

