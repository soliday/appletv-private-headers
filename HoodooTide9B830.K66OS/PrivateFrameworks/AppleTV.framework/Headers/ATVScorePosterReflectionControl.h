/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImage;

__attribute__((visibility("hidden")))
@interface ATVScorePosterReflectionControl : BRControl {
@private
	BRImage *_backgroundImage;	// 48 = 0x30
	float _sizeFactor;	// 52 = 0x34
	BRImage *_image;	// 56 = 0x38
}
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0x3293ca61; S=0x3293c749; @synthesize=_backgroundImage
@property(retain, nonatomic) BRImage *image;	// G=0x3293ca51; S=0x3293c79d; @synthesize=_image
@property(assign, nonatomic) float sizeFactor;	// G=0x3293ca71; S=0x3293ca81; @synthesize=_sizeFactor
- (id)init;	// 0x3293c6f1
// declared property getter: - (id)backgroundImage;	// 0x3293ca61
- (void)dealloc;	// 0x3293c7f1
- (void)drawInContext:(CGContextRef)context;	// 0x3293c851
// declared property getter: - (id)image;	// 0x3293ca51
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x3293c749
// declared property setter: - (void)setImage:(id)image;	// 0x3293c79d
// declared property setter: - (void)setSizeFactor:(float)factor;	// 0x3293ca81
// declared property getter: - (float)sizeFactor;	// 0x3293ca71
@end

