/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPrintFormatter.h"

@class NSString, UIWebPaginationInfo, UITextView, UIColor, UIFont;

@interface UISimpleTextPrintFormatter : UIPrintFormatter {
@private
	UITextView *_textView;	// 44 = 0x2c
	UIWebPaginationInfo *_paginationInfo;	// 48 = 0x30
}
@property(retain, nonatomic) UIColor *color;	// G=0x32fcbaa1; S=0x32fcbac1; @dynamic
@property(retain, nonatomic) UIFont *font;	// G=0x32fcba15; S=0x32fcba35; @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x32fcb96d; S=0x32fcb98d; @dynamic
@property(assign, nonatomic) int textAlignment;	// G=0x32fcbb1d; S=0x32fcbb3d; @dynamic
- (id)initWithText:(id)text;	// 0x32fcb725
- (int)_recalcPageCount;	// 0x32fcbbe5
// declared property getter: - (id)color;	// 0x32fcbaa1
- (id)copyWithZone:(NSZone *)zone;	// 0x32fcb7c1
- (void)dealloc;	// 0x32fcb90d
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x32fcbd85
// declared property getter: - (id)font;	// 0x32fcba15
- (CGRect)rectForPageAtIndex:(int)index;	// 0x32fcbcd9
- (void)removeFromPrintPageRenderer;	// 0x32fcbb91
// declared property setter: - (void)setColor:(id)color;	// 0x32fcbac1
// declared property setter: - (void)setFont:(id)font;	// 0x32fcba35
// declared property setter: - (void)setText:(id)text;	// 0x32fcb98d
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x32fcbb3d
// declared property getter: - (id)text;	// 0x32fcb96d
// declared property getter: - (int)textAlignment;	// 0x32fcbb1d
@end

