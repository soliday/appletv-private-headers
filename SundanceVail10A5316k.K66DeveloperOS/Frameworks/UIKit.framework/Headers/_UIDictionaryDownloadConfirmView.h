/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UILabel, NSString, UIButton;

__attribute__((visibility("hidden")))
@interface _UIDictionaryDownloadConfirmView : UIView {
@private
	UILabel *_downloadRequestLabel;	// 84 = 0x54
	NSString *_downloadRequestText;	// 88 = 0x58
	UIButton *_downloadButton;	// 92 = 0x5c
}
@property(readonly, assign, nonatomic) UIButton *downloadButton;	// G=0x304cb711; @synthesize=_downloadButton
@property(copy, nonatomic) NSString *downloadRequestText;	// G=0x304cb6ed; S=0x304cb701; @synthesize=_downloadRequestText
- (id)initWithFrame:(CGRect)frame;	// 0x304cb2e9
- (void)dealloc;	// 0x304cb485
// declared property getter: - (id)downloadButton;	// 0x304cb711
// declared property getter: - (id)downloadRequestText;	// 0x304cb6ed
- (void)layoutSubviews;	// 0x304cb4d1
// declared property setter: - (void)setDownloadRequestText:(id)text;	// 0x304cb701
@end

