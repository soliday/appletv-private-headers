/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextFieldDelegate.h"
#import "UIView.h"

@class NSString, NSMutableArray, UILabel, UIWindow, UIToolbar;
@protocol UIModalViewDelegate;

@interface UIModalView : UIView <UITextFieldDelegate> {
@private
	id<UIModalViewDelegate> _delegate;	// 48 = 0x30
	UILabel *_titleLabel;	// 52 = 0x34
	UILabel *_subtitleLabel;	// 56 = 0x38
	UILabel *_bodyTextLabel;	// 60 = 0x3c
	UILabel *_taglineTextLabel;	// 64 = 0x40
	float _startX;	// 68 = 0x44
	float _startY;	// 72 = 0x48
	id _context;	// 76 = 0x4c
	int _cancelButton;	// 80 = 0x50
	int _defaultButton;	// 84 = 0x54
	int _firstOtherButton;	// 88 = 0x58
	UIToolbar *_toolbar;	// 92 = 0x5c
	UIWindow *_originalWindow;	// 96 = 0x60
	UIWindow *_dimWindow;	// 100 = 0x64
	int _suspendTag;	// 104 = 0x68
	int _dismissButtonIndex;	// 108 = 0x6c
	float _bodyTextHeight;	// 112 = 0x70
	NSMutableArray *_buttons;	// 116 = 0x74
	NSMutableArray *_textFields;	// 120 = 0x78
	UIView *_keyboard;	// 124 = 0x7c
	UIView *_table;	// 128 = 0x80
	UIView *_dimView;	// 132 = 0x84
	UIView *_sheetView;	// 136 = 0x88
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
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateCancel : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateDidDismiss : 1;
		unsigned popupFromPoint : 1;
		unsigned extra : 20;
		unsigned dontCallDismissDelegate : 1;
		unsigned useAutomaticKB : 1;
		unsigned shouldHandleFirstKeyUpEvent : 1;
		unsigned cancelWhenDoneAnimating : 1;
	} _modalViewFlags;	// 140 = 0x8c
}
@property(assign) int alertSheetStyle;	// G=0x331f7625; S=0x331f7639; converted property
@property(assign) BOOL blocksInteraction;	// G=0x331f77f1; S=0x331f77c9; converted property
@property(retain) id bodyText;	// G=0x331f1ee5; S=0x331f1d35; converted property
@property(readonly, retain) NSMutableArray *buttons;	// G=0x331f1341; converted property
@property(assign, nonatomic) int cancelButtonIndex;	// G=0x331fb2b5; S=0x331fb299; 
@property(retain) id context;	// G=0x331f2c39; S=0x331f2bf5; converted property
@property(retain) id defaultButton;	// G=0x331f2705; S=0x331f26c5; converted property
@property(assign) int defaultButtonIndex;	// G=0x331fb289; S=0x331fb26d; converted property
@property(assign, nonatomic) id<UIModalViewDelegate> delegate;	// G=0x331fb0c5; S=0x331faf31; 
@property(retain) id destructiveButton;	// G=0x331f27fd; S=0x331f27bd; converted property
@property(assign) BOOL dimsBackground;	// G=0x331f7795; S=0x331f776d; converted property
@property(assign, nonatomic) BOOL groupsTextFields;	// G=0x331f1215; S=0x331f122d; 
@property(readonly, retain) UIView *keyboard;	// G=0x331f259d; converted property
@property(copy, nonatomic) NSString *message;	// G=0x331fb1a1; S=0x331fb191; 
@property(readonly, assign, nonatomic) int numberOfButtons;	// G=0x331fb21d; 
@property(assign) int numberOfRows;	// G=0x331f7611; S=0x331f75f9; converted property
@property(assign) BOOL runsModal;	// G=0x331f7821; S=0x331f7809; converted property
@property(assign) BOOL showsOverSpringBoardAlerts;	// G=0x331f3919; S=0x331f3901; converted property
@property(retain) id subtitle;	// G=0x331f1ec5; S=0x331f1e45; converted property
@property(assign) int suspendTag;	// G=0x331f77b9; S=0x331f77a9; converted property
@property(readonly, retain) UIView *table;	// G=0x331f3729; converted property
@property(assign) BOOL tableShouldShowMinimumContent;	// G=0x331f361d; S=0x331f3601; converted property
@property(copy, nonatomic) NSString *title;	// G=0x331fb165; S=0x331fb0d5; 
@property(assign) int titleMaxLineCount;	// G=0x331f1fb9; S=0x331f1f11; converted property
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x331fb23d; 
+ (id)_popupAlertBackground;	// 0x33015615
+ (BOOL)atLeastOneAlertVisible;	// 0x331f7835
+ (CGSize)minimumSize;	// 0x330155c9
+ (void)noteOrientationChangingTo:(int)to;	// 0x331f78d5
+ (id)topMostAlert;	// 0x331f789d
+ (id)visibleAlert;	// 0x331f78b9
- (id)initWithFrame:(CGRect)frame;	// 0x331fa9e1
- (id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x331f10b5
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate defaultButton:(id)button cancelButton:(id)button5 otherButtons:(id)buttons;	// 0x331faac5
- (id)_addButtonWithTitle:(id)title;	// 0x331f2b75
- (id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;	// 0x331f2839
- (id)_addButtonWithTitleText:(id)titleText;	// 0x331f2bb5
- (void)_adjustLabelFontSizes;	// 0x331f5659
- (void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;	// 0x331f730d
- (void)_alertSheetTextFieldReturn:(id)aReturn;	// 0x331f24c5
- (void)_appSuspended:(id)suspended;	// 0x331f7149
- (float)_bottomVerticalInset;	// 0x331f6f41
- (void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;	// 0x331f44f5
- (void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;	// 0x331f4401
- (void)_buttonClicked:(id)clicked;	// 0x331f2c49
- (float)_buttonHeight;	// 0x331f7a7d
- (BOOL)_canShowAlerts;	// 0x331f4c89
- (void)_cancelAnimated:(BOOL)animated;	// 0x331f4ead
- (void)_cleanupAfterPopupAnimation;	// 0x331f3231
- (void)_createBodyTextLabelIfNeeded;	// 0x331f1645
- (void)_createSubtitleLabelIfNeeded;	// 0x331f1469
- (void)_createTaglineTextLabelIfNeeded;	// 0x331f1861
- (void)_createTitleLabelIfNeeded;	// 0x331f1351
- (int)_currentOrientation;	// 0x331f1249
- (id)_defaultButton;	// 0x331f2781
- (id)_dimView;	// 0x331f60d9
- (BOOL)_dimsBackground;	// 0x331f4c71
- (void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;	// 0x331f42e9
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x331fa959
- (void)_hideAnimated:(BOOL)animated;	// 0x331f4e9d
- (id)_initWithTelephoneNumber:(id)telephoneNumber buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x331fac09
- (BOOL)_isAnimating;	// 0x331f4505
- (BOOL)_isSBAlert;	// 0x331fb601
- (BOOL)_isSBAlert;	// 0x331f2d19
- (void)_keyboardWillHide:(id)_keyboard;	// 0x331f3005
- (void)_keyboardWillShow:(id)_keyboard;	// 0x331f2d1d
- (void)_layoutIfNeeded;	// 0x331f550d
- (void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;	// 0x331f54a9
- (BOOL)_manualKeyboardIsVisible;	// 0x331f3851
- (float)_maxHeight;	// 0x331f7939
- (BOOL)_needsKeyboard;	// 0x331f3821
- (void)_performPopoutAnimationAnimated:(BOOL)animated;	// 0x331f4855
- (void)_performPopup:(BOOL)popup;	// 0x331f392d
- (void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;	// 0x331f4519
- (void)_prepareForDisplay;	// 0x331fa84d
- (void)_prepareToBeReplaced;	// 0x331fa941
- (void)_presentSheetFromView:(id)view above:(BOOL)above;	// 0x331f59c5
- (void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;	// 0x331f61e5
- (void)_removeAlertWindowOrShowAnOldAlert;	// 0x331f4cad
- (void)_repopup;	// 0x331f4c25
- (void)_repopupNoAnimation;	// 0x331f4bc1
- (void)_rotatingAnimationDidStop:(id)_rotatingAnimation;	// 0x331f51c9
- (void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;	// 0x331f12c5
- (void)_setDefaultButton:(id)button;	// 0x331f2741
- (void)_setFirstOtherButtonIndex:(int)index;	// 0x331fb2c5
- (void)_setTextFieldsHidden:(BOOL)hidden;	// 0x331f22c9
- (void)_setupInitialFrame;	// 0x331f4f15
- (void)_setupTitleStyle;	// 0x331f1a71
- (BOOL)_shouldOrderInAutomaticKeyboard;	// 0x331f3855
- (void)_slideSheetOut:(BOOL)anOut;	// 0x331f6b79
- (void)_temporarilyHideAnimated:(BOOL)animated;	// 0x331f4e35
- (float)_titleHorizontalInset;	// 0x331f6f15
- (float)_titleVerticalBottomInset;	// 0x331f6ee9
- (float)_titleVerticalTopInset;	// 0x331f6ebd
- (void)_truncateViewHeight:(id)height toFitInFrame:(CGRect)frame withMinimumHeight:(float)minimumHeight;	// 0x331f7c85
- (int)addButtonWithTitle:(id)title;	// 0x331fb1b1
- (id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;	// 0x331f2b95
- (id)addButtonWithTitle:(id)title label:(id)label;	// 0x331f2b51
- (id)addTextFieldWithValue:(id)value label:(id)label;	// 0x331f2095
// converted property getter: - (int)alertSheetStyle;	// 0x331f7625
- (CGSize)backgroundSize;	// 0x331f6e85
// converted property getter: - (BOOL)blocksInteraction;	// 0x331f77f1
- (int)bodyMaxLineCount;	// 0x331f2081
// converted property getter: - (id)bodyText;	// 0x331f1ee5
- (id)bodyTextView;	// 0x331fa82d
- (int)buttonCount;	// 0x331f2bd5
- (id)buttonTitleAtIndex:(int)index;	// 0x331fb1e5
// converted property getter: - (id)buttons;	// 0x331f1341
- (BOOL)canBecomeFirstResponder;	// 0x331fa9dd
// declared property getter: - (int)cancelButtonIndex;	// 0x331fb2b5
// converted property getter: - (id)context;	// 0x331f2c39
- (void)dealloc;	// 0x331fac31
// converted property getter: - (id)defaultButton;	// 0x331f2705
// converted property getter: - (int)defaultButtonIndex;	// 0x331fb289
// declared property getter: - (id)delegate;	// 0x331fb0c5
// converted property getter: - (id)destructiveButton;	// 0x331f27fd
// converted property getter: - (BOOL)dimsBackground;	// 0x331f7795
- (void)dismiss;	// 0x331f6e3d
- (void)dismissAnimated:(BOOL)animated;	// 0x331f6e51
- (void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x331fb2f1
- (void)drawRect:(CGRect)rect;	// 0x331f6f71
- (int)firstOtherButtonIndex;	// 0x331fb2e1
// declared property getter: - (BOOL)groupsTextFields;	// 0x331f1215
- (BOOL)isBodyTextTruncated;	// 0x331f5491
// declared property getter: - (BOOL)isVisible;	// 0x331fb23d
// converted property getter: - (id)keyboard;	// 0x331f259d
- (void)layout;	// 0x331f7d6d
- (void)layoutAnimated:(BOOL)animated;	// 0x331f51d9
// declared property getter: - (id)message;	// 0x331fb1a1
// declared property getter: - (int)numberOfButtons;	// 0x331fb21d
- (int)numberOfLinesInTitle;	// 0x331f7b25
// converted property getter: - (int)numberOfRows;	// 0x331f7611
- (void)popupAlertAnimated:(BOOL)animated;	// 0x331f59ad
- (void)popupAlertAnimated:(BOOL)animated atOffset:(float)offset;	// 0x331f57a1
- (void)popupAlertAnimated:(BOOL)animated fromBarButtonItem:(id)barButtonItem;	// 0x331f5961
- (void)presentSheetFromAboveView:(id)aboveView;	// 0x331f5ca5
- (void)presentSheetFromBehindView:(id)behindView;	// 0x331f5c91
- (void)presentSheetFromButtonBar:(id)buttonBar;	// 0x331fa799
- (void)presentSheetInView:(id)view;	// 0x331f5cb9
- (void)presentSheetToAboveView:(id)aboveView;	// 0x331f5e31
- (void)replaceAlert:(id)alert;	// 0x331fa87d
- (BOOL)requiresPortraitOrientation;	// 0x331f1245
// converted property getter: - (BOOL)runsModal;	// 0x331f7821
// converted property setter: - (void)setAlertSheetStyle:(int)style;	// 0x331f7639
// converted property setter: - (void)setBlocksInteraction:(BOOL)interaction;	// 0x331f77c9
// converted property setter: - (void)setBodyText:(id)text;	// 0x331f1d35
- (void)setBodyTextMaxLineCount:(int)count;	// 0x331f1fcd
// declared property setter: - (void)setCancelButtonIndex:(int)index;	// 0x331fb299
// converted property setter: - (void)setContext:(id)context;	// 0x331f2bf5
// converted property setter: - (void)setDefaultButton:(id)button;	// 0x331f26c5
// converted property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x331fb26d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x331faf31
// converted property setter: - (void)setDestructiveButton:(id)button;	// 0x331f27bd
- (void)setDimView:(id)view;	// 0x331f6099
// converted property setter: - (void)setDimsBackground:(BOOL)background;	// 0x331f776d
// declared property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x331f122d
// declared property setter: - (void)setMessage:(id)message;	// 0x331fb191
// converted property setter: - (void)setNumberOfRows:(int)rows;	// 0x331f75f9
// converted property setter: - (void)setRunsModal:(BOOL)modal;	// 0x331f7809
// converted property setter: - (void)setShowsOverSpringBoardAlerts:(BOOL)alerts;	// 0x331f3901
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x331f1e45
// converted property setter: - (void)setSuspendTag:(int)tag;	// 0x331f77a9
// converted property setter: - (void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;	// 0x331f3601
- (void)setTaglineText:(id)text;	// 0x331f1dc5
// declared property setter: - (void)setTitle:(id)title;	// 0x331fb0d5
// converted property setter: - (void)setTitleMaxLineCount:(int)count;	// 0x331f1f11
// converted property getter: - (BOOL)showsOverSpringBoardAlerts;	// 0x331f3919
// converted property getter: - (id)subtitle;	// 0x331f1ec5
// converted property getter: - (int)suspendTag;	// 0x331f77b9
// converted property getter: - (id)table;	// 0x331f3729
// converted property getter: - (BOOL)tableShouldShowMinimumContent;	// 0x331f361d
- (id)tableView;	// 0x331f3631
- (id)taglineTextView;	// 0x331fa83d
- (id)textField;	// 0x331f247d
- (id)textFieldAtIndex:(int)index;	// 0x331f2431
- (int)textFieldCount;	// 0x331f2455
// declared property getter: - (id)title;	// 0x331fb165
// converted property getter: - (int)titleMaxLineCount;	// 0x331f1fb9
- (CGRect)titleRect;	// 0x331f78f1
- (void)userDidCancelPopoverView:(id)user;	// 0x331f59a9
@end

