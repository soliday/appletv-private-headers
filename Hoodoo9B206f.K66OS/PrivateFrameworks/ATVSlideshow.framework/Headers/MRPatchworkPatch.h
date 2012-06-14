/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class MRImage;

@interface MRPatchworkPatch : NSObject {
@private
	MRImage *_image;	// 4 = 0x4
@protected
	CGRect rectangle;	// 8 = 0x8
	BOOL needsBlend;	// 24 = 0x18
}
@property(retain, nonatomic) MRImage *image;	// G=0x30a9f8d1; S=0x30a9f8e1; @synthesize=_image
@property(assign, nonatomic) BOOL needsBlend;	// G=0x30a9f945; S=0x30a9f955; @synthesize
@property(assign, nonatomic) CGRect rectangle;	// G=0x30a9f905; S=0x30a9f929; @synthesize
- (id)initWithImage:(id)image rectangle:(CGRect)rectangle needsBlend:(BOOL)blend;	// 0x30a9f7e5
- (void)dealloc;	// 0x30a9f87d
// declared property getter: - (id)image;	// 0x30a9f8d1
// declared property getter: - (BOOL)needsBlend;	// 0x30a9f945
// declared property getter: - (CGRect)rectangle;	// 0x30a9f905
// declared property setter: - (void)setImage:(id)image;	// 0x30a9f8e1
// declared property setter: - (void)setNeedsBlend:(BOOL)blend;	// 0x30a9f955
// declared property setter: - (void)setRectangle:(CGRect)rectangle;	// 0x30a9f929
@end

