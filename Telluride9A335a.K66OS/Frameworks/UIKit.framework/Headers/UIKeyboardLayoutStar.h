/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardLayout.h"

@class UISwipeGestureRecognizer, UIKBKeyplaneView, NSMutableDictionary, UIDelayedAction, UIKBBackgroundView, NSMutableSet, NSTimer, CADisplayLink, UIKBTree, NSString;
@protocol UIKeyboardRivenTransitionView;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutStar : UIKeyboardLayout {
@private
	UIKBTree *_keyboard;	// 76 = 0x4c
	UIKBTree *_keyplane;	// 80 = 0x50
	NSString *_keyboardName;	// 84 = 0x54
	NSString *_keyplaneName;	// 88 = 0x58
	int _appearance;	// 92 = 0x5c
	UIKBTree *_activeKey;	// 96 = 0x60
	UIKBKeyplaneView *_keyplaneView;	// 100 = 0x64
	UIKBBackgroundView *_backgroundView;	// 104 = 0x68
	int _keyboardType;	// 108 = 0x6c
	CGPoint _initialDragPoint;	// 112 = 0x70
	CGPoint _dragPrevPoint;	// 120 = 0x78
	float _dragValues[4];	// 128 = 0x80
	float _dragVelocity;	// 144 = 0x90
	double _prevTouchUpTime;	// 148 = 0x94
	double _prevTouchDownTime;	// 156 = 0x9c
	int _prevUpActions;	// 164 = 0xa4
	NSMutableDictionary *_keyboards;	// 168 = 0xa8
	NSMutableDictionary *_allKeyplaneViews;	// 172 = 0xac
	NSMutableSet *_allKeyplaneKeycaps;	// 176 = 0xb0
	NSMutableSet *_validInputStrings;	// 180 = 0xb4
	NSString *_localizedInputKey;	// 184 = 0xb8
	CFDictionaryRef _extendedTouchInfoMap;	// 188 = 0xbc
	int _preferredTrackingChangeCount;	// 192 = 0xc0
	int _shiftTrackingChangeCount;	// 196 = 0xc4
	NSMutableSet *_accentInfo;	// 200 = 0xc8
	NSMutableSet *_hasAccents;	// 204 = 0xcc
	NSMutableDictionary *_delegatesForKeyplaneKeys;	// 208 = 0xd0
	id _spaceTarget;	// 212 = 0xd4
	SEL _spaceAction;	// 216 = 0xd8
	SEL _spaceLongAction;	// 220 = 0xdc
	id _returnTarget;	// 224 = 0xe0
	SEL _returnAction;	// 228 = 0xe4
	SEL _returnLongAction;	// 232 = 0xe8
	id _deleteTarget;	// 236 = 0xec
	SEL _deleteAction;	// 240 = 0xf0
	SEL _deleteLongAction;	// 244 = 0xf4
	BOOL _secureTextEntry;	// 248 = 0xf8
	BOOL _shift;	// 249 = 0xf9
	BOOL _autoshift;	// 250 = 0xfa
	BOOL _settingShift;	// 251 = 0xfb
	BOOL _didLongPress;	// 252 = 0xfc
	BOOL _dragged;	// 253 = 0xfd
	BOOL _dragChangedKey;	// 254 = 0xfe
	BOOL _touchDownInMoreKey;	// 255 = 0xff
	BOOL _touchDownInShiftKey;	// 256 = 0x100
	BOOL _wasShifted;	// 257 = 0x101
	BOOL _dragDismissStarted;	// 258 = 0x102
	BOOL _swipeDetected;	// 259 = 0x103
	BOOL _previousTouchInMore;	// 260 = 0x104
	BOOL _showIntlKey;	// 261 = 0x105
	BOOL _showDictationKey;	// 262 = 0x106
	BOOL _shiftLockReady;	// 263 = 0x107
	double _shiftLockFirstTapTime;	// 264 = 0x108
	UISwipeGestureRecognizer *_rightSwipeRecognizer;	// 272 = 0x110
	UISwipeGestureRecognizer *_leftSwipeRecognizer;	// 276 = 0x114
	UISwipeGestureRecognizer *_upSwipeRecognizer;	// 280 = 0x118
	UIView<UIKeyboardRivenTransitionView> *_transitionView;	// 284 = 0x11c
	float _initialSplitProgress;	// 288 = 0x120
	float _finalSplitProgress;	// 292 = 0x124
	float _initialPinchSeparation;	// 296 = 0x128
	float _pinchSeparationValues[4];	// 300 = 0x12c
	BOOL _pinchDetected;	// 316 = 0x13c
	double _autoSplitLastUpdate;	// 320 = 0x140
	float _autoSplitElapsedTime;	// 328 = 0x148
	CADisplayLink *_displayLink;	// 332 = 0x14c
	BOOL _ghostKeysEnabled;	// 336 = 0x150
	UIDelayedAction *_delayedCentroidUpdate;	// 340 = 0x154
	BOOL _preRotateShift;	// 344 = 0x158
	NSString *_preRotateKeyplaneName;	// 348 = 0x15c
	CGPoint _keyPeripheralInset;	// 352 = 0x160
	int _lastFlickDirection;	// 360 = 0x168
	UIView *_flickPopupView;	// 364 = 0x16c
	NSMutableDictionary *_compositeImages;	// 368 = 0x170
	NSTimer *_flickPopuptimer;	// 372 = 0x174
	id _touchInfo;	// 376 = 0x178
	BOOL _popupViewIsShown;	// 380 = 0x17c
	UIView *_dimKeyboardImageView;	// 384 = 0x180
	BOOL _keyboardImageViewIsDim;	// 388 = 0x184
	BOOL _isOutOfBounds;	// 389 = 0x185
}
@property(retain, nonatomic) UIKBTree *activeKey;	// G=0x33adc441; S=0x33a8a799; @synthesize=_activeKey
@property(assign, nonatomic) BOOL autoShift;	// G=0x33c2e609; S=0x33c2e619; @synthesize=_autoshift
@property(assign, nonatomic) BOOL didLongPress;	// G=0x33c2e629; S=0x33c2e639; @synthesize=_didLongPress
@property(readonly, assign, nonatomic) UIKBTree *keyboard;	// G=0x33b1a5d5; @synthesize=_keyboard
@property(copy, nonatomic) NSString *keyboardName;	// G=0x33c2e5c5; S=0x33c2e5d5; @synthesize=_keyboardName
@property(readonly, assign, nonatomic) UIKBTree *keyplane;	// G=0x33a698f9; @synthesize=_keyplane
@property(copy, nonatomic) NSString *keyplaneName;	// G=0x33a69909; S=0x33a69919; @synthesize=_keyplaneName
@property(copy, nonatomic) NSString *localizedInputKey;	// G=0x33c2e669; S=0x33a698d5; @synthesize=_localizedInputKey
@property(readonly, assign, nonatomic) NSString *localizedInputMode;	// G=0x33a6988d; 
@property(readonly, assign) BOOL pinchDetected;	// G=0x33a72f3d; converted property
@property(readonly, assign, nonatomic, getter=isRotating) BOOL rotating;	// G=0x33a71391; 
@property(assign, nonatomic) BOOL shift;	// G=0x33c2e5f9; S=0x33a72961; @synthesize=_shift
@property(readonly, assign, nonatomic) BOOL showDictationKey;	// G=0x33c2e659; @synthesize=_showDictationKey
@property(assign, nonatomic) BOOL showIntlKey;	// G=0x33a6f249; S=0x33c2e649; @synthesize=_showIntlKey
- (id)initWithFrame:(CGRect)frame;	// 0x33a683ed
- (void)_autoSplit:(id)split;	// 0x33c2d83d
- (void)activateCompositeKey:(id)key direction:(int)direction flickString:(id)string popupInfo:(id)info;	// 0x33c2fd75
- (id)activationIndicatorView;	// 0x33c2c131
// declared property getter: - (id)activeKey;	// 0x33adc441
- (id)activeTouchForKey:(id)key;	// 0x33b15cc9
- (CGPoint)applyError:(CGPoint)error toKey:(id)key;	// 0x33b1ac39
// declared property getter: - (BOOL)autoShift;	// 0x33c2e609
- (BOOL)backgroundNeedsRedraw;	// 0x33c2a039
- (id)baseKeyForString:(id)string;	// 0x33b1a279
- (id)cacheIdentifierForKeyplaneNamed:(id)keyplaneNamed withVisualStyle:(int)visualStyle;	// 0x33a6f189
- (id)cachedKeyplaneNameForKeyplane:(id)keyplane;	// 0x33a6f009
- (BOOL)canProduceString:(id)string;	// 0x33b1a059
- (BOOL)canReuseKeyplaneView;	// 0x33a9be85
- (void)cancelTouchIfNecessaryForInfo:(id)info;	// 0x33a9647d
- (id)candidateList;	// 0x33a6a975
- (void)changeToKeyplane:(id)keyplane;	// 0x33b1ab49
- (void)clearAllKeyDelegates;	// 0x33a6ab55
- (void)clearAllTouchInfo;	// 0x33a6af6d
- (void)clearHandwritingStrokesIfNeeded;	// 0x33a87bad
- (void)clearInfoForTouch:(id)touch;	// 0x33a96435
- (void)clearUnusedObjects;	// 0x33c293f1
- (id)compositeImageForKey:(id)key;	// 0x33c2f07d
- (void)confirmAction;	// 0x33c2aeb5
- (void)deactivateActiveKeys;	// 0x33a97329
- (void)deactivateAllInActivatedSet;	// 0x33a6aac9
- (void)dealloc;	// 0x33c291a9
- (id)defaultNameForKeyplaneName:(id)keyplaneName;	// 0x33a6ab2d
- (void)deleteAction;	// 0x33b15dbd
- (void)didClearInput;	// 0x33a87b6d
// declared property getter: - (BOOL)didLongPress;	// 0x33c2e629
- (void)didRotate;	// 0x33c2e3c5
- (int)displayTypeHintForMoreKey;	// 0x33a6e8e9
- (int)displayTypeHintForShiftKey;	// 0x33a6e731
- (BOOL)doesKeyCharging;	// 0x33a72cad
- (unsigned)downActionFlagsForKey:(id)key;	// 0x33a8ade5
- (void)downActionShiftWithKey:(id)key;	// 0x33b259c5
- (id)findLeftMoreKey;	// 0x33a6c44d
- (void)finishSplit;	// 0x33c2d0f9
- (void)finishSplitTransition;	// 0x33c2d309
- (void)finishSplitTransitionWithProgress:(float)progress;	// 0x33c2d429
- (void)flushKeyCache:(id)cache;	// 0x33c294c1
- (CGRect)frameForKeyWithRepresentedString:(id)representedString;	// 0x33c2e751
- (CGRect)frameForKeylayoutName:(id)keylayoutName;	// 0x33c2972d
- (CGRect)frameForKeylayoutName:(id)keylayoutName onKeyplaneName:(id)name;	// 0x33c296c1
- (CGRect)frameForLastKeyWithRepresentedString:(id)representedString;	// 0x33c2e9a5
- (id)generateInfoForTouch:(id)touch;	// 0x33a89b6d
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x33c2df45
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x33c2de3d
- (id)getFlickCompositeImageForKey:(id)key direction:(int)direction rect:(CGRect)rect;	// 0x33c2f215
- (id)getPopupBackgroundImageForKey:(id)key direction:(int)direction popupInfo:(id)info rect:(CGRect)rect;	// 0x33c2f09d
- (void)handleDismissFlickView:(id)view;	// 0x33c2fa0d
- (void)handleFlick:(id)flick;	// 0x33c2ec69
- (void)handlePopupView:(id)view;	// 0x33c2f969
- (SEL)handlerForNotification:(id)notification;	// 0x33c295bd
- (BOOL)handwritingPlane;	// 0x33a87c39
- (BOOL)hasCandidateKeys;	// 0x33c2aaa9
- (float)hitBuffer;	// 0x33a780f9
- (BOOL)ignoresShiftState;	// 0x33abaafd
- (id)infoForTouch:(id)touch;	// 0x33a92f15
- (void)installGestureRecognizers;	// 0x33a68789
- (float)interpretPinchSeparationValues;	// 0x33c2ce0d
- (void)interpretTouchesForSplit;	// 0x33c2d461
- (BOOL)isLongPressedKey:(id)key;	// 0x33a93785
// declared property getter: - (BOOL)isRotating;	// 0x33a71391
- (BOOL)isShiftKeyBeingHeld;	// 0x33a72901
- (BOOL)isShiftKeyPlaneChooser;	// 0x33a6a9f1
- (BOOL)keyHasAccentedVariants:(id)variants;	// 0x33c2e1d1
- (id)keyHitTest:(CGPoint)test;	// 0x33a8a08d
- (id)keyHitTestClosestToPoint:(CGPoint)point;	// 0x33adc259
- (id)keyHitTestContainingPoint:(CGPoint)point;	// 0x33a8921d
- (id)keyHitTestContainingPoint:(CGPoint)point;	// 0x33c2a799
- (id)keyHitTestForTouchInfo:(id)touchInfo touchStage:(int)stage;	// 0x33a89c65
- (id)keyHitTestWithoutCharging:(CGPoint)charging;	// 0x33a88f11
- (id)keyWithRepresentedString:(id)representedString;	// 0x33c2e679
// declared property getter: - (id)keyboard;	// 0x33b1a5d5
// declared property getter: - (id)keyboardName;	// 0x33c2e5c5
- (id)keyboardWithName:(id)name;	// 0x33a694ad
- (int)keycodeForKey:(id)key;	// 0x33a8a6c5
// declared property getter: - (id)keyplane;	// 0x33a698f9
- (id)keyplaneForKey:(id)key;	// 0x33b1a62d
// declared property getter: - (id)keyplaneName;	// 0x33a69909
- (id)keyplaneNamed:(id)named;	// 0x33c2e465
- (double)lastTouchUpTimestamp;	// 0x33c29a59
// declared property getter: - (id)localizedInputKey;	// 0x33c2e669
// declared property getter: - (id)localizedInputMode;	// 0x33a6988d
- (void)longPressAction;	// 0x33c2aee9
- (id)mergableKeyplaneSwitchKeyForRendering:(int)rendering;	// 0x33c2a5fd
- (void)nextCandidatesAction;	// 0x33c2ae81
- (id)overlayCharacterImageForKey:(id)key direction:(int)direction rect:(CGRect)rect flickString:(id)string popupInfo:(id)info;	// 0x33c2f295
- (BOOL)performReturnAction;	// 0x33c2db4d
// converted property getter: - (BOOL)pinchDetected;	// 0x33a72f3d
- (BOOL)pinchSplitGestureEnabled;	// 0x33c2d449
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x33a89975
- (id)popupKeyViews;	// 0x33c2ead1
- (void)prepareForSplitTransition;	// 0x33c2cf21
- (void)rebuildSplitTransitionView;	// 0x33c29d41
- (void)rebuildSplitTransitionViewFromKeyplane:(id)keyplane toKeyplane:(id)keyplane2;	// 0x33c29a71
- (void)refreshForDictationAvailablityDidChange;	// 0x33c2a71d
- (void)refreshForRivenPreferences;	// 0x33c29829
- (void)refreshGhostKeyState;	// 0x33a92f29
- (void)removeFromSuperview;	// 0x33c29401
- (CGImageRef)renderedImageWithStateFallbacksForToken:(id)token;	// 0x33c29d55
- (CGImageRef)renderedImageWithToken:(id)token;	// 0x33c29e11
- (CGImageRef)renderedKeyplaneWithName:(id)name split:(BOOL)split;	// 0x33c29f81
- (void)resizeForKeyplaneSize:(CGSize)keyplaneSize;	// 0x33a6b721
- (void)restoreDefaultsForAllKeys;	// 0x33a713f1
- (void)restoreDefaultsForKey:(id)key;	// 0x33a71449
- (id)scriptingInfoWithChildren;	// 0x33b19d29
- (void)sendStringAction:(id)action forKey:(id)key isPopupVariant:(BOOL)variant;	// 0x33c2a8b1
- (void)setAction:(SEL)action forKey:(id)key;	// 0x33c2ab41
// declared property setter: - (void)setActiveKey:(id)key;	// 0x33a8a799
// declared property setter: - (void)setAutoShift:(BOOL)shift;	// 0x33c2e619
- (void)setAutoshift:(BOOL)autoshift;	// 0x33a72c65
- (void)setCompositeImage:(id)image forKey:(id)key;	// 0x33c2f04d
- (void)setCurrencyKeysForCurrentLocaleOnKeyplane:(id)currentLocaleOnKeyplane;	// 0x33a6ecf9
- (void)setDelegate:(id)delegate forKey:(id)key;	// 0x33c2ac01
// declared property setter: - (void)setDidLongPress:(BOOL)longPress;	// 0x33c2e639
- (void)setKeyForTouchInfo:(id)touchInfo key:(id)key;	// 0x33c2ebe1
- (void)setKeyboardAppearance:(int)appearance;	// 0x33a6ac11
- (void)setKeyboardDim:(BOOL)dim;	// 0x33c2fa5d
// declared property setter: - (void)setKeyboardName:(id)name;	// 0x33c2e5d5
- (void)setKeyboardName:(id)name appearance:(int)appearance;	// 0x33a6920d
// declared property setter: - (void)setKeyplaneName:(id)name;	// 0x33a69919
- (void)setLabel:(id)label forKey:(id)key;	// 0x33a71541
// declared property setter: - (void)setLocalizedInputKey:(id)key;	// 0x33a698d5
- (void)setLongPressAction:(SEL)action forKey:(id)key;	// 0x33c2aba1
- (void)setReturnKeyEnabled:(BOOL)enabled withDisplayName:(id)displayName withType:(int)type;	// 0x33a724a1
// declared property setter: - (void)setShift:(BOOL)shift;	// 0x33a72961
// declared property setter: - (void)setShowIntlKey:(BOOL)key;	// 0x33c2e649
- (void)setSplit:(BOOL)split animated:(BOOL)animated;	// 0x33c2d9bd
- (void)setSplitProgress:(float)progress;	// 0x33c2d7e5
- (void)setState:(int)state forKey:(id)key;	// 0x33a6f70d
- (void)setTarget:(id)target forKey:(id)key;	// 0x33c2aae1
- (id)shapesForControlKeyShapes:(id)controlKeyShapes split:(BOOL)split;	// 0x33c2a361
- (id)shapesForControlKeyShapes:(id)controlKeyShapes split:(BOOL)split alternateCJMerge:(BOOL)merge;	// 0x33a6c605
// declared property getter: - (BOOL)shift;	// 0x33c2e5f9
- (BOOL)shouldHitTestKey:(id)key;	// 0x33a720cd
- (BOOL)shouldPreventInputManagerHitTestingForKey:(id)key;	// 0x33a8a679
- (BOOL)shouldRetestKey:(id)key withKeyplane:(id)keyplane;	// 0x33a93029
- (BOOL)shouldShowDictationKey;	// 0x33c2a155
- (BOOL)shouldShowIndicator;	// 0x33c2bf61
// declared property getter: - (BOOL)showDictationKey;	// 0x33c2e659
- (void)showFlickView:(int)view withKey:(id)key flickString:(id)string;	// 0x33c2f011
// declared property getter: - (BOOL)showIntlKey;	// 0x33a6f249
- (void)showKeyboardType:(int)type appearance:(int)appearance orientation:(id)orientation withShift:(BOOL)shift;	// 0x33a68b65
- (void)showPopupVariantsForKey:(id)key;	// 0x33c2b50d
- (void)showPopupView:(int)view withKey:(id)key popupInfo:(id)info force:(BOOL)force;	// 0x33c2fd09
- (void)showSplitTransitionView:(BOOL)view;	// 0x33c2cfe5
- (id)simulateTouch:(CGPoint)touch;	// 0x33c2e491
- (id)simulateTouchForCharacter:(id)character errorVector:(CGPoint)vector shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;	// 0x33b1a8f5
- (id)spaceKey;	// 0x33a6c5a5
- (id)splitNameForKeyplane:(id)keyplane;	// 0x33c29669
- (id)splitNameForKeyplaneName:(id)keyplaneName;	// 0x33c29619
- (int)stateForKey:(id)key;	// 0x33c2a779
- (int)stateForKeyplaneSwitchKey:(id)keyplaneSwitchKey;	// 0x33c2a1e1
- (int)stateForShiftKey:(id)shiftKey;	// 0x33a70035
- (void)swipeDetected:(id)detected;	// 0x33c2e0dd
- (void)touchCancelled:(id)cancelled;	// 0x33c2dc69
- (void)touchDown:(id)down;	// 0x33a89601
- (void)touchDownWithKey:(id)key atPoint:(CGPoint)point;	// 0x33a8a7bd
- (void)touchDragged:(id)dragged;	// 0x33adb141
- (id)touchForKey:(id)key;	// 0x33b258f9
- (void)touchUp:(id)up;	// 0x33a91849
- (void)uninstallGestureRecognizers;	// 0x33c2dfd9
- (unsigned)upActionFlagsForKey:(id)key;	// 0x33a93115
- (void)upActionShift;	// 0x33b25c1d
- (void)updateBackgroundIfNeeded;	// 0x33a6f421
- (void)updateDictationKeyOnNumberPads;	// 0x33c2a385
- (void)updateKeyCentroids;	// 0x33a71aa9
- (void)updateKeyboardForKeyplane:(id)keyplane;	// 0x33a6b49d
- (void)updateKeyplaneViewMask;	// 0x33a74c81
- (BOOL)updateKeysWithDelegates;	// 0x33a718b9
- (void)updateLocalizedKeys:(BOOL)keys;	// 0x33a6cd51
- (void)updateLocalizedKeysOnKeyplane:(id)keyplane;	// 0x33a6cf19
- (void)updateMoreAndInternationalKeys;	// 0x33a6c0f1
- (void)updateShiftKeyState;	// 0x33a72a49
- (void)updateTransitionWithFlags:(int)flags;	// 0x33a7271d
- (BOOL)usesAutoShift;	// 0x33a7292d
- (int)visualStyleForKeyboardIfSplit:(BOOL)keyboardIfSplit;	// 0x33c299e9
- (void)willRotate;	// 0x33c2e375
@end
