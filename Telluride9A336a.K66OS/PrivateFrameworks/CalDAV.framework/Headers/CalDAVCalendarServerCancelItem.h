/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVCalendarServerCancelItem : CoreDAVItem {
	NSMutableSet *_recurrences;	// 24 = 0x18
}
@property(retain) NSMutableSet *recurrences;	// G=0x338cfca1; S=0x338cfc7d; @synthesize=_recurrences
- (id)init;	// 0x338cfa99
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x338cfc0d
- (void)addRecurrence:(id)recurrence;	// 0x338cfbe1
- (id)copyParseRules;	// 0x338cfad5
- (void)dealloc;	// 0x338cfce5
- (id)description;	// 0x338cfcb9
// declared property getter: - (id)recurrences;	// 0x338cfca1
// declared property setter: - (void)setRecurrences:(id)recurrences;	// 0x338cfc7d
@end
