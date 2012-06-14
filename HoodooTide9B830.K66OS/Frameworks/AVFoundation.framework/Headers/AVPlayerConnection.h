/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVWeakReference, NSError, AVPlayer, AVPlayerItem;

@interface AVPlayerConnection : NSObject {
@private
	AVWeakReference *_playerReference;	// 4 = 0x4
	AVWeakReference *_playerItemReference;	// 8 = 0x8
	BOOL _shouldAppendItem;	// 12 = 0xc
	int _status;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	AVPlayerItem *_previousPlayerItem;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSError *error;	// G=0x35e2743d; 
@property(readonly, assign, nonatomic) AVPlayer *player;	// G=0x35e26ce1; 
@property(readonly, assign, nonatomic) AVPlayerItem *playerItem;	// G=0x35e26d01; 
@property(readonly, assign, nonatomic) dispatch_queue_s *serializationQueue;	// G=0x35e2744d; 
@property(readonly, assign, nonatomic) int status;	// G=0x35e2742d; 
- (id)initWithWeakReferenceToPlayer:(id)player weakReferenceToPlayerItem:(id)playerItem shouldAppendItem:(BOOL)item;	// 0x35e26aa1
- (BOOL)addItemToPlayQueue;	// 0x35e26d21
- (void)dealloc;	// 0x35e26bfd
- (id)description;	// 0x35e26c5d
- (void)ensureItemAddedToPlayQueueWithCompletionHandler:(id)completionHandler;	// 0x35e26f39
// declared property getter: - (id)error;	// 0x35e2743d
// declared property getter: - (id)player;	// 0x35e26ce1
// declared property getter: - (id)playerItem;	// 0x35e26d01
- (void)removeItemFromPlayQueue;	// 0x35e272f9
// declared property getter: - (dispatch_queue_s *)serializationQueue;	// 0x35e2744d
// declared property getter: - (int)status;	// 0x35e2742d
@end

