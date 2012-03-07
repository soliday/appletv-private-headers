/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"
#import "UIAppearance.h"

@class UIImage, NSString;

@interface UIBarItem : NSObject <UIAppearance> {
@private
	BOOL _hasCustomizableInstanceAppearanceModifications;	// 4 = 0x4
}
@property(assign, nonatomic, setter=_setHasCustomizableInstanceAppearanceModifications:) BOOL _hasCustomizableInstanceAppearanceModifications;	// G=0x3029fed1; S=0x3029fee1; @synthesize
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// @dynamic
@property(retain, nonatomic) UIImage *image;	// @dynamic
@property(assign, nonatomic) UIEdgeInsets imageInsets;	// @dynamic
@property(retain, nonatomic) UIImage *landscapeImagePhone;	// @dynamic
@property(assign, nonatomic) UIEdgeInsets landscapeImagePhoneInsets;	// @dynamic
@property(assign, nonatomic) int tag;	// @dynamic
@property(copy, nonatomic) NSString *title;	// @dynamic
+ (id)_appearanceProxyViewClasses;	// 0x3029fde1
+ (id)appearance;	// 0x3029fde5
+ (id)appearanceWhenContainedIn:(Class)anIn;	// 0x3029fe05
// declared property getter: - (BOOL)_hasCustomizableInstanceAppearanceModifications;	// 0x3029fed1
// declared property setter: - (void)_setHasCustomizableInstanceAppearanceModifications:(BOOL)modifications;	// 0x3029fee1
- (void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x3029fec9
- (id)titleTextAttributesForState:(unsigned)state;	// 0x3029fecd
@end
