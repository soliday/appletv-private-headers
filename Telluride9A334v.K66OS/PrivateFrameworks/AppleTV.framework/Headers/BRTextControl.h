/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

@interface BRTextControl : BRControl {
@private
	NSAttributedString *_string;	// 48 = 0x30
}
@property(retain) id attributedString;	// G=0x33235fb9; S=0x33235f49; converted property
- (id)init;	// 0x33235e3d
- (void)_shrinkTextToFitInBounds:(CGSize)bounds;	// 0x33258c8d
- (void)_shrinkTextToTwoLines:(CGSize)twoLines;	// 0x33258e99
- (id)accessibilityLabel;	// 0x3323611d
// converted property getter: - (id)attributedString;	// 0x33235fb9
- (void)dealloc;	// 0x33235e85
- (void)drawInContext:(CGContextRef)context;	// 0x33236081
- (BOOL)isAccessibilityElement;	// 0x332360f9
- (CGSize)renderedSize;	// 0x33235fc9
- (CGSize)renderedSizeWithMaxSize:(CGSize)maxSize;	// 0x33236039
// converted property setter: - (void)setAttributedString:(id)string;	// 0x33235f49
- (void)setMaxSize:(CGSize)size;	// 0x3323619d
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x33235ed1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33236171
@end

