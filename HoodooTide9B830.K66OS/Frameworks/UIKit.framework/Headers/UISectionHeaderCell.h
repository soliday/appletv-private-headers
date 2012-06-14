/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString;

@interface UISectionHeaderCell : UIView {
	NSString *_title;	// 48 = 0x30
	mdocFlags _sectionHeaderCellFlags;	// 52 = 0x34
}
@property(retain) NSString *title;	// G=0x301fcab9; S=0x301fc5d5; converted property
+ (id)defaultTitleFont;	// 0x301fc3a1
- (id)initWithFrame:(CGRect)frame;	// 0x301fc3c5
- (CGRect)_rectForTitle:(id)title;	// 0x301fc479
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x301fcb51
- (void)dealloc;	// 0x301fc415
- (void)drawRect:(CGRect)rect;	// 0x301fc8b1
- (void)drawTitle:(id)title inRect:(CGRect)rect;	// 0x301fc80d
- (void)drawTitle:(id)title withColor:(id)color withShadowColor:(id)shadowColor inRect:(CGRect)rect;	// 0x301fc709
- (BOOL)isEqualToView:(id)view;	// 0x301fcac9
- (void)mouseUp:(GSEventRef)up;	// 0x301fcb55
- (void)setStyle:(int)style;	// 0x301fc461
// converted property setter: - (void)setTitle:(id)title;	// 0x301fc5d5
// converted property getter: - (id)title;	// 0x301fcab9
@end

