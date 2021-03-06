/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class StreamData, IndexData, DRMData, AudioData, VideoData;

__attribute__((visibility("hidden")))
@interface StreamHeader : NSObject {
@private
	StreamData *streamData;	// 4 = 0x4
	VideoData *videoData;	// 8 = 0x8
	AudioData *audioData;	// 12 = 0xc
	DRMData *playReady;	// 16 = 0x10
	DRMData *netflixKeyEnvelope;	// 20 = 0x14
	IndexData *indexData;	// 24 = 0x18
}
- (id)initWithBuffer:(id)buffer;	// 0x3373ab68
- (void)dealloc;	// 0x3373aa8c
- (id)getAudioData;	// 0x3373aa3c
- (id)getIndexData;	// 0x3373aa78
- (id)getNetflixKeyEnvelope;	// 0x3373aa64
- (id)getPlayReady;	// 0x3373aa50
- (id)getStreamData;	// 0x3373aa14
- (id)getVideoData;	// 0x3373aa28
@end

