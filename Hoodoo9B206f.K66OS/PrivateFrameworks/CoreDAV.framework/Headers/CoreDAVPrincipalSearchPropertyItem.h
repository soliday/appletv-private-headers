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
@property(retain) CoreDAVLeafItem *descriptionItem;	// G=0x33a02101; S=0x33a02115; @synthesize=_descriptionItem
@property(retain) CoreDAVItem *prop;	// G=0x33a020c9; S=0x33a020dd; @synthesize=_prop
- (id)init;	// 0x33a01dc5
- (id)copyParseRules;	// 0x33a01f29
- (void)dealloc;	// 0x33a01df1
- (id)description;	// 0x33a01e51
// declared property getter: - (id)descriptionItem;	// 0x33a02101
// declared property getter: - (id)prop;	// 0x33a020c9
// declared property setter: - (void)setDescriptionItem:(id)item;	// 0x33a02115
// declared property setter: - (void)setProp:(id)prop;	// 0x33a020dd
@end

