/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVLeafItem, NSMutableArray, NSSet;

@interface CoreDAVMultiStatusItem : CoreDAVItem {
	NSMutableArray *_orderedResponses;	// 24 = 0x18
	CoreDAVLeafItem *_responseDescription;	// 28 = 0x1c
}
@property(retain) NSMutableArray *orderedResponses;	// G=0x31001e0d; S=0x31001e21; @synthesize=_orderedResponses
@property(retain) CoreDAVLeafItem *responseDescription;	// G=0x31001e45; S=0x31001e59; @synthesize=_responseDescription
@property(readonly, assign) NSSet *responses;	// G=0x31001dd5; 
- (id)init;	// 0x31001a25
- (void)addResponse:(id)response;	// 0x31001d39
- (id)copyParseRules;	// 0x31001b99
- (void)dealloc;	// 0x31001a51
- (id)description;	// 0x31001ab1
// declared property getter: - (id)orderedResponses;	// 0x31001e0d
// declared property getter: - (id)responseDescription;	// 0x31001e45
// declared property getter: - (id)responses;	// 0x31001dd5
// declared property setter: - (void)setOrderedResponses:(id)responses;	// 0x31001e21
// declared property setter: - (void)setResponseDescription:(id)description;	// 0x31001e59
@end
