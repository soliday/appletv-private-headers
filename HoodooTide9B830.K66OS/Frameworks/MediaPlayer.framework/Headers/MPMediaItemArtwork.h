/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPMediaItemArtwork : NSObject {
@private
	MPMediaItemArtworkInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaItemArtworkInternal _internal;	// G=0x34687c8d; S=0x34687ca1; @synthesize
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x34687c01; 
@property(readonly, assign, nonatomic) CGRect imageCropRect;	// G=0x34687c69; 
- (id)initWithImage:(id)image;	// 0x34687a0d
// declared property getter: - (MPMediaItemArtworkInternal)_internal;	// 0x34687c8d
- (id)albumImageDataWithSize:(CGSize)size;	// 0x34687bd9
- (id)albumImageWithSize:(CGSize)size;	// 0x34687bb1
// declared property getter: - (CGRect)bounds;	// 0x34687c01
- (id)coverFlowImageWithSize:(CGSize)size;	// 0x34687b89
- (void)dealloc;	// 0x34687aad
- (BOOL)hasArtworkAvailable;	// 0x34687af9
// declared property getter: - (CGRect)imageCropRect;	// 0x34687c69
- (id)imageDataWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;	// 0x34687b5d
- (id)imageWithSize:(CGSize)size;	// 0x34687afd
- (id)imageWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;	// 0x34687b25
// declared property setter: - (void)set_internal:(MPMediaItemArtworkInternal)internal;	// 0x34687ca1
@end

