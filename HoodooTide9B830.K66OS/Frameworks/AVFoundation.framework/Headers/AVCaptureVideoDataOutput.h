/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureOutput.h"

@class AVCaptureVideoDataOutputInternal, NSArray, NSDictionary;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate;

@interface AVCaptureVideoDataOutput : AVCaptureOutput {
@private
	AVCaptureVideoDataOutputInternal *_internal;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL alwaysDiscardsLateVideoFrames;	// G=0x35e62841; S=0x35e62861; 
@property(readonly, assign, nonatomic) NSArray *availableVideoCVPixelFormatTypes;	// G=0x35e62301; 
@property(readonly, assign, nonatomic) NSArray *availableVideoCodecTypes;	// G=0x35e623d5; 
@property(assign, nonatomic) XXStruct_pwHToB minFrameDuration;	// G=0x35e6268d; S=0x35e6276d; 
@property(readonly, assign, nonatomic) dispatch_queue_s *sampleBufferCallbackQueue;	// G=0x35e622e1; 
@property(readonly, assign, nonatomic) id<AVCaptureVideoDataOutputSampleBufferDelegate> sampleBufferDelegate;	// G=0x35e622c1; 
@property(copy, nonatomic) NSDictionary *videoSettings;	// G=0x35e623f1; S=0x35e6242d; 
+ (void)initialize;	// 0x35e61eb9
- (id)init;	// 0x35e61ebd
- (void)_AVCaptureVideoDataOutput_VideoDataBecameReady;	// 0x35e62fc9
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x35e629a5
- (id)addConnection:(id)connection error:(id *)error;	// 0x35e62921
// declared property getter: - (BOOL)alwaysDiscardsLateVideoFrames;	// 0x35e62841
// declared property getter: - (id)availableVideoCVPixelFormatTypes;	// 0x35e62301
// declared property getter: - (id)availableVideoCodecTypes;	// 0x35e623d5
- (id)connectionMediaTypes;	// 0x35e628c9
- (void)dealloc;	// 0x35e61fd1
- (void)didStartForSession:(id)session;	// 0x35e62f89
- (void)didStopForSession:(id)session error:(id)error;	// 0x35e62f75
- (void)handleEnabledChangedForConnection:(id)connection;	// 0x35e62ef9
- (BOOL)isTheOnlyDataOutput;	// 0x35e6201d
// declared property getter: - (XXStruct_pwHToB)minFrameDuration;	// 0x35e6268d
// declared property getter: - (dispatch_queue_s *)sampleBufferCallbackQueue;	// 0x35e622e1
// declared property getter: - (id)sampleBufferDelegate;	// 0x35e622c1
// declared property setter: - (void)setAlwaysDiscardsLateVideoFrames:(BOOL)frames;	// 0x35e62861
// declared property setter: - (void)setMinFrameDuration:(XXStruct_pwHToB)duration;	// 0x35e6276d
- (void)setSampleBufferDelegate:(id)delegate queue:(dispatch_queue_s *)queue;	// 0x35e621cd
- (void)setSession:(id)session;	// 0x35e6215d
// declared property setter: - (void)setVideoSettings:(id)settings;	// 0x35e6242d
// declared property getter: - (id)videoSettings;	// 0x35e623f1
@end

