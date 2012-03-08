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
@property(readonly, assign) long long approximateByteSize;	// G=0x30ec2b3d; 
@property(readonly, assign) double maxDurationWithinLimits;	// G=0x30ec2a11; 
@property(readonly, assign) double progress;	// G=0x30ec2d75; 
@property(readonly, assign) double sourceDuration;	// G=0x30ec2971; 
+ (long long)approximateByteSizeForMode:(id)mode duration:(double)duration options:(id)options;	// 0x30ec2581
+ (id)figRemakerNotificationNames;	// 0x30ebfbd9
+ (double)maximumDurationWithinLimitsForMode:(id)mode options:(id)options;	// 0x30ec2081
+ (id)settingForMode:(id)mode;	// 0x30ec0b99
- (id)initWithSource:(id)source dest:(id)dest mode:(id)mode options:(id)options;	// 0x30ec272d
- (void)addListeners;	// 0x30ebfef1
// declared property getter: - (long long)approximateByteSize;	// 0x30ec2b3d
- (id)audioPropertiesForTrackReader:(OpaqueFigTrackReader *)trackReader;	// 0x30ec00c5
- (CGSize)calculateDimensionsOfSource;	// 0x30ec07d5
- (BOOL)canPassThroughAudio:(id)audio;	// 0x30ec0cf5
- (BOOL)canPassThroughVideo:(id)video;	// 0x30ec0f55
- (void)cancel;	// 0x30ec2d15
- (OpaqueFigRemaker *)createFigRemaker;	// 0x30ec1595
- (void)dealloc;	// 0x30ec2865
- (void)discoverSourceProperties;	// 0x30ec0649
- (id)fileFormatForURL:(id)url;	// 0x30ec08b5
// declared property getter: - (double)maxDurationWithinLimits;	// 0x30ec2a11
- (BOOL)multipleNonEmptyEditsInTrackReader:(OpaqueFigTrackReader *)trackReader;	// 0x30ebffd5
// declared property getter: - (double)progress;	// 0x30ec2d75
- (void)removeListeners;	// 0x30ebfc51
- (void)setRangeStartTime:(double)time endTime:(double)time2;	// 0x30ec2bbd
- (id)settingForFigRemaker;	// 0x30ec0bd5
// declared property getter: - (double)sourceDuration;	// 0x30ec2971
- (BOOL)sourceHasPortraitOrientationVideo;	// 0x30ec0865
- (id)start;	// 0x30ec2c95
- (id)videoPropertiesForTrackReader:(OpaqueFigTrackReader *)trackReader;	// 0x30ec02f5
@end
