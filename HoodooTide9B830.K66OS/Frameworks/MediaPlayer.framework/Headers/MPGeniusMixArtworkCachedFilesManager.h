/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"


@interface MPGeniusMixArtworkCachedFilesManager : NSObject {
@private
	dispatch_queue_s *_cleanupQueue;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x346ac04d
- (id)init;	// 0x346ac0b9
- (void)cleanupIfNecessaryWithCompletionHandler:(id)completionHandler;	// 0x346ac2dd
- (void)dealloc;	// 0x346ac299
@end

