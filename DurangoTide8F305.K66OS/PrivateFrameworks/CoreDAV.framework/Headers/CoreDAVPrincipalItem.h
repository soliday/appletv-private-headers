/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, CoreDAVHrefItem;

@interface CoreDAVPrincipalItem : CoreDAVItem {
	CoreDAVHrefItem *_href;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_all;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_authenticated;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_unauthenticated;	// 36 = 0x24
	CoreDAVItem *_property;	// 40 = 0x28
	CoreDAVItemWithNoChildren *_selfItem;	// 44 = 0x2c
}
@property(retain) CoreDAVItemWithNoChildren *all;	// G=0x3387d68d; S=0x3387d731; @synthesize=_all
@property(retain) CoreDAVItemWithNoChildren *authenticated;	// G=0x3387d6a5; S=0x3387d75d; @synthesize=_authenticated
@property(retain) CoreDAVHrefItem *href;	// G=0x3387d675; S=0x3387d705; @synthesize=_href
@property(retain) CoreDAVItem *property;	// G=0x3387d6d5; S=0x3387d7b5; @synthesize=_property
@property(retain) CoreDAVItemWithNoChildren *selfItem;	// G=0x3387d6ed; S=0x3387d7e1; @synthesize=_selfItem
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x3387d6bd; S=0x3387d789; @synthesize=_unauthenticated
- (id)init;	// 0x3387d44d
- (id)initTypeIsAll;	// 0x3387d3d1
- (id)initTypeIsAuthenticated;	// 0x3387d2c1
- (id)initTypeIsHREFWithURL:(id)url;	// 0x3387d369
- (id)initTypeIsProperty:(id)property;	// 0x3387d33d
- (id)initTypeIsSelf;	// 0x3387d1c9
- (id)initTypeIsUnauthenticated;	// 0x3387d245
// declared property getter: - (id)all;	// 0x3387d68d
// declared property getter: - (id)authenticated;	// 0x3387d6a5
- (id)copyParseRules;	// 0x3387cd81
- (void)dealloc;	// 0x3387d5dd
- (id)description;	// 0x3387d479
- (id)hashString;	// 0x3387cc59
// declared property getter: - (id)href;	// 0x3387d675
// declared property getter: - (id)property;	// 0x3387d6d5
// declared property getter: - (id)selfItem;	// 0x3387d6ed
// declared property setter: - (void)setAll:(id)all;	// 0x3387d731
// declared property setter: - (void)setAuthenticated:(id)authenticated;	// 0x3387d75d
// declared property setter: - (void)setHref:(id)href;	// 0x3387d705
// declared property setter: - (void)setProperty:(id)property;	// 0x3387d7b5
// declared property setter: - (void)setSelfItem:(id)item;	// 0x3387d7e1
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x3387d789
// declared property getter: - (id)unauthenticated;	// 0x3387d6bd
- (void)write:(id)write;	// 0x3387d05d
@end

