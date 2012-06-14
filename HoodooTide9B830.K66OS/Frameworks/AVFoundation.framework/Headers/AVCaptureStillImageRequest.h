/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"


@interface AVCaptureStillImageRequest : NSObject <NSCopying> {
	id _sbufCompletionBlock;	// 4 = 0x4
	id _iosurfaceCompletionBlock;	// 8 = 0x8
	int _stillImageOrientation;	// 12 = 0xc
	BOOL _stillImageMirrored;	// 16 = 0x10
	CGSize _previewImageSize;	// 20 = 0x14
	unsigned long _imageDataFormatType;	// 28 = 0x1c
	BOOL _isHDRImage;	// 32 = 0x20
	BOOL _isEV0Image;	// 33 = 0x21
	BOOL _chromaNoiseReductionEnabled;	// 34 = 0x22
	BOOL _suspendsVideoProcessing;	// 35 = 0x23
}
@property(assign) BOOL chromaNoiseReductionEnabled;	// G=0x35e601c1; S=0x35e601d1; @synthesize=_chromaNoiseReductionEnabled
@property(assign) unsigned long imageDataFormatType;	// G=0x35e600b1; S=0x35e600c1; @synthesize=_imageDataFormatType
@property(copy) id iosurfaceCompletionBlock;	// G=0x35e60149; S=0x35e6015d; @synthesize=_iosurfaceCompletionBlock
@property(assign) BOOL isEV0Image;	// G=0x35e601a1; S=0x35e601b1; @synthesize=_isEV0Image
@property(assign) BOOL isHDRImage;	// G=0x35e60181; S=0x35e60191; @synthesize=_isHDRImage
@property(assign) CGSize previewImageSize;	// G=0x35e60081; S=0x35e6009d; @synthesize=_previewImageSize
@property(copy) id sbufCompletionBlock;	// G=0x35e60111; S=0x35e60125; @synthesize=_sbufCompletionBlock
@property(assign, getter=isStillImageMirrored) BOOL stillImageMirrored;	// G=0x35e600d1; S=0x35e600e1; @synthesize=_stillImageMirrored
@property(assign) int stillImageOrientation;	// G=0x35e600f1; S=0x35e60101; @synthesize=_stillImageOrientation
@property(assign) BOOL suspendsVideoProcessing;	// G=0x35e601e1; S=0x35e601f1; @synthesize=_suspendsVideoProcessing
+ (id)request;	// 0x35e5fe11
// declared property getter: - (BOOL)chromaNoiseReductionEnabled;	// 0x35e601c1
- (id)copyWithZone:(NSZone *)zone;	// 0x35e5fe55
- (void)dealloc;	// 0x35e60029
// declared property getter: - (unsigned long)imageDataFormatType;	// 0x35e600b1
// declared property getter: - (id)iosurfaceCompletionBlock;	// 0x35e60149
// declared property getter: - (BOOL)isEV0Image;	// 0x35e601a1
// declared property getter: - (BOOL)isHDRImage;	// 0x35e60181
// declared property getter: - (BOOL)isStillImageMirrored;	// 0x35e600d1
// declared property getter: - (CGSize)previewImageSize;	// 0x35e60081
// declared property getter: - (id)sbufCompletionBlock;	// 0x35e60111
// declared property setter: - (void)setChromaNoiseReductionEnabled:(BOOL)enabled;	// 0x35e601d1
// declared property setter: - (void)setImageDataFormatType:(unsigned long)type;	// 0x35e600c1
// declared property setter: - (void)setIosurfaceCompletionBlock:(id)block;	// 0x35e6015d
// declared property setter: - (void)setIsEV0Image:(BOOL)image;	// 0x35e601b1
// declared property setter: - (void)setIsHDRImage:(BOOL)image;	// 0x35e60191
// declared property setter: - (void)setPreviewImageSize:(CGSize)size;	// 0x35e6009d
// declared property setter: - (void)setSbufCompletionBlock:(id)block;	// 0x35e60125
// declared property setter: - (void)setStillImageMirrored:(BOOL)mirrored;	// 0x35e600e1
// declared property setter: - (void)setStillImageOrientation:(int)orientation;	// 0x35e60101
// declared property setter: - (void)setSuspendsVideoProcessing:(BOOL)processing;	// 0x35e601f1
// declared property getter: - (int)stillImageOrientation;	// 0x35e600f1
// declared property getter: - (BOOL)suspendsVideoProcessing;	// 0x35e601e1
@end

