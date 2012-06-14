/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"


__attribute__((visibility("hidden")))
@interface DOMOverflowEvent : DOMEvent {
}
@property(readonly, assign) BOOL horizontalOverflow;	// G=0x359355b1; 
@property(readonly, assign) unsigned short orient;	// G=0x35935585; 
@property(readonly, assign) BOOL verticalOverflow;	// G=0x359355e1; 
- (void)initOverflowEvent:(unsigned short)event horizontalOverflow:(BOOL)overflow verticalOverflow:(BOOL)overflow3;	// 0x35935611
// declared property getter: - (BOOL)horizontalOverflow;	// 0x359355b1
// declared property getter: - (unsigned short)orient;	// 0x35935585
// declared property getter: - (BOOL)verticalOverflow;	// 0x359355e1
@end

