/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVCaptureDeviceInternal, NSString;

@interface AVCaptureDevice : NSObject {
	AVCaptureDeviceInternal *_internal;	// 4 = 0x4
}
@property(assign) float autoExposureBias;	// G=0x3148352d; S=0x31483d01; converted property
@property(assign) BOOL automaticallyAdjustsImageControlMode;	// G=0x3148355d; S=0x31483b05; converted property
@property(readonly, assign, nonatomic, getter=isConnected) BOOL connected;	// G=0x31483449; 
@property(assign) float contrast;	// G=0x3148356d; S=0x31483a2d; converted property
@property(assign) XXStruct_pwHToB exposureDuration;	// G=0x314834f9; S=0x31483e45; converted property
@property(assign) float exposureGain;	// G=0x3148351d; S=0x31483d91; converted property
@property(assign) int exposureMode;	// G=0x314834f1; S=0x31483ef9; converted property
@property(assign) CGPoint exposurePointOfInterest;	// G=0x31483531; S=0x31483c51; converted property
@property(assign, getter=isFaceDetectionDrivenImageProcessingEnabled) BOOL faceDetectionDrivenImageProcessingEnabled;	// G=0x31483405; S=0x31483425; converted property
@property(assign) int flashMode;	// G=0x314834b9; S=0x314841dd; converted property
@property(assign) int focusMode;	// G=0x314834d5; S=0x31484065; converted property
@property(assign) CGPoint focusPointOfInterest;	// G=0x314834e1; S=0x31483fb5; converted property
@property(assign) int imageControlMode;	// G=0x31483561; S=0x31483abd; converted property
@property(readonly, assign, nonatomic) NSString *localizedName;	// G=0x314848dd; 
@property(assign, getter=isManualExposureSupportEnabled) BOOL manualExposureSupportEnabled;	// G=0x31483529; S=0x31483d49; converted property
@property(readonly, assign, nonatomic) NSString *modelID;	// G=0x31483369; 
@property(assign) float saturation;	// G=0x31483569; S=0x31483a75; converted property
@property(retain) id session;	// G=0x3148337d; S=0x3148339d; converted property
@property(assign, getter=isSubjectAreaChangeMonitoringEnabled) BOOL subjectAreaChangeMonitoringEnabled;	// G=0x314833c5; S=0x314833e5; converted property
@property(assign) int torchMode;	// G=0x314834cd; S=0x31484121; converted property
@property(readonly, assign, nonatomic) NSString *uniqueID;	// G=0x3148335d; 
@property(assign) int whiteBalanceMode;	// G=0x31483545; S=0x31483b95; converted property
@property(assign) float whiteBalanceTemperature;	// G=0x3148354d; S=0x31483b4d; converted property
+ (id)_devices;	// 0x314835c9
+ (id)defaultDeviceWithMediaType:(id)mediaType;	// 0x314836e5
+ (id)deviceWithUniqueID:(id)uniqueID;	// 0x314835e5
+ (id)devices;	// 0x31483785
+ (id)devicesWithMediaType:(id)mediaType;	// 0x314838e5
- (id)init;	// 0x31484905
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x31483579
- (void)_forceClosed;	// 0x314843d1
- (void)_sessionDidStart;	// 0x314833c1
- (void)_sessionWillStart;	// 0x314833bd
- (BOOL)_startUsingDevice:(id *)device;	// 0x314842d1
- (void)_stopUsingDevice;	// 0x31484299
// converted property getter: - (float)autoExposureBias;	// 0x3148352d
// converted property getter: - (BOOL)automaticallyAdjustsImageControlMode;	// 0x3148355d
- (void)close;	// 0x314844f9
// converted property getter: - (float)contrast;	// 0x3148356d
- (void)dealloc;	// 0x3148357d
- (id)description;	// 0x314848f5
- (void)deviceConnectionDidChange;	// 0x31484449
- (void)deviceConnectionWillChange;	// 0x314844c1
- (BOOL)doesHandleNotification:(id)notification;	// 0x31483571
// converted property getter: - (XXStruct_pwHToB)exposureDuration;	// 0x314834f9
// converted property getter: - (float)exposureGain;	// 0x3148351d
// converted property getter: - (int)exposureMode;	// 0x314834f1
// converted property getter: - (CGPoint)exposurePointOfInterest;	// 0x31483531
// converted property getter: - (int)flashMode;	// 0x314834b9
// converted property getter: - (int)focusMode;	// 0x314834d5
// converted property getter: - (CGPoint)focusPointOfInterest;	// 0x314834e1
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x31483575
- (BOOL)hasFlash;	// 0x314834a9
- (BOOL)hasMediaType:(id)type;	// 0x31483375
- (BOOL)hasTorch;	// 0x314834bd
// converted property getter: - (int)imageControlMode;	// 0x31483561
- (BOOL)isAdjustingExposure;	// 0x3148353d
- (BOOL)isAdjustingWhiteBalance;	// 0x31483551
- (BOOL)isAudioLevelMeteringSupported;	// 0x31483555
// declared property getter: - (BOOL)isConnected;	// 0x31483449
- (BOOL)isExposureModeSupported:(int)supported;	// 0x314834ed
- (BOOL)isExposurePointOfInterestSupported;	// 0x31483525
// converted property getter: - (BOOL)isFaceDetectionDrivenImageProcessingEnabled;	// 0x31483405
- (BOOL)isFlashActive;	// 0x314834b1
- (BOOL)isFlashAvailable;	// 0x314834ad
- (BOOL)isFlashModeSupported:(int)supported;	// 0x314834b5
- (BOOL)isFocusModeSupported:(int)supported;	// 0x314834d1
- (BOOL)isFocusPointOfInterestSupported;	// 0x314834dd
- (BOOL)isImageControlModeSupported:(int)supported;	// 0x31483559
- (BOOL)isInUseByAnotherApplication;	// 0x31483445
- (BOOL)isLockedForConfiguration;	// 0x3148344d
// converted property getter: - (BOOL)isManualExposureSupportEnabled;	// 0x31483529
- (BOOL)isOpen;	// 0x31483475
// converted property getter: - (BOOL)isSubjectAreaChangeMonitoringEnabled;	// 0x314833c5
- (BOOL)isTorchAvailable;	// 0x314834c9
- (BOOL)isTorchModeSupported:(int)supported;	// 0x314834c5
- (BOOL)isWhiteBalanceModeSupported:(int)supported;	// 0x31483541
// declared property getter: - (id)localizedName;	// 0x314848dd
- (BOOL)lockForConfiguration:(id *)configuration;	// 0x31484741
// declared property getter: - (id)modelID;	// 0x31483369
- (BOOL)open:(id *)open;	// 0x31484585
- (int)position;	// 0x314834a5
// converted property getter: - (float)saturation;	// 0x31483569
// converted property getter: - (id)session;	// 0x3148337d
// converted property setter: - (void)setAutoExposureBias:(float)bias;	// 0x31483d01
// converted property setter: - (void)setAutomaticallyAdjustsImageControlMode:(BOOL)mode;	// 0x31483b05
// converted property setter: - (void)setContrast:(float)contrast;	// 0x31483a2d
// converted property setter: - (void)setExposureDuration:(XXStruct_pwHToB)duration;	// 0x31483e45
// converted property setter: - (void)setExposureGain:(float)gain;	// 0x31483d91
// converted property setter: - (void)setExposureMode:(int)mode;	// 0x31483ef9
// converted property setter: - (void)setExposurePointOfInterest:(CGPoint)interest;	// 0x31483c51
// converted property setter: - (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)enabled;	// 0x31483425
// converted property setter: - (void)setFlashMode:(int)mode;	// 0x314841dd
// converted property setter: - (void)setFocusMode:(int)mode;	// 0x31484065
// converted property setter: - (void)setFocusPointOfInterest:(CGPoint)interest;	// 0x31483fb5
// converted property setter: - (void)setImageControlMode:(int)mode;	// 0x31483abd
// converted property setter: - (void)setManualExposureSupportEnabled:(BOOL)enabled;	// 0x31483d49
// converted property setter: - (void)setSaturation:(float)saturation;	// 0x31483a75
// converted property setter: - (void)setSession:(id)session;	// 0x3148339d
// converted property setter: - (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x314833e5
// converted property setter: - (void)setTorchMode:(int)mode;	// 0x31484121
// converted property setter: - (void)setWhiteBalanceMode:(int)mode;	// 0x31483b95
// converted property setter: - (void)setWhiteBalanceTemperature:(float)temperature;	// 0x31483b4d
- (BOOL)startUsingDevice:(id *)device;	// 0x3148349d
- (void)stopUsingDevice;	// 0x314834a1
- (BOOL)supportsAVCaptureSessionPreset:(id)preset;	// 0x31483379
- (float)torchLevel;	// 0x314834c1
// converted property getter: - (int)torchMode;	// 0x314834cd
// declared property getter: - (id)uniqueID;	// 0x3148335d
- (void)unlockForConfiguration;	// 0x31484641
// converted property getter: - (int)whiteBalanceMode;	// 0x31483545
// converted property getter: - (float)whiteBalanceTemperature;	// 0x3148354d
@end

