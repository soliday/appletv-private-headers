/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVLeafItem, CalDAVCalendarServerChangesItem, CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_master;	// 24 = 0x18
	CoreDAVLeafItem *_recurrenceID;	// 28 = 0x1c
	CalDAVCalendarServerChangesItem *_changes;	// 32 = 0x20
}
@property(retain) CalDAVCalendarServerChangesItem *changes;	// G=0x332580fd; S=0x332580d9; @synthesize=_changes
@property(readonly, assign) BOOL isMaster;	// G=0x33257fcd; 
@property(retain) CoreDAVItemWithNoChildren *master;	// G=0x33258085; S=0x33258061; @synthesize=_master
@property(retain) CoreDAVLeafItem *recurrenceID;	// G=0x332580c1; S=0x3325809d; @synthesize=_recurrenceID
- (id)init;	// 0x33257d25
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x33257fed
// declared property getter: - (id)changes;	// 0x332580fd
- (id)copyParseRules;	// 0x33257d61
- (void)dealloc;	// 0x33258141
- (id)description;	// 0x33258115
// declared property getter: - (BOOL)isMaster;	// 0x33257fcd
// declared property getter: - (id)master;	// 0x33258085
// declared property getter: - (id)recurrenceID;	// 0x332580c1
// declared property setter: - (void)setChanges:(id)changes;	// 0x332580d9
// declared property setter: - (void)setMaster:(id)master;	// 0x33258061
// declared property setter: - (void)setRecurrenceID:(id)anId;	// 0x3325809d
@end

