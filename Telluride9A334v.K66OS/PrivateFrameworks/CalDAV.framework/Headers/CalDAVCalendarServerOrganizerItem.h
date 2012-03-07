/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVHrefItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem {
	CoreDAVHrefItem *_href;	// 24 = 0x18
	CoreDAVLeafItem *_commonName;	// 28 = 0x1c
}
@property(retain) CoreDAVLeafItem *commonName;	// G=0x3595a775; S=0x3595a751; @synthesize=_commonName
@property(retain) CoreDAVHrefItem *href;	// G=0x3595a739; S=0x3595a715; @synthesize=_href
- (id)init;	// 0x3595a4a5
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3595a6b5
// declared property getter: - (id)commonName;	// 0x3595a775
- (id)copyParseRules;	// 0x3595a4e1
- (void)dealloc;	// 0x3595a7b9
- (id)description;	// 0x3595a78d
// declared property getter: - (id)href;	// 0x3595a739
// declared property setter: - (void)setCommonName:(id)name;	// 0x3595a751
// declared property setter: - (void)setHref:(id)href;	// 0x3595a715
@end
