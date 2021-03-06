/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVLeafItem, CoreDAVItemWithNoChildren, CalDAVCalendarServerAccessItem, CoreDAVHrefItem;

@interface CalDAVCalendarServerUserItem : CoreDAVItem {
	CoreDAVHrefItem *_href;	// 24 = 0x18
	CoreDAVLeafItem *_commonName;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_inviteStatus;	// 32 = 0x20
	CalDAVCalendarServerAccessItem *_access;	// 36 = 0x24
	CoreDAVLeafItem *_summary;	// 40 = 0x28
}
@property(retain) CalDAVCalendarServerAccessItem *access;	// G=0x302e0225; S=0x302e0201; @synthesize=_access
@property(retain) CoreDAVLeafItem *commonName;	// G=0x302e01ad; S=0x302e0189; @synthesize=_commonName
@property(retain) CoreDAVHrefItem *href;	// G=0x302e0171; S=0x302e014d; @synthesize=_href
@property(retain) CoreDAVItemWithNoChildren *inviteStatus;	// G=0x302e01e9; S=0x302e01c5; @synthesize=_inviteStatus
@property(retain) CoreDAVLeafItem *summary;	// G=0x302e0261; S=0x302e023d; @synthesize=_summary
- (id)init;	// 0x302df77d
- (id)initWithHREF:(id)href commonName:(id)name inviteStatus:(int)status access:(int)access;	// 0x302df7b9
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x302e00b1
// declared property getter: - (id)access;	// 0x302e0225
// declared property getter: - (id)commonName;	// 0x302e01ad
- (id)copyParseRules;	// 0x302dfa49
- (void)dealloc;	// 0x302e04e5
- (id)description;	// 0x302e0279
// declared property getter: - (id)href;	// 0x302e0171
// declared property getter: - (id)inviteStatus;	// 0x302e01e9
// declared property setter: - (void)setAccess:(id)access;	// 0x302e0201
// declared property setter: - (void)setCommonName:(id)name;	// 0x302e0189
// declared property setter: - (void)setHref:(id)href;	// 0x302e014d
// declared property setter: - (void)setInviteStatus:(id)status;	// 0x302e01c5
// declared property setter: - (void)setSummary:(id)summary;	// 0x302e023d
// declared property getter: - (id)summary;	// 0x302e0261
@end

