/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardCandidatePadInlineFloatingBackgroundView : UIView {
@private
	float _rowHeight;	// 48 = 0x30
	unsigned _highlightedRowIndex;	// 52 = 0x34
}
@property(assign, nonatomic) unsigned highlightedRowIndex;	// G=0x356b76c5; S=0x356b76d5; @synthesize=_highlightedRowIndex
@property(assign, nonatomic) float rowHeight;	// G=0x356b76a5; S=0x356b76b5; @synthesize=_rowHeight
- (id)initWithFrame:(CGRect)frame;	// 0x356b73e1
- (void)drawRect:(CGRect)rect;	// 0x356b7431
// declared property getter: - (unsigned)highlightedRowIndex;	// 0x356b76c5
// declared property getter: - (float)rowHeight;	// 0x356b76a5
// declared property setter: - (void)setHighlightedRowIndex:(unsigned)index;	// 0x356b76d5
// declared property setter: - (void)setRowHeight:(float)height;	// 0x356b76b5
@end

