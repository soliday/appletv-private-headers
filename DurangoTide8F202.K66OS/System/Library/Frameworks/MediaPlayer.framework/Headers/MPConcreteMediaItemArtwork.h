/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import "MPMediaItemArtwork.h"

@class MPMediaLibrary;

@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork <NSCoding> {
@private
	unsigned long long _itemPersistentID;	// 4 = 0x4
	MPMediaLibrary *_library;	// 12 = 0xc
	CGRect _bounds;	// 16 = 0x10
	CGRect _cropRect;	// 32 = 0x20
}
@property(readonly, assign) CGRect bounds;	// G=0x31de7015; converted property
- (id)initWithCoder:(id)coder;	// 0x31de438d
- (void)_fixupBoundsForImage:(id)image;	// 0x31de6609
- (id)_initWithItem:(id)item;	// 0x31de5531
- (id)albumImageWithSize:(CGSize)size;	// 0x31de67a9
// converted property getter: - (CGRect)bounds;	// 0x31de7015
- (id)coverFlowImageWithSize:(CGSize)size;	// 0x31de6691
- (void)dealloc;	// 0x31de54e9
- (void)encodeWithCoder:(id)coder;	// 0x31de4319
- (BOOL)hasArtworkAvailable;	// 0x31de4441
- (CGRect)imageCropRect;	// 0x31de818d
- (id)imageWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;	// 0x31de6c91
@end
