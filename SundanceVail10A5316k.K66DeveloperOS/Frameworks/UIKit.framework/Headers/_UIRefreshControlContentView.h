/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIRefreshControl, UIColor, NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UIRefreshControlContentView : UIView {
@private
	UIRefreshControl *_refreshControl;	// 84 = 0x54
	UIColor *_tintColor;	// 88 = 0x58
}
@property(retain, nonatomic) NSAttributedString *attributedTitle;	// G=0x304c6ffd; S=0x304c7001; 
@property(readonly, assign, nonatomic) float maximumSnappingHeight;	// G=0x304c700d; 
@property(readonly, assign, nonatomic) float minimumSnappingHeight;	// G=0x304c7009; 
@property(assign, nonatomic) UIRefreshControl *refreshControl;	// G=0x304c70a9; S=0x304c70b9; @synthesize=_refreshControl
@property(readonly, assign, nonatomic) int style;	// G=0x304c7005; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x304c70c9; S=0x304c70d9; @synthesize=_tintColor
- (float)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;	// 0x304c70a5
// declared property getter: - (id)attributedTitle;	// 0x304c6ffd
- (BOOL)canTransitionFromState:(int)state toState:(int)state2;	// 0x304c7015
- (void)dealloc;	// 0x304c6fb1
- (void)didTransitionFromState:(int)state toState:(int)state2;	// 0x304c70a1
// declared property getter: - (float)maximumSnappingHeight;	// 0x304c700d
// declared property getter: - (float)minimumSnappingHeight;	// 0x304c7009
// declared property getter: - (id)refreshControl;	// 0x304c70a9
- (void)refreshControlInvalidatedSnappingHeight;	// 0x304c7011
// declared property setter: - (void)setAttributedTitle:(id)title;	// 0x304c7001
// declared property setter: - (void)setRefreshControl:(id)control;	// 0x304c70b9
// declared property setter: - (void)setTintColor:(id)color;	// 0x304c70d9
// declared property getter: - (int)style;	// 0x304c7005
// declared property getter: - (id)tintColor;	// 0x304c70c9
- (void)willTransitionFromState:(int)state toState:(int)state2;	// 0x304c7079
@end

