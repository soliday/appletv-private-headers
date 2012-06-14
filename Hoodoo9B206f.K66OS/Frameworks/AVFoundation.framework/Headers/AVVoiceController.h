/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;
@protocol AVVoiceControllerRecordDelegate, Endpointer, AVVoiceControllerPlaybackDelegate;

@interface AVVoiceController : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(assign) float alertVolume;	// G=0x32702e75; S=0x32702d85; 
@property(assign, getter=isBargeInDetectEnabled) BOOL bargeInDetectEnabled;	// G=0x326ffa65; S=0x326ffa7d; 
@property(assign) id<Endpointer> endpointerDelegate;	// G=0x32702a5d; S=0x32702a71; 
@property(assign) int hardwareConfiguration;	// G=0x3270058d; S=0x327005a1; 
@property(readonly, assign) unsigned long long lastRecordStartTime;	// G=0x326ffa51; 
@property(assign, getter=isMeteringEnabled) BOOL meteringEnabled;	// G=0x32702f8d; S=0x32702fa5; 
@property(assign) id<AVVoiceControllerPlaybackDelegate> playbackDelegate;	// G=0x32702cb1; S=0x32702cc5; @dynamic
@property(readonly, assign) NSDictionary *playbackSettings;	// G=0x32702ce9; 
@property(assign) float playbackVolume;	// G=0x32702f79; S=0x32702e89; 
@property(readonly, assign, getter=isPlaying) BOOL playing;	// G=0x32702d49; 
@property(assign) id<AVVoiceControllerRecordDelegate> recordDelegate;	// G=0x3270295d; S=0x32702971; @dynamic
@property(assign) double recordEndWaitTime;	// G=0x32702c35; S=0x32702c4d; 
@property(assign) int recordEndpointMode;	// G=0x32702ae9; S=0x32702afd; 
@property(assign) double recordInterspeechWaitTime;	// G=0x32702bb9; S=0x32702bd1; 
@property(readonly, assign) NSString *recordRoute;	// G=0x326ffa3d; 
@property(readonly, assign) NSDictionary *recordSettings;	// G=0x32702995; 
@property(assign) double recordStartWaitTime;	// G=0x32702b3d; S=0x32702b55; 
@property(readonly, assign, getter=isRecording) BOOL recording;	// G=0x32702d61; 
@property(assign, getter=isStopOnBargeInEnabled) BOOL stopOnBargeInEnabled;	// G=0x326ffa9d; S=0x326ffab5; 
@property(assign, getter=isStopOnEndpointEnabled) BOOL stopOnEndpointEnabled;	// G=0x32703255; S=0x3270326d; 
- (id)init;	// 0x326fe899
- (id)initWithHardwareConfig:(int)hardwareConfig error:(id *)error;	// 0x326ffba1
// declared property getter: - (float)alertVolume;	// 0x32702e75
- (float)averagePowerForChannel:(unsigned)channel;	// 0x32703221
- (void)beganPlaying;	// 0x326ff59d
- (void)beganRecording;	// 0x326ff2b9
- (void)beginPlaybackInterruption;	// 0x326ff9dd
- (void)beginRecordInterruption;	// 0x326ff97d
- (void)dealloc;	// 0x326ffec5
- (void)decodeError;	// 0x326ff8ed
- (void)encodeError;	// 0x326ff50d
- (void)endPlaybackInterruption;	// 0x326ffa0d
- (void)endRecordInterruption;	// 0x326ff9ad
- (void)endpointDetected;	// 0x326ff4ad
// declared property getter: - (id)endpointerDelegate;	// 0x32702a5d
- (void)finalize;	// 0x326ffd1d
- (void)finishedPlaying;	// 0x326ff665
- (void)finishedRecording;	// 0x326ff385
- (double)getPlaybackBufferDuration;	// 0x32702cfd
- (double)getRecordBufferDuration;	// 0x327029a9
- (void)hardwareConfigChanged;	// 0x326ff0b1
// declared property getter: - (int)hardwareConfiguration;	// 0x3270058d
- (ControllerImpl *)impl;	// 0x326fe889
- (void)interspeechPointDetected;	// 0x326ff449
// declared property getter: - (BOOL)isBargeInDetectEnabled;	// 0x326ffa65
// declared property getter: - (BOOL)isMeteringEnabled;	// 0x32702f8d
// declared property getter: - (BOOL)isPlaying;	// 0x32702d49
// declared property getter: - (BOOL)isRecording;	// 0x32702d61
// declared property getter: - (BOOL)isStopOnBargeInEnabled;	// 0x326ffa9d
// declared property getter: - (BOOL)isStopOnEndpointEnabled;	// 0x32703255
// declared property getter: - (unsigned long long)lastRecordStartTime;	// 0x326ffa51
- (float)peakPowerForChannel:(unsigned)channel;	// 0x327031ed
- (BOOL)playAlertSoundForType:(int)type;	// 0x32701895
- (void)playbackBufferReceived:(MyAudioQueueBuffer *)received;	// 0x326ff5ed
// declared property getter: - (id)playbackDelegate;	// 0x32702cb1
// declared property getter: - (id)playbackSettings;	// 0x32702ce9
// declared property getter: - (float)playbackVolume;	// 0x32702f79
- (BOOL)preparePlaybackFromURL:(id)url error:(id *)error;	// 0x32702109
- (BOOL)preparePlaybackWithSettings:(id)settings error:(id *)error;	// 0x32701c95
- (BOOL)prepareRecordWithSettings:(id)settings error:(id *)error;	// 0x32700b81
- (void)recordBufferReceived:(MyAudioQueueBuffer *)received;	// 0x326ff311
// declared property getter: - (id)recordDelegate;	// 0x3270295d
// declared property getter: - (double)recordEndWaitTime;	// 0x32702c35
// declared property getter: - (int)recordEndpointMode;	// 0x32702ae9
// declared property getter: - (double)recordInterspeechWaitTime;	// 0x32702bb9
// declared property getter: - (id)recordRoute;	// 0x326ffa3d
// declared property getter: - (id)recordSettings;	// 0x32702995
// declared property getter: - (double)recordStartWaitTime;	// 0x32702b3d
- (void)releaseAudioSession;	// 0x327004c9
- (BOOL)setAlertSoundFromURL:(id)url forType:(int)type;	// 0x32701809
// declared property setter: - (void)setAlertVolume:(float)volume;	// 0x32702d85
// declared property setter: - (void)setBargeInDetectEnabled:(BOOL)detectEnabled;	// 0x326ffa7d
// declared property setter: - (void)setEndpointerDelegate:(id)delegate;	// 0x32702a71
// declared property setter: - (void)setHardwareConfiguration:(int)configuration;	// 0x327005a1
// declared property setter: - (void)setMeteringEnabled:(BOOL)enabled;	// 0x32702fa5
- (BOOL)setPlaybackBufferDuration:(double)duration;	// 0x32702d15
// declared property setter: - (void)setPlaybackDelegate:(id)delegate;	// 0x32702cc5
// declared property setter: - (void)setPlaybackVolume:(float)volume;	// 0x32702e89
- (BOOL)setRecordBufferDuration:(double)duration;	// 0x32702a05
// declared property setter: - (void)setRecordDelegate:(id)delegate;	// 0x32702971
// declared property setter: - (void)setRecordEndWaitTime:(double)time;	// 0x32702c4d
// declared property setter: - (void)setRecordEndpointMode:(int)mode;	// 0x32702afd
// declared property setter: - (void)setRecordInterspeechWaitTime:(double)time;	// 0x32702bd1
// declared property setter: - (void)setRecordStartWaitTime:(double)time;	// 0x32702b55
// declared property setter: - (void)setStopOnBargeInEnabled:(BOOL)enabled;	// 0x326ffab5
// declared property setter: - (void)setStopOnEndpointEnabled:(BOOL)enabled;	// 0x3270326d
- (BOOL)startPlaying;	// 0x32702745
- (BOOL)startRecording;	// 0x32701afd
- (void)startpointDetected;	// 0x326ff3e9
- (void)stopPlaying;	// 0x32702949
- (void)stopRecording;	// 0x32701c7d
- (void)updateMeters;	// 0x327030cd
@end
