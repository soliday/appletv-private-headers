/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITableViewCellDeleteConfirmationControl : UIControl {
@private
	NSString *_title;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) CGSize size;	// G=0x30170991; 
@property(readonly, assign, nonatomic) NSString *title;	// G=0x30170c95; 
+ (id)_backgroundImage;	// 0x30170845
+ (id)_highlightedBackgroundImage;	// 0x30171655
+ (CGSize)defaultSizeForTitle:(id)title;	// 0x30170755
- (id)initWithTitle:(id)title;	// 0x30170891
- (void)dealloc;	// 0x3017185d
- (void)drawBackgroundInRect:(CGRect)rect;	// 0x30171329
- (void)drawRect:(CGRect)rect;	// 0x30171105
- (void)setBackgroundColor:(id)color;	// 0x302d724d
// declared property getter: - (CGSize)size;	// 0x30170991
// declared property getter: - (id)title;	// 0x30170c95
@end

