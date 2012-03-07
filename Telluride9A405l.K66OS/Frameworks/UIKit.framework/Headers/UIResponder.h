/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIView, NSUndoManager;

@interface UIResponder : NSObject {
}
@property(readonly, assign, nonatomic) UIResponder *_editingDelegate;	// G=0x32d819f1; 
@property(readonly, assign, nonatomic) UIResponder *_responderForEditing;	// G=0x32d819cd; 
@property(readonly, assign) UIView *inputAccessoryView;	// G=0x32c7b2dd; 
@property(readonly, assign) UIView *inputView;	// G=0x32c7b24d; 
@property(readonly, assign, nonatomic) NSUndoManager *undoManager;	// G=0x32e65485; 
- (void)_becomeFirstResponder;	// 0x32c7aa31
- (void)_becomeFirstResponderAndMakeVisible;	// 0x32e65609
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x32cebf9d
- (void)_beginPinningInputViews;	// 0x32daf3d5
- (void)_clearBecomeFirstResponderWhenCapable;	// 0x32d16bdd
- (void)_completeForwardingTouches:(id)touches phase:(int)phase event:(id)event;	// 0x32c90ba9
- (void)_completeForwardingTouches:(id)touches phase:(int)phase event:(id)event index:(unsigned)index;	// 0x32c90bcd
- (BOOL)_containedInAbsoluteResponderChain;	// 0x32cd3f15
- (BOOL)_containsResponder:(id)responder;	// 0x32c98681
- (void)_controlMouseDown:(GSEventRef)down;	// 0x32e6559d
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x32e655a5
- (void)_controlMouseUp:(GSEventRef)up;	// 0x32e655a1
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x32c91b55
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x32c92e8d
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x32dbad1d
- (id)_deepestDefaultFirstResponder;	// 0x32ca0e39
- (id)_deepestDefaultFirstResponderMatching:(id)matching;	// 0x32e65619
// declared property getter: - (id)_editingDelegate;	// 0x32d819f1
- (void)_endPinningInputViews;	// 0x32d52e89
- (void)_finishResignFirstResponder;	// 0x32c987a1
- (id)_firstResponder;	// 0x32c991cd
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x32d8e825
- (BOOL)_isPinningInputViews;	// 0x32d52e2d
- (BOOL)_isRootForKeyResponderCycle;	// 0x32e65481
- (BOOL)_isSettingFirstResponder;	// 0x32c7a855
- (BOOL)_isTransitioningFromView:(id)view;	// 0x32d9337d
- (id)_keyboardResponder;	// 0x32c7b3b1
- (id)_nextFirstResponderIfAllowed;	// 0x32c986c1
- (id)_nextKeyResponder;	// 0x32e65479
- (id)_previousKeyResponder;	// 0x32e6547d
- (BOOL)_promoteDeepestDefaultFirstResponder;	// 0x32ca0ce1
- (BOOL)_requiresKeyboardResetOnReload;	// 0x32c7b0a1
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x32c7b331
- (void)_resignFirstResponder;	// 0x32c99111
- (id)_responderForBecomeFirstResponder;	// 0x32c9867d
// declared property getter: - (id)_responderForEditing;	// 0x32d819cd
- (void)_setFirstResponder:(id)responder;	// 0x32c7aa45
- (void)_setIsSettingFirstResponder:(BOOL)responder;	// 0x32c7a975
- (BOOL)_shouldUseDefaultFirstResponder;	// 0x32ca0ed1
- (BOOL)_shouldUseKeyWindowStack;	// 0x32c991f5
- (BOOL)_shouldUseNextFirstResponder;	// 0x32c98709
- (id)_targetForAction:(SEL)action withSender:(id)sender;	// 0x32e655a9
- (id)_window;	// 0x32cf778d
- (void)_windowBecameKey;	// 0x32d93311
- (void)_windowResignedKey;	// 0x32d9330d
- (BOOL)becomeFirstResponder;	// 0x32c7a5e1
- (BOOL)canBecomeFirstResponder;	// 0x32c991c9
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x32d53821
- (BOOL)canResignFirstResponder;	// 0x32c986bd
- (id)defaultFirstResponder;	// 0x32ca0ecd
- (id)firstResponder;	// 0x32c7a8e9
- (void)gestureChanged:(GSEventRef)changed;	// 0x32e65475
- (void)gestureEnded:(GSEventRef)ended;	// 0x32e65471
- (void)gestureStarted:(GSEventRef)started;	// 0x32e6546d
// declared property getter: - (id)inputAccessoryView;	// 0x32c7b2dd
// declared property getter: - (id)inputView;	// 0x32c7b24d
- (BOOL)isFirstResponder;	// 0x32c7ac71
- (void)motionBegan:(int)began withEvent:(id)event;	// 0x32e65459
- (void)motionCancelled:(int)cancelled withEvent:(id)event;	// 0x32e65461
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0x32e6545d
- (void)mouseDown:(GSEventRef)down;	// 0x32e65405
- (void)mouseDragged:(GSEventRef)dragged;	// 0x32e65449
- (void)mouseEntered:(GSEventRef)entered;	// 0x32e6544d
- (void)mouseExited:(GSEventRef)exited;	// 0x32e65451
- (void)mouseMoved:(GSEventRef)moved;	// 0x32e65455
- (void)mouseUp:(GSEventRef)up;	// 0x32e65445
- (id)nextFirstResponder;	// 0x32c9873d
- (id)nextResponder;	// 0x32c7b2d9
- (void)reloadInputViews;	// 0x32c7abc9
- (void)reloadInputViewsWithoutReset;	// 0x32e654c1
- (void)remoteControlReceivedWithEvent:(id)event;	// 0x32e65465
- (BOOL)resignFirstResponder;	// 0x32c78429
- (void)scrollWheel:(GSEventRef)wheel;	// 0x32e65469
- (id)textInputView;	// 0x32f69325
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32d9e801
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32d94651
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32da0d59
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32dd47c9
// declared property getter: - (id)undoManager;	// 0x32e65485
@end
