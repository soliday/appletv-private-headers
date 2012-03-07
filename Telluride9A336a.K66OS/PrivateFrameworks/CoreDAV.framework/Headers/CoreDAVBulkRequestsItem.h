/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSDictionary, NSMutableSet, CoreDAVLeafItem, NSSet;

@interface CoreDAVBulkRequestsItem : CoreDAVItem {
	CoreDAVLeafItem *_maxResourcesItem;	// 24 = 0x18
	CoreDAVLeafItem *_maxSizeItem;	// 28 = 0x1c
	NSMutableSet *_supportedItems;	// 32 = 0x20
}
@property(readonly, assign) NSDictionary *dictRepresentation;	// G=0x32c63d19; 
@property(readonly, assign) int maxResources;	// G=0x32c63f19; 
@property(retain) CoreDAVLeafItem *maxResourcesItem;	// G=0x32c64369; S=0x32c6437d; @synthesize=_maxResourcesItem
@property(readonly, assign) int maxSize;	// G=0x32c63f51; 
@property(retain) CoreDAVLeafItem *maxSizeItem;	// G=0x32c643a1; S=0x32c643b5; @synthesize=_maxSizeItem
@property(readonly, assign) NSSet *supportedItems;	// G=0x32c643d9; @synthesize=_supportedItems
@property(readonly, assign) BOOL supportsDelete;	// G=0x32c64335; 
@property(readonly, assign) BOOL supportsInsert;	// G=0x32c642cd; 
@property(readonly, assign) BOOL supportsUpdate;	// G=0x32c64301; 
- (id)init;	// 0x32c638e1
- (void)addSupportedItem:(id)item;	// 0x32c63a69
- (id)copyParseRules;	// 0x32c63acd
- (void)dealloc;	// 0x32c6390d
- (id)description;	// 0x32c63981
// declared property getter: - (id)dictRepresentation;	// 0x32c63d19
// declared property getter: - (int)maxResources;	// 0x32c63f19
// declared property getter: - (id)maxResourcesItem;	// 0x32c64369
// declared property getter: - (int)maxSize;	// 0x32c63f51
// declared property getter: - (id)maxSizeItem;	// 0x32c643a1
// declared property setter: - (void)setMaxResourcesItem:(id)item;	// 0x32c6437d
// declared property setter: - (void)setMaxSizeItem:(id)item;	// 0x32c643b5
// declared property getter: - (id)supportedItems;	// 0x32c643d9
// declared property getter: - (BOOL)supportsDelete;	// 0x32c64335
// declared property getter: - (BOOL)supportsInsert;	// 0x32c642cd
- (BOOL)supportsItemWithNameSpace:(id)nameSpace name:(id)name;	// 0x32c63f89
// declared property getter: - (BOOL)supportsUpdate;	// 0x32c64301
@end
