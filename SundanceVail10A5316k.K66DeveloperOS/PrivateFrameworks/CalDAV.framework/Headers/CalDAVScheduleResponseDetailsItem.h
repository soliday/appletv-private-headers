/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class ICSDocument, CoreDAVErrorItem, CoreDAVLeafItem, NSString, CoreDAVItemWithHrefChildItem;

@interface CalDAVScheduleResponseDetailsItem : CoreDAVItem {
	CoreDAVItemWithHrefChildItem *_recipientHREF;	// 24 = 0x18
	CoreDAVLeafItem *_requestStatus;	// 28 = 0x1c
	ICSDocument *_calendarData;	// 32 = 0x20
	CoreDAVErrorItem *_topLevelErrorItem;	// 36 = 0x24
	NSString *_responseDescription;	// 40 = 0x28
}
@property(retain) ICSDocument *calendarData;	// G=0x36e4e0ed; S=0x36e4e101; @synthesize=_calendarData
@property(retain) CoreDAVItemWithHrefChildItem *recipientHREF;	// G=0x36e4e0a5; S=0x36e4e0b9; @synthesize=_recipientHREF
@property(readonly, assign) NSString *recipientString;	// G=0x36e4dfb1; 
@property(retain) CoreDAVLeafItem *requestStatus;	// G=0x36e4e0c9; S=0x36e4e0dd; @synthesize=_requestStatus
@property(retain) NSString *responseDescription;	// G=0x36e4e135; S=0x36e4e149; @synthesize=_responseDescription
@property(retain) CoreDAVErrorItem *topLevelErrorItem;	// G=0x36e4e111; S=0x36e4e125; @synthesize=_topLevelErrorItem
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x36e4db61
- (void)_setCalendarDataWithLeafItem:(id)leafItem;	// 0x36e4dbf9
// declared property getter: - (id)calendarData;	// 0x36e4e0ed
- (id)copyParseRules;	// 0x36e4dc79
- (void)dealloc;	// 0x36e4dacd
- (id)description;	// 0x36e4dfe9
// declared property getter: - (id)recipientHREF;	// 0x36e4e0a5
// declared property getter: - (id)recipientString;	// 0x36e4dfb1
// declared property getter: - (id)requestStatus;	// 0x36e4e0c9
// declared property getter: - (id)responseDescription;	// 0x36e4e135
// declared property setter: - (void)setCalendarData:(id)data;	// 0x36e4e101
// declared property setter: - (void)setRecipientHREF:(id)href;	// 0x36e4e0b9
// declared property setter: - (void)setRequestStatus:(id)status;	// 0x36e4e0dd
// declared property setter: - (void)setResponseDescription:(id)description;	// 0x36e4e149
// declared property setter: - (void)setTopLevelErrorItem:(id)item;	// 0x36e4e125
// declared property getter: - (id)topLevelErrorItem;	// 0x36e4e111
@end
