/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewCell.h"

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface UIPrintStatusJobTableViewCell : UITableViewCell {
@private
	UIActivityIndicatorView *_activityIndicator;	// 216 = 0xd8
	UIView *_verticalSeparator;	// 220 = 0xdc
}
@property(assign, nonatomic) BOOL showActive;	// G=0x3224ffd1; S=0x3224ff11; 
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x322502b9
- (void)dealloc;	// 0x3225025d
- (void)layoutSubviews;	// 0x32250d45
// declared property setter: - (void)setShowActive:(BOOL)active;	// 0x3224ff11
// declared property getter: - (BOOL)showActive;	// 0x3224ffd1
@end
