/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVWeakReference, AVPlayer;

@interface AVPlayerTimelyCaller : NSObject {
	AVWeakReference *_weakReference;	// 4 = 0x4
	AVPlayer *_player;	// 8 = 0x8
	dispatch_queue_s *_timerQueue;	// 12 = 0xc
	dispatch_source_s *_timerSource;	// 16 = 0x10
	BOOL _isTimerSourceRunning;	// 20 = 0x14
	BOOL _timerQueueIsPlayerStateDispatchQueue;	// 21 = 0x15
}
@property(readonly, retain) AVPlayer *player;	// G=0x3269780d; converted property
@property(readonly, assign, nonatomic, getter=_weakReference) AVWeakReference *weakReference;	// G=0x3269781d; @synthesize=_weakReference
- (id)initWithPlayer:(id)player queue:(dispatch_queue_s *)queue;	// 0x326973d1
// declared property getter: - (id)_weakReference;	// 0x3269781d
- (void)dealloc;	// 0x3269757d
- (void)finalize;	// 0x3269764d
- (void)invalidate;	// 0x326976ed
- (void)itemTimeJumped;	// 0x32697809
// converted property getter: - (id)player;	// 0x3269780d
@end

