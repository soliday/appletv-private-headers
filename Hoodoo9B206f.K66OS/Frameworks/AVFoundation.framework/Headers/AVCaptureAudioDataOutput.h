/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCaptureOutput.h"
#import "AVFoundation-Structs.h"

@class AVCaptureAudioDataOutputInternal;
@protocol AVCaptureAudioDataOutputSampleBufferDelegate;

@interface AVCaptureAudioDataOutput : AVCaptureOutput {
@private
	AVCaptureAudioDataOutputInternal *_internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) dispatch_queue_s *sampleBufferCallbackQueue;	// G=0x326c7bf1; 
@property(readonly, assign, nonatomic) id<AVCaptureAudioDataOutputSampleBufferDelegate> sampleBufferDelegate;	// G=0x326c7bd1; 
+ (void)initialize;	// 0x326c785d
- (id)init;	// 0x326c7861
- (void)_AVCaptureAudioDataOutput_AudioDataBecameReady;	// 0x326c7da9
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x326c7c69
- (id)connectionMediaTypes;	// 0x326c7c11
- (void)dealloc;	// 0x326c78e1
- (void)didStartForSession:(id)session;	// 0x326c7d69
- (void)didStopForSession:(id)session error:(id)error;	// 0x326c7d55
- (void)handleEnabledChangedForConnection:(id)connection;	// 0x326c7cd9
- (BOOL)isTheOnlyDataOutput;	// 0x326c792d
// declared property getter: - (dispatch_queue_s *)sampleBufferCallbackQueue;	// 0x326c7bf1
// declared property getter: - (id)sampleBufferDelegate;	// 0x326c7bd1
- (void)setSampleBufferDelegate:(id)delegate queue:(dispatch_queue_s *)queue;	// 0x326c7add
- (void)setSession:(id)session;	// 0x326c7a6d
@end

