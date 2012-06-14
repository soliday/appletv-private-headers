/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UITableViewCellSelectedBackground : UIView {
@private
	int _selectionStyle;	// 48 = 0x30
	UIColor *_multiselectBackgroundColor;	// 52 = 0x34
	UIColor *_selectionTintColor;	// 56 = 0x38
	BOOL _multiselect;	// 60 = 0x3c
}
@property(assign, nonatomic, getter=isMultiselect) BOOL multiselect;	// G=0x3027ab51; S=0x301437e9; 
@property(retain, nonatomic) UIColor *multiselectBackgroundColor;	// G=0x3027ab71; S=0x30143881; @synthesize=_multiselectBackgroundColor
@property(assign, nonatomic) int selectionStyle;	// G=0x3027ab61; S=0x300ce2e9; @synthesize=_selectionStyle
@property(retain, nonatomic) UIColor *selectionTintColor;	// G=0x3027ab81; S=0x300ce32d; @synthesize=_selectionTintColor
- (void)dealloc;	// 0x3016c111
- (void)drawRect:(CGRect)rect;	// 0x3014526d
// declared property getter: - (BOOL)isMultiselect;	// 0x3027ab51
// declared property getter: - (id)multiselectBackgroundColor;	// 0x3027ab71
// declared property getter: - (int)selectionStyle;	// 0x3027ab61
// declared property getter: - (id)selectionTintColor;	// 0x3027ab81
// declared property setter: - (void)setMultiselect:(BOOL)multiselect;	// 0x301437e9
// declared property setter: - (void)setMultiselectBackgroundColor:(id)color;	// 0x30143881
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x300ce2e9
// declared property setter: - (void)setSelectionTintColor:(id)color;	// 0x300ce32d
@end

