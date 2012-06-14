/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRMultiPartWidgetLayer;

@interface BRTabControlItem : BRControl {
@private
	id _opaqueIdentifier;	// 48 = 0x30
	BRMultiPartWidgetLayer *_baseControl;	// 52 = 0x34
	BRTextControl *_label;	// 56 = 0x38
}
@property(retain) id identifier;	// G=0x366c402d; S=0x366c403d; converted property
@property(retain) BRTextControl *label;	// G=0x366c4085; S=0x366c40c1; converted property
- (id)init;	// 0x366c3ea9
- (id)accessibilityLabel;	// 0x366c4455
- (void)dealloc;	// 0x366c3fb9
// converted property getter: - (id)identifier;	// 0x366c402d
- (BOOL)isAccessibilityElement;	// 0x366c44a9
// converted property getter: - (id)label;	// 0x366c4085
- (void)layoutSubcontrols;	// 0x366c4295
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x366c403d
// converted property setter: - (void)setLabel:(id)label;	// 0x366c40c1
- (void)setLabelAttributes:(id)attributes;	// 0x366c416d
- (void)setLabelOpacity:(float)opacity;	// 0x366c41c5
- (void)setTabImages:(id)images;	// 0x366c41e5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x366c4381
@end

