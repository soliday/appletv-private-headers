/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTMusicScrubber.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, BRMediaPlayer;

@interface LTMusicScrubber : XXUnknownSuperclass {
	unsigned _skipCount;	// 4 = 0x4
	int _skipAdjustTimeInMS;	// 8 = 0x8
	double _nextSkipAdjustTime;	// 12 = 0xc
	double _skipAdjustTimeInterval;	// 20 = 0x14
	NSTimer *_musicSkipTimer;	// 28 = 0x1c
	BRMediaPlayer *_player;	// 32 = 0x20
}
- (id)initWithMediaPlayer:(id)mediaPlayer;	// 0x3d941
- (void)cancel;	// 0x3d889
- (void)startScrub:(int)scrub;	// 0x3d8c1
@end

@interface LTMusicScrubber (Private)
- (double)_nextTimeToAdvanceToFromTime:(double)time;	// 0x3d765
- (void)_performMusicSkipToTime:(id)time;	// 0x3d649
@end
