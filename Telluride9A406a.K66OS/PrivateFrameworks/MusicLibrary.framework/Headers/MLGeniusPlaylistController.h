/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface MLGeniusPlaylistController : NSObject {
@private
	void *_echo;	// 4 = 0x4
	void *_echo_library;	// 8 = 0x8
	void *_echo_cluster_playlist;	// 12 = 0xc
	NSMutableData *_sharedBlobMutableData;	// 16 = 0x10
}
+ (unsigned)defaultMinTrackCount;	// 0x364c69f1
+ (unsigned)defaultTrackCount;	// 0x364c6a25
+ (BOOL)hasGeniusDataAvailable;	// 0x364c6991
+ (BOOL)hasGeniusFeatureEnabled;	// 0x364b9c89
+ (void)ignoreUnusedWarnings;	// 0x364c68b1
+ (id)playlistControllerWithSeedTracks:(id)seedTracks error:(id *)error;	// 0x364c7e49
+ (BOOL)populateContainer:(id)container withSeedTrack:(id)seedTrack error:(id *)error;	// 0x364c7d05
+ (BOOL)useFakeGeniusData;	// 0x364ba21d
- (id)init;	// 0x364c6a59
- (BOOL)_canIncludeTrackInGeniusContainer:(id)geniusContainer;	// 0x364c6bd1
- (BOOL)_createClusterPlaylistWithSeedTracks:(id)seedTracks error:(id *)error;	// 0x364c7f19
- (id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)persistentID maxTracks:(unsigned)tracks stride:(int)stride;	// 0x364c6c99
- (BOOL)_fakePopulateContainer:(id)container withSeedTrack:(id)seedTrack error:(id *)error;	// 0x364c7041
- (BOOL)_populateContainer:(id)container seedTrack:(id)track error:(id *)error;	// 0x364c7495
- (id)_sharedBlobMutableData;	// 0x364c6b7d
- (id)_tracksFromClusterForPlaylistItemMax:(unsigned)playlistItemMax error:(id *)error;	// 0x364c816d
- (void)dealloc;	// 0x364c6afd
- (id)tracksFromClusterForCount:(unsigned)count error:(id *)error;	// 0x364c7ec5
@end
