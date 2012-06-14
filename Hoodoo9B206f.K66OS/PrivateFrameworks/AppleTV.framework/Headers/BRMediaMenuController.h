/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMenuController.h"

@class BRTextControl, BRControl, BRWaitSpinnerControl, NSTimer, BRFocusableImageControl, NSString;

@interface BRMediaMenuController : BRMenuController {
@private
	BRControl *_previewControl;	// 128 = 0x80
	BRControl *_previewContainer;	// 132 = 0x84
	NSString *_previewControlItemHash;	// 136 = 0x88
	BRFocusableImageControl *_actionControl;	// 140 = 0x8c
	BRWaitSpinnerControl *_spinner;	// 144 = 0x90
	float _controlDelay;	// 148 = 0x94
	NSTimer *_controlDelayTimer;	// 152 = 0x98
	BRTextControl *_noContentMessageControl;	// 156 = 0x9c
}
@property(retain) id noContentMessage;	// G=0x3664edcd; S=0x3664ecf1; converted property
@property(assign) BOOL showSpinner;	// G=0x3664e641; S=0x3664e58d; converted property
- (id)init;	// 0x3664e31d
- (void)_cleanupControlDelayTimer;	// 0x3664f951
- (void)_controlDelayTimerHandler:(id)handler;	// 0x3664f985
- (void)_playstateChanged;	// 0x3664f9a5
- (void)_scrollSelectionFinalized:(id)finalized;	// 0x3664f8a5
- (void)_scrollWillStart:(id)_scroll;	// 0x3664f875
- (void)_setDislaysActionControl:(BOOL)control;	// 0x3664f4fd
- (void)_updateActionControl;	// 0x3664f70d
- (void)_updateControls;	// 0x3664f4cd
- (void)_updateControlsWithDelay;	// 0x3664f8b5
- (void)_updatePreview;	// 0x3664f25d
- (id)accessibilityScreenContent;	// 0x3664f141
- (id)actionItemAtIndex:(long)index;	// 0x3664eced
- (id)actionSelectionHandlerForItemAtIndex:(long)index;	// 0x3664ece9
- (BOOL)allowUnplayedMark;	// 0x3664ec99
- (BOOL)brEventAction:(id)action;	// 0x3664eaf1
- (void)clearPreviewController;	// 0x3664ec35
- (void)controlWasActivated;	// 0x3664eef5
- (void)controlWasDeactivated;	// 0x3664f041
- (void)dealloc;	// 0x3664e4ad
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x3664e9fd
- (void)layoutSubcontrols;	// 0x3664e659
// converted property getter: - (id)noContentMessage;	// 0x3664edcd
- (id)previewControlForItem:(long)item;	// 0x3664f161
- (void)refreshControllerForModelUpdate;	// 0x3664ee05
- (void)refreshControllerForModelUpdateToObject:(id)object;	// 0x3664ee49
- (void)resetPreviewController;	// 0x3664ebf5
// converted property setter: - (void)setNoContentMessage:(id)message;	// 0x3664ecf1
// converted property setter: - (void)setShowSpinner:(BOOL)spinner;	// 0x3664e58d
// converted property getter: - (BOOL)showSpinner;	// 0x3664e641
- (void)updatePreviewController;	// 0x3664ebe5
@end

