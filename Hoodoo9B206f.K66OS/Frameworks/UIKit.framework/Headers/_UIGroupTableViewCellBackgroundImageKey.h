/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying> {
@private
	BOOL _opaque;	// 4 = 0x4
	BOOL _selected;	// 5 = 0x5
	CGSize _size;	// 8 = 0x8
	UIColor *_backgroundColor;	// 16 = 0x10
	UIColor *_sectionBorderColor;	// 20 = 0x14
	UIColor *_separatorColor;	// 24 = 0x18
	UIColor *_topShadowColor;	// 28 = 0x1c
	UIColor *_bottomShadowColor;	// 32 = 0x20
	UIColor *_fillColor;	// 36 = 0x24
	UIColor *_selectionColor;	// 40 = 0x28
	float _leftPhase;	// 44 = 0x2c
	float _rightPhase;	// 48 = 0x30
	int _sectionLocation;	// 52 = 0x34
	int _selectionStyle;	// 56 = 0x38
}
@property(retain, nonatomic) UIColor *backgroundColor;	// G=0x353df0b5; S=0x353defb5; @synthesize=_backgroundColor
@property(retain, nonatomic) UIColor *bottomShadowColor;	// G=0x353df15d; S=0x353df091; @synthesize=_bottomShadowColor
@property(retain, nonatomic) UIColor *fillColor;	// G=0x353dff15; S=0x353df24d; @synthesize=_fillColor
@property(assign, nonatomic) float leftPhase;	// G=0x353dfef5; S=0x353df2a5; @synthesize=_leftPhase
@property(assign, nonatomic) BOOL opaque;	// G=0x353dfeb5; S=0x353df16d; @synthesize=_opaque
@property(assign, nonatomic) float rightPhase;	// G=0x353dff05; S=0x353df2b5; @synthesize=_rightPhase
@property(retain, nonatomic) UIColor *sectionBorderColor;	// G=0x353dff25; S=0x353df1e1; @synthesize=_sectionBorderColor
@property(assign, nonatomic) int sectionLocation;	// G=0x353dfe15; S=0x353df2c5; @synthesize=_sectionLocation
@property(assign, nonatomic) BOOL selected;	// G=0x353dfe25; S=0x353deeb5; @synthesize=_selected
@property(retain, nonatomic) UIColor *selectionColor;	// G=0x355ce5f5; S=0x353df281; @synthesize=_selectionColor
@property(assign, nonatomic) int selectionStyle;	// G=0x355ce605; S=0x353df2d5; @synthesize=_selectionStyle
@property(retain, nonatomic) UIColor *separatorColor;	// G=0x3548e2e5; S=0x353df205; @synthesize=_separatorColor
@property(assign, nonatomic) CGSize size;	// G=0x353dfdf9; S=0x353deec5; @synthesize=_size
@property(retain, nonatomic) UIColor *topShadowColor;	// G=0x353e0005; S=0x353df229; @synthesize=_topShadowColor
// declared property getter: - (id)backgroundColor;	// 0x353df0b5
// declared property getter: - (id)bottomShadowColor;	// 0x353df15d
- (id)copyWithZone:(NSZone *)zone;	// 0x353e0015
- (void)dealloc;	// 0x353e0449
- (id)description;	// 0x355ce3dd
// declared property getter: - (id)fillColor;	// 0x353dff15
- (unsigned)hash;	// 0x353e0025
- (BOOL)isEqual:(id)equal;	// 0x353e0209
// declared property getter: - (float)leftPhase;	// 0x353dfef5
// declared property getter: - (BOOL)opaque;	// 0x353dfeb5
// declared property getter: - (float)rightPhase;	// 0x353dff05
// declared property getter: - (id)sectionBorderColor;	// 0x353dff25
// declared property getter: - (int)sectionLocation;	// 0x353dfe15
// declared property getter: - (BOOL)selected;	// 0x353dfe25
// declared property getter: - (id)selectionColor;	// 0x355ce5f5
// declared property getter: - (int)selectionStyle;	// 0x355ce605
// declared property getter: - (id)separatorColor;	// 0x3548e2e5
// declared property setter: - (void)setBackgroundColor:(id)color;	// 0x353defb5
// declared property setter: - (void)setBottomShadowColor:(id)color;	// 0x353df091
// declared property setter: - (void)setFillColor:(id)color;	// 0x353df24d
// declared property setter: - (void)setLeftPhase:(float)phase;	// 0x353df2a5
// declared property setter: - (void)setOpaque:(BOOL)opaque;	// 0x353df16d
// declared property setter: - (void)setRightPhase:(float)phase;	// 0x353df2b5
// declared property setter: - (void)setSectionBorderColor:(id)color;	// 0x353df1e1
// declared property setter: - (void)setSectionLocation:(int)location;	// 0x353df2c5
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x353deeb5
// declared property setter: - (void)setSelectionColor:(id)color;	// 0x353df281
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x353df2d5
// declared property setter: - (void)setSeparatorColor:(id)color;	// 0x353df205
// declared property setter: - (void)setSize:(CGSize)size;	// 0x353deec5
// declared property setter: - (void)setTopShadowColor:(id)color;	// 0x353df229
// declared property getter: - (CGSize)size;	// 0x353dfdf9
// declared property getter: - (id)topShadowColor;	// 0x353e0005
@end
