/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImageView.h"

@class _UISegmentedControlAppearanceStorage, UIColor;

__attribute__((visibility("hidden")))
@interface UISegment : UIImageView {
@private
	UIView *_info;	// 52 = 0x34
	_UISegmentedControlAppearanceStorage *_appearanceStorage;	// 56 = 0x38
	float _width;	// 60 = 0x3c
	CGSize _contentOffset;	// 64 = 0x40
	UIColor *_tintColor;	// 72 = 0x48
	int _barStyle;	// 76 = 0x4c
	struct {
		unsigned style : 3;
		unsigned size : 2;
		unsigned selected : 1;
		unsigned highlighted : 1;
		unsigned showDivider : 1;
		unsigned hasImage : 1;
		unsigned isDisclosure : 1;
		unsigned position : 3;
		unsigned autosizeText : 1;
		unsigned isMomentary : 1;
	} _segmentFlags;	// 80 = 0x50
}
@property(assign) int controlSize;	// G=0x3020d435; S=0x3020d449; 
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x300c77d5; S=0x3019533d; converted property
@property(retain) UIView *info;	// G=0x300e12c1; S=0x300c7999; converted property
@property(assign, getter=isMomentary) BOOL momentary;	// G=0x3020d421; S=0x300c9f6d; 
@property(assign, getter=isSelected) BOOL selected;	// G=0x300e145d; S=0x300ca321; 
- (id)initWithCoder:(id)coder;	// 0x3020cb41
- (id)initWithInfo:(id)info style:(int)style size:(int)size barStyle:(int)style4 tintColor:(id)color appearanceStorage:(id)storage position:(unsigned)position isDisclosure:(BOOL)disclosure autosizeText:(BOOL)text;	// 0x300c762d
- (float)_barHeight;	// 0x300caf3d
- (void)_commonInitWithInfo:(id)info position:(unsigned)position autosizeText:(BOOL)text;	// 0x300c78c1
- (id)_currentOptionsStyleTextColor;	// 0x300c88a9
- (id)_currentOptionsStyleTextShadowColor;	// 0x300c8a55
- (id)_dividerImageForRight:(BOOL)right;	// 0x300c91c5
- (id)_dividerImageForRight:(BOOL)right isCustom:(BOOL *)custom;	// 0x300c91d9
- (float)_idealWidth;	// 0x300cad8d
- (BOOL)_isInMiniBar;	// 0x300c8ff5
- (float)_paddingForLeft:(BOOL)left;	// 0x300caf71
- (void)_populateArchivedSubviews:(id)subviews;	// 0x3020cd4d
- (void)_positionInfo;	// 0x300c8be9
- (unsigned)_segmentState;	// 0x300c8829
- (void)_setEnabledAppearance:(BOOL)appearance;	// 0x300c9e91
- (id)_texturedFillImage;	// 0x30194b7d
- (id)_texturedLeftCapImage;	// 0x30194b2d
- (id)_texturedRightCapImage;	// 0x301974dd
- (void)_tileImage:(id)image inRect:(CGRect)rect;	// 0x30194bcd
- (void)_updateBackgroundImage;	// 0x300c950d
- (void)_updateTextColors;	// 0x300c7c2d
- (void)_updateTexturedBackgroundImage;	// 0x3019431d
- (void)animateAdd:(BOOL)add;	// 0x3020d4b5
- (void)animateRemoveForWidth:(float)width;	// 0x3020d4f1
- (CGRect)contentRect;	// 0x300c8e41
- (CGSize)contentSize;	// 0x300cae31
// declared property getter: - (int)controlSize;	// 0x3020d435
- (void)dealloc;	// 0x300cb201
- (id)disabledTextColor;	// 0x3020d081
- (void)encodeWithCoder:(id)coder;	// 0x3020cdd1
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x3020d7bd
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x301613c1
// converted property getter: - (id)info;	// 0x300e12c1
- (id)infoName;	// 0x3020d759
- (void)insertDividerView;	// 0x300c9019
// converted property getter: - (BOOL)isHighlighted;	// 0x300c77d5
// declared property getter: - (BOOL)isMomentary;	// 0x3020d421
// declared property getter: - (BOOL)isSelected;	// 0x300e145d
- (void)setAutosizeText:(BOOL)text;	// 0x3020d3e5
- (void)setBarStyle:(int)style;	// 0x3020d1e1
- (void)setBounds:(CGRect)bounds;	// 0x3020d641
- (void)setContentOffset:(CGSize)offset;	// 0x3020d719
// declared property setter: - (void)setControlSize:(int)size;	// 0x3020d449
- (void)setEnabled:(BOOL)enabled;	// 0x300c9e31
- (void)setFrame:(CGRect)frame;	// 0x300c77e9
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3019533d
// converted property setter: - (void)setInfo:(id)info;	// 0x300c7999
// declared property setter: - (void)setMomentary:(BOOL)momentary;	// 0x300c9f6d
- (void)setPosition:(unsigned)position;	// 0x300cb0a5
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x300ca321
- (void)setShowDivider:(BOOL)divider;	// 0x300cb10d
- (void)setTintColor:(id)color;	// 0x3020d301
- (void)updateDividerViewToMatchSegment:(id)matchSegment;	// 0x300ca38d
- (BOOL)useBlockyMagnificationInClassic;	// 0x3020d825
@end

