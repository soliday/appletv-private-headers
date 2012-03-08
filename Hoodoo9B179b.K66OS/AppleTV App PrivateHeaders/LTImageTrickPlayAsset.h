/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTVAPPBinary-Structs.h"
#import "LTTrickPlayAsset.h"
#import "LTImageTrickPlayAsset.h"

@class NSMutableIndexSet, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface LTImageTrickPlayAsset : LTTrickPlayAsset {
	NSArray *_frames;	// 12 = 0xc
	double _frameTimeDifferenceInSeconds;	// 16 = 0x10
	NSString *_frameFileNameFormat;	// 24 = 0x18
	float _frameCountMultipler;	// 28 = 0x1c
	BOOL _isEncrypted;	// 32 = 0x20
	BOOL _isReady;	// 33 = 0x21
	int _preloadedFilesOnEitherEnd;	// 36 = 0x24
	NSMutableIndexSet *_mutableActiveRequestsIndexSet;	// 40 = 0x28
	opaque_pthread_mutex_t _activeImageRequestMutex;	// 44 = 0x2c
}
@property(readonly, assign) double frameTimeDifferenceInSeconds;	// G=0x4fdcd; converted property
@property(readonly, assign) BOOL isReady;	// G=0x4f46d; converted property
- (id)initWithAsset:(id)asset;	// 0x4f241
- (id)initWithAsset:(id)asset andMerchant:(id)merchant;	// 0x4f269
- (void).cxx_destruct;	// 0x4fde5
- (id)URLForTime:(double)time;	// 0x4f531
- (id)URLsForTime:(double)time;	// 0x4f5ad
- (id)URLsForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x4f601
- (id)URLsForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount atInterval:(int)interval;	// 0x4f62d
- (id)URLsForTime:(double)time withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x4f5dd
- (void)cancelPriorImageLoadsFromTime:(double)time direction:(int)direction;	// 0x4f7b5
- (void)dealloc;	// 0x4f1a5
- (id)firstImageFromURLs:(id)urls;	// 0x4fa21
// converted property getter: - (double)frameTimeDifferenceInSeconds;	// 0x4fdcd
- (id)imageForTime:(double)time;	// 0x4f951
- (id)imageForTime:(double)time direction:(int)direction;	// 0x4f999
- (id)imageForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x4f9c9
- (id)imageForTime:(double)time withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x4f975
- (unsigned)indexForTime:(double)time;	// 0x4f47d
// converted property getter: - (BOOL)isReady;	// 0x4f46d
@end

@interface LTImageTrickPlayAsset (Private)
- (void)_fetchTrackConfigFileAtURL:(id)url forMerchant:(id)merchant;	// 0x4fe2d
- (id)_loadImageURLsForCount:(unsigned)count forBaseURL:(id)baseURL;	// 0x507e9
- (id)_loadImageURLsForCount:(unsigned)count forBaseURL:(id)baseURL isOneBasedNamingScheme:(BOOL)scheme;	// 0x5080d
- (void)_setTrackConfig:(id)config;	// 0x501c9
- (void)_trackConfigFileReady:(id)ready;	// 0x4ffb5
@end
