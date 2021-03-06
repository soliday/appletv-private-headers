/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVRemaker : NSObject {
	AVRemakerPrivate *_priv;	// 4 = 0x4
}
@property(readonly, assign) long long approximateByteSize;	// G=0x323f5b3d; 
@property(readonly, assign) double maxDurationWithinLimits;	// G=0x323f5a11; 
@property(readonly, assign) double progress;	// G=0x323f5d75; 
@property(readonly, assign) double sourceDuration;	// G=0x323f5971; 
+ (long long)approximateByteSizeForMode:(id)mode duration:(double)duration options:(id)options;	// 0x323f5581
+ (id)figRemakerNotificationNames;	// 0x323f2bd9
+ (double)maximumDurationWithinLimitsForMode:(id)mode options:(id)options;	// 0x323f5081
+ (id)settingForMode:(id)mode;	// 0x323f3b99
- (id)initWithSource:(id)source dest:(id)dest mode:(id)mode options:(id)options;	// 0x323f572d
- (void)addListeners;	// 0x323f2ef1
// declared property getter: - (long long)approximateByteSize;	// 0x323f5b3d
- (id)audioPropertiesForTrackReader:(OpaqueFigTrackReader *)trackReader;	// 0x323f30c5
- (CGSize)calculateDimensionsOfSource;	// 0x323f37d5
- (BOOL)canPassThroughAudio:(id)audio;	// 0x323f3cf5
- (BOOL)canPassThroughVideo:(id)video;	// 0x323f3f55
- (void)cancel;	// 0x323f5d15
- (OpaqueFigRemaker *)createFigRemaker;	// 0x323f4595
- (void)dealloc;	// 0x323f5865
- (void)discoverSourceProperties;	// 0x323f3649
- (id)fileFormatForURL:(id)url;	// 0x323f38b5
// declared property getter: - (double)maxDurationWithinLimits;	// 0x323f5a11
- (BOOL)multipleNonEmptyEditsInTrackReader:(OpaqueFigTrackReader *)trackReader;	// 0x323f2fd5
// declared property getter: - (double)progress;	// 0x323f5d75
- (void)removeListeners;	// 0x323f2c51
- (void)setRangeStartTime:(double)time endTime:(double)time2;	// 0x323f5bbd
- (id)settingForFigRemaker;	// 0x323f3bd5
// declared property getter: - (double)sourceDuration;	// 0x323f5971
- (BOOL)sourceHasPortraitOrientationVideo;	// 0x323f3865
- (id)start;	// 0x323f5c95
- (id)videoPropertiesForTrackReader:(OpaqueFigTrackReader *)trackReader;	// 0x323f32f5
@end

