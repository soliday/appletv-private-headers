/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class BRImage, BRMerchant;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVImageViewController : BRViewController {
@private
	BOOL _waitingForImage;	// 88 = 0x58
	BRMerchant *_merchant;	// 92 = 0x5c
	BRImage *_image;	// 96 = 0x60
	id<BRImageProxy> _imageProxy;	// 100 = 0x64
}
@property(retain) BRImage *image;	// G=0x3661a879; S=0x3661a88d; @synthesize=_image
@property(retain) id<BRImageProxy> imageProxy;	// G=0x3661a8b1; S=0x3661a8c5; @synthesize=_imageProxy
@property(retain) BRMerchant *merchant;	// G=0x3661a841; S=0x3661a855; @synthesize=_merchant
- (id)initWithDictionary:(id)dictionary;	// 0x3661a609
- (void)_imageLoadFailed:(id)failed;	// 0x3661a9b9
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x3661a8e9
- (void)_setWaitingForImage:(BOOL)image;	// 0x3661aa79
- (void)dealloc;	// 0x3661a6e9
- (void)drawInContext:(CGContextRef)context;	// 0x3661a78d
// declared property getter: - (id)image;	// 0x3661a879
// declared property getter: - (id)imageProxy;	// 0x3661a8b1
// declared property getter: - (id)merchant;	// 0x3661a841
// declared property setter: - (void)setImage:(id)image;	// 0x3661a88d
// declared property setter: - (void)setImageProxy:(id)proxy;	// 0x3661a8c5
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x3661a855
@end

