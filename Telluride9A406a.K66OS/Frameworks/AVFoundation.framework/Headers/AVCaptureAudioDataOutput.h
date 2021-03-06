/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureOutput.h"

@class AVCaptureAudioDataOutputInternal;
@protocol AVCaptureAudioDataOutputSampleBufferDelegate;

@interface AVCaptureAudioDataOutput : AVCaptureOutput {
@private
	AVCaptureAudioDataOutputInternal *_internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) dispatch_queue_s *sampleBufferCallbackQueue;	// G=0x30ea8f31; 
@property(readonly, assign, nonatomic) id<AVCaptureAudioDataOutputSampleBufferDelegate> sampleBufferDelegate;	// G=0x30ea8f11; 
+ (void)initialize;	// 0x30ea8f0d
- (id)init;	// 0x30ea8f95
- (void)_AVCaptureAudioDataOutput_AudioDataBecameReady;	// 0x30ea9021
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x30ea9289
- (id)connectionMediaTypes;	// 0x30ea92f9
- (void)dealloc;	// 0x30ea95f9
- (void)didStartForSession:(id)session;	// 0x30ea91b9
- (void)didStopForSession:(id)session error:(id)error;	// 0x30ea91f9
- (void)handleEnabledChangedForConnection:(id)connection;	// 0x30ea920d
- (BOOL)isTheOnlyDataOutput;	// 0x30ea94b5
// declared property getter: - (dispatch_queue_s *)sampleBufferCallbackQueue;	// 0x30ea8f31
// declared property getter: - (id)sampleBufferDelegate;	// 0x30ea8f11
- (void)setSampleBufferDelegate:(id)delegate queue:(dispatch_queue_s *)queue;	// 0x30ea9351
- (void)setSession:(id)session;	// 0x30ea9445
@end

