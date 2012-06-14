/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIView.h> // Unknown library

@class NSString;

@interface SBDeviceLockTitle : UIView {
	int _style;	// 84 = 0x54
	int _interfaceOrientation;	// 88 = 0x58
}
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x349ba621; S=0x349ba625; 
@property(assign, nonatomic) int interfaceOrientation;	// G=0x349ba63d; S=0x349ba64d; @synthesize=_interfaceOrientation
@property(retain, nonatomic) NSString *subtitle;	// G=0x349ba631; S=0x349ba635; 
@property(retain, nonatomic) NSString *title;	// G=0x349ba629; S=0x349ba62d; 
+ (id)newWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x349ba51d
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x349ba5b9
- (void)blinkSubtitle;	// 0x349ba639
// declared property getter: - (int)interfaceOrientation;	// 0x349ba63d
// declared property getter: - (BOOL)isHighlighted;	// 0x349ba621
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x349ba625
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x349ba64d
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x349ba635
// declared property setter: - (void)setTitle:(id)title;	// 0x349ba62d
// declared property getter: - (id)subtitle;	// 0x349ba631
// declared property getter: - (id)title;	// 0x349ba629
@end
