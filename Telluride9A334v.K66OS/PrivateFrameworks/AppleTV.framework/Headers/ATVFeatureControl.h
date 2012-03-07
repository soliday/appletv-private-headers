/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVFeatureControl : BRControl {
@private
	BRControl *_imageControl;	// 48 = 0x30
	BRTextControl *_titleControl;	// 52 = 0x34
	BRTextControl *_descControl;	// 56 = 0x38
}
- (id)initWithFeatureIndex:(int)featureIndex;	// 0x3318b181
- (id)accessibilityLabel;	// 0x3318b69d
- (void)dealloc;	// 0x3318b45d
- (void)layoutSubcontrols;	// 0x3318b551
- (void)setImageControl:(id)control;	// 0x3318b4d1
@end
