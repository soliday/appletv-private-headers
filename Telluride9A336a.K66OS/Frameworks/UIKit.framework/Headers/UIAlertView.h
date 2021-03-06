/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, NSString, UILabel, UIWindow, UIToolbar;
@protocol UIAlertViewDelegate;

@interface UIAlertView : UIView {
@private
	id<UIAlertViewDelegate> _delegate;	// 48 = 0x30
	UILabel *_titleLabel;	// 52 = 0x34
	UILabel *_subtitleLabel;	// 56 = 0x38
	UILabel *_bodyTextLabel;	// 60 = 0x3c
	UILabel *_taglineTextLabel;	// 64 = 0x40
	float _startY;	// 68 = 0x44
	CGPoint _center;	// 72 = 0x48
	id _context;	// 80 = 0x50
	int _cancelButton;	// 84 = 0x54
	int _defaultButton;	// 88 = 0x58
	int _firstOtherButton;	// 92 = 0x5c
	UIToolbar *_toolbar;	// 96 = 0x60
	UIWindow *_originalWindow;	// 100 = 0x64
	UIWindow *_dimWindow;	// 104 = 0x68
	int _suspendTag;	// 108 = 0x6c
	int _dismissButtonIndex;	// 112 = 0x70
	float _bodyTextHeight;	// 116 = 0x74
	NSMutableArray *_buttons;	// 120 = 0x78
	NSMutableArray *_textFields;	// 124 = 0x7c
	UIView *_keyboard;	// 128 = 0x80
	UIView *_table;	// 132 = 0x84
	UIView *_dimView;	// 136 = 0x88
	UIView *_backgroundImageView;	// 140 = 0x8c
	struct {
		unsigned numberOfRows : 7;
		unsigned delegateAlertSheetButtonClicked : 1;
		unsigned delegateDidPresentAlertSheet : 1;
		unsigned delegateDidDismissAlertSheet : 1;
		unsigned hideButtonBar : 1;
		unsigned alertStyle : 3;
		unsigned dontDimBackground : 1;
		unsigned dismissSuspended : 1;
		unsigned dontBlockInteraction : 1;
		unsigned sheetWasPoppedUp : 1;
		unsigned animating : 1;
		unsigned hideWhenDoneAnimating : 1;
		unsigned layoutWhenDoneAnimating : 1;
		unsigned titleMaxLineCount : 2;
		unsigned bodyTextMaxLineCount : 3;
		unsigned runsModal : 1;
		unsigned runningModal : 1;
		unsigned addedTextView : 1;
		unsigned addedTableShadows : 1;
		unsigned showOverSBAlerts : 1;
		unsigned showMinTableContent : 1;
		unsigned bodyTextTruncated : 1;
		unsigned orientation : 3;
		unsigned groupsTextFields : 1;
		unsigned includesCancel : 1;
		unsigned useUndoStyle : 1;
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateClickedButtonAtIndex2 : 1;
		unsigned delegateCancel : 1;
		unsigned delegateCancel2 : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateWillPresent2 : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateDidPresent2 : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateWillDismiss2 : 1;
		unsigned delegateDidDismiss : 1;
		unsigned delegateDidDismiss2 : 1;
		unsigned delegateShouldEnableFirstOtherButton : 1;
		unsigned forceHorizontalButtonsLayout : 1;
		unsigned suppressKeyboardOnPopup : 1;
		unsigned keyboardShowing : 1;
		unsigned dontCallDismissDelegate : 1;
		unsigned useAutomaticKB : 1;
		unsigned manualKeyboardVisible : 1;
		unsigned rotatingManualKeybaord : 1;
		unsigned shouldHandleFirstKeyUpEvent : 1;
		unsigned forceKeyboardUse : 1;
		unsigned cancelWhenDoneAnimating : 1;
		unsigned alertViewStyle : 3;
		unsigned isSBAlert : 1;
		unsigned isBeingDismissed : 1;
	} _modalViewFlags;	// 144 = 0x90
}
@property(assign) int alertSheetStyle;	// G=0x353fe525; S=0x353fe551; converted property
@property(assign, nonatomic) int alertViewStyle;	// G=0x353ff1bd; S=0x353ff165; 
@property(assign) BOOL blocksInteraction;	// G=0x353fe6f1; S=0x353fe6c9; converted property
@property(retain) id bodyText;	// G=0x3520e3b1; S=0x351900a1; converted property
@property(readonly, retain) UILabel *bodyTextLabel;	// G=0x353fc88d; converted property
@property(readonly, retain) NSMutableArray *buttons;	// G=0x35190a5d; converted property
@property(assign, nonatomic) int cancelButtonIndex;	// G=0x35214685; S=0x35190a6d; 
@property(retain) id context;	// G=0x35214695; S=0x3520de09; converted property
@property(retain) id defaultButton;	// G=0x353fb319; S=0x353fb309; converted property
@property(assign) int defaultButtonIndex;	// G=0x353ff155; S=0x353ff139; converted property
@property(assign, nonatomic) id delegate;	// G=0x353ff0a1; S=0x35190131; 
@property(retain) id destructiveButton;	// G=0x353fb399; S=0x353fb359; converted property
@property(assign) BOOL dimsBackground;	// G=0x353fe6a5; S=0x353fe67d; converted property
@property(readonly, assign, nonatomic) int firstOtherButtonIndex;	// G=0x3520dddd; 
@property(assign) BOOL forceHorizontalButtonsLayout;	// G=0x353fe539; S=0x3518ffbd; converted property
@property(assign) BOOL groupsTextFields;	// G=0x353fa219; S=0x353fa231; converted property
@property(readonly, retain) UIView *keyboard;	// G=0x353fb1e1; converted property
@property(copy, nonatomic) NSString *message;	// G=0x3520e3a1; S=0x35190091; 
@property(readonly, assign, nonatomic) int numberOfButtons;	// G=0x353ff0e9; 
@property(assign) int numberOfRows;	// G=0x353fe511; S=0x3518ffa5; converted property
@property(assign) BOOL runsModal;	// G=0x353fe721; S=0x353fe709; converted property
@property(assign) BOOL showsOverSpringBoardAlerts;	// G=0x353fbb29; S=0x353fbb11; converted property
@property(retain) id subtitle;	// G=0x353fa7b1; S=0x353fa731; converted property
@property(assign) int suspendTag;	// G=0x353fe6b9; S=0x352614d5; converted property
@property(readonly, retain) UIView *table;	// G=0x353fb941; converted property
@property(assign) BOOL tableShouldShowMinimumContent;	// G=0x353fb5c9; S=0x353fb5ad; converted property
@property(readonly, retain) UILabel *taglineTextLabel;	// G=0x353fc89d; converted property
@property(copy, nonatomic) NSString *title;	// G=0x35190065; S=0x3518ffd5; 
@property(readonly, retain) UILabel *titleLabel;	// G=0x353fc87d; converted property
@property(assign) int titleMaxLineCount;	// G=0x353fa879; S=0x353fa7d1; converted property
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x353ff109; 
+ (id)_alertWindow;	// 0x350cd5e5
+ (id)_popupAlertBackground:(BOOL)background;	// 0x3521295d
+ (void)applyTransformToAllAlerts:(CGAffineTransform)allAlerts;	// 0x353fa035
+ (CGSize)minimumSize;	// 0x353f9fe9
- (id)initWithFrame:(CGRect)frame;	// 0x3518fe11
- (id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x353fa075
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate cancelButtonTitle:(id)title4 otherButtonTitles:(id)titles;	// 0x3518fcad
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate defaultButton:(id)button cancelButton:(id)button5 otherButtons:(id)buttons;	// 0x353fef79
- (id)_addButtonWithTitle:(id)title;	// 0x353fb329
- (id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;	// 0x351903f5
- (id)_addButtonWithTitleText:(id)titleText;	// 0x353fb451
- (void)_addSubview:(id)subview positioned:(int)positioned relativeTo:(id)to;	// 0x351909f1
- (void)_addTextEntryFieldsWithStyle:(int)style;	// 0x353ff1dd
- (id)_addTextFieldWithValue:(id)value label:(id)label;	// 0x353fa955
- (void)_adjustLabelFontSizes;	// 0x353fc8dd
- (int)_alertOrientation;	// 0x353fc8c5
- (void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;	// 0x353fe1d9
- (void)_alertSheetTextFieldDidChange:(id)_alertSheetTextField;	// 0x3520f20d
- (void)_alertSheetTextFieldDidEndEditing:(id)_alertSheetTextField;	// 0x353fadd1
- (void)_alertSheetTextFieldDidStartEditing:(id)_alertSheetTextField;	// 0x353fae01
- (void)_alertSheetTextFieldReturn:(id)aReturn;	// 0x353faed1
- (void)_appSuspended:(id)suspended;	// 0x353fdfc1
- (float)_bottomVerticalInset;	// 0x35212bd9
- (void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;	// 0x35213379
- (void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;	// 0x35213285
- (id)_buttonAtIndex:(int)index;	// 0x353fb471
- (void)_buttonClicked:(id)clicked;	// 0x352137e1
- (float)_buttonHeight;	// 0x352129d1
- (BOOL)_canShowAlerts;	// 0x3520f1e9
- (void)_cancelAnimated:(BOOL)animated;	// 0x353fc7f9
- (void)_cleanupAfterPopupAnimation;	// 0x35213389
- (void)_cleanupKBWatcher;	// 0x353fb0fd
- (void)_createBodyTextLabelIfNeeded;	// 0x3520dba1
- (void)_createSubtitleLabelIfNeeded;	// 0x353fa2c5
- (void)_createTaglineTextLabelIfNeeded;	// 0x353fa4a1
- (void)_createTitleLabelIfNeeded;	// 0x3520da89
- (int)_currentOrientation;	// 0x3520f7c1
- (id)_defaultButton;	// 0x353fb415
- (id)_destructiveButton;	// 0x353fb4d1
- (id)_dimView;	// 0x353fd1cd
- (BOOL)_dimsBackground;	// 0x353fc76d
- (id)_firstOtherButton;	// 0x353fb50d
- (void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;	// 0x3521316d
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x353fedb1
- (BOOL)_isAnimating;	// 0x353fc6c1
- (BOOL)_isSBAlert;	// 0x353fef51
- (void)_jiggleStage1AnimationDidStop:(id)_jiggleStage1Animation finished:(id)finished;	// 0x353fbfd9
- (void)_jiggleStage2AnimationDidStop:(id)_jiggleStage2Animation finished:(id)finished;	// 0x353fc115
- (void)_jiggleStage3AnimationDidStop:(id)_jiggleStage3Animation finished:(id)finished;	// 0x353fc271
- (void)_jiggleStage4AnimationDidStop:(id)_jiggleStage4Animation finished:(id)finished;	// 0x353fc3cd
- (void)_jiggleStage5AnimationDidStop:(id)_jiggleStage5Animation finished:(id)finished;	// 0x353fc529
- (void)_jiggleStage6AnimationDidStop:(id)_jiggleStage6Animation finished:(id)finished;	// 0x353fc685
- (void)_keyboardDidHide:(id)_keyboard;	// 0x353ff981
- (void)_keyboardHiddingAnimationDidStop:(id)_keyboardHiddingAnimation finished:(id)finished;	// 0x353fbb3d
- (void)_keyboardWillHide:(id)_keyboard;	// 0x353ff73d
- (void)_keyboardWillShow:(id)_keyboard;	// 0x353ff3f5
- (void)_layoutIfNeeded;	// 0x3520f665
- (void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;	// 0x3520f841
- (BOOL)_manualKeyboardIsVisible;	// 0x353fba4d
- (float)_maxHeight;	// 0x35212c05
- (BOOL)_needsKeyboard;	// 0x3520f621
- (void)_nukeOldTextFields;	// 0x353fee35
- (void)_performPopoutAnimationAnimated:(BOOL)animated;	// 0x35213c89
- (void)_performPopup:(BOOL)popup;	// 0x353fbfc5
- (void)_performPopup:(BOOL)popup animationType:(int)type;	// 0x3520e3dd
- (void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;	// 0x35214185
- (void)_prepareForDisplay;	// 0x353feba9
- (void)_prepareToBeReplaced;	// 0x353fed99
- (void)_presentSheetFromView:(id)view above:(BOOL)above;	// 0x353fcab9
- (void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;	// 0x353fd2d9
- (void)_removeAlertWindowOrShowAnOldAlert;	// 0x352144e5
- (void)_repopup;	// 0x353fc721
- (void)_repopupNoAnimation;	// 0x353fc6d5
- (void)_rotatingAnimationDidStop:(id)_rotatingAnimation;	// 0x353fc86d
- (void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;	// 0x353fa249
- (void)_setDefaultButton:(id)button;	// 0x353fb3d5
- (void)_setDestructiveButton:(id)button;	// 0x353fb491
- (void)_setFirstOtherButtonIndex:(int)index;	// 0x3520dded
- (void)_setTextFieldsHidden:(BOOL)hidden;	// 0x353fabad
- (void)_setupKBWatcher;	// 0x353fafa9
- (void)_setupTitleStyle;	// 0x35212699
- (BOOL)_shouldOrderInAutomaticKeyboard;	// 0x353fba65
- (void)_showKeyboard:(BOOL)keyboard animated:(BOOL)animated;	// 0x353fbbb9
- (void)_showManualKBIfNecessary;	// 0x353fbb69
- (void)_slideSheetOut:(BOOL)anOut;	// 0x353fdc7d
- (void)_temporarilyHideAnimated:(BOOL)animated;	// 0x353fc785
- (id)_textFieldAtIndex:(int)index;	// 0x353fad15
- (float)_titleHorizontalInset;	// 0x35212a8d
- (float)_titleVerticalBottomInset;	// 0x35212b49
- (float)_titleVerticalTopInset;	// 0x35212ab9
- (void)_truncateViewHeight:(id)height toFitInFrame:(CGRect)frame withMinimumHeight:(float)minimumHeight;	// 0x353fe8dd
- (void)_updateFrameForDisplay;	// 0x35212d6d
- (void)_updateKeyboardStateForPreviousResponder:(id)previousResponder;	// 0x353fae89
- (void)_useUndoStyle:(BOOL)style;	// 0x353ff3dd
- (void)_willRotateKeyboard;	// 0x353ff9e1
- (int)addButtonWithTitle:(id)title;	// 0x351903c1
- (id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;	// 0x353fb56d
- (id)addButtonWithTitle:(id)title label:(id)label;	// 0x353fb549
- (id)addTextFieldWithValue:(id)value label:(id)label;	// 0x353fef69
// converted property getter: - (int)alertSheetStyle;	// 0x353fe525
// declared property getter: - (int)alertViewStyle;	// 0x353ff1bd
- (CGSize)backgroundSize;	// 0x353fdf89
- (BOOL)becomeFirstResponder;	// 0x3521373d
// converted property getter: - (BOOL)blocksInteraction;	// 0x353fe6f1
- (int)bodyMaxLineCount;	// 0x353fa941
// converted property getter: - (id)bodyText;	// 0x3520e3b1
// converted property getter: - (id)bodyTextLabel;	// 0x353fc88d
- (id)buttonAtIndex:(int)index;	// 0x353fb339
- (int)buttonCount;	// 0x353fb58d
- (id)buttonTitleAtIndex:(int)index;	// 0x353ff0b1
// converted property getter: - (id)buttons;	// 0x35190a5d
- (BOOL)canBecomeFirstResponder;	// 0x3521377d
// declared property getter: - (int)cancelButtonIndex;	// 0x35214685
// converted property getter: - (id)context;	// 0x35214695
- (void)dealloc;	// 0x352146a5
// converted property getter: - (id)defaultButton;	// 0x353fb319
// converted property getter: - (int)defaultButtonIndex;	// 0x353ff155
// declared property getter: - (id)delegate;	// 0x353ff0a1
// converted property getter: - (id)destructiveButton;	// 0x353fb399
// converted property getter: - (BOOL)dimsBackground;	// 0x353fe6a5
- (void)dismiss;	// 0x353fdf41
- (void)dismissAnimated:(BOOL)animated;	// 0x353fdf55
- (void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x35213959
// declared property getter: - (int)firstOtherButtonIndex;	// 0x3520dddd
// converted property getter: - (BOOL)forceHorizontalButtonsLayout;	// 0x353fe539
// converted property getter: - (BOOL)groupsTextFields;	// 0x353fa219
- (BOOL)isBodyTextTruncated;	// 0x353fc8ad
// declared property getter: - (BOOL)isVisible;	// 0x353ff109
// converted property getter: - (id)keyboard;	// 0x353fb1e1
- (void)layout;	// 0x3520fb99
- (void)layoutAnimated:(BOOL)animated;	// 0x3520f8a5
// declared property getter: - (id)message;	// 0x3520e3a1
// declared property getter: - (int)numberOfButtons;	// 0x353ff0e9
- (int)numberOfLinesInTitle;	// 0x353fe77d
// converted property getter: - (int)numberOfRows;	// 0x353fe511
- (void)popupAlertAnimated:(BOOL)animated;	// 0x353fcaa5
- (void)popupAlertAnimated:(BOOL)animated animationType:(int)type;	// 0x3520de75
- (void)popupAlertAnimated:(BOOL)animated animationType:(int)type atOffset:(float)offset;	// 0x3520de9d
- (void)popupAlertAnimated:(BOOL)animated atOffset:(float)offset;	// 0x353fca85
- (void)presentSheetFromAboveView:(id)aboveView;	// 0x353fcd99
- (void)presentSheetFromBehindView:(id)behindView;	// 0x353fcd85
- (void)presentSheetFromButtonBar:(id)buttonBar;	// 0x353feb15
- (void)presentSheetInView:(id)view;	// 0x353fcdad
- (void)presentSheetToAboveView:(id)aboveView;	// 0x353fcf25
- (void)replaceAlert:(id)alert;	// 0x353fecd5
- (BOOL)requiresPortraitOrientation;	// 0x3520f83d
- (BOOL)resignFirstResponder;	// 0x35214141
// converted property getter: - (BOOL)runsModal;	// 0x353fe721
// converted property setter: - (void)setAlertSheetStyle:(int)style;	// 0x353fe551
// declared property setter: - (void)setAlertViewStyle:(int)style;	// 0x353ff165
// converted property setter: - (void)setBlocksInteraction:(BOOL)interaction;	// 0x353fe6c9
// converted property setter: - (void)setBodyText:(id)text;	// 0x351900a1
- (void)setBodyTextMaxLineCount:(int)count;	// 0x353fa88d
// declared property setter: - (void)setCancelButtonIndex:(int)index;	// 0x35190a6d
// converted property setter: - (void)setContext:(id)context;	// 0x3520de09
// converted property setter: - (void)setDefaultButton:(id)button;	// 0x353fb309
// converted property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x353ff139
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35190131
// converted property setter: - (void)setDestructiveButton:(id)button;	// 0x353fb359
- (void)setDimView:(id)view;	// 0x353fd18d
// converted property setter: - (void)setDimsBackground:(BOOL)background;	// 0x353fe67d
// converted property setter: - (void)setForceHorizontalButtonsLayout:(BOOL)layout;	// 0x3518ffbd
// converted property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x353fa231
- (void)setKeyboardShowsOnPopup:(BOOL)popup;	// 0x353fada9
// declared property setter: - (void)setMessage:(id)message;	// 0x35190091
// converted property setter: - (void)setNumberOfRows:(int)rows;	// 0x3518ffa5
// converted property setter: - (void)setRunsModal:(BOOL)modal;	// 0x353fe709
// converted property setter: - (void)setShowsOverSpringBoardAlerts:(BOOL)alerts;	// 0x353fbb11
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x353fa731
// converted property setter: - (void)setSuspendTag:(int)tag;	// 0x352614d5
// converted property setter: - (void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;	// 0x353fb5ad
- (void)setTaglineText:(id)text;	// 0x353fa6b1
// declared property setter: - (void)setTitle:(id)title;	// 0x3518ffd5
// converted property setter: - (void)setTitleMaxLineCount:(int)count;	// 0x353fa7d1
- (void)show;	// 0x3520de4d
- (void)showWithAnimationType:(int)animationType;	// 0x3520de61
// converted property getter: - (BOOL)showsOverSpringBoardAlerts;	// 0x353fbb29
// converted property getter: - (id)subtitle;	// 0x353fa7b1
// converted property getter: - (int)suspendTag;	// 0x353fe6b9
// converted property getter: - (id)table;	// 0x353fb941
// converted property getter: - (BOOL)tableShouldShowMinimumContent;	// 0x353fb5c9
- (id)tableView;	// 0x353fb5dd
// converted property getter: - (id)taglineTextLabel;	// 0x353fc89d
- (id)textField;	// 0x353fad61
- (id)textFieldAtIndex:(int)index;	// 0x353ff365
- (int)textFieldCount;	// 0x353fad39
// declared property getter: - (id)title;	// 0x35190065
// converted property getter: - (id)titleLabel;	// 0x353fc87d
// converted property getter: - (int)titleMaxLineCount;	// 0x353fa879
- (CGRect)titleRect;	// 0x353fe735
@end

