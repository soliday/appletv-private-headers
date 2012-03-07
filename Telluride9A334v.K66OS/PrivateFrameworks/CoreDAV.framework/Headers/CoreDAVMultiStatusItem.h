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
@property(retain) NSMutableArray *orderedResponses;	// G=0x347bbe0d; S=0x347bbe21; @synthesize=_orderedResponses
@property(retain) CoreDAVLeafItem *responseDescription;	// G=0x347bbe45; S=0x347bbe59; @synthesize=_responseDescription
@property(readonly, assign) NSSet *responses;	// G=0x347bbdd5; 
- (id)init;	// 0x347bba25
- (void)addResponse:(id)response;	// 0x347bbd39
- (id)copyParseRules;	// 0x347bbb99
- (void)dealloc;	// 0x347bba51
- (id)description;	// 0x347bbab1
// declared property getter: - (id)orderedResponses;	// 0x347bbe0d
// declared property getter: - (id)responseDescription;	// 0x347bbe45
// declared property getter: - (id)responses;	// 0x347bbdd5
// declared property setter: - (void)setOrderedResponses:(id)responses;	// 0x347bbe21
// declared property setter: - (void)setResponseDescription:(id)description;	// 0x347bbe59
@end
