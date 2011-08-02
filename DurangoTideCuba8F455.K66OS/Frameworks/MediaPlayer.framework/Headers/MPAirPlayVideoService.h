/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "NSNetServiceDelegate.h"

@class MCMediaControlClientRemote, MPAVItem, NSNetService, NSString, NSData, NSDictionary;

@interface MPAirPlayVideoService : NSObject <NSNetServiceDelegate> {
@private
	int _resolutionState;	// 4 = 0x4
	NSNetService *_netService;	// 8 = 0x8
	DNSServiceRef_tRef _dnsService;	// 12 = 0xc
	NSString *_ipAddress;	// 16 = 0x10
	MCMediaControlClientRemote *_mediaControlClient;	// 20 = 0x14
	MPAVItem *_item;	// 24 = 0x18
	void *_context;	// 28 = 0x1c
	NSData *_playInfoData;	// 32 = 0x20
	NSDictionary *_cachedPlaybackInfo;	// 36 = 0x24
	double _lastFetchedPlaybackInfoTimeInterval;	// 40 = 0x28
	double _cachedCurrentPlaybackTime;	// 48 = 0x30
	float _cachedVolume;	// 56 = 0x38
	unsigned _capabilities;	// 60 = 0x3c
	BOOL _didResolveOrFailToResolve;	// 64 = 0x40
	BOOL _hasVolumeControl;	// 65 = 0x41
	BOOL _isPlaying;	// 66 = 0x42
	BOOL _playbackTimeIsValid;	// 67 = 0x43
	BOOL _preparingToPlay;	// 68 = 0x44
	BOOL _waitingForPlaybackToBegin;	// 69 = 0x45
	BOOL _waitingForPasswordEntry;	// 70 = 0x46
	unsigned _bufferingState;	// 72 = 0x48
	unsigned _playbackState;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic) BOOL _didResolveOrFailToResolve;	// G=0x3363bc75; @synthesize
@property(readonly, assign) unsigned bufferingState;	// G=0x3363bc11; converted property
@property(readonly, assign) unsigned capabilities;	// G=0x3363bc55; converted property
@property(assign, nonatomic) void *context;	// G=0x3363bc85; S=0x3363bc95; @synthesize=_context
@property(assign) double currentPlaybackTime;	// G=0x3363d5e9; S=0x3363c621; converted property
@property(readonly, assign) BOOL hasVolumeControl;	// G=0x3363bc31; converted property
@property(readonly, retain) NSString *ipAddress;	// G=0x3363bbe1; converted property
@property(readonly, assign, nonatomic) BOOL isAvailable;	// G=0x3363cba9; 
@property(retain) MPAVItem *item;	// G=0x3363bc01; S=0x3363c775; converted property
@property(readonly, assign, nonatomic) NSNetService *netService;	// G=0x3363bc65; @synthesize=_netService
@property(readonly, assign) unsigned playbackState;	// G=0x3363bc21; converted property
@property(readonly, assign) int resolutionState;	// G=0x3363bbf1; converted property
@property(assign) float volume;	// G=0x3363c4f9; S=0x3363c4cd; converted property
+ (void)_beginBackgroundNetworkAssertion;	// 0x3363e325
+ (void)_endBackgroundNetworkAssertion;	// 0x3363e2c9
- (void)_cancelResolve;	// 0x3363cdf5
- (id)_currentPlaybackInfo;	// 0x3363c241
// declared property getter: - (BOOL)_didResolveOrFailToResolve;	// 0x3363bc75
- (id)_initWithNSNetService:(id)nsnetService;	// 0x3363cccd
- (void)_playRemoteWithParams:(id)params password:(id)password completionHandler:(id)handler;	// 0x3363c001
- (void)_playWithLocalFilePath:(id)localFilePath password:(id)password startPosition:(float)position playInfo:(id)info completionHandler:(id)handler;	// 0x3363c109
- (void)_resolveWithTimeout:(double)timeout;	// 0x3363dfc9
- (void)_sendPICRequestData:(id)data password:(id)password responseHandler:(id)handler;	// 0x3363bef1
- (void)_setPlaybackState:(unsigned)state;	// 0x3363bdfd
- (void)_updateForPlaybackEnding;	// 0x3363cd45
- (void)_updateForPlaybackStarting;	// 0x3363bdc9
// converted property getter: - (unsigned)bufferingState;	// 0x3363bc11
- (BOOL)canDisplayItem:(id)item;	// 0x3363cb89
// converted property getter: - (unsigned)capabilities;	// 0x3363bc55
// declared property getter: - (void *)context;	// 0x3363bc85
- (id)currentEstimatedPlaybackDate;	// 0x3363c5c9
- (id)currentPlaybackDate;	// 0x3363c5f5
// converted property getter: - (double)currentPlaybackTime;	// 0x3363d5e9
- (void)dealloc;	// 0x3363ce51
- (double)durationIfAvailable;	// 0x3363c56d
// converted property getter: - (BOOL)hasVolumeControl;	// 0x3363bc31
- (unsigned)hash;	// 0x3363cc81
// converted property getter: - (id)ipAddress;	// 0x3363bbe1
// declared property getter: - (BOOL)isAvailable;	// 0x3363cba9
- (BOOL)isEqual:(id)equal;	// 0x3363cbf1
// converted property getter: - (id)item;	// 0x3363bc01
- (id)name;	// 0x3363cbd1
// declared property getter: - (id)netService;	// 0x3363bc65
- (BOOL)playWithCompletionHandler:(id)completionHandler;	// 0x3363d2c5
- (double)playableDuration;	// 0x3363d955
// converted property getter: - (unsigned)playbackState;	// 0x3363bc21
- (BOOL)prepareToDisplayItem:(id)displayItem completionHandler:(id)handler;	// 0x3363ca09
// converted property getter: - (int)resolutionState;	// 0x3363bbf1
- (void)sendPICRequestData:(id)data responseHandler:(id)handler;	// 0x3363d281
- (void)sendPlayInfoData:(id)data;	// 0x3363c495
// declared property setter: - (void)setContext:(void *)context;	// 0x3363bc95
// converted property setter: - (void)setCurrentPlaybackTime:(double)time;	// 0x3363c621
// converted property setter: - (void)setItem:(id)item;	// 0x3363c775
- (BOOL)setRate:(float)rate;	// 0x3363c675
// converted property setter: - (void)setVolume:(float)volume;	// 0x3363c4cd
- (void)stop;	// 0x3363c6ed
- (double)timeOfPlayableEnd;	// 0x3363d7f9
- (double)timeOfPlayableStart;	// 0x3363d8d1
- (double)timeOfSeekableEnd;	// 0x3363d69d
- (double)timeOfSeekableStart;	// 0x3363d721
// converted property getter: - (float)volume;	// 0x3363c4f9
@end
