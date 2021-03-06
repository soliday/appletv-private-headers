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
@property(retain) CoreDAVLeafItem *descriptionItem;	// G=0x35f727a5; S=0x35f727b9; @synthesize=_descriptionItem
@property(retain) CoreDAVItem *prop;	// G=0x35f72781; S=0x35f72795; @synthesize=_prop
+ (id)copyParseRules;	// 0x35f72575
- (id)init;	// 0x35f72409
- (void)dealloc;	// 0x35f72435
- (id)description;	// 0x35f72499
// declared property getter: - (id)descriptionItem;	// 0x35f727a5
// declared property getter: - (id)prop;	// 0x35f72781
// declared property setter: - (void)setDescriptionItem:(id)item;	// 0x35f727b9
// declared property setter: - (void)setProp:(id)prop;	// 0x35f72795
@end

