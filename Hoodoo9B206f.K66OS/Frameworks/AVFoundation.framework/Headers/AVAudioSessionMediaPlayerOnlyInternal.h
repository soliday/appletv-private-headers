/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVWeakReference, NSString;
@protocol AVAudioSessionDelegateMediaPlayerOnly;

@interface AVAudioSessionMediaPlayerOnlyInternal : NSObject {
	AVWeakReference *weakReference;	// 4 = 0x4
	OpaqueFigPlayer *figPlayer;	// 8 = 0x8
	BOOL isAppAudioSession;	// 12 = 0xc
	BOOL isActive;	// 13 = 0xd
	NSString *category;	// 16 = 0x10
	NSString *mode;	// 20 = 0x14
	id<AVAudioSessionDelegateMediaPlayerOnly> delegate;	// 24 = 0x18
}
@end

