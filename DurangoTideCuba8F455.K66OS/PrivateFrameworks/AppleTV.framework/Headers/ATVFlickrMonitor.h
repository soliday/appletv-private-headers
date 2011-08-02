/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVInternetPhotosMonitor.h"

@class BRBackgroundTask;

@interface ATVFlickrMonitor : ATVInternetPhotosMonitor {
@private
	BRBackgroundTask *_backgroundTask;	// 32 = 0x20
}
@property(readonly, retain) BRBackgroundTask *backgroundTask;	// G=0x3065fb8d; converted property
+ (void)initialize;	// 0x30661591
+ (void)setSingleton:(id)singleton;	// 0x3065fb81
+ (id)singleton;	// 0x3065fb75
- (id)init;	// 0x306614b5
- (id)_loadFlickrURL:(id)url;	// 0x30661ff5
- (void)_performAccountIconImageLoad:(id)load;	// 0x3065fe31
- (void)_performAccountLoad:(id)load;	// 0x3066075d
- (void)_performAccountMediaLoad:(id)load;	// 0x306615f1
- (void)_performAccountSubAccountsLoad:(id)load;	// 0x306605dd
- (void)_performAssetCoverArtImageLoad:(id)load;	// 0x3065ff39
- (void)_performAssetFullSizeImageLoad:(id)load;	// 0x3065ff19
- (void)_performAssetImageLoad:(id)load sizeKey:(id)key;	// 0x3065fc31
- (void)_performAssetThumbnailImageLoad:(id)load;	// 0x30660089
- (void)_performCollectionAssetsLoad:(id)load;	// 0x306600a9
- (void)_performSearch:(id)search;	// 0x3065ff59
- (id)_savedSearchesFilePath;	// 0x3065fbd9
- (void)addAccount:(id)account;	// 0x3066134d
// converted property getter: - (id)backgroundTask;	// 0x3065fb8d
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x30660b19
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x30660a45
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x30660965
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x306608f5
- (void)cancelLoadMediaForAccount:(id)account;	// 0x30660bf9
- (void)cancelLoadSubAccountsForAccount:(id)account;	// 0x30660b89
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x306609d5
- (void)dealloc;	// 0x30661435
- (void)loadAccountIconForAccount:(id)account;	// 0x3066116d
- (void)loadAccountWithName:(id)name;	// 0x306612ed
- (void)loadAssetsForCollection:(id)collection;	// 0x306610c5
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x30660fc5
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x30660f45
- (void)loadMediaForAccount:(id)account;	// 0x3066126d
- (void)loadSubAccountsForAccount:(id)account;	// 0x306611ed
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x30661045
- (void)removeAccountWithName:(id)name;	// 0x306613c9
- (void)removeSavedSearchTerm:(id)term;	// 0x30660ce9
- (void)saveSearchTerm:(id)term;	// 0x30660e25
- (id)savedSearchTerms;	// 0x30660cb5
- (void)searchWithSearchTerm:(id)searchTerm;	// 0x30660f1d
- (id)taskContext;	// 0x3065fb9d
@end
