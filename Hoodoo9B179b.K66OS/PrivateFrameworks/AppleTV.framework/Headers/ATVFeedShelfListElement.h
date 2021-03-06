/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class ATVFeedShelfElement, ATVFeedHeaderElement, ATVFeedMenuElement;

__attribute__((visibility("hidden")))
@interface ATVFeedShelfListElement : ATVFeedRootElement {
@private
	ATVFeedHeaderElement *_header;	// 52 = 0x34
	ATVFeedShelfElement *_centerShelf;	// 56 = 0x38
	ATVFeedMenuElement *_menu;	// 60 = 0x3c
}
@property(retain, nonatomic) ATVFeedShelfElement *centerShelf;	// G=0x303d1275; S=0x303d1285; @synthesize=_centerShelf
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x303d1241; S=0x303d1251; @synthesize=_header
@property(retain, nonatomic) ATVFeedMenuElement *menu;	// G=0x303d12a9; S=0x303d12b9; @synthesize=_menu
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x303d1045
// declared property getter: - (id)centerShelf;	// 0x303d1275
- (void)dealloc;	// 0x303d11cd
// declared property getter: - (id)header;	// 0x303d1241
// declared property getter: - (id)menu;	// 0x303d12a9
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x303d1285
// declared property setter: - (void)setHeader:(id)header;	// 0x303d1251
// declared property setter: - (void)setMenu:(id)menu;	// 0x303d12b9
@end

