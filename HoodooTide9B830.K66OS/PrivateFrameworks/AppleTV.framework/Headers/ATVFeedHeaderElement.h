/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSString, ATVFeedImageElement;

__attribute__((visibility("hidden")))
@interface ATVFeedHeaderElement : ATVFeedElement {
@private
	NSString *_title;	// 28 = 0x1c
	NSString *_subtitle;	// 32 = 0x20
	ATVFeedImageElement *_image;	// 36 = 0x24
}
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x32ad6a85; S=0x32ad6a95; @synthesize=_image
@property(copy, nonatomic) NSString *subtitle;	// G=0x32ad6a51; S=0x32ad6a61; @synthesize=_subtitle
@property(copy, nonatomic) NSString *title;	// G=0x32ad6a1d; S=0x32ad6a2d; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x32ad6891
- (void)dealloc;	// 0x32ad69a9
// declared property getter: - (id)image;	// 0x32ad6a85
// declared property setter: - (void)setImage:(id)image;	// 0x32ad6a95
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x32ad6a61
// declared property setter: - (void)setTitle:(id)title;	// 0x32ad6a2d
// declared property getter: - (id)subtitle;	// 0x32ad6a51
// declared property getter: - (id)title;	// 0x32ad6a1d
@end

