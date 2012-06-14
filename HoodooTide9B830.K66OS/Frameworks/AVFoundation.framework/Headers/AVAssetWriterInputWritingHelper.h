/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetWriterInputHelper.h"

@class AVAssetWriterInputMediaDataRequester, AVFigAssetWriterTrack;

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper {
@private
	AVFigAssetWriterTrack *_assetWriterTrack;	// 12 = 0xc
	AVAssetWriterInputMediaDataRequester *_mediaDataRequester;	// 16 = 0x10
	CVPixelBufferPoolRef _pixelBufferPool;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=_assetWriterTrack) AVFigAssetWriterTrack *assetWriterTrack;	// G=0x35e372b9; @synthesize=_assetWriterTrack
@property(readonly, assign) CVPixelBufferPoolRef pixelBufferPool;	// G=0x35e37115; converted property
+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;	// 0x35e36be5
- (id)initWithConfigurationState:(id)configurationState;	// 0x35e36931
- (id)initWithConfigurationState:(id)configurationState assetWriterTrack:(id)track error:(id *)error;	// 0x35e36951
// declared property getter: - (id)_assetWriterTrack;	// 0x35e372b9
- (BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x35e36e85
- (BOOL)appendSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x35e36db1
- (void)dealloc;	// 0x35e36b2d
- (void)finalize;	// 0x35e36ba1
- (BOOL)isReadyForMoreMediaData;	// 0x35e36c0d
- (void)markAsFinished;	// 0x35e36fd5
// converted property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x35e37115
- (void)prepareToEndSession;	// 0x35e36f81
- (BOOL)prepareToFinishWritingReturningError:(id *)finishWritingReturningError;	// 0x35e36fa9
- (void)requestMediaDataWhenReadyOnQueue:(dispatch_queue_s *)queue usingBlock:(id)block;	// 0x35e36c41
- (int)status;	// 0x35e36be1
- (void)transitionToTerminalStatus:(int)terminalStatus;	// 0x35e37031
@end

