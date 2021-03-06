/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPrintFormatter.h"

@class UIView;

@interface UIViewPrintFormatter : UIPrintFormatter {
@private
	UIView *_view;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) UIView *view;	// G=0x359ca775; @synthesize=_view
- (id)_initWithView:(id)view;	// 0x359ca365
- (int)_recalcPageCount;	// 0x359ca45d
- (id)copyWithZone:(NSZone *)zone;	// 0x359ca3b9
- (void)dealloc;	// 0x359ca411
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x359ca659
- (CGRect)rectForPageAtIndex:(int)index;	// 0x359ca539
// declared property getter: - (id)view;	// 0x359ca775
@end

