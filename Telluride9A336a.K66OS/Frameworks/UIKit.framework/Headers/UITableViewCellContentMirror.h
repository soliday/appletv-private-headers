/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UITableViewCellContentMirror : UIView {
@private
	unsigned _selected : 1;	// 46 = 0x2e
}
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x3534ca7d; S=0x351deff9; 
- (id)initWithFrame:(CGRect)frame;	// 0x351def65
- (id)cell;	// 0x351e08cd
- (void)drawRect:(CGRect)rect;	// 0x351e0879
// declared property getter: - (BOOL)isSelected;	// 0x3534ca7d
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x351deff9
@end
