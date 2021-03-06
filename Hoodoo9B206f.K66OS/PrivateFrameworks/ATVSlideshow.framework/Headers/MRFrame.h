/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLoadable.h"
#import <NSObject.h> // Unknown library
#import "MRRenderable.h"
#import "ATVSlideshow-Structs.h"

@class NSDictionary, MRImage, MRSlideProvider, NSString;

@interface MRFrame : NSObject <MRLoadable, MRRenderable> {
	NSDictionary *mDescription;	// 4 = 0x4
	MRSlideProvider *mSlideProvider;	// 8 = 0x8
	MRImage *mInputImage;	// 12 = 0xc
	MRImage *mOutputImage;	// 16 = 0x10
	NSString *mFrameID;	// 20 = 0x14
	NSDictionary *mAttributes;	// 24 = 0x18
	NSDictionary *mFlattenedAttributes;	// 28 = 0x1c
	CGSize mPixelSize;	// 32 = 0x20
}
@property(retain, nonatomic) NSDictionary *attributes;	// G=0x30a75245; S=0x30a74de1; @synthesize=mAttributes
@property(readonly, assign) NSString *frameID;	// G=0x30a75235; @synthesize=mFrameID
@property(retain, nonatomic) MRImage *inputImage;	// G=0x30a75225; S=0x30a74d79; @synthesize=mInputImage
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x30a75041; 
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x30a750ad; 
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x30a74fc1; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x30a75001; 
@property(assign, nonatomic) CGSize pixelSize;	// G=0x30a75255; S=0x30a74f11; @synthesize=mPixelSize
+ (id)retainedFrameWithFrameID:(id)frameID forSlideProvider:(id)slideProvider;	// 0x30a74a6d
- (id)initWithFrameID:(id)frameID;	// 0x30a74abd
// declared property getter: - (id)attributes;	// 0x30a75245
- (void)cancelLoading;	// 0x30a74fbd
- (void)cleanup;	// 0x30a74c19
- (void)dealloc;	// 0x30a74b99
- (void)finalize;	// 0x30a74bd9
// declared property getter: - (id)frameID;	// 0x30a75235
// declared property getter: - (id)inputImage;	// 0x30a75225
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x30a75041
// declared property getter: - (BOOL)isInfinite;	// 0x30a750ad
- (BOOL)isLoadedForTime:(double)time;	// 0x30a74f65
// declared property getter: - (BOOL)isNative3D;	// 0x30a74fc1
// declared property getter: - (BOOL)isOpaque;	// 0x30a75001
- (BOOL)isRetainedBySlideProvider;	// 0x30a74d61
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x30a74f69
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a750bd
// declared property getter: - (CGSize)pixelSize;	// 0x30a75255
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a750b1
- (void)releaseBySlideProvider:(id)provider;	// 0x30a74cb5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a750b5
- (void)retainBySlideProvider:(id)provider;	// 0x30a74c8d
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a750b9
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x30a74de1
// declared property setter: - (void)setInputImage:(id)image;	// 0x30a74d79
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x30a74f11
- (void)unload;	// 0x30a74f6d
@end

