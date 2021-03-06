/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAlertButton.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIAlertLabeledButton : UIAlertButton {
@private
	UILabel *_typeLabel;	// 144 = 0x90
	float _titleOffset;	// 148 = 0x94
}
@property(assign, nonatomic) float titleOffset;	// G=0x359c11c9; S=0x357af515; @synthesize=_titleOffset
@property(readonly, assign, nonatomic) UILabel *typeLabel;	// G=0x357ae98d; 
- (void)dealloc;	// 0x357afeb1
- (void)layoutSubviews;	// 0x357aebf5
- (void)setHighlighted:(BOOL)highlighted;	// 0x357af571
// declared property setter: - (void)setTitleOffset:(float)offset;	// 0x357af515
// declared property getter: - (float)titleOffset;	// 0x359c11c9
// declared property getter: - (id)typeLabel;	// 0x357ae98d
@end

