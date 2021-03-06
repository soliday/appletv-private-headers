/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterInputHelper.h"
#import "AVFoundation-Structs.h"

@class AVFigAssetWriterTrack, AVAssetWriterInputMediaDataRequester;

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper {
@private
	AVFigAssetWriterTrack *_assetWriterTrack;	// 12 = 0xc
	AVAssetWriterInputMediaDataRequester *_mediaDataRequester;	// 16 = 0x10
	CVPixelBufferPoolRef _pixelBufferPool;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=_assetWriterTrack) AVFigAssetWriterTrack *assetWriterTrack;	// G=0x3673706d; @synthesize=_assetWriterTrack
@property(readonly, assign) CVPixelBufferPoolRef pixelBufferPool;	// G=0x36736f45; converted property
+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;	// 0x36736a01
- (id)initWithConfigurationState:(id)configurationState;	// 0x36736579
- (id)initWithConfigurationState:(id)configurationState assetWriterTrack:(id)track error:(id *)error;	// 0x36736599
// declared property getter: - (id)_assetWriterTrack;	// 0x3673706d
- (BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x36736c89
- (BOOL)appendSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x36736bb5
- (void)dealloc;	// 0x36736949
- (void)finalize;	// 0x367369bd
- (BOOL)isReadyForMoreMediaData;	// 0x36736a29
- (void)markAsFinished;	// 0x36736dd9
// converted property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x36736f45
- (void)prepareToEndSession;	// 0x36736d85
- (BOOL)prepareToFinishWritingReturningError:(id *)finishWritingReturningError;	// 0x36736dad
- (void)requestMediaDataWhenReadyOnQueue:(id)queue usingBlock:(id)block;	// 0x36736a5d
- (int)status;	// 0x367369fd
- (int)trackID;	// 0x36736e39
- (void)transitionToTerminalStatus:(int)terminalStatus;	// 0x36736e61
@end

