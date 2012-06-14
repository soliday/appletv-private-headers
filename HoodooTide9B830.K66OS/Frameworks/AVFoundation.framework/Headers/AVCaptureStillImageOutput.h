/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureOutput.h"

@class AVCaptureStillImageOutputInternal, NSArray, NSDictionary;

@interface AVCaptureStillImageOutput : AVCaptureOutput {
@private
	AVCaptureStillImageOutputInternal *_internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *availableImageDataCVPixelFormatTypes;	// G=0x35e606f1; 
@property(readonly, assign, nonatomic) NSArray *availableImageDataCodecTypes;	// G=0x35e607c5; 
@property(readonly, assign, getter=isCapturingStillImage) BOOL capturingStillImage;	// G=0x35e60a75; 
@property(assign, getter=isChromaNoiseReductionEnabled) BOOL chromaNoiseReductionEnabled;	// G=0x35e6098d; S=0x35e609ad; converted property
@property(assign, getter=isEV0CaptureEnabled) BOOL eV0CaptureEnabled;	// G=0x35e6094d; S=0x35e6096d; converted property
@property(assign, getter=isHDRCaptureEnabled) BOOL hDRCaptureEnabled;	// G=0x35e6090d; S=0x35e6092d; converted property
@property(copy, nonatomic) NSDictionary *outputSettings;	// G=0x35e6048d; S=0x35e604c9; 
@property(assign) CGSize previewImageSize;	// G=0x35e60899; S=0x35e608c5; converted property
@property(assign) BOOL suspendsVideoProcessingDuringStillImageCapture;	// G=0x35e609cd; S=0x35e609ed; converted property
+ (CGImageRef)cgImageForBGRASurface:(IOSurfaceRef)bgrasurface size:(unsigned long)size;	// 0x35e61c65
+ (void)initialize;	// 0x35e60375
+ (id)jpegStillImageNSDataRepresentation:(opaqueCMSampleBuffer *)representation;	// 0x35e61a91
+ (id)jpegStillImageNSDataRepresentationForBGRASurface:(IOSurfaceRef)bgrasurface size:(unsigned long)size;	// 0x35e61d75
+ (id)jpegStillImageNSDataRepresentationForSurface:(IOSurfaceRef)surface size:(unsigned long)size metadata:(id)metadata;	// 0x35e61c11
- (id)init;	// 0x35e60379
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x35e60445
- (void)_updateStillImageDataSizeForCaptureOptions:(id)captureOptions;	// 0x35e618d5
// declared property getter: - (id)availableImageDataCVPixelFormatTypes;	// 0x35e606f1
// declared property getter: - (id)availableImageDataCodecTypes;	// 0x35e607c5
- (void)captureStillImageAsynchronouslyFromConnection:(id)connection completionHandler:(id)handler;	// 0x35e61239
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)connection completionHandler:(id)handler;	// 0x35e6134d
- (void)configureAndInitiateCopyStillImageForRequest:(id)request;	// 0x35e60bf9
- (id)connectionMediaTypes;	// 0x35e6081d
- (void)dealloc;	// 0x35e603f9
- (id)firstActiveConnection;	// 0x35e60a95
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x35e61615
- (void)handlePhotoTakenForRequest:(id)request info:(id)info;	// 0x35e61461
- (unsigned long)imageDataFormatType;	// 0x35e608ed
// declared property getter: - (BOOL)isCapturingStillImage;	// 0x35e60a75
// converted property getter: - (BOOL)isChromaNoiseReductionEnabled;	// 0x35e6098d
// converted property getter: - (BOOL)isEV0CaptureEnabled;	// 0x35e6094d
// converted property getter: - (BOOL)isHDRCaptureEnabled;	// 0x35e6090d
- (long long)maxStillImageDataSize;	// 0x35e60875
// declared property getter: - (id)outputSettings;	// 0x35e6048d
// converted property getter: - (CGSize)previewImageSize;	// 0x35e60899
- (BOOL)resumeVideoProcessing;	// 0x35e60a0d
- (id)scaleAndCropDictionary;	// 0x35e60add
// converted property setter: - (void)setChromaNoiseReductionEnabled:(BOOL)enabled;	// 0x35e609ad
// converted property setter: - (void)setEV0CaptureEnabled:(BOOL)enabled;	// 0x35e6096d
// converted property setter: - (void)setHDRCaptureEnabled:(BOOL)enabled;	// 0x35e6092d
// declared property setter: - (void)setOutputSettings:(id)settings;	// 0x35e604c9
// converted property setter: - (void)setPreviewImageSize:(CGSize)size;	// 0x35e608c5
// converted property setter: - (void)setSuspendsVideoProcessingDuringStillImageCapture:(BOOL)capture;	// 0x35e609ed
// converted property getter: - (BOOL)suspendsVideoProcessingDuringStillImageCapture;	// 0x35e609cd
@end
