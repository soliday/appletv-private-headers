/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WAKResponder : NSObject {
}
- (void)_forwardEvent:(id)event;	// 0x338520a9
- (BOOL)acceptsFirstResponder;	// 0x338520a1
- (BOOL)becomeFirstResponder;	// 0x338520a5
- (void)deleteBackward:(id)backward;	// 0x33852075
- (void)deleteForward:(id)forward;	// 0x33852079
- (void)handleEvent:(id)event;	// 0x33852165
- (void)insertParagraphSeparator:(id)separator;	// 0x3385207d
- (void)insertText:(id)text;	// 0x33852071
- (void)keyDown:(id)down;	// 0x33852115
- (void)keyUp:(id)up;	// 0x33852125
- (void)mouseDown:(id)down;	// 0x33852155
- (void)mouseEntered:(id)entered;	// 0x338520e5
- (void)mouseExited:(id)exited;	// 0x338520f5
- (void)mouseMoved:(id)moved;	// 0x33852105
- (void)mouseUp:(id)up;	// 0x33852145
- (void)moveDown:(id)down;	// 0x33852081
- (void)moveDownAndModifySelection:(id)selection;	// 0x33852085
- (void)moveLeft:(id)left;	// 0x33852089
- (void)moveLeftAndModifySelection:(id)selection;	// 0x3385208d
- (void)moveRight:(id)right;	// 0x33852091
- (void)moveRightAndModifySelection:(id)selection;	// 0x33852095
- (void)moveUp:(id)up;	// 0x33852099
- (void)moveUpAndModifySelection:(id)selection;	// 0x3385209d
- (id)nextResponder;	// 0x3385206d
- (BOOL)resignFirstResponder;	// 0x33366479
- (void)scrollWheel:(id)wheel;	// 0x338520d5
- (void)touch:(id)touch;	// 0x33852135
- (BOOL)tryToPerform:(SEL)perform with:(id)with;	// 0x331ecb71
@end

