/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVPlaybackProgressMonitor.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVPlaybackITMSProgressMonitor : ATVPlaybackProgressMonitor {
@private
	double _mostRecentReadyToPlay;	// 184 = 0xb8
	BOOL _readyToPlayTransitionHappened;	// 192 = 0xc0
	NSDictionary *_latestPlayabilityMetricsForSampling;	// 196 = 0xc4
	unsigned _playbackStallCount;	// 200 = 0xc8
}
@property(assign) double mostRecentReadyToPlay;	// G=0x32afd6bd; S=0x32afd6f1; @synthesize=_mostRecentReadyToPlay
@property(assign) unsigned playbackStallCount;	// G=0x32afd745; S=0x32afd755; @synthesize=_playbackStallCount
@property(assign) BOOL readyToPlayTransitionHappened;	// G=0x32afd725; S=0x32afd735; @synthesize=_readyToPlayTransitionHappened
- (id)_gatherAdditionalMetrics;	// 0x32afdb09
- (id)_gatherMetricsForStall;	// 0x32afdaf9
- (id)_initWithPlayerItem:(id)playerItem andMediaAsset:(id)asset;	// 0x32afd765
- (void)_playbackStalled:(id)stalled;	// 0x32afdbb1
- (void)_takeAdditionalPeriodicSamples:(id)samples andDescriptions:(id)descriptions;	// 0x32afd919
- (void)dealloc;	// 0x32afd48d
- (void)finishPeriodicSample;	// 0x32afd8a1
- (id)mediaTypeString;	// 0x32afd5d1
// declared property getter: - (double)mostRecentReadyToPlay;	// 0x32afd6bd
// declared property getter: - (unsigned)playbackStallCount;	// 0x32afd745
- (void)playerActivated:(id)activated;	// 0x32afd4d9
- (void)playerDeactivated;	// 0x32afd555
// declared property getter: - (BOOL)readyToPlayTransitionHappened;	// 0x32afd725
// declared property setter: - (void)setMostRecentReadyToPlay:(double)play;	// 0x32afd6f1
// declared property setter: - (void)setPlaybackStallCount:(unsigned)count;	// 0x32afd755
// declared property setter: - (void)setReadyToPlayTransitionHappened:(BOOL)playTransitionHappened;	// 0x32afd735
- (void)startPeriodicSample;	// 0x32afd7b5
- (void)startSamplingIfNecessary;	// 0x32afd581
- (id)streamingType;	// 0x32afd6b1
@end

