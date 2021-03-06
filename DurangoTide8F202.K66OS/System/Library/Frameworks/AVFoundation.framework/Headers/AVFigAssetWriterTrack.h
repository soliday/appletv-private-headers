/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVMediaFileType, AVWeakReference, NSString;

@interface AVFigAssetWriterTrack : NSObject {
@private
	AVWeakReference *_weakReference;	// 4 = 0x4
	OpaqueFigAssetWriter *_figAssetWriter;	// 8 = 0x8
	int _trackID;	// 12 = 0xc
	NSString *_mediaType;	// 16 = 0x10
	AVMediaFileType *_mediaFileType;	// 20 = 0x14
	dispatch_queue_s *_aboveHighWaterLevelQueue;	// 24 = 0x18
	BOOL _aboveHighWaterLevel;	// 28 = 0x1c
	XXStruct_pwHToB _sampleBufferCoalescingInterval;	// 32 = 0x20
}
@property(readonly, assign, getter=isAboveHighWaterLevel) BOOL aboveHighWaterLevel;	// G=0x303eb82d; 
@property(readonly, assign, nonatomic) OpaqueFigAssetWriter *figAssetWriter;	// G=0x303e9651; @synthesize=_figAssetWriter
@property(readonly, assign, nonatomic) AVMediaFileType *mediaFileType;	// G=0x303e9621; @synthesize=_mediaFileType
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x303e9631; @synthesize=_mediaType
@property(readonly, assign, nonatomic) CVPixelBufferPoolRef pixelBufferPool;	// G=0x303ed67d; 
@property(assign, nonatomic) XXStruct_pwHToB sampleBufferCoalescingInterval;	// G=0x303e9661; S=0x303e967d; @synthesize=_sampleBufferCoalescingInterval
@property(readonly, assign, nonatomic) int trackID;	// G=0x303e9641; @synthesize=_trackID
+ (id)assetWriterTrackWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 outputSettings:(id)settings sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x303e981d
- (id)init;	// 0x303e97f5
- (id)initWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 outputSettings:(id)settings sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x303ed0dd
- (int)_attachToFigAssetWriterUsingOutputSettings:(id)figAssetWriterUsingOutputSettings sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x303edba5
- (void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)_figAssetWriter;	// 0x303e97c9
- (void)_refreshAboveHighWaterLevel;	// 0x303ee17d
- (BOOL)addPixelBuffer:(CVBufferRef)buffer atPresentationTime:(XXStruct_pwHToB)presentationTime error:(id *)error;	// 0x303ed929
- (BOOL)addSampleBuffer:(opaqueCMSampleBuffer *)buffer error:(id *)error;	// 0x303eda59
- (void)dealloc;	// 0x303ecfcd
// declared property getter: - (OpaqueFigAssetWriter *)figAssetWriter;	// 0x303e9651
- (void)finalize;	// 0x303ecefd
// declared property getter: - (BOOL)isAboveHighWaterLevel;	// 0x303eb82d
- (BOOL)markEndOfDataReturningError:(id *)dataReturningError;	// 0x303ed8c5
// declared property getter: - (id)mediaFileType;	// 0x303e9621
// declared property getter: - (id)mediaType;	// 0x303e9631
// declared property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x303ed67d
- (void)release;	// 0x303ea539
- (id)retain;	// 0x303ea581
// declared property getter: - (XXStruct_pwHToB)sampleBufferCoalescingInterval;	// 0x303e9661
- (void)setFigMetadata:(id)metadata;	// 0x303ed6f5
- (void)setFigTrackMatrix:(id)matrix;	// 0x303ed63d
- (void)setMediaTimeScale:(int)scale;	// 0x303ed5d5
// declared property setter: - (void)setSampleBufferCoalescingInterval:(XXStruct_pwHToB)interval;	// 0x303e967d
// declared property getter: - (int)trackID;	// 0x303e9641
@end

