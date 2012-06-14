/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class MRImage, MRCroppingSprite;

@interface MRFlipupRenderable : NSObject {
	float zPosition;	// 4 = 0x4
	BOOL needsBlend;	// 8 = 0x8
	float modelViewMatrix[16];	// 12 = 0xc
	float color;	// 76 = 0x4c
	float opacity;	// 80 = 0x50
	MRImage *slide;	// 84 = 0x54
	MRCroppingSprite *sprite;	// 88 = 0x58
	CGPoint position;	// 92 = 0x5c
	CGSize size;	// 100 = 0x64
	float flippedModelViewMatrix[16];	// 108 = 0x6c
	MRCroppingSprite *reflectionSprite;	// 172 = 0xac
	CGPoint reflectionPosition;	// 176 = 0xb0
}
@property(retain, nonatomic) MRCroppingSprite *reflectionSprite;	// G=0x30b3872d; S=0x30b3873d; @synthesize
@property(retain, nonatomic) MRImage *slide;	// G=0x30b386c5; S=0x30b386d5; @synthesize
@property(retain, nonatomic) MRCroppingSprite *sprite;	// G=0x30b386f9; S=0x30b38709; @synthesize
- (void)dealloc;	// 0x30b38631
// declared property getter: - (id)reflectionSprite;	// 0x30b3872d
// declared property setter: - (void)setReflectionSprite:(id)sprite;	// 0x30b3873d
// declared property setter: - (void)setSlide:(id)slide;	// 0x30b386d5
// declared property setter: - (void)setSprite:(id)sprite;	// 0x30b38709
// declared property getter: - (id)slide;	// 0x30b386c5
// declared property getter: - (id)sprite;	// 0x30b386f9
@end

