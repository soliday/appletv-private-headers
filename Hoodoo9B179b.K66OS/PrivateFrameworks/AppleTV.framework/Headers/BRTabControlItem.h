/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMultiPartWidgetLayer, BRTextControl;

@interface BRTabControlItem : BRControl {
@private
	id _opaqueIdentifier;	// 48 = 0x30
	BRMultiPartWidgetLayer *_baseControl;	// 52 = 0x34
	BRTextControl *_label;	// 56 = 0x38
}
@property(retain) id identifier;	// G=0x302c513d; S=0x302c514d; converted property
@property(retain) BRTextControl *label;	// G=0x302c5195; S=0x302c51d1; converted property
- (id)init;	// 0x302c4fb9
- (id)accessibilityLabel;	// 0x302c5565
- (void)dealloc;	// 0x302c50c9
// converted property getter: - (id)identifier;	// 0x302c513d
- (BOOL)isAccessibilityElement;	// 0x302c55b9
// converted property getter: - (id)label;	// 0x302c5195
- (void)layoutSubcontrols;	// 0x302c53a5
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x302c514d
// converted property setter: - (void)setLabel:(id)label;	// 0x302c51d1
- (void)setLabelAttributes:(id)attributes;	// 0x302c527d
- (void)setLabelOpacity:(float)opacity;	// 0x302c52d5
- (void)setTabImages:(id)images;	// 0x302c52f5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x302c5491
@end

