/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVBulkRequestsItem, NSDictionary;

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem {
	CoreDAVBulkRequestsItem *_crudItem;	// 24 = 0x18
	CoreDAVBulkRequestsItem *_simpleItem;	// 28 = 0x1c
}
@property(retain) CoreDAVBulkRequestsItem *crudItem;	// G=0x35de63f1; S=0x35de6405; @synthesize=_crudItem
@property(readonly, assign) NSDictionary *dictRepresentation;	// G=0x35de6309; 
@property(retain) CoreDAVBulkRequestsItem *simpleItem;	// G=0x35de6429; S=0x35de643d; @synthesize=_simpleItem
- (id)init;	// 0x35de6009
- (id)copyParseRules;	// 0x35de6169
// declared property getter: - (id)crudItem;	// 0x35de63f1
- (void)dealloc;	// 0x35de6035
- (id)description;	// 0x35de6095
// declared property getter: - (id)dictRepresentation;	// 0x35de6309
// declared property setter: - (void)setCrudItem:(id)item;	// 0x35de6405
// declared property setter: - (void)setSimpleItem:(id)item;	// 0x35de643d
// declared property getter: - (id)simpleItem;	// 0x35de6429
@end

