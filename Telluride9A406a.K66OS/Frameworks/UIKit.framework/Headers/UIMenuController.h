/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "UICalloutBarDelegate.h"

@class NSArray;

@interface UIMenuController : NSObject <UICalloutBarDelegate> {
@private
	CGRect _targetRect;	// 4 = 0x4
	int _arrowDirection;	// 20 = 0x14
}
@property(assign, nonatomic) int arrowDirection;	// G=0x35948aa5; S=0x35948ab5; @synthesize=_arrowDirection
@property(readonly, assign, nonatomic) CGRect menuFrame;	// G=0x35948a45; 
@property(copy, nonatomic) NSArray *menuItems;	// G=0x359489fd; S=0x357d6d5d; 
@property(assign, nonatomic, getter=isMenuVisible) BOOL menuVisible;	// G=0x35781741; S=0x3594877d; 
+ (id)sharedMenuController;	// 0x3577e445
- (id)init;	// 0x3577e48d
- (BOOL)_menuHidden;	// 0x357fb481
- (void)_setTargetRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x359489b9
- (BOOL)_updateAnimated:(BOOL)animated checkVisible:(BOOL)visible;	// 0x35948ac5
- (void)_windowWillRotate:(id)_window;	// 0x35948791
// declared property getter: - (int)arrowDirection;	// 0x35948aa5
- (void)calloutBar:(id)bar didFinishAnimation:(id)animation;	// 0x357da7b5
- (void)calloutBar:(id)bar willStartAnimation:(id)animation;	// 0x357da615
- (void)dealloc;	// 0x35948721
// declared property getter: - (BOOL)isMenuVisible;	// 0x35781741
// declared property getter: - (CGRect)menuFrame;	// 0x35948a45
// declared property getter: - (id)menuItems;	// 0x359489fd
// declared property setter: - (void)setArrowDirection:(int)direction;	// 0x35948ab5
// declared property setter: - (void)setMenuItems:(id)items;	// 0x357d6d5d
// declared property setter: - (void)setMenuVisible:(BOOL)visible;	// 0x3594877d
- (void)setMenuVisible:(BOOL)visible animated:(BOOL)animated;	// 0x357fb219
- (void)setTargetRect:(CGRect)rect inView:(id)view;	// 0x359487a5
- (void)update;	// 0x35948a31
@end
