/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library


@interface MPSongInternal : NSObject {
	double duration;	// 4 = 0x4
	double startTime;	// 12 = 0xc
	float audioVolume;	// 20 = 0x14
	double fadeInDuration;	// 24 = 0x18
	double fadeOutDuration;	// 32 = 0x20
	BOOL assetLogging;	// 40 = 0x28
}
@property(assign, nonatomic) BOOL assetLogging;	// G=0x30a0151d; S=0x30a0152d; @synthesize
@property(assign, nonatomic) float audioVolume;	// G=0x30a014a5; S=0x30a014b5; @synthesize
@property(assign, nonatomic) double duration;	// G=0x30a0144d; S=0x30a01465; @synthesize
@property(assign, nonatomic) double fadeInDuration;	// G=0x30a014c5; S=0x30a014dd; @synthesize
@property(assign, nonatomic) double fadeOutDuration;	// G=0x30a014f1; S=0x30a01509; @synthesize
@property(assign, nonatomic) double startTime;	// G=0x30a01479; S=0x30a01491; @synthesize
// declared property getter: - (BOOL)assetLogging;	// 0x30a0151d
// declared property getter: - (float)audioVolume;	// 0x30a014a5
// declared property getter: - (double)duration;	// 0x30a0144d
// declared property getter: - (double)fadeInDuration;	// 0x30a014c5
// declared property getter: - (double)fadeOutDuration;	// 0x30a014f1
// declared property setter: - (void)setAssetLogging:(BOOL)logging;	// 0x30a0152d
// declared property setter: - (void)setAudioVolume:(float)volume;	// 0x30a014b5
// declared property setter: - (void)setDuration:(double)duration;	// 0x30a01465
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x30a014dd
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x30a01509
// declared property setter: - (void)setStartTime:(double)time;	// 0x30a01491
// declared property getter: - (double)startTime;	// 0x30a01479
@end

