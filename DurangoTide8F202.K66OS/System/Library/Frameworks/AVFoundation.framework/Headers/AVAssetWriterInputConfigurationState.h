/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, AVOutputSettings, NSString, NSArray;

@interface AVAssetWriterInputConfigurationState : NSObject {
@private
	NSString *_mediaType;	// 4 = 0x4
	AVOutputSettings *_outputSettings;	// 8 = 0x8
	NSDictionary *_sourcePixelBufferAttributes;	// 12 = 0xc
	BOOL _attachedToPixelBufferAdaptor;	// 16 = 0x10
	NSArray *_metadataItems;	// 20 = 0x14
	CGAffineTransform _transform;	// 24 = 0x18
	int _mediaTimeScale;	// 48 = 0x30
	BOOL _expectsMediaDataInRealTime;	// 52 = 0x34
}
@property(assign, nonatomic) BOOL attachedToPixelBufferAdaptor;	// G=0x303e9501; S=0x303e9511; @synthesize=_attachedToPixelBufferAdaptor
@property(assign, nonatomic) BOOL expectsMediaDataInRealTime;	// G=0x303e9461; S=0x303e9471; @synthesize=_expectsMediaDataInRealTime
@property(assign, nonatomic) int mediaTimeScale;	// G=0x303e9481; S=0x303e9491; @synthesize=_mediaTimeScale
@property(copy, nonatomic) NSString *mediaType;	// G=0x303e9541; S=0x303ea8c1; @synthesize=_mediaType
@property(copy, nonatomic) NSArray *metadataItems;	// G=0x303e94f1; S=0x303ea945; @synthesize=_metadataItems
@property(copy, nonatomic) AVOutputSettings *outputSettings;	// G=0x303e9531; S=0x303ea8ed; @synthesize=_outputSettings
@property(copy, nonatomic) NSDictionary *sourcePixelBufferAttributes;	// G=0x303e9521; S=0x303ea919; @synthesize=_sourcePixelBufferAttributes
@property(assign, nonatomic) CGAffineTransform transform;	// G=0x303e94a1; S=0x303e94bd; @synthesize=_transform
// declared property getter: - (BOOL)attachedToPixelBufferAdaptor;	// 0x303e9501
- (void)dealloc;	// 0x303ea815
// declared property getter: - (BOOL)expectsMediaDataInRealTime;	// 0x303e9461
// declared property getter: - (int)mediaTimeScale;	// 0x303e9481
// declared property getter: - (id)mediaType;	// 0x303e9541
// declared property getter: - (id)metadataItems;	// 0x303e94f1
// declared property getter: - (id)outputSettings;	// 0x303e9531
// declared property setter: - (void)setAttachedToPixelBufferAdaptor:(BOOL)pixelBufferAdaptor;	// 0x303e9511
// declared property setter: - (void)setExpectsMediaDataInRealTime:(BOOL)realTime;	// 0x303e9471
// declared property setter: - (void)setMediaTimeScale:(int)scale;	// 0x303e9491
// declared property setter: - (void)setMediaType:(id)type;	// 0x303ea8c1
// declared property setter: - (void)setMetadataItems:(id)items;	// 0x303ea945
// declared property setter: - (void)setOutputSettings:(id)settings;	// 0x303ea8ed
// declared property setter: - (void)setSourcePixelBufferAttributes:(id)attributes;	// 0x303ea919
// declared property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x303e94bd
// declared property getter: - (id)sourcePixelBufferAttributes;	// 0x303e9521
// declared property getter: - (CGAffineTransform)transform;	// 0x303e94a1
@end

