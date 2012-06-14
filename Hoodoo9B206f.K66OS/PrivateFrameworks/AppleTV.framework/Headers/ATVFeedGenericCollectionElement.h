/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class ATVFeedElement, ATVFeedHeaderElement, ATVFeedMenuElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedGenericCollectionElement : ATVFeedRootElement {
@private
	ATVFeedHeaderElement *_header;	// 52 = 0x34
	ATVFeedElement *_preview;	// 56 = 0x38
	ATVFeedMenuElement *_menu;	// 60 = 0x3c
	NSString *_listDescription;	// 64 = 0x40
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x367922a9; S=0x367922b9; @synthesize=_header
@property(retain, nonatomic) NSString *listDescription;	// G=0x36792345; S=0x36792355; @synthesize=_listDescription
@property(retain, nonatomic) ATVFeedMenuElement *menu;	// G=0x36792311; S=0x36792321; @synthesize=_menu
@property(retain, nonatomic) ATVFeedElement *preview;	// G=0x367922dd; S=0x367922ed; @synthesize=_preview
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x36792071
- (void)dealloc;	// 0x36792235
// declared property getter: - (id)header;	// 0x367922a9
// declared property getter: - (id)listDescription;	// 0x36792345
// declared property getter: - (id)menu;	// 0x36792311
// declared property getter: - (id)preview;	// 0x367922dd
// declared property setter: - (void)setHeader:(id)header;	// 0x367922b9
// declared property setter: - (void)setListDescription:(id)description;	// 0x36792355
// declared property setter: - (void)setMenu:(id)menu;	// 0x36792321
// declared property setter: - (void)setPreview:(id)preview;	// 0x367922ed
@end

