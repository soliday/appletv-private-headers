/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRAsyncImageControl, NSString;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPosterHeader : BRControl {
@private
	BRAsyncImageControl *_leftImageControl;	// 48 = 0x30
	BRAsyncImageControl *_rightImageControl;	// 52 = 0x34
	NSString *_separatorText;	// 56 = 0x38
	NSString *_bottomLabel;	// 60 = 0x3c
}
@property(copy, nonatomic) NSString *bottomLabel;	// G=0x36615ce5; S=0x36615cf5; @synthesize=_bottomLabel
@property(retain, nonatomic) BRAsyncImageControl *leftImageControl;	// G=0x36615c91; S=0x36615b89; @synthesize=_leftImageControl
@property(retain, nonatomic) BRAsyncImageControl *rightImageControl;	// G=0x36615ca1; S=0x36615c0d; @synthesize=_rightImageControl
@property(copy, nonatomic) NSString *separatorText;	// G=0x36615cb1; S=0x36615cc1; @synthesize=_separatorText
- (id)init;	// 0x36615795
// declared property getter: - (id)bottomLabel;	// 0x36615ce5
- (void)dealloc;	// 0x36615839
- (void)drawInContext:(CGContextRef)context;	// 0x366158c1
- (void)layoutSubcontrols;	// 0x36615ae5
// declared property getter: - (id)leftImageControl;	// 0x36615c91
// declared property getter: - (id)rightImageControl;	// 0x36615ca1
// declared property getter: - (id)separatorText;	// 0x36615cb1
// declared property setter: - (void)setBottomLabel:(id)label;	// 0x36615cf5
// declared property setter: - (void)setLeftImageControl:(id)control;	// 0x36615b89
// declared property setter: - (void)setRightImageControl:(id)control;	// 0x36615c0d
// declared property setter: - (void)setSeparatorText:(id)text;	// 0x36615cc1
@end

