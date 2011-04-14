/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSURL;

@interface MPMovie : NSObject {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double duration;	// G=0x31dd9ee9; 
@property(assign, nonatomic) double endPlaybackTime;	// G=0x31dd99d1; S=0x31dd99b1; 
@property(readonly, assign, nonatomic) int movieMediaTypes;	// G=0x31dda365; 
@property(assign, nonatomic) int movieSourceType;	// G=0x31dd9959; S=0x31dd9f15; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x31dda46d; 
@property(readonly, assign, nonatomic) double playableDuration;	// G=0x31dd9ebd; 
@property(assign, nonatomic) double startPlaybackTime;	// G=0x31dd9995; S=0x31dd9975; 
@property(readonly, assign, nonatomic) NSURL *url;	// G=0x31dd993d; 
+ (id)movieWithURL:(id)url error:(id *)error;	// 0x31dda321
- (id)_MPArrayQueueItem;	// 0x31dd99ed
- (void)_determineMediaType;	// 0x31dda49d
- (void)_durationAvailableNotification:(id)notification;	// 0x31dd9e05
- (void)_fileValidationDidFinishNotification:(id)_fileValidation;	// 0x31dd9afd
- (id)_initWithURL:(id)url error:(id *)error;	// 0x31dda149
- (void)_naturalSizeAvailableNotification:(id)notification;	// 0x31dda3a9
- (void)_typeAvailableNotification:(id)notification;	// 0x31dd9d55
- (void)dealloc;	// 0x31dd9f99
// declared property getter: - (double)duration;	// 0x31dd9ee9
// declared property getter: - (double)endPlaybackTime;	// 0x31dd99d1
// declared property getter: - (int)movieMediaTypes;	// 0x31dda365
// declared property getter: - (int)movieSourceType;	// 0x31dd9959
// declared property getter: - (CGSize)naturalSize;	// 0x31dda46d
// declared property getter: - (double)playableDuration;	// 0x31dd9ebd
// declared property setter: - (void)setEndPlaybackTime:(double)time;	// 0x31dd99b1
// declared property setter: - (void)setMovieSourceType:(int)type;	// 0x31dd9f15
// declared property setter: - (void)setStartPlaybackTime:(double)time;	// 0x31dd9975
// declared property getter: - (double)startPlaybackTime;	// 0x31dd9995
// declared property getter: - (id)url;	// 0x31dd993d
@end
