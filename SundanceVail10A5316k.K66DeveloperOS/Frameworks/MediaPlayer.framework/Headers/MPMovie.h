/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, MPAVItem;

@interface MPMovie : NSObject {
@private
	MPAVItem *_item;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	int _movieSourceType;	// 12 = 0xc
	double _startPlaybackTime;	// 16 = 0x10
	double _endPlaybackTime;	// 24 = 0x18
	BOOL _explicitlySetMovieSourceType;	// 32 = 0x20
	BOOL _movieIsUnplayable;	// 33 = 0x21
	double _lastKnownDuration;	// 36 = 0x24
	CGSize _lastKnownNaturalSize;	// 44 = 0x2c
	unsigned _lastKnownType;	// 52 = 0x34
}
@property(readonly, assign, nonatomic) double duration;	// G=0x3488db69; 
@property(assign, nonatomic) double endPlaybackTime;	// G=0x3488dc81; S=0x3488dc6d; 
@property(readonly, assign, nonatomic) int movieMediaTypes;	// G=0x3488da9d; 
@property(assign, nonatomic) int movieSourceType;	// G=0x3488db59; S=0x3488dadd; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x3488dbf9; 
@property(readonly, assign, nonatomic) double playableDuration;	// G=0x3488dbb1; 
@property(assign, nonatomic) double startPlaybackTime;	// G=0x3488dc55; S=0x3488dc41; 
@property(readonly, assign, nonatomic) NSURL *url;	// G=0x3488da8d; 
+ (id)movieWithURL:(id)url options:(id)options error:(id *)error;	// 0x3488d799
- (id)_MPArrayQueueItem;	// 0x3488deed
- (void)_determineMediaType;	// 0x3488dfa9
- (void)_durationAvailableNotification:(id)notification;	// 0x3488dc99
- (id)_initWithURL:(id)url options:(id)options error:(id *)error;	// 0x3488d7ed
- (void)_naturalSizeAvailableNotification:(id)notification;	// 0x3488dd59
- (void)_typeAvailableNotification:(id)notification;	// 0x3488de3d
- (void)dealloc;	// 0x3488d9a1
// declared property getter: - (double)duration;	// 0x3488db69
// declared property getter: - (double)endPlaybackTime;	// 0x3488dc81
// declared property getter: - (int)movieMediaTypes;	// 0x3488da9d
// declared property getter: - (int)movieSourceType;	// 0x3488db59
// declared property getter: - (CGSize)naturalSize;	// 0x3488dbf9
// declared property getter: - (double)playableDuration;	// 0x3488dbb1
// declared property setter: - (void)setEndPlaybackTime:(double)time;	// 0x3488dc6d
// declared property setter: - (void)setMovieSourceType:(int)type;	// 0x3488dadd
// declared property setter: - (void)setStartPlaybackTime:(double)time;	// 0x3488dc41
// declared property getter: - (double)startPlaybackTime;	// 0x3488dc55
// declared property getter: - (id)url;	// 0x3488da8d
@end
