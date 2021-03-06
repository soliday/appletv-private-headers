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
@property(readonly, assign, nonatomic) dispatch_queue_s *sampleBufferCallbackQueue;	// G=0x346cef31; 
@property(readonly, assign, nonatomic) id<AVCaptureAudioDataOutputSampleBufferDelegate> sampleBufferDelegate;	// G=0x346cef11; 
+ (void)initialize;	// 0x346cef0d
- (id)init;	// 0x346cef95
- (void)_AVCaptureAudioDataOutput_AudioDataBecameReady;	// 0x346cf021
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x346cf289
- (id)connectionMediaTypes;	// 0x346cf2f9
- (void)dealloc;	// 0x346cf5f9
- (void)didStartForSession:(id)session;	// 0x346cf1b9
- (void)didStopForSession:(id)session error:(id)error;	// 0x346cf1f9
- (void)handleEnabledChangedForConnection:(id)connection;	// 0x346cf20d
- (BOOL)isTheOnlyDataOutput;	// 0x346cf4b5
// declared property getter: - (dispatch_queue_s *)sampleBufferCallbackQueue;	// 0x346cef31
// declared property getter: - (id)sampleBufferDelegate;	// 0x346cef11
- (void)setSampleBufferDelegate:(id)delegate queue:(dispatch_queue_s *)queue;	// 0x346cf351
- (void)setSession:(id)session;	// 0x346cf445
@end

