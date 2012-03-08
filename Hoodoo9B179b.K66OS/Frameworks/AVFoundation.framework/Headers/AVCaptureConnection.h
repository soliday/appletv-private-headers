/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, AVCaptureOutput, AVCaptureConnectionInternal;

@interface AVCaptureConnection : NSObject {
@private
	AVCaptureConnectionInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isActive) BOOL active;	// G=0x30aeee6d; 
@property(readonly, assign, nonatomic) NSArray *audioChannels;	// G=0x30aef109; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x30aeeead; S=0x30aeeecd; 
@property(readonly, assign, nonatomic) NSArray *inputPorts;	// G=0x30aeee29; 
@property(readonly, assign, nonatomic) AVCaptureOutput *output;	// G=0x30aeede5; 
@property(readonly, assign, nonatomic, getter=isVideoMaxFrameDurationSupported) BOOL supportsVideoMaxFrameDuration;	// G=0x30aefeb5; 
@property(readonly, assign, nonatomic, getter=isVideoMinFrameDurationSupported) BOOL supportsVideoMinFrameDuration;	// G=0x30aefab1; 
@property(readonly, assign, nonatomic, getter=isVideoMirroringSupported) BOOL supportsVideoMirroring;	// G=0x30aef8ad; 
@property(readonly, assign, nonatomic, getter=isVideoOrientationSupported) BOOL supportsVideoOrientation;	// G=0x30aef999; 
@property(assign) CGRect videoCropRect;	// G=0x30af0309; S=0x30af0399; converted property
@property(assign) BOOL videoFirstAndLastFramesUncropped;	// G=0x30af06d5; S=0x30af0751; converted property
@property(assign, nonatomic) XXStruct_pwHToB videoMaxFrameDuration;	// G=0x30aefedd; S=0x30af004d; 
@property(readonly, assign, nonatomic) float videoMaxScaleAndCropFactor;	// G=0x30af01f1; 
@property(assign, nonatomic) XXStruct_pwHToB videoMinFrameDuration;	// G=0x30aefba1; S=0x30aefd11; 
@property(assign, nonatomic, getter=isVideoMirrored) BOOL videoMirrored;	// G=0x30aef8e5; S=0x30aef905; 
@property(assign) CGSize videoMotionFilterOverlapRatios;	// G=0x30af0865; S=0x30af08ed; converted property
@property(assign, nonatomic) int videoOrientation;	// G=0x30aef9d1; S=0x30aef9f1; 
@property(assign) int videoRetainedBufferCountHint;	// G=0x30af0545; S=0x30af05c1; converted property
@property(assign, nonatomic) float videoScaleAndCropFactor;	// G=0x30af0211; S=0x30af0231; 
+ (id)connectionWithInputPorts:(id)inputPorts output:(id)output;	// 0x30aee30d
- (id)initWithInputPorts:(id)inputPorts output:(id)output;	// 0x30aee35d
- (void)addInputPort:(id)port;	// 0x30aeea99
// declared property getter: - (id)audioChannels;	// 0x30aef109
- (void)dealloc;	// 0x30aeea29
- (float)getAvgAudioLevelForChannel:(id)channel;	// 0x30aef325
- (float)getPeakAudioLevelForChannel:(id)channel;	// 0x30aef4a5
- (void)inputPortFormatDescriptionChanged:(id)changed;	// 0x30aeea89
// declared property getter: - (id)inputPorts;	// 0x30aeee29
- (void)invalidate;	// 0x30aeeb71
// declared property getter: - (BOOL)isActive;	// 0x30aeee6d
// declared property getter: - (BOOL)isEnabled;	// 0x30aeeead
- (BOOL)isLive;	// 0x30aeef71
- (BOOL)isVideoCropRectSupported;	// 0x30af0305
- (BOOL)isVideoFirstAndLastFramesUncroppedSupported;	// 0x30af0681
// declared property getter: - (BOOL)isVideoMaxFrameDurationSupported;	// 0x30aefeb5
// declared property getter: - (BOOL)isVideoMinFrameDurationSupported;	// 0x30aefab1
// declared property getter: - (BOOL)isVideoMirrored;	// 0x30aef8e5
// declared property getter: - (BOOL)isVideoMirroringSupported;	// 0x30aef8ad
- (BOOL)isVideoMotionFilterOverlapRatiosSupported;	// 0x30af0811
// declared property getter: - (BOOL)isVideoOrientationSupported;	// 0x30aef999
- (BOOL)isVideoRetainedBufferCountHintSupported;	// 0x30af04a1
- (id)mediaType;	// 0x30aef0ad
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30af0b31
// declared property getter: - (id)output;	// 0x30aeede5
- (void)removeInputPort:(id)port;	// 0x30aeeb05
- (void)setActive:(BOOL)active;	// 0x30aeee8d
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x30aeeecd
// converted property setter: - (void)setVideoCropRect:(CGRect)rect;	// 0x30af0399
// converted property setter: - (void)setVideoFirstAndLastFramesUncropped:(BOOL)uncropped;	// 0x30af0751
// declared property setter: - (void)setVideoMaxFrameDuration:(XXStruct_pwHToB)duration;	// 0x30af004d
// declared property setter: - (void)setVideoMinFrameDuration:(XXStruct_pwHToB)duration;	// 0x30aefd11
// declared property setter: - (void)setVideoMirrored:(BOOL)mirrored;	// 0x30aef905
// converted property setter: - (void)setVideoMotionFilterOverlapRatios:(CGSize)ratios;	// 0x30af08ed
// declared property setter: - (void)setVideoOrientation:(int)orientation;	// 0x30aef9f1
// converted property setter: - (void)setVideoRetainedBufferCountHint:(int)hint;	// 0x30af05c1
// declared property setter: - (void)setVideoScaleAndCropFactor:(float)factor;	// 0x30af0231
- (BOOL)sourcesFromFrontFacingCamera;	// 0x30af09e1
- (void)updateAudioChannelsArray;	// 0x30aef625
- (void)updateAudioLevelsArray;	// 0x30aef1e5
// converted property getter: - (CGRect)videoCropRect;	// 0x30af0309
// converted property getter: - (BOOL)videoFirstAndLastFramesUncropped;	// 0x30af06d5
// declared property getter: - (XXStruct_pwHToB)videoMaxFrameDuration;	// 0x30aefedd
- (BOOL)videoMaxFrameDurationIsSet;	// 0x30af0185
- (int)videoMaxFrameRate;	// 0x30aefb3d
// declared property getter: - (float)videoMaxScaleAndCropFactor;	// 0x30af01f1
// declared property getter: - (XXStruct_pwHToB)videoMinFrameDuration;	// 0x30aefba1
- (BOOL)videoMinFrameDurationIsSet;	// 0x30aefe49
- (int)videoMinFrameRate;	// 0x30aefad9
// converted property getter: - (CGSize)videoMotionFilterOverlapRatios;	// 0x30af0865
// declared property getter: - (int)videoOrientation;	// 0x30aef9d1
// converted property getter: - (int)videoRetainedBufferCountHint;	// 0x30af0545
// declared property getter: - (float)videoScaleAndCropFactor;	// 0x30af0211
@end
