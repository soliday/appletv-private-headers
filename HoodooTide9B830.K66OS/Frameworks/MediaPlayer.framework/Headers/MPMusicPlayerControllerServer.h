/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMusicPlayerControllerServerInternal, MPAVController;

@interface MPMusicPlayerControllerServer : NSObject {
@private
	MPMusicPlayerControllerServerInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) MPAVController *player;	// G=0x34695255; 
+ (void)initialize;	// 0x34694fdd
+ (BOOL)isMusicPlayerControllerServerRunning;	// 0x34695115
+ (id)sharedInstance;	// 0x3469512d
+ (void)startMusicPlayerControllerServerWithDelegate:(id)delegate;	// 0x34695049
- (id)initWithDelegate:(id)delegate;	// 0x3469513d
- (void)_runMigServer;	// 0x34698499
- (void)dealloc;	// 0x346951c5
- (void)forwardInvocation:(id)invocation;	// 0x34695211
- (id)methodSignatureForSelector:(SEL)selector;	// 0x34695235
// declared property getter: - (id)player;	// 0x34695255
@end

