/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"

@class DOMAbstractView;

@interface DOMUIEvent : DOMEvent {
}
@property(readonly, assign) int charCode;	// G=0x334c54a1; 
@property(readonly, assign) int detail;	// G=0x334c53b5; 
@property(readonly, assign) int keyCode;	// G=0x334c53e1; 
@property(readonly, assign) int layerX;	// G=0x334c5561; 
@property(readonly, assign) int layerY;	// G=0x334c5621; 
@property(readonly, assign) int pageX;	// G=0x334c56e1; 
@property(readonly, assign) int pageY;	// G=0x334c57a1; 
@property(readonly, retain) DOMAbstractView *view;	// G=0x334c5921; 
@property(readonly, assign) int which;	// G=0x334c5861; 
- (void)initUIEvent:(id)event :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(int)arg5;	// 0x334c5bcd
- (void)initUIEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view detail:(int)detail;	// 0x334c59dd
// declared property getter: - (int)charCode;	// 0x334c54a1
// declared property getter: - (int)detail;	// 0x334c53b5
// declared property getter: - (int)keyCode;	// 0x334c53e1
// declared property getter: - (int)layerX;	// 0x334c5561
// declared property getter: - (int)layerY;	// 0x334c5621
// declared property getter: - (int)pageX;	// 0x334c56e1
// declared property getter: - (int)pageY;	// 0x334c57a1
// declared property getter: - (id)view;	// 0x334c5921
// declared property getter: - (int)which;	// 0x334c5861
@end

