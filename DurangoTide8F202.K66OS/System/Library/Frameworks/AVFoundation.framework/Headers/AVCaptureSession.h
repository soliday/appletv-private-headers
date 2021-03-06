/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVCaptureSessionInternal, NSString, NSArray;

@interface AVCaptureSession : NSObject {
@private
	AVCaptureSessionInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *inputs;	// G=0x30407801; 
@property(readonly, assign, nonatomic, getter=isInterrupted) BOOL interrupted;	// G=0x30404045; 
@property(readonly, assign, nonatomic) NSArray *outputs;	// G=0x30406d45; 
@property(readonly, assign, nonatomic, getter=isRunning) BOOL running;	// G=0x30404061; 
@property(copy, nonatomic) NSString *sessionPreset;	// G=0x304078c1; S=0x30408459; 
@property(retain) id videoPreviewLayer;	// G=0x30404029; S=0x30406755; converted property
+ (id)avCaptureSessionPlist;	// 0x3040a309
+ (void)initialize;	// 0x30403fe5
- (id)init;	// 0x30404c95
- (void)_addConnection:(id)connection;	// 0x30407d99
- (id)_addFastSwitchOptionsToCaptureOptions:(id)captureOptions forDevice:(id)device preset:(id)preset;	// 0x30404531
- (void)_addInputWithNoConnections:(id)noConnections;	// 0x304080e1
- (void)_addOutputWithNoConnections:(id)noConnections;	// 0x30407f5d
- (id)_applyOutputOverridesToCaptureOptions:(id)captureOptions;	// 0x30406275
- (void)_beginSessionUpdates;	// 0x3040407d
- (BOOL)_buildAndRunGraph;	// 0x3040a3cd
- (BOOL)_canAddConnection:(id)connection failureReason:(id *)reason;	// 0x30408cb5
- (BOOL)_canAddInput:(id)input failureReason:(id *)reason;	// 0x3040915d
- (BOOL)_canAddOutput:(id)output failureReason:(id *)reason;	// 0x3040896d
- (BOOL)_connectionIsActive:(id)active;	// 0x30405bf1
- (id)_connectionsForNewInputPort:(id)newInputPort;	// 0x304043e1
- (id)_connectionsForNewOutput:(id)newOutput;	// 0x30406049
- (id)_createCaptureOptionsForPreset:(id)preset audioDevice:(id)device videoDevice:(id)device3 errorStatus:(int *)status;	// 0x304086d9
- (long)_createRecorderIfNeeded;	// 0x3040ae81
- (id)_currentVideoDevice;	// 0x304056c9
- (void)_doDidStart;	// 0x3040a051
- (void)_doDidStartSources;	// 0x304059c1
- (void)_doDidStop:(id)_do;	// 0x30405855
- (void)_endSessionUpdates;	// 0x304043b5
- (id)_errorForFigRecorderNotification:(id)figRecorderNotification;	// 0x3040a249
- (void)_excludeOutputsForCaptureOptions:(id)captureOptions;	// 0x30408b41
- (BOOL)_figRecorderOldOptionsAreEqual:(id)equal toNewOptions:(id)newOptions livesourceOptionsAreEqual:(BOOL *)equal3;	// 0x30404221
- (id)_figRecorderOptionsForPreset:(id)preset audioDevice:(id)device videoDevice:(id)device3;	// 0x30408679
- (void)_handleNotification:(id)notification payload:(id)payload;	// 0x3040940d
- (void)_postRuntimeError:(id)error;	// 0x30404341
- (void)_rebuildGraph;	// 0x3040474d
- (void)_rebuildInternalCaptureOptions;	// 0x30404611
- (void)_removeConnection:(id)connection;	// 0x304065fd
- (void)_removeConnectionsForInputPort:(id)inputPort;	// 0x30405ecd
- (void)_removeVideoPreviewLayerConnectionsForInputPort:(id)inputPort;	// 0x30405d2d
- (void)_setInterrupted:(BOOL)interrupted;	// 0x30404851
- (void)_setRunning:(BOOL)running;	// 0x30404775
- (BOOL)_startPreviewing;	// 0x304088e9
- (long)_startRecording;	// 0x30404fd1
- (void)_stopAndTearDownGraph;	// 0x304041cd
- (id)_stopError;	// 0x30404081
- (BOOL)_stopPreviewing;	// 0x30409d69
- (long)_stopRecording;	// 0x30404f7d
- (void)_teardownFigRecorder;	// 0x30405085
- (void)addConnection:(id)connection;	// 0x304048fd
- (void)addInput:(id)input;	// 0x304071bd
- (void)addInputWithNoConnections:(id)noConnections;	// 0x304049ed
- (void)addOutput:(id)output;	// 0x30406bb1
- (void)addOutputWithNoConnections:(id)noConnections;	// 0x30404961
- (void)beginConfiguration;	// 0x30408655
- (BOOL)canAddConnection:(id)connection;	// 0x30404949
- (BOOL)canAddInput:(id)input;	// 0x30404a29
- (BOOL)canAddOutput:(id)output;	// 0x3040499d
- (BOOL)canSetSessionPreset:(id)preset;	// 0x30407989
- (id)captureOptions;	// 0x304046fd
- (void)commitConfiguration;	// 0x30408611
- (void)dealloc;	// 0x30404a9d
- (id)description;	// 0x30408f79
- (id)inputWithClass:(Class)aClass;	// 0x304074d1
// declared property getter: - (id)inputs;	// 0x30407801
- (BOOL)isBeingConfigured;	// 0x30404005
// declared property getter: - (BOOL)isInterrupted;	// 0x30404045
- (BOOL)isPreviewing;	// 0x3040a365
// declared property getter: - (BOOL)isRunning;	// 0x30404061
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30406365
- (id)outputWithClass:(Class)aClass;	// 0x30407669
// declared property getter: - (id)outputs;	// 0x30406d45
- (OpaqueFigRecorder *)recorder;	// 0x30403fe9
- (void)release;	// 0x30404be5
- (void)removeConnection:(id)connection;	// 0x304048b1
- (void)removeInput:(id)input;	// 0x30406e05
- (void)removeOutput:(id)output;	// 0x30406941
- (void)removeVideoPreviewLayer;	// 0x3040690d
- (id)retain;	// 0x30404c3d
// declared property getter: - (id)sessionPreset;	// 0x304078c1
// declared property setter: - (void)setSessionPreset:(id)preset;	// 0x30408459
// converted property setter: - (void)setVideoPreviewLayer:(id)layer;	// 0x30406755
- (void)startRunning;	// 0x30407c81
- (void)stopRunning;	// 0x30407b69
// converted property getter: - (id)videoPreviewLayer;	// 0x30404029
- (void)videoPreviewLayerPropertiesChanged;	// 0x30404739
@end

