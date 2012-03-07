/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControlReceiver.framework/MediaControlReceiver
 */

#import "MPAssetKeyDelegate.h"
#import "MediaControlReceiver-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, CALayer, MPDocument, MRMarimbaLayer, NSDictionary, NSMutableDictionary, NSData, MediaControlServer;

__attribute__((visibility("hidden")))
@interface AirPlayLocalSlideshow : NSObject <MPAssetKeyDelegate> {
@private
	NSLock *_lock;	// 4 = 0x4
	MediaControlServer *_server;	// 8 = 0x8
	unsigned _serverSessionID;	// 12 = 0xc
	CALayer *_presentationLayer;	// 16 = 0x10
	MPDocument *_marimbaDocument;	// 20 = 0x14
	MRMarimbaLayer *_marimbaLayer;	// 24 = 0x18
	unsigned char _sessionUUID[16];	// 28 = 0x1c
	NSDictionary *_settings;	// 44 = 0x2c
	int _state;	// 48 = 0x30
	NSMutableDictionary *_assets;	// 52 = 0x34
	unsigned _nextAssetIndex;	// 56 = 0x38
	BOOL _hasMoreAssets;	// 60 = 0x3c
	BOOL _endPending;	// 61 = 0x3d
	int _outstandingCount;	// 64 = 0x40
	double _startTime;	// 68 = 0x44
	double _lastRequestTime;	// 76 = 0x4c
	double _lastRemoveTime;	// 84 = 0x54
	NSData *_firstImageData;	// 92 = 0x5c
}
+ (id)slideshowFeatures;	// 0x3103a941
- (id)initWithServer:(id)server;	// 0x3103a899
- (id)_assetForAssetKey:(id)assetKey;	// 0x3103c3c9
- (unsigned)_bufferedAssetCount;	// 0x3103c22d
- (id)_copyImageForAssetKey:(id)assetKey decode:(BOOL)decode;	// 0x3103c315
- (id)_oldestAsset;	// 0x3103c0fd
- (void)_playbackConsumedAssetKey:(id)key;	// 0x3103c519
- (void)_playbackEnded:(id)ended;	// 0x3103c4b1
- (void)_playbackPrefetch;	// 0x3103cc21
- (void)_playbackPrefetchDone;	// 0x3103c845
- (void)_playbackProducedAssetData:(id)data withAssetInfo:(id)assetInfo;	// 0x3103c641
- (void)_playbackRunStateMachine;	// 0x3103cdb5
- (void)_playbackStart;	// 0x3103d3b5
- (void)_playbackStop;	// 0x3103ce81
- (void)_playbackUserNext:(id)next;	// 0x3103b625
- (void)_playbackUserPlayPause:(id)pause;	// 0x3103b74d
- (void)_playbackUserPrevious:(id)previous;	// 0x3103b605
- (void)_playbackUserStop:(id)stop;	// 0x3103b645
- (void)_postProgressEvent:(id)event;	// 0x3103bbc9
- (void)_pruneAssets;	// 0x3103bd19
- (void)_setSlideDuration;	// 0x3103b9a9
- (void)_setTransition;	// 0x3103b76d
- (id)absolutePathForAssetKey:(id)assetKey;	// 0x3103dabd
- (id)absolutePathForAssetKey:(id)assetKey andSize:(CGSize)size;	// 0x3103da45
- (id)absolutePathForStillAssetAtPath:(id)path andSize:(CGSize)size;	// 0x3103d9cd
- (void)dealloc;	// 0x3103dd89
- (id)imageDataForAssetKey:(id)assetKey andSize:(CGSize)size;	// 0x3103d879
- (CGSize)resolutionForAssetKey:(id)assetKey;	// 0x3103d795
- (void)setPresentationLayer:(id)layer;	// 0x3103dd49
- (void)setServerSessionID:(unsigned)anId;	// 0x3103a889
- (id)slideshowInfo;	// 0x3103dcd9
- (id)startSlideshowWithInfo:(id)info error:(id *)error;	// 0x3103dba9
- (id)stopSlideshowWithInfo:(id)info error:(id *)error;	// 0x3103db19
@end
