/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardImplGeometryDelegate.h"
#import "UIView.h"

@class UITextInputTraits, UIImage;

@interface UIKeyboard : UIView <UIKeyboardImplGeometryDelegate> {
	UIImage *m_snapshot;	// 48 = 0x30
	UITextInputTraits *m_defaultTraits;	// 52 = 0x34
	BOOL m_typingDisabled;	// 56 = 0x38
	BOOL m_minimized;	// 57 = 0x39
	BOOL m_respondingToImplGeometryChange;	// 58 = 0x3a
	int m_orientation;	// 60 = 0x3c
}
@property(retain) id defaultTextInputTraits;	// G=0x352d8259; S=0x352d82bd; converted property
@property(assign, nonatomic, getter=isMinimized) BOOL minimized;	// G=0x351a643d; S=0x352d8aed; 
@property(readonly, assign) int orientation;	// G=0x351ad405; converted property
@property(assign) BOOL returnKeyEnabled;	// G=0x352d81cd; S=0x352d8211; converted property
@property(assign, nonatomic) BOOL typingEnabled;	// G=0x352d8499; S=0x352d84b1; 
+ (void)initImplementationNow;	// 0x352d7d21
+ (void)_clearActiveKeyboard;	// 0x352d7d11
+ (id)activeKeyboard;	// 0x3512a9cd
+ (CGRect)defaultFrameForInterfaceOrientation:(int)interfaceOrientation;	// 0x352d7d59
+ (CGSize)defaultSize;	// 0x3521bf3d
+ (CGSize)defaultSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x3519f65d
+ (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x352d811d
+ (BOOL)isOnScreen;	// 0x351af8dd
+ (CGSize)keyboardSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x352d8149
+ (CGRect)onscreenFrameForTextInputTraits:(id)textInputTraits;	// 0x352d7e79
+ (void)removeAllDynamicDictionaries;	// 0x352d7d3d
+ (BOOL)respondsToProxGesture;	// 0x352d80d5
+ (CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x35135f45
- (id)initWithDefaultSize;	// 0x352d7bf5
- (id)initWithFrame:(CGRect)frame;	// 0x3519f751
- (void)_acceptCurrentCandidate;	// 0x352d9665
- (id)_baseKeyForRepresentedString:(id)representedString;	// 0x35253fdd
- (void)_changeToKeyplane:(id)keyplane;	// 0x352d9509
- (void)_clearCurrentInputManager;	// 0x352d9699
- (id)_getAutocorrection;	// 0x352d9631
- (id)_getCurrentKeyboardName;	// 0x352d9459
- (id)_getCurrentKeyplaneName;	// 0x352547cd
- (id)_getLocalizedInputMode;	// 0x352d948d
- (BOOL)_hasCandidates;	// 0x352d9709
- (BOOL)_isAutomaticKeyboard;	// 0x353d1b3d
- (id)_keyplaneForKey:(id)key;	// 0x352545e5
- (id)_keyplaneNamed:(id)named;	// 0x352d94c1
- (int)_positionInCandidateList:(id)candidateList;	// 0x352d9765
- (void)_setAutocorrects:(BOOL)autocorrects;	// 0x352d95f9
- (void)_setInputMode:(id)mode;	// 0x352d95c1
- (id)_touchPoint:(CGPoint)point;	// 0x352d9551
- (id)_typeCharacter:(id)character withError:(CGPoint)error shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;	// 0x35254869
- (void)acceptAutocorrection;	// 0x351d5c09
- (void)activate;	// 0x351ad165
- (void)autoAdjustOrientation;	// 0x3519fcf9
- (void)autoAdjustOrientationForSize:(CGSize)size;	// 0x3519fa61
- (BOOL)canDismiss;	// 0x352d9051
- (void)clearSnapshot;	// 0x352d8395
- (void)deactivate;	// 0x352d84cd
- (void)dealloc;	// 0x352d7c6d
// converted property getter: - (id)defaultTextInputTraits;	// 0x352d8259
- (id)delegate;	// 0x352d8351
- (void)displayLayer:(id)layer;	// 0x351aeb6d
- (void)geometryChangeDone:(BOOL)done;	// 0x351b0515
- (UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(float)implHeightDelta;	// 0x352d8c69
- (UIPeripheralAnimationGeometry)geometryForMinimize:(BOOL)minimize;	// 0x352d85e9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x351c2cd9
- (void)implBoundsHeightChangeDone:(float)done suppressNotification:(BOOL)notification;	// 0x352d8eed
- (int)interfaceOrientation;	// 0x352d8175
- (BOOL)isActive;	// 0x351ac851
// declared property getter: - (BOOL)isMinimized;	// 0x351a643d
- (void)keyboardMinMaximized:(id)maximized finished:(id)finished context:(id)context;	// 0x352d8b69
- (void)manualKeyboardWasOrderedIn;	// 0x352d93b1
- (void)manualKeyboardWasOrderedOut;	// 0x352d9421
- (void)manualKeyboardWillBeOrderedIn;	// 0x352d9379
- (void)manualKeyboardWillBeOrderedOut;	// 0x352d93e9
- (void)maximize;	// 0x352d8931
- (void)minimize;	// 0x352d8775
- (void)movedFromSuperview:(id)superview;	// 0x351ad06d
// converted property getter: - (int)orientation;	// 0x351ad405
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x351b1e89
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x351b1e4d
- (void)prepareForGeometryChange;	// 0x351ad509
- (void)prepareForImplBoundsHeightChange:(float)implBoundsHeightChange suppressNotification:(BOOL)notification;	// 0x352d8e1d
- (void)removeAutocorrectPrompt;	// 0x351d5bc5
- (void)removeFromSuperview;	// 0x351f6541
- (void)resizeForKeyplaneSize:(CGSize)keyplaneSize;	// 0x351d2045
// converted property getter: - (BOOL)returnKeyEnabled;	// 0x352d81cd
- (void)setCaretBlinks:(BOOL)blinks;	// 0x352d8185
- (void)setCaretVisible:(BOOL)visible;	// 0x3520d639
// converted property setter: - (void)setDefaultTextInputTraits:(id)traits;	// 0x352d82bd
- (void)setFrame:(CGRect)frame;	// 0x3519f87d
// declared property setter: - (void)setMinimized:(BOOL)minimized;	// 0x352d8aed
- (void)setNeedsDisplay;	// 0x3519f9e1
// converted property setter: - (void)setReturnKeyEnabled:(BOOL)enabled;	// 0x352d8211
// declared property setter: - (void)setTypingEnabled:(BOOL)enabled;	// 0x352d84b1
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;	// 0x351acef9
- (void)takeSnapshot;	// 0x352d83c1
- (int)textEffectsVisibilityLevel;	// 0x352d85c9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x352d85d9
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x352d85e5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x352d85e1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x352d85dd
// declared property getter: - (BOOL)typingEnabled;	// 0x352d8499
- (void)updateLayout;	// 0x351d5df5
@end

