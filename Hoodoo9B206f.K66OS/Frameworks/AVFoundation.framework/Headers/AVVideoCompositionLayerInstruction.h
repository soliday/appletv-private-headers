/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class AVVideoCompositionLayerInstructionInternal;

@interface AVVideoCompositionLayerInstruction : NSObject <NSCoding, NSCopying, NSMutableCopying> {
@private
	AVVideoCompositionLayerInstructionInternal *_layerInstruction;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) int trackID;	// G=0x326b9e5d; 
+ (void)initialize;	// 0x326b993d
- (id)init;	// 0x326b997d
- (id)initWithCoder:(id)coder;	// 0x326b9a15
- (void)_setOpacityRampFromStartOpacity:(float)startOpacity toEndOpacity:(float)endOpacity timeRange:(XXStruct_yD8eWC)range selector:(SEL)selector;	// 0x326baaf9
- (void)_setOpacityRamps:(id)ramps;	// 0x326b9efd
- (void)_setTransformRampFromStartTransform:(CGAffineTransform)startTransform toEndTransform:(CGAffineTransform)endTransform timeRange:(XXStruct_yD8eWC)range selector:(SEL)selector;	// 0x326b9f5d
- (void)_setTransformRamps:(id)ramps;	// 0x326b9e9d
- (void)_setValuesFromDictionary:(id)dictionary timeRange:(XXStruct_yD8eWC)range;	// 0x326bd4dd
- (id)copyWithZone:(NSZone *)zone;	// 0x326b9be1
- (void)dealloc;	// 0x326b9d91
- (id)dictionaryRepresentationWithTimeRange:(XXStruct_yD8eWC)timeRange;	// 0x326bb63d
- (void)encodeWithCoder:(id)coder;	// 0x326b9b29
- (void)finalize;	// 0x326b9e19
- (BOOL)getOpacityRampForTime:(XXStruct_pwHToB)time startOpacity:(float *)opacity endOpacity:(float *)opacity3 timeRange:(XXStruct_yD8eWC *)range;	// 0x326bb155
- (BOOL)getTransformRampForTime:(XXStruct_pwHToB)time startTransform:(CGAffineTransform *)transform endTransform:(CGAffineTransform *)transform3 timeRange:(XXStruct_yD8eWC *)range;	// 0x326ba5f1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x326b9cdd
- (void)setOpacity:(float)opacity atTime:(XXStruct_pwHToB)time;	// 0x326baf65
- (void)setOpacityRampFromStartOpacity:(float)startOpacity toEndOpacity:(float)endOpacity timeRange:(XXStruct_yD8eWC)range;	// 0x326bb079
- (void)setTrackID:(int)anId;	// 0x326b9e7d
- (void)setTransform:(CGAffineTransform)transform atTime:(XXStruct_pwHToB)time;	// 0x326ba3a5
- (void)setTransformRampFromStartTransform:(CGAffineTransform)startTransform toEndTransform:(CGAffineTransform)endTransform timeRange:(XXStruct_yD8eWC)range;	// 0x326ba4d1
// declared property getter: - (int)trackID;	// 0x326b9e5d
@end

