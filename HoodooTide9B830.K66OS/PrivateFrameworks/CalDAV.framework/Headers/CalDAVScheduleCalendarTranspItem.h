/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_transparent;	// 24 = 0x18
}
@property(readonly, assign) BOOL isScheduleTransparent;	// G=0x31474f25; 
@property(retain) CoreDAVItemWithNoChildren *transparent;	// G=0x31474e05; S=0x31474de1; @synthesize=_transparent
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x31474d95
- (id)copyParseRules;	// 0x31474e1d
- (void)dealloc;	// 0x31474f45
// declared property getter: - (BOOL)isScheduleTransparent;	// 0x31474f25
// declared property setter: - (void)setTransparent:(id)transparent;	// 0x31474de1
// declared property getter: - (id)transparent;	// 0x31474e05
@end

