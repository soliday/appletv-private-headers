/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class MCMediaControlClientRemote;

@interface MCMediaControlReply : NSObject {
@private
	MCMediaControlClientRemote *_client;	// 4 = 0x4
	dispatch_queue_s *_completionQueue;	// 8 = 0x8
	id _completionBlock;	// 12 = 0xc
	BOOL _replySent;	// 16 = 0x10
	dispatch_queue_s *_queue;	// 20 = 0x14
	dispatch_source_s *_source;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) unsigned receivePort;	// G=0x346c530d; 
- (id)init;	// 0x346c501d
- (id)initWithClient:(id)client completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x346c506d
- (void)_sendReplyWithDictionary:(id)dictionary;	// 0x346c5801
- (void)_sendReplyWithErrorCode:(unsigned)errorCode;	// 0x346c56f5
- (void)_sendReplyWithErrorCode:(unsigned)errorCode picData:(id)data playerGUID:(id)guid;	// 0x346c5321
- (void)_sendReplyWithErrorCode:(unsigned)errorCode playbackInfo:(id)info;	// 0x346c58b5
- (void)_sendReplyWithErrorCode:(unsigned)errorCode position:(float)position duration:(float)duration;	// 0x346c54b5
- (void)_sendReplyWithErrorCode:(unsigned)errorCode volume:(float)volume;	// 0x346c55d9
- (void)dealloc;	// 0x346c5279
// declared property getter: - (unsigned)receivePort;	// 0x346c530d
@end

