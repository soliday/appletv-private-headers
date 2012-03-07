/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVAssetWriterInputInternal, AVWeakReference, NSDictionary, NSArray, AVAssetWriterInputHelper, NSString;

@interface AVAssetWriterInput : NSObject {
@private
	AVAssetWriterInputInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic, getter=_isAttachedToPixelBufferAdaptor, setter=_setAttachedToPixelBufferAdaptor:) BOOL attachedToPixelBufferAdaptor;	// G=0x3545eb41; S=0x3545eb61; 
@property(assign, nonatomic) BOOL expectsMediaDataInRealTime;	// G=0x3545f0fd; S=0x3545f125; 
@property(retain, nonatomic, getter=_helper, setter=_setHelper:) AVAssetWriterInputHelper *helper;	// G=0x354625c1; S=0x35462559; 
@property(assign) int mediaTimeScale;	// G=0x3545efb1; S=0x35461995; converted property
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x3545ee79; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x3545ef2d; S=0x3545ef55; 
@property(readonly, assign, nonatomic) NSDictionary *outputSettings;	// G=0x3545eea1; 
@property(readonly, assign, nonatomic, getter=_pixelBufferPool) CVPixelBufferPoolRef pixelBufferPool;	// G=0x3545efd9; 
@property(readonly, assign, nonatomic, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;	// G=0x3545f0d5; 
@property(retain, nonatomic) opaqueCMFormatDescription *sampleBufferFormatHint;	// G=0x3545eed9; S=0x3545ef01; 
@property(copy, nonatomic, getter=_sourcePixelBufferAttributes, setter=_setSourcePixelBufferAttributes:) NSDictionary *sourcePixelBufferAttributes;	// G=0x3545f001; S=0x3545f029; 
@property(readonly, assign, nonatomic, getter=_status) int status;	// G=0x3545edad; 
@property(assign) CGAffineTransform transform;	// G=0x35462529; S=0x3545ef81; converted property
@property(retain, nonatomic, getter=_weakReferenceToAssetWriter, setter=_setWeakReferenceToAssetWriter:) AVWeakReference *weakReferenceToAssetWriter;	// G=0x3545eb21; S=0x3545ed15; 
+ (id)assetWriterInputWithMediaType:(id)mediaType outputSettings:(id)settings;	// 0x3545f1c9
+ (void)initialize;	// 0x3546231d
+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;	// 0x3545f231
+ (id)keyPathsForValuesAffectingStatus;	// 0x3545f209
- (id)init;	// 0x3545ecc5
- (id)initWithMediaType:(id)mediaType outputSettings:(id)settings;	// 0x35461ecd
- (BOOL)_appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x3545f151
// declared property getter: - (id)_helper;	// 0x354625c1
// declared property getter: - (BOOL)_isAttachedToPixelBufferAdaptor;	// 0x3545eb41
// declared property getter: - (CVPixelBufferPoolRef)_pixelBufferPool;	// 0x3545efd9
- (BOOL)_prepareForWritingWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaFileType:(id)type error:(id *)error;	// 0x35462349
- (void)_prepareToEndSession;	// 0x3545f055
- (BOOL)_prepareToFinishWritingReturningError:(id *)finishWritingReturningError;	// 0x3545f07d
// declared property setter: - (void)_setAttachedToPixelBufferAdaptor:(BOOL)pixelBufferAdaptor;	// 0x3545eb61
// declared property setter: - (void)_setHelper:(id)helper;	// 0x35462559
// declared property setter: - (void)_setSourcePixelBufferAttributes:(id)attributes;	// 0x3545f029
// declared property setter: - (void)_setWeakReferenceToAssetWriter:(id)assetWriter;	// 0x3545ed15
// declared property getter: - (id)_sourcePixelBufferAttributes;	// 0x3545f001
// declared property getter: - (int)_status;	// 0x3545edad
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)error;	// 0x3545ed71
- (void)_transitionToTerminalStatus:(int)terminalStatus;	// 0x3545f0a9
// declared property getter: - (id)_weakReferenceToAssetWriter;	// 0x3545eb21
- (BOOL)appendSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x35461ae5
- (void)dealloc;	// 0x35462765
- (id)description;	// 0x35461e49
// declared property getter: - (BOOL)expectsMediaDataInRealTime;	// 0x3545f0fd
- (void)finalize;	// 0x35462709
// declared property getter: - (BOOL)isReadyForMoreMediaData;	// 0x3545f0d5
- (void)markAsFinished;	// 0x3545f1a1
// converted property getter: - (int)mediaTimeScale;	// 0x3545efb1
// declared property getter: - (id)mediaType;	// 0x3545ee79
// declared property getter: - (id)metadata;	// 0x3545ef2d
// declared property getter: - (id)outputSettings;	// 0x3545eea1
- (void)requestMediaDataWhenReadyOnQueue:(dispatch_queue_s *)queue usingBlock:(id)block;	// 0x35461a1d
// declared property getter: - (opaqueCMFormatDescription *)sampleBufferFormatHint;	// 0x3545eed9
// declared property setter: - (void)setExpectsMediaDataInRealTime:(BOOL)realTime;	// 0x3545f125
// converted property setter: - (void)setMediaTimeScale:(int)scale;	// 0x35461995
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x3545ef55
// declared property setter: - (void)setSampleBufferFormatHint:(opaqueCMFormatDescription *)hint;	// 0x3545ef01
// converted property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x3545ef81
// converted property getter: - (CGAffineTransform)transform;	// 0x35462529
@end
