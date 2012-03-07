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
@property(assign) float autoExposureBias;	// G=0x3547752d; S=0x35477d01; converted property
@property(assign) BOOL automaticallyAdjustsImageControlMode;	// G=0x3547755d; S=0x35477b05; converted property
@property(readonly, assign, nonatomic, getter=isConnected) BOOL connected;	// G=0x35477449; 
@property(assign) float contrast;	// G=0x3547756d; S=0x35477a2d; converted property
@property(assign) XXStruct_pwHToB exposureDuration;	// G=0x354774f9; S=0x35477e45; converted property
@property(assign) float exposureGain;	// G=0x3547751d; S=0x35477d91; converted property
@property(assign) int exposureMode;	// G=0x354774f1; S=0x35477ef9; converted property
@property(assign) CGPoint exposurePointOfInterest;	// G=0x35477531; S=0x35477c51; converted property
@property(assign, getter=isFaceDetectionDrivenImageProcessingEnabled) BOOL faceDetectionDrivenImageProcessingEnabled;	// G=0x35477405; S=0x35477425; converted property
@property(assign) int flashMode;	// G=0x354774b9; S=0x354781dd; converted property
@property(assign) int focusMode;	// G=0x354774d5; S=0x35478065; converted property
@property(assign) CGPoint focusPointOfInterest;	// G=0x354774e1; S=0x35477fb5; converted property
@property(assign) int imageControlMode;	// G=0x35477561; S=0x35477abd; converted property
@property(readonly, assign, nonatomic) NSString *localizedName;	// G=0x354788dd; 
@property(assign, getter=isManualExposureSupportEnabled) BOOL manualExposureSupportEnabled;	// G=0x35477529; S=0x35477d49; converted property
@property(readonly, assign, nonatomic) NSString *modelID;	// G=0x35477369; 
@property(assign) float saturation;	// G=0x35477569; S=0x35477a75; converted property
@property(retain) id session;	// G=0x3547737d; S=0x3547739d; converted property
@property(assign, getter=isSubjectAreaChangeMonitoringEnabled) BOOL subjectAreaChangeMonitoringEnabled;	// G=0x354773c5; S=0x354773e5; converted property
@property(assign) int torchMode;	// G=0x354774cd; S=0x35478121; converted property
@property(readonly, assign, nonatomic) NSString *uniqueID;	// G=0x3547735d; 
@property(assign) int whiteBalanceMode;	// G=0x35477545; S=0x35477b95; converted property
@property(assign) float whiteBalanceTemperature;	// G=0x3547754d; S=0x35477b4d; converted property
+ (id)_devices;	// 0x354775c9
+ (id)defaultDeviceWithMediaType:(id)mediaType;	// 0x354776e5
+ (id)deviceWithUniqueID:(id)uniqueID;	// 0x354775e5
+ (id)devices;	// 0x35477785
+ (id)devicesWithMediaType:(id)mediaType;	// 0x354778e5
- (id)init;	// 0x35478905
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x35477579
- (void)_forceClosed;	// 0x354783d1
- (void)_sessionDidStart;	// 0x354773c1
- (void)_sessionWillStart;	// 0x354773bd
- (BOOL)_startUsingDevice:(id *)device;	// 0x354782d1
- (void)_stopUsingDevice;	// 0x35478299
// converted property getter: - (float)autoExposureBias;	// 0x3547752d
// converted property getter: - (BOOL)automaticallyAdjustsImageControlMode;	// 0x3547755d
- (void)close;	// 0x354784f9
// converted property getter: - (float)contrast;	// 0x3547756d
- (void)dealloc;	// 0x3547757d
- (id)description;	// 0x354788f5
- (void)deviceConnectionDidChange;	// 0x35478449
- (void)deviceConnectionWillChange;	// 0x354784c1
- (BOOL)doesHandleNotification:(id)notification;	// 0x35477571
// converted property getter: - (XXStruct_pwHToB)exposureDuration;	// 0x354774f9
// converted property getter: - (float)exposureGain;	// 0x3547751d
// converted property getter: - (int)exposureMode;	// 0x354774f1
// converted property getter: - (CGPoint)exposurePointOfInterest;	// 0x35477531
// converted property getter: - (int)flashMode;	// 0x354774b9
// converted property getter: - (int)focusMode;	// 0x354774d5
// converted property getter: - (CGPoint)focusPointOfInterest;	// 0x354774e1
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x35477575
- (BOOL)hasFlash;	// 0x354774a9
- (BOOL)hasMediaType:(id)type;	// 0x35477375
- (BOOL)hasTorch;	// 0x354774bd
// converted property getter: - (int)imageControlMode;	// 0x35477561
- (BOOL)isAdjustingExposure;	// 0x3547753d
- (BOOL)isAdjustingWhiteBalance;	// 0x35477551
- (BOOL)isAudioLevelMeteringSupported;	// 0x35477555
// declared property getter: - (BOOL)isConnected;	// 0x35477449
- (BOOL)isExposureModeSupported:(int)supported;	// 0x354774ed
- (BOOL)isExposurePointOfInterestSupported;	// 0x35477525
// converted property getter: - (BOOL)isFaceDetectionDrivenImageProcessingEnabled;	// 0x35477405
- (BOOL)isFlashActive;	// 0x354774b1
- (BOOL)isFlashAvailable;	// 0x354774ad
- (BOOL)isFlashModeSupported:(int)supported;	// 0x354774b5
- (BOOL)isFocusModeSupported:(int)supported;	// 0x354774d1
- (BOOL)isFocusPointOfInterestSupported;	// 0x354774dd
- (BOOL)isImageControlModeSupported:(int)supported;	// 0x35477559
- (BOOL)isInUseByAnotherApplication;	// 0x35477445
- (BOOL)isLockedForConfiguration;	// 0x3547744d
// converted property getter: - (BOOL)isManualExposureSupportEnabled;	// 0x35477529
- (BOOL)isOpen;	// 0x35477475
// converted property getter: - (BOOL)isSubjectAreaChangeMonitoringEnabled;	// 0x354773c5
- (BOOL)isTorchAvailable;	// 0x354774c9
- (BOOL)isTorchModeSupported:(int)supported;	// 0x354774c5
- (BOOL)isWhiteBalanceModeSupported:(int)supported;	// 0x35477541
// declared property getter: - (id)localizedName;	// 0x354788dd
- (BOOL)lockForConfiguration:(id *)configuration;	// 0x35478741
// declared property getter: - (id)modelID;	// 0x35477369
- (BOOL)open:(id *)open;	// 0x35478585
- (int)position;	// 0x354774a5
// converted property getter: - (float)saturation;	// 0x35477569
// converted property getter: - (id)session;	// 0x3547737d
// converted property setter: - (void)setAutoExposureBias:(float)bias;	// 0x35477d01
// converted property setter: - (void)setAutomaticallyAdjustsImageControlMode:(BOOL)mode;	// 0x35477b05
// converted property setter: - (void)setContrast:(float)contrast;	// 0x35477a2d
// converted property setter: - (void)setExposureDuration:(XXStruct_pwHToB)duration;	// 0x35477e45
// converted property setter: - (void)setExposureGain:(float)gain;	// 0x35477d91
// converted property setter: - (void)setExposureMode:(int)mode;	// 0x35477ef9
// converted property setter: - (void)setExposurePointOfInterest:(CGPoint)interest;	// 0x35477c51
// converted property setter: - (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)enabled;	// 0x35477425
// converted property setter: - (void)setFlashMode:(int)mode;	// 0x354781dd
// converted property setter: - (void)setFocusMode:(int)mode;	// 0x35478065
// converted property setter: - (void)setFocusPointOfInterest:(CGPoint)interest;	// 0x35477fb5
// converted property setter: - (void)setImageControlMode:(int)mode;	// 0x35477abd
// converted property setter: - (void)setManualExposureSupportEnabled:(BOOL)enabled;	// 0x35477d49
// converted property setter: - (void)setSaturation:(float)saturation;	// 0x35477a75
// converted property setter: - (void)setSession:(id)session;	// 0x3547739d
// converted property setter: - (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x354773e5
// converted property setter: - (void)setTorchMode:(int)mode;	// 0x35478121
// converted property setter: - (void)setWhiteBalanceMode:(int)mode;	// 0x35477b95
// converted property setter: - (void)setWhiteBalanceTemperature:(float)temperature;	// 0x35477b4d
- (BOOL)startUsingDevice:(id *)device;	// 0x3547749d
- (void)stopUsingDevice;	// 0x354774a1
- (BOOL)supportsAVCaptureSessionPreset:(id)preset;	// 0x35477379
- (float)torchLevel;	// 0x354774c1
// converted property getter: - (int)torchMode;	// 0x354774cd
// declared property getter: - (id)uniqueID;	// 0x3547735d
- (void)unlockForConfiguration;	// 0x35478641
// converted property getter: - (int)whiteBalanceMode;	// 0x35477545
// converted property getter: - (float)whiteBalanceTemperature;	// 0x3547754d
@end
