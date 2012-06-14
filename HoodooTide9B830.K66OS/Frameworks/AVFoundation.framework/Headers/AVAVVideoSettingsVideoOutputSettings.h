/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVReencodedVideoSettingsForFig.h"
#import "AVVideoOutputSettings.h"

@class NSDictionary;

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig> {
@private
	BOOL _dictionaryWasFullyFormed;	// 8 = 0x8
	NSDictionary *_adaptedVideoCompressionProperties;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned long videoCodecType;	// G=0x35e6acf1; 
@property(readonly, assign, nonatomic) NSDictionary *videoCompressionProperties;	// G=0x35e6ad39; 
@property(readonly, assign, nonatomic) NSDictionary *videoEncoderSpecification;	// G=0x35e6ad35; 
+ (BOOL)_validateVideoCompressionProperties:(id)properties againstSupportedPropertyDictionary:(id)dictionary forCodecType:(id)codecType exceptionReason:(id *)reason;	// 0x35e69ec5
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x35e69e75
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x35e69df1
- (id)initWithAVVideoSettingsDictionary:(id)avvideoSettingsDictionary exceptionReason:(id *)reason;	// 0x35e6a2c5
- (void)dealloc;	// 0x35e6abf9
- (int)height;	// 0x35e6aca5
- (BOOL)isDictionaryFullyFormed;	// 0x35e6ac49
// declared property getter: - (unsigned long)videoCodecType;	// 0x35e6acf1
// declared property getter: - (id)videoCompressionProperties;	// 0x35e6ad39
// declared property getter: - (id)videoEncoderSpecification;	// 0x35e6ad35
- (int)width;	// 0x35e6ac59
- (BOOL)willYieldCompressedSamples;	// 0x35e6ac45
@end

