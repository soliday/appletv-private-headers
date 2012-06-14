/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetTrackSegment.h"

@class AVCompositionTrackSegmentInternal, NSURL;

@interface AVCompositionTrackSegment : AVAssetTrackSegment {
@private
	AVCompositionTrackSegmentInternal *_priv;	// 100 = 0x64
}
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;	// G=0x35e2c7b5; 
@property(readonly, assign, nonatomic) int sourceTrackID;	// G=0x35e2c801; 
@property(readonly, assign, nonatomic) NSURL *sourceURL;	// G=0x35e2c7e1; 
+ (id)compositionTrackSegmentWithTimeRange:(XXStruct_yD8eWC)timeRange;	// 0x35e2c41d
+ (id)compositionTrackSegmentWithURL:(id)url trackID:(int)anId sourceTimeRange:(XXStruct_yD8eWC)range targetTimeRange:(XXStruct_yD8eWC)range4;	// 0x35e2c359
- (id)init;	// 0x35e2c4ad
- (id)initWithTimeRange:(XXStruct_yD8eWC)timeRange;	// 0x35e2c659
- (id)initWithURL:(id)url trackID:(int)anId sourceTimeRange:(XXStruct_yD8eWC)range targetTimeRange:(XXStruct_yD8eWC)range4;	// 0x35e2c505
- (void)dealloc;	// 0x35e2c6f9
- (void)finalize;	// 0x35e2c76d
- (unsigned)hash;	// 0x35e2c8b9
// declared property getter: - (BOOL)isEmpty;	// 0x35e2c7b5
- (BOOL)isEqual:(id)equal;	// 0x35e2c821
// declared property getter: - (int)sourceTrackID;	// 0x35e2c801
// declared property getter: - (id)sourceURL;	// 0x35e2c7e1
@end

