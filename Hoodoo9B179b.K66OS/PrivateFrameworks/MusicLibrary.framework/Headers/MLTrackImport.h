/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSData, NSMutableDictionary, MLMovieProperties, NSDictionary, MLContentRating, NSString, NSArray;

@interface MLTrackImport : NSObject <NSCopying> {
@private
	NSData *_artworkData;	// 4 = 0x4
	NSString *_assetFilePath;	// 8 = 0x8
	NSArray *_chapters;	// 12 = 0xc
	NSMutableDictionary *_properties;	// 16 = 0x10
	BOOL _shouldAddToPurchasedPlaylist;	// 20 = 0x14
	BOOL _shouldDeleteExistingArtwork;	// 21 = 0x15
	BOOL _assignArtworkCacheIDFromAlbum;	// 22 = 0x16
}
@property(copy, nonatomic) NSData *artworkData;	// G=0x30040561; S=0x30040571; @synthesize=_artworkData
@property(copy, nonatomic) NSString *assetFilePath;	// G=0x30040595; S=0x300405a5; @synthesize=_assetFilePath
@property(assign, nonatomic) BOOL assignArtworkCacheIDFromAlbum;	// G=0x300405c9; S=0x300405d9; @synthesize=_assignArtworkCacheIDFromAlbum
@property(copy, nonatomic) NSArray *chapters;	// G=0x300405e9; S=0x300405f9; @synthesize=_chapters
@property(copy, nonatomic) MLContentRating *contentRating;	// G=0x3003fdf5; S=0x3003ffb5; 
@property(readonly, assign, nonatomic) NSDictionary *entityProperties;	// G=0x3003fe71; 
@property(assign, nonatomic) unsigned long mediaType;	// G=0x3003fea9; S=0x30040009; 
@property(copy, nonatomic) MLMovieProperties *movieProperties;	// G=0x3003fef9; S=0x30040091; 
@property(assign, nonatomic) BOOL shouldAddToPurchasedPlaylist;	// G=0x3004061d; S=0x3004062d; @synthesize=_shouldAddToPurchasedPlaylist
@property(assign, nonatomic) BOOL shouldDeleteExistingArtwork;	// G=0x3004063d; S=0x3004064d; @synthesize=_shouldDeleteExistingArtwork
+ (void)initialize;	// 0x3003fba5
- (id)init;	// 0x3003fadd
- (void)_addSortStrings;	// 0x300404bd
// declared property getter: - (id)artworkData;	// 0x30040561
// declared property getter: - (id)assetFilePath;	// 0x30040595
// declared property getter: - (BOOL)assignArtworkCacheIDFromAlbum;	// 0x300405c9
// declared property getter: - (id)chapters;	// 0x300405e9
// declared property getter: - (id)contentRating;	// 0x3003fdf5
- (id)copyEntityProperties;	// 0x30040251
- (id)copyWithZone:(NSZone *)zone;	// 0x3003fce9
- (void)dealloc;	// 0x3003fb1d
// declared property getter: - (id)entityProperties;	// 0x3003fe71
// declared property getter: - (unsigned long)mediaType;	// 0x3003fea9
// declared property getter: - (id)movieProperties;	// 0x3003fef9
- (void)normalizeEntityProperties;	// 0x30040271
// declared property setter: - (void)setArtworkData:(id)data;	// 0x30040571
// declared property setter: - (void)setAssetFilePath:(id)path;	// 0x300405a5
// declared property setter: - (void)setAssignArtworkCacheIDFromAlbum:(BOOL)album;	// 0x300405d9
// declared property setter: - (void)setChapters:(id)chapters;	// 0x300405f9
// declared property setter: - (void)setContentRating:(id)rating;	// 0x3003ffb5
// declared property setter: - (void)setMediaType:(unsigned long)type;	// 0x30040009
// declared property setter: - (void)setMovieProperties:(id)properties;	// 0x30040091
// declared property setter: - (void)setShouldAddToPurchasedPlaylist:(BOOL)addToPurchasedPlaylist;	// 0x3004062d
// declared property setter: - (void)setShouldDeleteExistingArtwork:(BOOL)deleteExistingArtwork;	// 0x3004064d
- (void)setValue:(id)value forEntityProperty:(id)entityProperty;	// 0x30040181
// declared property getter: - (BOOL)shouldAddToPurchasedPlaylist;	// 0x3004061d
// declared property getter: - (BOOL)shouldDeleteExistingArtwork;	// 0x3004063d
- (id)valueForEntityProperty:(id)entityProperty;	// 0x30040209
@end

