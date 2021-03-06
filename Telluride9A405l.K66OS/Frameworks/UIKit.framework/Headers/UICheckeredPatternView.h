/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor;

@interface UICheckeredPatternView : UIView {
	UIColor *m_patternColor;	// 48 = 0x30
	UIColor *m_checkerColor;	// 52 = 0x34
	float m_scale;	// 56 = 0x38
}
@property(retain) UIColor *checkerColor;	// G=0x32e929d1; S=0x32e929e1; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x32e1c9c5
- (BOOL)_canDrawContent;	// 0x32e1ca61
// converted property getter: - (id)checkerColor;	// 0x32e929d1
- (void)dealloc;	// 0x32e1f789
- (void)didMoveToWindow;	// 0x32e92759
// converted property setter: - (void)setCheckerColor:(id)color;	// 0x32e929e1
- (void)updatePatternColor;	// 0x32e1ca65
@end

