/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherShadowView : UIView {
@private
	int m_mode;	// 48 = 0x30
	float m_pointerOffset;	// 52 = 0x34
	NSArray *m_gradientColors;	// 56 = 0x38
}
@property(retain, nonatomic) NSArray *gradientColors;	// G=0x303dc6d5; S=0x303dc6e5; @synthesize=m_gradientColors
@property(assign, nonatomic) int mode;	// G=0x303dc695; S=0x303dc6a5; @synthesize=m_mode
@property(assign, nonatomic) float pointerOffset;	// G=0x303dc6b5; S=0x303dc6c5; @synthesize=m_pointerOffset
- (id)initWithFrame:(CGRect)frame;	// 0x303dbf35
- (void)dealloc;	// 0x303dc041
- (void)drawRect:(CGRect)rect;	// 0x303dc115
// declared property getter: - (id)gradientColors;	// 0x303dc6d5
// declared property getter: - (int)mode;	// 0x303dc695
// declared property getter: - (float)pointerOffset;	// 0x303dc6b5
- (void)setFrame:(CGRect)frame;	// 0x303dc08d
// declared property setter: - (void)setGradientColors:(id)colors;	// 0x303dc6e5
// declared property setter: - (void)setMode:(int)mode;	// 0x303dc6a5
// declared property setter: - (void)setPointerOffset:(float)offset;	// 0x303dc6c5
@end

