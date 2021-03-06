/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMetadataLineLayer : BRControl {
@private
	BRTextControl *_labelLayer;	// 48 = 0x30
	BRControl *_valueLayer;	// 52 = 0x34
	float _maxLabelWidth;	// 56 = 0x38
}
- (id)initWithLabel:(id)label value:(id)value;	// 0x34201bb5
- (id)accessibilityLabel;	// 0x34201d5d
- (void)dealloc;	// 0x34201ccd
- (id)label;	// 0x34201d2d
- (void)layoutSubcontrols;	// 0x34201e99
- (void)setMaxLabelWidth:(float)width;	// 0x34201db5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34201dd5
- (id)value;	// 0x34201d4d
@end

