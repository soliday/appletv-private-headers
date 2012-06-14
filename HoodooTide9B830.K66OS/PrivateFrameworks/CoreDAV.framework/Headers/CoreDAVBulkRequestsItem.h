/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet, CoreDAVLeafItem, NSSet, NSDictionary;

@interface CoreDAVBulkRequestsItem : CoreDAVItem {
	CoreDAVLeafItem *_maxResourcesItem;	// 24 = 0x18
	CoreDAVLeafItem *_maxSizeItem;	// 28 = 0x1c
	NSMutableSet *_supportedItems;	// 32 = 0x20
}
@property(readonly, assign) NSDictionary *dictRepresentation;	// G=0x35de5939; 
@property(readonly, assign) int maxResources;	// G=0x35de5b39; 
@property(retain) CoreDAVLeafItem *maxResourcesItem;	// G=0x35de5f89; S=0x35de5f9d; @synthesize=_maxResourcesItem
@property(readonly, assign) int maxSize;	// G=0x35de5b71; 
@property(retain) CoreDAVLeafItem *maxSizeItem;	// G=0x35de5fc1; S=0x35de5fd5; @synthesize=_maxSizeItem
@property(readonly, assign) NSSet *supportedItems;	// G=0x35de5ff9; @synthesize=_supportedItems
@property(readonly, assign) BOOL supportsDelete;	// G=0x35de5f55; 
@property(readonly, assign) BOOL supportsInsert;	// G=0x35de5eed; 
@property(readonly, assign) BOOL supportsUpdate;	// G=0x35de5f21; 
- (id)init;	// 0x35de5501
- (void)addSupportedItem:(id)item;	// 0x35de5689
- (id)copyParseRules;	// 0x35de56ed
- (void)dealloc;	// 0x35de552d
- (id)description;	// 0x35de55a1
// declared property getter: - (id)dictRepresentation;	// 0x35de5939
// declared property getter: - (int)maxResources;	// 0x35de5b39
// declared property getter: - (id)maxResourcesItem;	// 0x35de5f89
// declared property getter: - (int)maxSize;	// 0x35de5b71
// declared property getter: - (id)maxSizeItem;	// 0x35de5fc1
// declared property setter: - (void)setMaxResourcesItem:(id)item;	// 0x35de5f9d
// declared property setter: - (void)setMaxSizeItem:(id)item;	// 0x35de5fd5
// declared property getter: - (id)supportedItems;	// 0x35de5ff9
// declared property getter: - (BOOL)supportsDelete;	// 0x35de5f55
// declared property getter: - (BOOL)supportsInsert;	// 0x35de5eed
- (BOOL)supportsItemWithNameSpace:(id)nameSpace name:(id)name;	// 0x35de5ba9
// declared property getter: - (BOOL)supportsUpdate;	// 0x35de5f21
@end

