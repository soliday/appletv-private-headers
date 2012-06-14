/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem {
	NSMutableSet *_transports;	// 24 = 0x18
}
@property(retain) NSMutableSet *transports;	// G=0x33a04ed1; S=0x33a04ee5; @synthesize=_transports
- (id)init;	// 0x33a04bf5
- (void)addTransport:(id)transport;	// 0x33a04e35
- (id)copyParseRules;	// 0x33a04d31
- (void)dealloc;	// 0x33a04c21
- (id)description;	// 0x33a04c6d
// declared property setter: - (void)setTransports:(id)transports;	// 0x33a04ee5
// declared property getter: - (id)transports;	// 0x33a04ed1
@end

