/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextRange.h"

@class DOMRange;

__attribute__((visibility("hidden")))
@interface UITextRangeImpl : UITextRange {
@private
	DOMRange *_domRange;	// 4 = 0x4
}
@property(retain, nonatomic) DOMRange *domRange;	// G=0x32054859; S=0x320547bd; @synthesize=_domRange
+ (id)wrapDOMRange:(id)range;	// 0x32054729
- (void)dealloc;	// 0x32059185
- (id)description;	// 0x321eab9d
// declared property getter: - (id)domRange;	// 0x32054859
- (id)end;	// 0x32054d91
- (BOOL)isEmpty;	// 0x32054b2d
- (BOOL)isEqual:(id)equal;	// 0x321eda89
// declared property setter: - (void)setDomRange:(id)range;	// 0x320547bd
- (id)start;	// 0x320547e5
@end

