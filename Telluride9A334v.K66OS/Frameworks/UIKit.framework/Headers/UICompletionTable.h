/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIView.h"

@class UICompletionTablePrivate;

@interface UICompletionTable : UIView <UITableViewDelegate, UITableViewDataSource> {
	UICompletionTablePrivate *_private;	// 48 = 0x30
}
@property(assign, nonatomic) UIEdgeInsets contentInset;	// G=0x30241a01; S=0x30241a41; 
@property(assign, nonatomic) id delegate;	// G=0x30241899; S=0x3019fda9; 
@property(assign, nonatomic) UIEdgeInsets scrollIndicatorInsets;	// G=0x30241a85; S=0x30241ac5; 
+ (id)_cellFont;	// 0x30241829
+ (id)_shadowImage;	// 0x3019fd71
- (id)initWithFrame:(CGRect)frame;	// 0x3019fb09
- (id)_completionForRow:(int)row;	// 0x30241b09
// declared property getter: - (UIEdgeInsets)contentInset;	// 0x30241a01
- (void)dealloc;	// 0x3024184d
// declared property getter: - (id)delegate;	// 0x30241899
- (id)dequeueReusableCellWithIdentifier:(id)identifier;	// 0x301a01c9
- (void)layoutSubviews;	// 0x3019feb1
- (void)reloadData;	// 0x3019fdc9
// declared property getter: - (UIEdgeInsets)scrollIndicatorInsets;	// 0x30241a85
// declared property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x30241a41
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3019fda9
// declared property setter: - (void)setScrollIndicatorInsets:(UIEdgeInsets)insets;	// 0x30241ac5
- (void)setTopStrokeColor:(id)color;	// 0x302418b9
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x301a004d
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x30241b4d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3019fe81
@end

