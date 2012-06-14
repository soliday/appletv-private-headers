/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableSet, NSNumber, BRWaitSpinnerControl, BRMarqueeTextControl, NSAttributedString, NSString, BRAsyncImageControl;
@protocol BRDisplayInfoLoader;

@interface BRMenuItem : BRControl {
@private
	CGColorRef _bgColor;	// 48 = 0x30
	NSAttributedString *_text;	// 52 = 0x34
	NSAttributedString *_detailedText;	// 56 = 0x38
	NSAttributedString *_rightJustifiedText;	// 60 = 0x3c
	BRMarqueeTextControl *_scrollingTextControl;	// 64 = 0x40
	BRAsyncImageControl *_imageControl;	// 68 = 0x44
	BRWaitSpinnerControl *_spinner;	// 72 = 0x48
	id<BRDisplayInfoLoader> _displayInfoLoader;	// 76 = 0x4c
	NSMutableSet *_accessories;	// 80 = 0x50
	BOOL _dimmed;	// 84 = 0x54
	BOOL _disableAccessoryHighlighting;	// 85 = 0x55
	BOOL _forceOrdinalLayout;	// 86 = 0x56
	BOOL _dotsTrailImage;	// 87 = 0x57
	BOOL _forceBlueDotLayout;	// 88 = 0x58
	BOOL _forceCenteredIconLayout;	// 89 = 0x59
	BOOL _forceMenuArrowLayout;	// 90 = 0x5a
	BOOL _usingDefaultTextAttributes;	// 91 = 0x5b
	BOOL _iconsTrailText;	// 92 = 0x5c
	float _forcedHeight;	// 96 = 0x60
	float _forcedContentHeight;	// 100 = 0x64
	NSNumber *_ordinal;	// 104 = 0x68
	int _largestOrdinal;	// 108 = 0x6c
	float _imageInset;	// 112 = 0x70
	float _imageHeight;	// 116 = 0x74
	float _textPadding;	// 120 = 0x78
	float _leftMargin;	// 124 = 0x7c
	float _rightMargin;	// 128 = 0x80
	float _imageAspectRatio;	// 132 = 0x84
	BOOL _colorSet;	// 136 = 0x88
	NSString *_accessibilityLanguage;	// 140 = 0x8c
}
@property(retain) NSString *accessibilityLanguage;	// G=0x367104c5; S=0x3670ef4d; converted property
@property(retain) NSAttributedString *detailedText;	// G=0x3670d055; S=0x3670cf19; converted property
@property(assign) BOOL dimmed;	// G=0x3670d801; S=0x3670d6d5; converted property
@property(assign) BOOL disableAccessoryHighlighting;	// G=0x3670d831; S=0x3670d811; converted property
@property(retain) id displayInfoLoader;	// G=0x3670d545; S=0x3670d47d; converted property
@property(assign) BOOL dotsTrailImage;	// G=0x3670dae1; S=0x3670dab1; converted property
@property(assign) BOOL forceBlueDotLayout;	// G=0x3670da61; S=0x3670da31; converted property
@property(assign) BOOL forceCenteredIconLayout;	// G=0x3670daa1; S=0x3670da71; converted property
@property(assign) BOOL forceMenuArrowLayout;	// G=0x3670d965; S=0x3670d945; converted property
@property(readonly, assign) BOOL forceOrdinalLayout;	// G=0x3670da21; converted property
@property(assign) float forcedContentHeight;	// G=0x3670d935; S=0x3670d915; converted property
@property(assign) float forcedHeight;	// G=0x3670d905; S=0x3670d841; converted property
@property(assign) BOOL iconsTrailText;	// G=0x3670db21; S=0x3670daf1; converted property
@property(retain) id image;	// G=0x3670d2f1; S=0x3670d145; converted property
@property(assign) float imageAspectRatio;	// G=0x3670d46d; S=0x3670d431; converted property
@property(assign) float imageHeight;	// G=0x3670dc51; S=0x3670dc15; converted property
@property(assign) float imageInset;	// G=0x3670dbb9; S=0x3670db7d; converted property
@property(retain) id imageProxy;	// G=0x3670d411; S=0x3670d3fd; converted property
@property(assign) float leftMargin;	// G=0x3670db6d; S=0x3670db31; converted property
@property(assign) CGColorRef menuItemBackgroundColor;	// G=0x3670cd9d; S=0x3670cd75; converted property
@property(retain) NSAttributedString *rightJustifiedText;	// G=0x3670d125; S=0x3670d075; converted property
@property(assign) float rightMargin;	// G=0x3670dc9d; S=0x3670dc61; converted property
@property(retain) NSAttributedString *text;	// G=0x3670cef9; S=0x3670cdc5; converted property
@property(assign) float textPadding;	// G=0x3670dc05; S=0x3670dbc9; converted property
- (id)init;	// 0x3670c70d
- (id)_accessoryOfType:(int)type;	// 0x3670f13d
- (id)_accessoryOfType:(int)type offset:(float *)offset;	// 0x3670f151
- (CGRect)_contentFrameForBounds:(CGRect)bounds;	// 0x367101e5
- (id)_detailedTextAttributes;	// 0x3670fab5
- (id)_firstAccessoryFromAccessories:(id)accessories offset:(float *)offset;	// 0x3670f585
- (CGRect)_imageFrame;	// 0x3670ff7d
- (id)_imageWithName:(id)name;	// 0x3670fc5d
- (id)_largeLeftImage;	// 0x3670f745
- (float)_largestOrdinalWidth;	// 0x3670fd6d
- (id)_ordinalImage;	// 0x3670f8e9
- (id)_ordinalString;	// 0x3670fe51
- (id)_ordinalTypes;	// 0x3670f859
- (id)_rightJustifiedIconWithRightOffset:(float *)rightOffset;	// 0x3670f5f5
- (id)_rightTextAttributes;	// 0x3670faf9
- (void)_setSpinnerEnabled:(BOOL)enabled;	// 0x3670fcc5
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x3670ef91
- (void)_switchToScrollingTextForTextFrame:(CGRect)textFrame;	// 0x3670fb7d
- (id)_textAttributes;	// 0x3670fb3d
- (void)_updateColorAndContentHeight;	// 0x3670f001
- (id)_upperRightImageTypes;	// 0x3670f91d
- (id)_upperRightImages;	// 0x3670f9fd
- (id)accessibilityLabel;	// 0x36710261
// converted property getter: - (id)accessibilityLanguage;	// 0x367104c5
- (id)accessibilitySecondaryLabel;	// 0x36710355
- (id)accessibilityTraits;	// 0x36710409
- (void)addAccessoryOfType:(int)type;	// 0x3670d555
- (void)cancelLoadDisplayInfo;	// 0x3670cc71
- (id)centeredDetailedTextAttributes;	// 0x3670cd51
- (id)centeredTextAttributes;	// 0x3670ccb9
- (void)controlWasActivated;	// 0x3670ca69
- (void)controlWasDeactivated;	// 0x3670cb5d
- (void)controlWasFocused;	// 0x3670c9a9
- (void)controlWasUnfocused;	// 0x3670ca09
- (void)dealloc;	// 0x3670c7e5
- (id)description;	// 0x3670c8f9
// converted property getter: - (id)detailedText;	// 0x3670d055
// converted property getter: - (BOOL)dimmed;	// 0x3670d801
// converted property getter: - (BOOL)disableAccessoryHighlighting;	// 0x3670d831
// converted property getter: - (id)displayInfoLoader;	// 0x3670d545
// converted property getter: - (BOOL)dotsTrailImage;	// 0x3670dae1
- (void)drawInContext:(CGContextRef)context;	// 0x3670dd59
- (CGRect)focusCursorFrame;	// 0x3670dcad
// converted property getter: - (BOOL)forceBlueDotLayout;	// 0x3670da61
// converted property getter: - (BOOL)forceCenteredIconLayout;	// 0x3670daa1
// converted property getter: - (BOOL)forceMenuArrowLayout;	// 0x3670d965
// converted property getter: - (BOOL)forceOrdinalLayout;	// 0x3670da21
// converted property getter: - (float)forcedContentHeight;	// 0x3670d935
// converted property getter: - (float)forcedHeight;	// 0x3670d905
- (BOOL)hasAccessoryOfType:(int)type;	// 0x3670d679
// converted property getter: - (BOOL)iconsTrailText;	// 0x3670db21
// converted property getter: - (id)image;	// 0x3670d2f1
// converted property getter: - (float)imageAspectRatio;	// 0x3670d46d
// converted property getter: - (float)imageHeight;	// 0x3670dc51
// converted property getter: - (float)imageInset;	// 0x3670dbb9
// converted property getter: - (id)imageProxy;	// 0x3670d411
- (BOOL)isAccessibilityElement;	// 0x3671025d
- (void)layoutSubcontrols;	// 0x3670eef1
// converted property getter: - (float)leftMargin;	// 0x3670db6d
- (void)loadDisplayInfo;	// 0x3670cc29
// converted property getter: - (CGColorRef)menuItemBackgroundColor;	// 0x3670cd9d
- (void)removeAccessoryOfType:(int)type;	// 0x3670d601
- (void)removeAllAccessories;	// 0x3670d699
// converted property getter: - (id)rightJustifiedText;	// 0x3670d125
// converted property getter: - (float)rightMargin;	// 0x3670dc9d
- (void)scrollingCompleted;	// 0x3670cbc9
// converted property setter: - (void)setAccessibilityLanguage:(id)language;	// 0x3670ef4d
- (void)setDefaultImage:(id)image;	// 0x3670d225
// converted property setter: - (void)setDetailedText:(id)text;	// 0x3670cf19
- (void)setDetailedText:(id)text withAttributes:(id)attributes;	// 0x3670cf2d
// converted property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x3670d6d5
// converted property setter: - (void)setDisableAccessoryHighlighting:(BOOL)highlighting;	// 0x3670d811
// converted property setter: - (void)setDisplayInfoLoader:(id)loader;	// 0x3670d47d
// converted property setter: - (void)setDotsTrailImage:(BOOL)image;	// 0x3670dab1
// converted property setter: - (void)setForceBlueDotLayout:(BOOL)layout;	// 0x3670da31
// converted property setter: - (void)setForceCenteredIconLayout:(BOOL)layout;	// 0x3670da71
// converted property setter: - (void)setForceMenuArrowLayout:(BOOL)layout;	// 0x3670d945
- (void)setForceOrdinalLayout:(BOOL)layout ordinal:(id)ordinal largestOrdinal:(id)ordinal3;	// 0x3670d975
// converted property setter: - (void)setForcedContentHeight:(float)height;	// 0x3670d915
// converted property setter: - (void)setForcedHeight:(float)height;	// 0x3670d841
// converted property setter: - (void)setIconsTrailText:(BOOL)text;	// 0x3670daf1
// converted property setter: - (void)setImage:(id)image;	// 0x3670d145
// converted property setter: - (void)setImageAspectRatio:(float)ratio;	// 0x3670d431
// converted property setter: - (void)setImageHeight:(float)height;	// 0x3670dc15
// converted property setter: - (void)setImageInset:(float)inset;	// 0x3670db7d
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x3670d3fd
- (void)setImageProxy:(id)proxy shouldCropAndFill:(BOOL)fill;	// 0x3670d311
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x3670db31
// converted property setter: - (void)setMenuItemBackgroundColor:(CGColorRef)color;	// 0x3670cd75
// converted property setter: - (void)setRightJustifiedText:(id)text;	// 0x3670d075
- (void)setRightJustifiedText:(id)text withAttributes:(id)attributes;	// 0x3670d089
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x3670dc61
// converted property setter: - (void)setText:(id)text;	// 0x3670cdc5
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x3670cdd9
// converted property setter: - (void)setTextPadding:(float)padding;	// 0x3670dbc9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3670c961
// converted property getter: - (id)text;	// 0x3670cef9
// converted property getter: - (float)textPadding;	// 0x3670dc05
@end

