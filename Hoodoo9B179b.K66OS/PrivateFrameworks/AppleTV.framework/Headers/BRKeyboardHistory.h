/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRKeyboard.h"
#import "AppleTV-Structs.h"

@class BRWaitSpinnerControl, BRKeyboardHistoryControl, NSArray, BRListView, BRScrollControl, BRBlueGlowSelectionLozengeLayer, BRContextMenuControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardHistory : BRKeyboard {
@private
	BRKeyboardHistoryControl *_keyboardHistoryControl;	// 48 = 0x30
	BRListView *_recentItemsList;	// 52 = 0x34
	BRBlueGlowSelectionLozengeLayer *_cursor;	// 56 = 0x38
	BRScrollControl *_scroller;	// 60 = 0x3c
	BRWaitSpinnerControl *_spinner;	// 64 = 0x40
	BRContextMenuControl *_contextMenu;	// 68 = 0x44
	NSArray *_textEntryHistoryClientsForDisplay;	// 72 = 0x48
	NSArray *_textEntryHistoryBehaviorsForDisplay;	// 76 = 0x4c
	int _textEntryStyle;	// 80 = 0x50
	float _preferredTextEntryWidth;	// 84 = 0x54
	float _preferredTextEntryHeight;	// 88 = 0x58
	CGRect _keyboardControlFrame;	// 92 = 0x5c
	float _textFieldBackgroundWidth;	// 108 = 0x6c
	float _textFieldBackgroundHeight;	// 112 = 0x70
	CGRect _textFieldBackgroundFrame;	// 116 = 0x74
	CGRect _textFieldFrame;	// 132 = 0x84
	CGRect _spinnerFrame;	// 148 = 0x94
	CGRect _textFieldLabelFrame;	// 164 = 0xa4
	CGRect _tabControlFrame;	// 180 = 0xb4
}
@property(readonly, assign) CGRect keyboardControlFrame;	// G=0x302d58bd; converted property
@property(readonly, assign) CGRect spinnerFrame;	// G=0x302d594d; converted property
@property(readonly, assign) CGRect tabControlFrame;	// G=0x302d5971; converted property
@property(readonly, assign) CGRect textFieldBackgroundFrame;	// G=0x302d5905; converted property
@property(readonly, assign) CGRect textFieldFrame;	// G=0x302d5929; converted property
@property(readonly, assign) CGRect textFieldLabelFrame;	// G=0x302d58e1; converted property
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x302d4a35
- (void)_contextMenuCancelItemSelected:(id)selected;	// 0x302d6249
- (int)_contextMenuDimOption;	// 0x302d6115
- (id)_controlForContextMenuPositioning;	// 0x302d60b9
- (id)_controlForContextMenuStart;	// 0x302d60a9
- (id)_controlForData:(id)data;	// 0x302d58a1
- (id)_controlToDim;	// 0x302d6105
- (void)_dismissContextMenu;	// 0x302d6061
- (id)_filterRawKeyboardData:(id)data;	// 0x302d588d
- (id)_glyphDataForImage:(id)image;	// 0x302d589d
- (id)_glyphDataForStrings:(id)strings attributes:(id)attributes;	// 0x302d5899
- (id)_glyphDataForTextString:(id)textString attributes:(id)attributes;	// 0x302d5895
- (void)_handleContextMenuSelection:(id)selection;	// 0x302d6119
- (id)_keyboardDataFileName;	// 0x302d5889
- (void)_listViewFocusChanged:(id)changed;	// 0x302d5dfd
- (id)_mainKeyRowPlane;	// 0x302d58a9
- (int)_numberOfMainKeyRows;	// 0x302d58a5
- (float)_preferredTextEntryControlWidth;	// 0x302d58ad
- (id)_processGlyphDataChunk:(id)chunk;	// 0x302d5891
- (id)_providersForContextMenu;	// 0x302d5e59
- (void)_textEntryHistoryChanged:(id)changed;	// 0x302d5ddd
- (id)customizeTextEntryControls:(id)controls;	// 0x302d50cd
- (id)customizedTextEntryFieldControls;	// 0x302d4fd1
- (void)customizedTextFieldControlsWereRemoved;	// 0x302d50a1
- (void)dealloc;	// 0x302d4d7d
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x302d4e85
- (BOOL)handleEvent:(id)event;	// 0x302d5501
- (id)keyboardControl;	// 0x302d5205
// converted property getter: - (CGRect)keyboardControlFrame;	// 0x302d58bd
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x302d5b3d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x302d5b41
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x302d5b31
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x302d5b2d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x302d5a01
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x302d5999
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x302d59fd
- (id)name;	// 0x302d51f9
- (long)numberOfSectionsInList:(id)list;	// 0x302d5995
- (id)popupKeyboardForKeyControl:(id)keyControl textEntryControl:(id)control;	// 0x302d54e5
- (void)removeCustomizedTextEntryControls:(id)controls;	// 0x302d5165
- (BOOL)requiresTextFieldLabel;	// 0x302d54e9
// converted property getter: - (CGRect)spinnerFrame;	// 0x302d594d
- (void)startSpinning;	// 0x302d4f51
- (void)stopSpinning;	// 0x302d4f91
- (id)switchToThisKeyboardIdentifier;	// 0x302d51d1
// converted property getter: - (CGRect)tabControlFrame;	// 0x302d5971
- (BOOL)textEntryControlShouldHandleMainKeysEvents;	// 0x302d54e1
// converted property getter: - (CGRect)textFieldBackgroundFrame;	// 0x302d5905
// converted property getter: - (CGRect)textFieldFrame;	// 0x302d5929
// converted property getter: - (CGRect)textFieldLabelFrame;	// 0x302d58e1
@end

