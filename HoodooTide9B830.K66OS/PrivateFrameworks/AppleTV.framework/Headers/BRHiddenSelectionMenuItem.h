/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuItem.h"

@class NSArray;

@interface BRHiddenSelectionMenuItem : BRMenuItem {
@private
	NSArray *_events;	// 144 = 0x90
	int _eventCount;	// 148 = 0x94
}
@property(retain) NSArray *events;	// G=0x329dcedd; S=0x329dceed; converted property
@property(retain) id hiddenSelectionHandler;	// G=0x329dcf59; S=0x329dcf3d; converted property
- (BOOL)brEventAction:(id)action;	// 0x329dcdb1
- (void)dealloc;	// 0x329dcd65
// converted property getter: - (id)events;	// 0x329dcedd
// converted property getter: - (id)hiddenSelectionHandler;	// 0x329dcf59
// converted property setter: - (void)setEvents:(id)events;	// 0x329dceed
// converted property setter: - (void)setHiddenSelectionHandler:(id)handler;	// 0x329dcf3d
@end

