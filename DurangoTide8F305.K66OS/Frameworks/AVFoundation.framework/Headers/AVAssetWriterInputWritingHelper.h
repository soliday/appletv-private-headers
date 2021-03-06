/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterInputHelper.h"
#import "AVFoundation-Structs.h"

@class AVAssetWriterInputMediaDataRequester, AVFigAssetWriterTrack;

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper {
@private
	AVFigAssetWriterTrack *_assetWriterTrack;	// 12 = 0xc
	AVAssetWriterInputMediaDataRequester *_mediaDataRequester;	// 16 = 0x10
	CVPixelBufferPoolRef _pixelBufferPool;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=_assetWriterTrack) AVFigAssetWriterTrack *assetWriterTrack;	// G=0x347525a9; @synthesize=_assetWriterTrack
@property(readonly, assign) CVPixelBufferPoolRef pixelBufferPool;	// G=0x34755c4d; converted property
+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;	// 0x34752c19
- (id)initWithConfigurationState:(id)configurationState;	// 0x34752c41
- (id)initWithConfigurationState:(id)configurationState assetWriterTrack:(id)track error:(id *)error;	// 0x34754ced
// declared property getter: - (id)_assetWriterTrack;	// 0x347525a9
- (BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x34755391
- (BOOL)appendSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x34755481
- (void)dealloc;	// 0x34754ed9
- (void)finalize;	// 0x34754e9d
- (BOOL)isReadyForMoreMediaData;	// 0x34752bed
- (void)markAsFinished;	// 0x34752b6d
// converted property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x34755c4d
- (BOOL)prepareToFinishWritingReturningError:(id *)finishWritingReturningError;	// 0x34752bc5
- (void)requestMediaDataWhenReadyOnQueue:(dispatch_queue_s *)queue usingBlock:(id)block;	// 0x34755545
- (int)status;	// 0x347525a5
- (void)transitionToTerminalStatus:(int)terminalStatus;	// 0x34755b71
@end

