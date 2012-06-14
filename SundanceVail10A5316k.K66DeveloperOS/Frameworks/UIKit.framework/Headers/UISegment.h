/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImageView.h"

@class UIColor, _UISegmentedControlAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UISegment : UIImageView {
@private
	UIView *_info;	// 96 = 0x60
	_UISegmentedControlAppearanceStorage *_appearanceStorage;	// 100 = 0x64
	float _width;	// 104 = 0x68
	CGSize _contentOffset;	// 108 = 0x6c
	UIColor *_tintColor;	// 116 = 0x74
	int _barStyle;	// 120 = 0x78
	unsigned _rightSegmentState;	// 124 = 0x7c
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
	} _segmentFlags;	// 128 = 0x80
}
@property(assign) int controlSize;	// G=0x3027331d; S=0x30273331; 
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x30130171; S=0x301f1695; converted property
@property(retain) UIView *info;	// G=0x30147325; S=0x30130339; converted property
@property(assign, getter=isMomentary) BOOL momentary;	// G=0x30273309; S=0x301324ad; 
@property(assign, getter=isSelected) BOOL selected;	// G=0x301474c9; S=0x30132815; 
- (id)initWithCoder:(id)coder;	// 0x30272345
- (id)initWithInfo:(id)info style:(int)style size:(int)size barStyle:(int)style4 tintColor:(id)color appearanceStorage:(id)storage position:(unsigned)position isDisclosure:(BOOL)disclosure autosizeText:(BOOL)text;	// 0x3012ff51
- (float)_barHeight;	// 0x30133265
- (void)_commonInitWithInfo:(id)info position:(unsigned)position autosizeText:(BOOL)text;	// 0x30130261
- (id)_currentOptionsStyleTextColor;	// 0x301311c1
- (id)_currentOptionsStyleTextShadowColor;	// 0x30131331
- (id)_dividerImage;	// 0x30272c51
- (id)_dividerImageIsCustom:(BOOL *)custom;	// 0x30272821
- (float)_idealWidth;	// 0x301330a5
- (BOOL)_isInMiniBar;	// 0x301319a9
- (UIEdgeInsets)_paddingInsets;	// 0x30273709
- (void)_populateArchivedSubviews:(id)subviews;	// 0x30272541
- (void)_positionInfo;	// 0x301314d9
- (unsigned)_segmentState;	// 0x30131141
- (void)_setEnabledAppearance:(BOOL)appearance;	// 0x30132361
- (id)_texturedFillImage;	// 0x301f0f51
- (id)_texturedLeftCapImage;	// 0x301f0f01
- (id)_texturedRightCapImage;	// 0x301f3875
- (void)_tileImage:(id)image inRect:(CGRect)rect;	// 0x301f0fa1
- (void)_updateBackgroundImage;	// 0x30131c35
- (void)_updateTextColors;	// 0x301305c9
- (void)_updateTexturedBackgroundImage;	// 0x301f06d5
- (void)animateAdd:(BOOL)add;	// 0x302733a1
- (void)animateRemoveForWidth:(float)width;	// 0x302733dd
- (CGRect)contentRect;	// 0x30131731
- (CGSize)contentSize;	// 0x30133139
// declared property getter: - (int)controlSize;	// 0x3027331d
- (void)dealloc;	// 0x301333f9
- (id)disabledTextColor;	// 0x30272f95
- (void)encodeWithCoder:(id)coder;	// 0x302725c5
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x30273695
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x301c1045
// converted property getter: - (id)info;	// 0x30147325
- (id)infoName;	// 0x30273631
- (void)insertDividerView;	// 0x301319d5
// converted property getter: - (BOOL)isHighlighted;	// 0x30130171
// declared property getter: - (BOOL)isMomentary;	// 0x30273309
// declared property getter: - (BOOL)isSelected;	// 0x301474c9
- (void)setAutosizeText:(BOOL)text;	// 0x302732d1
- (void)setBarStyle:(int)style;	// 0x302730e9
- (void)setBounds:(CGRect)bounds;	// 0x30273521
- (void)setContentOffset:(CGSize)offset;	// 0x302735f9
// declared property setter: - (void)setControlSize:(int)size;	// 0x30273331
- (void)setEnabled:(BOOL)enabled;	// 0x30132301
- (void)setFrame:(CGRect)frame;	// 0x30130189
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x301f1695
// converted property setter: - (void)setInfo:(id)info;	// 0x30130339
// declared property setter: - (void)setMomentary:(BOOL)momentary;	// 0x301324ad
- (void)setPosition:(unsigned)position;	// 0x30133299
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x30132815
- (void)setShowDivider:(BOOL)divider;	// 0x30133305
- (void)setTintColor:(id)color;	// 0x302731fd
- (void)updateDividerViewForChangedSegment:(id)changedSegment;	// 0x30272c69
- (void)updateForAppearance:(id)appearance style:(int)style;	// 0x30272b31
- (BOOL)useBlockyMagnificationInClassic;	// 0x30273705
- (id)viewForBaselineLayout;	// 0x30273851
@end
