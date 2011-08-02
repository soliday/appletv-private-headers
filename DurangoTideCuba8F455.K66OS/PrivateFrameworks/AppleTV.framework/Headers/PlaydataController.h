/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PlaydataController : NSObject {
}
+ (void)cleanUp;	// 0x30844180
+ (id)instance;	// 0x308441bc
- (id)init;	// 0x30844344
- (void)changeState:(int)state;	// 0x30844070
- (void)dealloc;	// 0x3084410c
- (void)downloadableDidChange:(unsigned)downloadable playbackPosition:(double)position;	// 0x308440b4
- (void)playbackDidEnd:(double)playback;	// 0x30844bcc
- (void)playbackDidPause:(double)playback;	// 0x30844624
- (void)playbackDidResume:(double)playback;	// 0x30844768
- (void)playbackDidStart:(unsigned)playback position:(double)position;	// 0x308448ac
- (void)playbackNewSession;	// 0x30844210
- (void)playbackRetrySend;	// 0x308443f4
- (void)playbackUpdateProgress:(double)progress;	// 0x308444f8
- (BOOL)sessionOpened;	// 0x30844080
- (id)stringWithState:(int)state;	// 0x30843fdc
- (void)updatePersistor:(double)persistor;	// 0x30844d90
@end
