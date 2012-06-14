/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVWeakReference, AVAsset;

@interface AVPlayerItemTrackInternal : NSObject {
	AVWeakReference *weakReferenceToPlayerItem;	// 4 = 0x4
	OpaqueFigPlaybackItem *figPlaybackItem;	// 8 = 0x8
	int trackID;	// 12 = 0xc
	CFNumberRef mediaTypeRef;	// 16 = 0x10
	AVAsset *asset;	// 20 = 0x14
}
@end

