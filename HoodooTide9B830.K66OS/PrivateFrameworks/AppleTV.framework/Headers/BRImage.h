/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSData, NSString;

@interface BRImage : NSObject {
@private
	CGImageRef _image;	// 4 = 0x4
	NSString *_accessibilityLabel;	// 8 = 0x8
	CGImageSourceRef _imageSource;	// 12 = 0xc
	float _imageWidth;	// 16 = 0x10
	float _imageHeight;	// 20 = 0x14
	int _imageOrientation;	// 24 = 0x18
	BOOL _enableCache;	// 28 = 0x1c
	NSURL *_imageURL;	// 32 = 0x20
	NSData *_imageData;	// 36 = 0x24
	BOOL _imageBufferInMemory;	// 40 = 0x28
	BOOL _rotationEnabled;	// 41 = 0x29
}
@property(retain) NSString *accessibilityLabel;	// G=0x3297fa75; S=0x3297fa85; converted property
@property(assign) BOOL enableCache;	// G=0x3297f79d; S=0x3297f76d; converted property
@property(readonly, assign) CGImageRef image;	// G=0x3297f5d1; converted property
@property(readonly, assign, getter=isImageBufferInMemory) BOOL imageBufferInMemory;	// G=0x3297ff49; converted property
@property(readonly, assign, nonatomic) int orientation;	// G=0x3297ff59; @synthesize=_imageOrientation
@property(readonly, assign, nonatomic) BOOL rotationEnabled;	// G=0x3297ff69; @synthesize=_rotationEnabled
+ (id)imageWithCGImageRef:(CGImageRef)cgimageRef;	// 0x3297ee41
+ (id)imageWithData:(id)data;	// 0x3297edfd
+ (id)imageWithName:(id)name ofType:(id)type inBundle:(id)bundle;	// 0x3297ef6d
+ (id)imageWithPDFURL:(id)pdfurl;	// 0x3297ee85
+ (id)imageWithPath:(id)path;	// 0x3297ed95
+ (id)imageWithRotationFromData:(id)data;	// 0x3297f05d
+ (id)imageWithRotationFromPath:(id)path;	// 0x3297f01d
+ (id)imageWithRotationFromURL:(id)url;	// 0x3297efc5
+ (id)imageWithURL:(id)url;	// 0x3297ed51
- (id)initWithCGImageRef:(CGImageRef)cgimageRef;	// 0x3297f0b5
- (id)initWithData:(id)data;	// 0x3297f341
- (id)initWithURL:(id)url;	// 0x3297f195
- (id)_initWithCGImageSourceRotationEnabled:(CGImageSourceRef)cgimageSourceRotationEnabled;	// 0x3297ff79
- (void)_initializeCGImageWithRotation;	// 0x329800d1
// converted property getter: - (id)accessibilityLabel;	// 0x3297fa75
- (float)aspectRatio;	// 0x3297f6c1
- (id)croppedImageForSize:(CGSize)size;	// 0x3297fb85
- (void)dealloc;	// 0x3297f4fd
- (id)deletterboxedImage;	// 0x3297f7ad
- (void)drawImageInContext:(CGContextRef)context rect:(CGRect)rect;	// 0x3297f59d
// converted property getter: - (BOOL)enableCache;	// 0x3297f79d
// converted property getter: - (CGImageRef)image;	// 0x3297f5d1
- (BOOL)isAccessibilityElement;	// 0x3297fa5d
// converted property getter: - (BOOL)isImageBufferInMemory;	// 0x3297ff49
- (BOOL)isPowerOfTwo;	// 0x3297f705
- (CGRect)largestSquareRect;	// 0x3297fd85
- (id)mapImageWithSourceRect:(CGRect)sourceRect toSize:(CGSize)size;	// 0x3297fac9
// declared property getter: - (int)orientation;	// 0x3297ff59
- (CGSize)pixelBounds;	// 0x3297f695
- (void)purgeRawData;	// 0x32aab871
- (id)rawData;	// 0x32aab86d
// declared property getter: - (BOOL)rotationEnabled;	// 0x3297ff69
// converted property setter: - (void)setAccessibilityLabel:(id)label;	// 0x3297fa85
// converted property setter: - (void)setEnableCache:(BOOL)cache;	// 0x3297f76d
- (BOOL)sourceRequiresRotation;	// 0x3297f751
- (id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)aspectRatioLimit;	// 0x3297fe65
@end

