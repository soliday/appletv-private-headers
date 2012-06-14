/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMediaShelfViewCell.h"
#import "BRControl.h"

@class NSString, BRImage, ATVScorePosterReflectionControl;
@protocol BRImageProxy;

@interface ATVScorePoster : BRControl <BRMediaShelfViewCell> {
@private
	ATVScorePosterReflectionControl *_reflectionControl;	// 48 = 0x30
	BOOL _waitingForImages;	// 52 = 0x34
	BRImage *_backgroundImage;	// 56 = 0x38
	NSString *_upperLeftLabel1;	// 60 = 0x3c
	NSString *_upperLeftLabel2;	// 64 = 0x40
	NSString *_upperRightLabel;	// 68 = 0x44
	BRImage *_upperImage;	// 72 = 0x48
	id<BRImageProxy> _upperImageProxy;	// 76 = 0x4c
	NSString *_lowerLeftLabel1;	// 80 = 0x50
	NSString *_lowerLeftLabel2;	// 84 = 0x54
	NSString *_lowerRightLabel;	// 88 = 0x58
	BRImage *_lowerImage;	// 92 = 0x5c
	id<BRImageProxy> _lowerImageProxy;	// 96 = 0x60
	NSString *_centerLabel1;	// 100 = 0x64
	NSString *_centerLabel2;	// 104 = 0x68
}
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0x3293bf95; S=0x3293bfa5; @synthesize=_backgroundImage
@property(retain, nonatomic) NSString *centerLabel1;	// G=0x3293c1d1; S=0x3293c1e1; @synthesize=_centerLabel1
@property(retain, nonatomic) NSString *centerLabel2;	// G=0x3293c205; S=0x3293c215; @synthesize=_centerLabel2
@property(retain, nonatomic) BRImage *lowerImage;	// G=0x3293c169; S=0x3293c179; @synthesize=_lowerImage
@property(retain, nonatomic) id<BRImageProxy> lowerImageProxy;	// G=0x3293c19d; S=0x3293c1ad; @synthesize=_lowerImageProxy
@property(retain, nonatomic) NSString *lowerLeftLabel1;	// G=0x3293c0cd; S=0x3293c0dd; @synthesize=_lowerLeftLabel1
@property(retain, nonatomic) NSString *lowerLeftLabel2;	// G=0x3293c101; S=0x3293c111; @synthesize=_lowerLeftLabel2
@property(retain, nonatomic) NSString *lowerRightLabel;	// G=0x3293c135; S=0x3293c145; @synthesize=_lowerRightLabel
@property(retain, nonatomic) BRImage *reflectionBackgroundImage;	// G=0x3293b2d9; S=0x3293b2b9; 
@property(retain, nonatomic) BRImage *upperImage;	// G=0x3293c065; S=0x3293c075; @synthesize=_upperImage
@property(retain, nonatomic) id<BRImageProxy> upperImageProxy;	// G=0x3293c099; S=0x3293c0a9; @synthesize=_upperImageProxy
@property(retain, nonatomic) NSString *upperLeftLabel1;	// G=0x3293bfc9; S=0x3293bfd9; @synthesize=_upperLeftLabel1
@property(retain, nonatomic) NSString *upperLeftLabel2;	// G=0x3293bffd; S=0x3293c00d; @synthesize=_upperLeftLabel2
@property(retain, nonatomic) NSString *upperRightLabel;	// G=0x3293c031; S=0x3293c041; @synthesize=_upperRightLabel
- (id)init;	// 0x3293b085
- (CGRect)_contentFrame;	// 0x3293c239
- (void)_imageLoadFailed:(id)failed;	// 0x3293c3f1
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x3293c2d5
- (void)_setWaitingForImages:(BOOL)images;	// 0x3293c4b9
- (id)accessibilityLabel;	// 0x3293c5d1
// declared property getter: - (id)backgroundImage;	// 0x3293bf95
// declared property getter: - (id)centerLabel1;	// 0x3293c1d1
// declared property getter: - (id)centerLabel2;	// 0x3293c205
- (void)dealloc;	// 0x3293b139
- (void)drawInContext:(CGContextRef)context;	// 0x3293b391
- (CGRect)focusCursorFrame;	// 0x3293b2f9
- (void)hideTextLayers;	// 0x3293bf5d
- (BOOL)isAccessibilityElement;	// 0x3293c5cd
// declared property getter: - (id)lowerImage;	// 0x3293c169
// declared property getter: - (id)lowerImageProxy;	// 0x3293c19d
// declared property getter: - (id)lowerLeftLabel1;	// 0x3293c0cd
// declared property getter: - (id)lowerLeftLabel2;	// 0x3293c101
// declared property getter: - (id)lowerRightLabel;	// 0x3293c135
// declared property getter: - (id)reflectionBackgroundImage;	// 0x3293b2d9
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x3293bfa5
// declared property setter: - (void)setCenterLabel1:(id)a1;	// 0x3293c1e1
// declared property setter: - (void)setCenterLabel2:(id)a2;	// 0x3293c215
- (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x3293bf61
// declared property setter: - (void)setLowerImage:(id)image;	// 0x3293c179
// declared property setter: - (void)setLowerImageProxy:(id)proxy;	// 0x3293c1ad
// declared property setter: - (void)setLowerLeftLabel1:(id)a1;	// 0x3293c0dd
// declared property setter: - (void)setLowerLeftLabel2:(id)a2;	// 0x3293c111
// declared property setter: - (void)setLowerRightLabel:(id)label;	// 0x3293c145
// declared property setter: - (void)setReflectionBackgroundImage:(id)image;	// 0x3293b2b9
// declared property setter: - (void)setUpperImage:(id)image;	// 0x3293c075
// declared property setter: - (void)setUpperImageProxy:(id)proxy;	// 0x3293c0a9
// declared property setter: - (void)setUpperLeftLabel1:(id)a1;	// 0x3293bfd9
// declared property setter: - (void)setUpperLeftLabel2:(id)a2;	// 0x3293c00d
// declared property setter: - (void)setUpperRightLabel:(id)label;	// 0x3293c041
// declared property getter: - (id)upperImage;	// 0x3293c065
// declared property getter: - (id)upperImageProxy;	// 0x3293c099
// declared property getter: - (id)upperLeftLabel1;	// 0x3293bfc9
// declared property getter: - (id)upperLeftLabel2;	// 0x3293bffd
// declared property getter: - (id)upperRightLabel;	// 0x3293c031
@end

