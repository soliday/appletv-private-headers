/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureDevice.h"
#import "MCProfileConnectionObserver.h"

@class NSDictionary, AVWeakReference;

@interface AVCaptureFigVideoDevice : AVCaptureDevice <MCProfileConnectionObserver> {
	NSDictionary *_deviceProperties;	// 8 = 0x8
	int _focusMode;	// 12 = 0xc
	CGPoint _focusPointOfInterest;	// 16 = 0x10
	int _focusInFlightCount;	// 24 = 0x18
	BOOL _adjustingFocus;	// 28 = 0x1c
	int _exposureMode;	// 32 = 0x20
	XXStruct_pwHToB _exposureDuration;	// 36 = 0x24
	float _exposureGain;	// 60 = 0x3c
	BOOL _manualExposureSupportEnabled;	// 64 = 0x40
	float _autoExposureBias;	// 68 = 0x44
	CGPoint _exposurePointOfInterest;	// 72 = 0x48
	BOOL _adjustingExposure;	// 80 = 0x50
	int _wbMode;	// 84 = 0x54
	float _whiteBalanceTemperature;	// 88 = 0x58
	BOOL _adjustingWB;	// 92 = 0x5c
	BOOL _automaticallyAdjustsImageControlMode;	// 93 = 0x5d
	int _imageControlMode;	// 96 = 0x60
	int _flashMode;	// 100 = 0x64
	BOOL _flashActive;	// 104 = 0x68
	BOOL _flashAvailable;	// 105 = 0x69
	int _torchMode;	// 108 = 0x6c
	float _torchLevel;	// 112 = 0x70
	BOOL _torchAvailable;	// 116 = 0x74
	BOOL _isConnected;	// 117 = 0x75
	CGRect _faceRectangle;	// 120 = 0x78
	int _faceRectangleAngle;	// 136 = 0x88
	BOOL _faceDetectionMetadataEnabled;	// 140 = 0x8c
	dispatch_queue_s *_torchAppsSerialQueue;	// 144 = 0x90
	dispatch_source_s *_torchAppsKillTimer;	// 148 = 0x94
	OpaqueFigRecorder *_recorderForTorchApps;	// 152 = 0x98
	float _saturation;	// 156 = 0x9c
	float _contrast;	// 160 = 0xa0
	AVWeakReference *_weakReference;	// 164 = 0xa4
}
@property(readonly, assign, getter=isAdjustingExposure) BOOL adjustingExposure;	// G=0x326cf569; converted property
@property(readonly, assign, getter=isAdjustingFocus) BOOL adjustingFocus;	// G=0x326ceb11; converted property
@property(assign) float autoExposureBias;	// G=0x326cf2f5; S=0x326cf365; converted property
@property(assign) BOOL automaticallyAdjustsImageControlMode;	// G=0x326d0bd5; S=0x326d0be5; converted property
@property(assign) float contrast;	// G=0x326d1665; S=0x326d16d5; converted property
@property(assign) XXStruct_pwHToB exposureDuration;	// G=0x326cf0f5; S=0x326cf129; converted property
@property(assign) float exposureGain;	// G=0x326cf1fd; S=0x326cf20d; converted property
@property(assign) int exposureMode;	// G=0x326cee69; S=0x326cee79; converted property
@property(assign) CGPoint exposurePointOfInterest;	// G=0x326cf48d; S=0x326cf4a9; converted property
@property(assign, getter=isFaceDetectionDebugMetadataReportingEnabled) BOOL faceDetectionDebugMetadataReportingEnabled;	// G=0x326d1331; S=0x326d1225; converted property
@property(readonly, assign) CGRect faceRectangle;	// G=0x326d11f1; converted property
@property(readonly, assign) int faceRectangleAngle;	// G=0x326d1215; converted property
@property(readonly, assign, getter=isFlashActive) BOOL flashActive;	// G=0x326cfa95; converted property
@property(readonly, assign, getter=isFlashAvailable) BOOL flashAvailable;	// G=0x326cfce9; converted property
@property(assign) int flashMode;	// G=0x326cfcd9; S=0x326cfd25; converted property
@property(assign) int focusMode;	// G=0x326ce871; S=0x326ce881; converted property
@property(assign) CGPoint focusPointOfInterest;	// G=0x326cea35; S=0x326cea51; converted property
@property(assign) int imageControlMode;	// G=0x326d0c55; S=0x326d0d15; converted property
@property(readonly, assign) BOOL isConnected;	// G=0x326cdbcd; converted property
@property(assign, getter=isManualExposureSupportEnabled) BOOL manualExposureSupportEnabled;	// G=0x326cf2d5; S=0x326cf2e5; converted property
@property(assign) float saturation;	// G=0x326d150d; S=0x326d157d; converted property
@property(readonly, assign, getter=isTorchAvailable) BOOL torchAvailable;	// G=0x326cfeed; converted property
@property(readonly, assign) float torchLevel;	// G=0x326cfe69; converted property
@property(assign) int torchMode;	// G=0x326d0395; S=0x326d03a5; converted property
@property(assign) int whiteBalanceMode;	// G=0x326cf70d; S=0x326cf71d; converted property
@property(assign) float whiteBalanceTemperature;	// G=0x326cf8fd; S=0x326cf96d; converted property
+ (BOOL)_cameraAccessIsEnabled;	// 0x326cd56d
+ (id)_devices;	// 0x326cd3f5
+ (void)initialize;	// 0x326cd3f1
- (id)init;	// 0x326cd8ad
- (id)initWithProperties:(id)properties;	// 0x326cd5b9
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x326d1341
- (void)_applyPendingPropertiesToRecorder;	// 0x326cdc1d
- (OpaqueFigRecorder *)_createFigRecorderForTorchApps;	// 0x326d07b5
- (dispatch_source_s *)_createTorchAppsKillTimer;	// 0x326cfff9
- (BOOL)_faceDetectionDrivenImageProcessingEnabled;	// 0x326d1165
- (int)_flashMode;	// 0x326cfb4d
- (float)_floatValueForRecorderProperty:(CFStringRef)recorderProperty;	// 0x326d13f1
- (void)_restoreColorProperties;	// 0x326d17c1
- (void)_sessionDidStart;	// 0x326ce331
- (void)_sessionWillStart;	// 0x326ce291
- (void)_setAdjustingExposure:(BOOL)exposure;	// 0x326ceb31
- (void)_setAdjustingFocus:(BOOL)focus;	// 0x326ceb21
- (void)_setAdjustingWhiteBalance:(BOOL)balance;	// 0x326cf589
- (BOOL)_setAutoExposureBias:(float)bias;	// 0x326cf341
- (BOOL)_setContrast:(float)contrast;	// 0x326d16b1
- (BOOL)_setExposureWithMode:(int)mode pointOfInterest:(id)interest;	// 0x326cebd5
- (BOOL)_setFaceDetectionDebugMetadataReportingEnabled:(BOOL)enabled;	// 0x326d12b1
- (BOOL)_setFaceDetectionDrivenImageProcessingEnabled:(BOOL)enabled;	// 0x326d0fd9
- (void)_setFlashActive:(BOOL)active;	// 0x326cfb19
- (BOOL)_setFlashMode:(int)mode;	// 0x326cfc05
- (BOOL)_setFloatValue:(float)value forRecorderProperty:(CFStringRef)recorderProperty;	// 0x326d1489
- (BOOL)_setFocusWithMode:(int)mode pointOfInterest:(id)interest;	// 0x326ce529
- (BOOL)_setImageControlMode:(int)mode;	// 0x326d0c65
- (BOOL)_setSaturation:(float)saturation;	// 0x326d1559
- (BOOL)_setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x326d0a2d
- (BOOL)_setTorchMode:(int)mode;	// 0x326d010d
- (BOOL)_setWhiteBalanceMode:(int)mode;	// 0x326cf691
- (BOOL)_setWhiteBalanceTemperature:(float)temperature;	// 0x326cf949
- (BOOL)_subjectAreaChangeMonitoringEnabled;	// 0x326d0b4d
- (void)_teardownFigRecorderForTorchApps;	// 0x326d0915
- (void)_teardownTorchAppsKillTimer;	// 0x326d00dd
- (int)_torchMode;	// 0x326cff29
- (void)_updateFlashAndTorchAvailability;	// 0x326d04a9
- (void)_updateImageControlMode;	// 0x326d0e61
- (int)_whiteBalanceMode;	// 0x326cf60d
// converted property getter: - (float)autoExposureBias;	// 0x326cf2f5
// converted property getter: - (BOOL)automaticallyAdjustsImageControlMode;	// 0x326d0bd5
// converted property getter: - (float)contrast;	// 0x326d1665
- (void)dealloc;	// 0x326cd901
- (id)devicePropertiesDictionary;	// 0x326cdbe5
- (BOOL)doesHandleNotification:(id)notification;	// 0x326d1895
// converted property getter: - (XXStruct_pwHToB)exposureDuration;	// 0x326cf0f5
// converted property getter: - (float)exposureGain;	// 0x326cf1fd
// converted property getter: - (int)exposureMode;	// 0x326cee69
// converted property getter: - (CGPoint)exposurePointOfInterest;	// 0x326cf48d
// converted property getter: - (CGRect)faceRectangle;	// 0x326d11f1
// converted property getter: - (int)faceRectangleAngle;	// 0x326d1215
// converted property getter: - (int)flashMode;	// 0x326cfcd9
// converted property getter: - (int)focusMode;	// 0x326ce871
// converted property getter: - (CGPoint)focusPointOfInterest;	// 0x326cea35
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x326d19b1
- (BOOL)hasFlash;	// 0x326cfa55
- (BOOL)hasMediaType:(id)type;	// 0x326cdb65
- (BOOL)hasTorch;	// 0x326cfe29
// converted property getter: - (int)imageControlMode;	// 0x326d0c55
// converted property getter: - (BOOL)isAdjustingExposure;	// 0x326cf569
// converted property getter: - (BOOL)isAdjustingFocus;	// 0x326ceb11
- (BOOL)isAdjustingWhiteBalance;	// 0x326cf579
// converted property getter: - (BOOL)isConnected;	// 0x326cdbcd
- (BOOL)isExposureModeSupported:(int)supported;	// 0x326ceb41
- (BOOL)isExposurePointOfInterestSupported;	// 0x326cf44d
// converted property getter: - (BOOL)isFaceDetectionDebugMetadataReportingEnabled;	// 0x326d1331
- (BOOL)isFaceDetectionSupported;	// 0x326d0f9d
// converted property getter: - (BOOL)isFlashActive;	// 0x326cfa95
// converted property getter: - (BOOL)isFlashAvailable;	// 0x326cfce9
- (BOOL)isFlashModeSupported:(int)supported;	// 0x326cfaa5
- (BOOL)isFocusModeSupported:(int)supported;	// 0x326ce4b5
- (BOOL)isFocusPointOfInterestSupported;	// 0x326cea1d
- (BOOL)isImageControlModeSupported:(int)supported;	// 0x326d0bc5
- (BOOL)isInUseByAnotherApplication;	// 0x326cdbc9
// converted property getter: - (BOOL)isManualExposureSupportEnabled;	// 0x326cf2d5
// converted property getter: - (BOOL)isTorchAvailable;	// 0x326cfeed
- (BOOL)isTorchModeSupported:(int)supported;	// 0x326cfe79
- (BOOL)isWhiteBalanceModeSupported:(int)supported;	// 0x326cf599
- (id)localizedName;	// 0x326cdb25
- (id)modelID;	// 0x326cdafd
- (int)position;	// 0x326ce471
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;	// 0x326cda09
// converted property getter: - (float)saturation;	// 0x326d150d
// converted property setter: - (void)setAutoExposureBias:(float)bias;	// 0x326cf365
// converted property setter: - (void)setAutomaticallyAdjustsImageControlMode:(BOOL)mode;	// 0x326d0be5
// converted property setter: - (void)setContrast:(float)contrast;	// 0x326d16d5
// converted property setter: - (void)setExposureDuration:(XXStruct_pwHToB)duration;	// 0x326cf129
// converted property setter: - (void)setExposureGain:(float)gain;	// 0x326cf20d
// converted property setter: - (void)setExposureMode:(int)mode;	// 0x326cee79
// converted property setter: - (void)setExposurePointOfInterest:(CGPoint)interest;	// 0x326cf4a9
// converted property setter: - (void)setFaceDetectionDebugMetadataReportingEnabled:(BOOL)enabled;	// 0x326d1225
- (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)enabled;	// 0x326d10c5
// converted property setter: - (void)setFlashMode:(int)mode;	// 0x326cfd25
// converted property setter: - (void)setFocusMode:(int)mode;	// 0x326ce881
// converted property setter: - (void)setFocusPointOfInterest:(CGPoint)interest;	// 0x326cea51
// converted property setter: - (void)setImageControlMode:(int)mode;	// 0x326d0d15
// converted property setter: - (void)setManualExposureSupportEnabled:(BOOL)enabled;	// 0x326cf2e5
// converted property setter: - (void)setSaturation:(float)saturation;	// 0x326d157d
- (void)setSession:(id)session;	// 0x326ce371
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x326d0aad
// converted property setter: - (void)setTorchMode:(int)mode;	// 0x326d03a5
// converted property setter: - (void)setWhiteBalanceMode:(int)mode;	// 0x326cf71d
// converted property setter: - (void)setWhiteBalanceTemperature:(float)temperature;	// 0x326cf96d
- (BOOL)startUsingDevice:(id *)device;	// 0x326cdbdd
- (void)stopUsingDevice;	// 0x326cdbe1
- (BOOL)supportsAVCaptureSessionPreset:(id)preset;	// 0x326cdb99
// converted property getter: - (float)torchLevel;	// 0x326cfe69
// converted property getter: - (int)torchMode;	// 0x326d0395
- (id)uniqueID;	// 0x326cdad5
// converted property getter: - (int)whiteBalanceMode;	// 0x326cf70d
// converted property getter: - (float)whiteBalanceTemperature;	// 0x326cf8fd
@end

