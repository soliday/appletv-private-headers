/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVContainerMultiGetTask.h> // Unknown library


@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask {
	BOOL _getScheduleTags;	// 172 = 0xac
	BOOL _getScheduleChanges;	// 173 = 0xad
}
@property(assign) BOOL getScheduleChanges;	// G=0x31476741; S=0x31476751; @synthesize=_getScheduleChanges
@property(assign) BOOL getScheduleTags;	// G=0x31476761; S=0x31476771; @synthesize=_getScheduleTags
- (id)initWithURLs:(id)urls atContainerURL:(id)containerURL getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes;	// 0x31476781
- (id)initWithURLs:(id)urls atContainerURL:(id)containerURL getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes appSpecificCalendarItemClass:(Class)aClass;	// 0x31476969
- (id)copyAdditionalPropElements;	// 0x314767d9
// declared property getter: - (BOOL)getScheduleChanges;	// 0x31476741
// declared property getter: - (BOOL)getScheduleTags;	// 0x31476761
- (void)setAdditionalProperties:(id)properties onDataItem:(id)item;	// 0x314768d1
// declared property setter: - (void)setGetScheduleChanges:(BOOL)changes;	// 0x31476751
// declared property setter: - (void)setGetScheduleTags:(BOOL)tags;	// 0x31476771
@end

