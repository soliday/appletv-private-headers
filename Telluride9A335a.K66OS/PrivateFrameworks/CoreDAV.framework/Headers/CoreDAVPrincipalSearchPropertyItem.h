/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVLeafItem;

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem {
	CoreDAVItem *_prop;	// 24 = 0x18
	CoreDAVLeafItem *_descriptionItem;	// 28 = 0x1c
}
@property(retain) CoreDAVLeafItem *descriptionItem;	// G=0x300729f1; S=0x30072a05; @synthesize=_descriptionItem
@property(retain) CoreDAVItem *prop;	// G=0x300729b9; S=0x300729cd; @synthesize=_prop
- (id)init;	// 0x300726b5
- (id)copyParseRules;	// 0x30072819
- (void)dealloc;	// 0x300726e1
- (id)description;	// 0x30072741
// declared property getter: - (id)descriptionItem;	// 0x300729f1
// declared property getter: - (id)prop;	// 0x300729b9
// declared property setter: - (void)setDescriptionItem:(id)item;	// 0x30072a05
// declared property setter: - (void)setProp:(id)prop;	// 0x300729cd
@end

