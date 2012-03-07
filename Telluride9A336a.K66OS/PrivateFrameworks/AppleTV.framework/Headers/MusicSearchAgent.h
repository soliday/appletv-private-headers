/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchAgent.h"
#import "AppleTV-Structs.h"

@class PlayHandler, BRAsyncTaskContext, NSString;

__attribute__((visibility("hidden")))
@interface MusicSearchAgent : ATVSearchAgent {
@private
	NSString *_initialSearchTerm;	// 12 = 0xc
	NSString *_searchTerm;	// 16 = 0x10
	ATVMediaQueryRef _artistQuery;	// 20 = 0x14
	ATVMediaQueryRef _albumQuery;	// 24 = 0x18
	ATVMediaQueryRef _playlistQuery;	// 28 = 0x1c
	ATVMediaQueryRef _songQuery;	// 32 = 0x20
	int _pendingQueryCount;	// 36 = 0x24
	BRAsyncTaskContext *_taskContext;	// 40 = 0x28
	PlayHandler *_playHandler;	// 44 = 0x2c
	ATVDataClientRef dataClient;	// 48 = 0x30
	unsigned long clientType;	// 52 = 0x34
}
@property(assign, nonatomic) unsigned long clientType;	// G=0x33ba2285; S=0x33ba2295; @synthesize
@property(retain, nonatomic) ATVDataClientRef dataClient;	// G=0x33ba2251; S=0x33ba2261; @synthesize
+ (id)searchAgent;	// 0x33ba1e75
- (id)init;	// 0x33ba1ead
- (void)_addMediaTypeFilterForQuery:(ATVMediaQueryRef)query;	// 0x33ba33ed
- (void)_addSearchTermFilterForQuery:(ATVMediaQueryRef)query operator:(int)anOperator;	// 0x33ba33a9
- (ATVMediaQueryRef)_createAlbumQuery;	// 0x33ba3291
- (ATVMediaQueryRef)_createArtistQuery;	// 0x33ba312d
- (ATVMediaQueryRef)_createPlaylistQuery;	// 0x33ba321d
- (ATVMediaQueryRef)_createSongQuery;	// 0x33ba331d
- (void)_dataClientSearch;	// 0x33ba23e1
- (void)_dataClientSearchComplete;	// 0x33ba2bc9
- (id)_filterData:(id)data forSearchTerm:(id)searchTerm;	// 0x33ba299d
- (id)_filterExistingResultsForSearchTerm:(id)searchTerm;	// 0x33ba262d
- (void)_postSearchResults:(id)results searchTerm:(id)term;	// 0x33ba30b1
- (id)_providerForSearchResults:(id)searchResults title:(id)title label:(id)label;	// 0x33ba351d
- (void)_queryComplete;	// 0x33ba360d
- (void)_search;	// 0x33ba22a5
- (void)_searchFilteringComplete:(id)complete;	// 0x33ba28a1
- (void)_searchForMultiCharFirstSearchTerm;	// 0x33ba2315
- (void)_setAlbumQuery:(ATVMediaQueryRef)query;	// 0x33ba34b5
- (void)_setArtistQuery:(ATVMediaQueryRef)query;	// 0x33ba344d
- (void)_setPlaylistQuery:(ATVMediaQueryRef)query;	// 0x33ba3481
- (void)_setSongQuery:(ATVMediaQueryRef)query;	// 0x33ba34e9
- (void)_startSearchTask;	// 0x33ba2325
- (long)cacheSize;	// 0x33ba224d
// declared property getter: - (unsigned long)clientType;	// 0x33ba2285
- (id)contextMenuUtility;	// 0x33ba21ad
// declared property getter: - (ATVDataClientRef)dataClient;	// 0x33ba2251
- (void)dealloc;	// 0x33ba1f29
- (BOOL)handlePlayForObject:(id)object;	// 0x33ba21c9
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x33ba2069
// declared property setter: - (void)setClientType:(unsigned long)type;	// 0x33ba2295
// declared property setter: - (void)setDataClient:(ATVDataClientRef)client;	// 0x33ba2261
- (BOOL)showRecentSearches;	// 0x33ba2065
@end
