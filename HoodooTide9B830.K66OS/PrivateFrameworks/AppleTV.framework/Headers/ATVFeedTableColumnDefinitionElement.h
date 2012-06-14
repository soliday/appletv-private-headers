/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedTableColumnDefinitionElement : ATVFeedElement {
@private
	NSString *_title;	// 28 = 0x1c
	NSString *_alignment;	// 32 = 0x20
	int _width;	// 36 = 0x24
}
@property(copy, nonatomic) NSString *alignment;	// G=0x32b04929; S=0x32b04939; @synthesize=_alignment
@property(copy, nonatomic) NSString *title;	// G=0x32b048f5; S=0x32b04905; @synthesize=_title
@property(assign, nonatomic) int width;	// G=0x32b0495d; S=0x32b0496d; @synthesize=_width
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x32b047a5
// declared property getter: - (id)alignment;	// 0x32b04929
- (void)dealloc;	// 0x32b04895
// declared property setter: - (void)setAlignment:(id)alignment;	// 0x32b04939
// declared property setter: - (void)setTitle:(id)title;	// 0x32b04905
// declared property setter: - (void)setWidth:(int)width;	// 0x32b0496d
// declared property getter: - (id)title;	// 0x32b048f5
// declared property getter: - (int)width;	// 0x32b0495d
@end

