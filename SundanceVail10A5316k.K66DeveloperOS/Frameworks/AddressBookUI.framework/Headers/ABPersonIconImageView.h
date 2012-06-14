/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <UIView.h> // Unknown library

@class UIImage;

@interface ABPersonIconImageView : UIView {
@private
	UIView *_imageView;	// 84 = 0x54
	int _imageType;	// 88 = 0x58
	CGSize _iconSize;	// 92 = 0x5c
	UIImage *_maskImage;	// 100 = 0x64
	UIImage *_overlayImage;	// 104 = 0x68
	id _styleHelper;	// 108 = 0x6c
}
@property(assign) void *displayedPerson;	// G=0x34cc0059; S=0x34cc0039; converted property
@property(readonly, assign, nonatomic) int imageType;	// G=0x34cc00e1; @synthesize=_imageType
@property(retain, nonatomic) UIImage *maskImage;	// G=0x34cbfeed; S=0x34cbfdcd; @synthesize=_maskImage
@property(retain, nonatomic) UIImage *overlayImage;	// G=0x34cbfe9d; S=0x34cbfe25; @synthesize=_overlayImage
@property(assign, nonatomic) BOOL shouldPickBestImage;	// G=0x34cc0079; S=0x34cc009d; 
+ (BOOL)_cardPlaceholderImageShouldApplyMaskAndOverlayForType:(int)_cardPlaceholderImage;	// 0x34cbfc89
+ (id)_placeholderCompanyImageForType:(int)type size:(CGSize)size;	// 0x34cbfc59
+ (id)_placeholderPersonImageForType:(int)type size:(CGSize)size;	// 0x34cbfc29
+ (id)genericBlankPlaceholderImageOfSize:(CGSize)size;	// 0x34cbfb95
+ (id)leftRightBorderOverlayImageOfSize:(CGSize)size;	// 0x34cbfae5
+ (id)newImageViewWithIconSize:(CGSize)iconSize imageType:(int)type;	// 0x34cbf6dd
+ (CGSize)optimalIconSize;	// 0x34cbf6b1
+ (id)rightBorderOverlayImageOfSize:(CGSize)size;	// 0x34cbfa41
- (id)init;	// 0x34cbf719
- (id)initWithIconSize:(CGSize)iconSize imageType:(int)type;	// 0x34cbf7a5
- (BOOL)_cardPlaceholderImageShouldApplyMaskAndOverlay;	// 0x34cbff3d
- (id)_maskImageOrNSNull;	// 0x34cbfe7d
- (id)_overlayImageOrNSNull;	// 0x34cbfe8d
- (id)_placeholderCompanyImage;	// 0x34cbffdd
- (id)_placeholderPersonImage;	// 0x34cbff81
- (void)_updateImages;	// 0x34cbfcb5
- (void)dealloc;	// 0x34cbf981
// converted property getter: - (void *)displayedPerson;	// 0x34cc0059
- (BOOL)hasImageToDisplay;	// 0x34cc00bd
// declared property getter: - (int)imageType;	// 0x34cc00e1
// declared property getter: - (id)maskImage;	// 0x34cbfeed
// declared property getter: - (id)overlayImage;	// 0x34cbfe9d
- (id)personImageView;	// 0x34cbf795
// converted property setter: - (void)setDisplayedPerson:(void *)person;	// 0x34cc0039
// declared property setter: - (void)setMaskImage:(id)image;	// 0x34cbfdcd
- (void)setNeedsRecompositing;	// 0x34cbfc95
- (void)setNeedsReload;	// 0x34cbfa21
// declared property setter: - (void)setOverlayImage:(id)image;	// 0x34cbfe25
// declared property setter: - (void)setShouldPickBestImage:(BOOL)pickBestImage;	// 0x34cc009d
// declared property getter: - (BOOL)shouldPickBestImage;	// 0x34cc0079
@end
