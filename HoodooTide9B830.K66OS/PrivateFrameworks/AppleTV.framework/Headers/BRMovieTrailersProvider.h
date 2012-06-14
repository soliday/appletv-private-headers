/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRNetworkMediaProvider.h"

@class NSMutableArray;

@interface BRMovieTrailersProvider : BRNetworkMediaProvider {
@private
	NSMutableArray *_mediaCollections;	// 12 = 0xc
	int _lastError;	// 16 = 0x10
}
@property(readonly, assign) int lastError;	// G=0x329a729d; converted property
+ (void)initialize;	// 0x329a6b0d
+ (BOOL)trailersAvailable;	// 0x329a6c71
- (id)init;	// 0x329a6d0d
- (BOOL)_addMediaAsset:(id)asset;	// 0x32a96ba5
- (void)_loadTrailers;	// 0x329a72ad
- (void)_loadTrailersWithResolution:(id)resolution forURL:(id)url;	// 0x329a74c5
- (void)_networkStatusChanged:(id)changed;	// 0x329a6c75
- (void)_postLoadedNotification:(id)notification;	// 0x329a7429
- (void)dealloc;	// 0x329a6de1
- (int)errorCodeForProvider;	// 0x329a7225
// converted property getter: - (int)lastError;	// 0x329a729d
- (int)load;	// 0x329a6f95
- (id)mediaForEntityName:(id)entityName;	// 0x329a6ead
- (id)mediaTypes;	// 0x329a6e5d
- (id)providerID;	// 0x329a6ea1
- (int)unload;	// 0x329a7151
@end

