/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVLeafItem, CoreDAVErrorItem;

@interface CoreDAVPropStatItem : CoreDAVItem {
	CoreDAVLeafItem *_status;	// 24 = 0x18
	CoreDAVItem *_prop;	// 28 = 0x1c
	CoreDAVErrorItem *_errorItem;	// 32 = 0x20
	CoreDAVLeafItem *_responseDescription;	// 36 = 0x24
}
@property(retain, nonatomic) CoreDAVErrorItem *errorItem;	// G=0x35dd9179; S=0x35dd909d; @synthesize=_errorItem
@property(retain) CoreDAVItem *prop;	// G=0x35dd9141; S=0x35dd9155; @synthesize=_prop
@property(retain) CoreDAVLeafItem *responseDescription;	// G=0x35dd9189; S=0x35dd919d; @synthesize=_responseDescription
@property(retain) CoreDAVLeafItem *status;	// G=0x35dd9109; S=0x35dd911d; @synthesize=_status
- (id)init;	// 0x35dd8be9
- (id)copyParseRules;	// 0x35dd8dc1
- (void)dealloc;	// 0x35dd8c15
- (id)description;	// 0x35dd8c9d
// declared property getter: - (id)errorItem;	// 0x35dd9179
// declared property getter: - (id)prop;	// 0x35dd9141
// declared property getter: - (id)responseDescription;	// 0x35dd9189
// declared property setter: - (void)setErrorItem:(id)item;	// 0x35dd909d
// declared property setter: - (void)setProp:(id)prop;	// 0x35dd9155
// declared property setter: - (void)setResponseDescription:(id)description;	// 0x35dd919d
// declared property setter: - (void)setStatus:(id)status;	// 0x35dd911d
// declared property getter: - (id)status;	// 0x35dd9109
@end

