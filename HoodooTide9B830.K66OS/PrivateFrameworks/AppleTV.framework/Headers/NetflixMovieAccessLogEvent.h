/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NetflixMovieAccessLogEvent : NSObject {
@private
	double indicatedBitrate_;	// 4 = 0x4
	double observedBitrate_;	// 12 = 0xc
	int numberOfStalls_;	// 20 = 0x14
	long long numberOfBytesTransferred_;	// 24 = 0x18
	double durationWatched_;	// 32 = 0x20
	int numberOfSegmentsDownloaded_;	// 40 = 0x28
	double segmentsDownloadedDuration_;	// 44 = 0x2c
}
@property(assign, nonatomic) double durationWatched;	// G=0x32ca2649; S=0x32ca2661; @synthesize=durationWatched_
@property(assign, nonatomic) double indicatedBitrate;	// G=0x32ca25a5; S=0x32ca25bd; @synthesize=indicatedBitrate_
@property(assign, nonatomic) long long numberOfBytesTransferred;	// G=0x32ca261d; S=0x32ca2635; @synthesize=numberOfBytesTransferred_
@property(assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x32ca2675; S=0x32ca2685; @synthesize=numberOfSegmentsDownloaded_
@property(assign, nonatomic) int numberOfStalls;	// G=0x32ca25fd; S=0x32ca260d; @synthesize=numberOfStalls_
@property(assign, nonatomic) double observedBitrate;	// G=0x32ca25d1; S=0x32ca25e9; @synthesize=observedBitrate_
@property(assign, nonatomic) double segmentsDownloadedDuration;	// G=0x32ca2695; S=0x32ca26ad; @synthesize=segmentsDownloadedDuration_
// declared property getter: - (double)durationWatched;	// 0x32ca2649
// declared property getter: - (double)indicatedBitrate;	// 0x32ca25a5
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x32ca261d
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x32ca2675
// declared property getter: - (int)numberOfStalls;	// 0x32ca25fd
// declared property getter: - (double)observedBitrate;	// 0x32ca25d1
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x32ca2695
// declared property setter: - (void)setDurationWatched:(double)watched;	// 0x32ca2661
// declared property setter: - (void)setIndicatedBitrate:(double)bitrate;	// 0x32ca25bd
// declared property setter: - (void)setNumberOfBytesTransferred:(long long)bytesTransferred;	// 0x32ca2635
// declared property setter: - (void)setNumberOfSegmentsDownloaded:(int)segmentsDownloaded;	// 0x32ca2685
// declared property setter: - (void)setNumberOfStalls:(int)stalls;	// 0x32ca260d
// declared property setter: - (void)setObservedBitrate:(double)bitrate;	// 0x32ca25e9
// declared property setter: - (void)setSegmentsDownloadedDuration:(double)duration;	// 0x32ca26ad
@end

