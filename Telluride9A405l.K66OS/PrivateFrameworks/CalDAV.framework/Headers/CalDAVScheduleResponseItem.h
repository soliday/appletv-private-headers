/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem {
	NSMutableSet *_responses;	// 24 = 0x18
	NSMutableSet *_successfulICS;	// 28 = 0x1c
	NSMutableSet *_failedResponseItems;	// 32 = 0x20
}
@property(retain) NSMutableSet *failedResponseItems;	// G=0x3515c481; S=0x3515c45d; @synthesize=_failedResponseItems
@property(retain) NSMutableSet *responses;	// G=0x3515c409; S=0x3515c3e5; @synthesize=_responses
@property(retain) NSMutableSet *successfulICS;	// G=0x3515c445; S=0x3515c421; @synthesize=_successfulICS
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3515c751
- (void)addNewTopLevelItem:(id)item;	// 0x3515c509
- (id)copyParseRules;	// 0x3515ba75
- (void)dealloc;	// 0x3515c37d
- (id)description;	// 0x3515c499
// declared property getter: - (id)failedResponseItems;	// 0x3515c481
// declared property getter: - (id)responses;	// 0x3515c409
// declared property setter: - (void)setFailedResponseItems:(id)items;	// 0x3515c45d
// declared property setter: - (void)setResponses:(id)responses;	// 0x3515c3e5
// declared property setter: - (void)setSuccessfulICS:(id)ics;	// 0x3515c421
// declared property getter: - (id)successfulICS;	// 0x3515c445
@end
