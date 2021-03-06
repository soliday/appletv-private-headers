/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, AVWeakReference, NSString, AVAssetReaderOutputInternal;

@interface AVAssetReaderOutput : NSObject {
@private
	AVAssetReaderOutputInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic, getter=_extractionID, setter=_setExtractionID:) int extractionID;	// G=0x3258ab4d; S=0x3258ab69; 
@property(readonly, assign, nonatomic, getter=_figAssetReaderExtractionOptions) NSDictionary *figAssetReaderExtractionOptions;	// G=0x3258b0e1; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x3258bd5d; 
@property(readonly, assign, getter=_status) int status;	// G=0x3258b175; 
@property(readonly, assign, nonatomic, getter=_trimsSampleDurations) BOOL trimsSampleDurations;	// G=0x3258ab85; 
@property(readonly, assign, nonatomic, getter=_weakReferenceToAssetReader) AVWeakReference *weakReferenceToAssetReader;	// G=0x3258ab31; 
+ (void)initialize;	// 0x3258c359
- (id)init;	// 0x3258b439
- (id)_asset;	// 0x3258bd2d
- (void)_attachToWeakReferenceToAssetReader:(id)assetReader;	// 0x3258b1a9
- (void)_cancelReading;	// 0x3258b0b1
- (BOOL)_enableTrackExtractionReturningError:(id *)error;	// 0x3258bcfd
// declared property getter: - (int)_extractionID;	// 0x3258ab4d
- (OpaqueFigAssetReader *)_figAssetReader;	// 0x3258ab15
- (void)_figAssetReaderDecodeError;	// 0x3258afe9
// declared property getter: - (id)_figAssetReaderExtractionOptions;	// 0x3258b0e1
- (void)_figAssetReaderFailed;	// 0x3258af8d
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)_figAssetReaderSampleBuffer;	// 0x3258b045
- (BOOL)_isFinished;	// 0x3258ab89
- (void)_markAsFinished;	// 0x3258bd8d
- (BOOL)_prepareForReadingReturningError:(id *)readingReturningError;	// 0x3258b0c9
// declared property setter: - (void)_setExtractionID:(int)anId;	// 0x3258ab69
- (void)_setFigAssetReader:(OpaqueFigAssetReader *)reader;	// 0x3258b7d1
// declared property getter: - (int)_status;	// 0x3258b175
// declared property getter: - (BOOL)_trimsSampleDurations;	// 0x3258ab85
// declared property getter: - (id)_weakReferenceToAssetReader;	// 0x3258ab31
- (opaqueCMSampleBuffer *)copyNextSampleBuffer;	// 0x3258c125
- (void)dealloc;	// 0x3258bb49
- (void)finalize;	// 0x3258b9ed
// declared property getter: - (id)mediaType;	// 0x3258bd5d
- (void)release;	// 0x3258b2a5
- (id)retain;	// 0x3258b2fd
@end

