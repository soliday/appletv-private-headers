/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRMenuController.h> // Unknown library
#import "BRTextFieldDelegate.h"

@class BRTextEntryControl, NSString, BRMediatorProvider, BRImageControl, ATVSearchAgent;

@interface ATVSearchController : BRMenuController <BRTextFieldDelegate> {
@private
	BRTextEntryControl *_editor;	// 104 = 0x68
	BRImageControl *_verticalDividerImage;	// 108 = 0x6c
	ATVSearchAgent *_agent;	// 112 = 0x70
	BRMediatorProvider *_recentSearchesProvider;	// 116 = 0x74
	NSString *_activeSearchRequest;	// 120 = 0x78
	NSString *_textEntryHistoryClient;	// 124 = 0x7c
	NSString *_textEntryHistoryBehavior;	// 128 = 0x80
}
- (id)initWithSearchAgent:(id)searchAgent;	// 0x30770a7d
- (void)_handleContextMenuSelection:(id)selection;	// 0x3076fdf9
- (void)_performSearchWithString:(id)string;	// 0x3076fea9
- (void)_recentSearchTermSelected:(id)selected;	// 0x3076fdcd
- (void)_searchComplete:(id)complete;	// 0x30771089
- (BOOL)brEventAction:(id)action;	// 0x307702e9
- (id)controlToDim;	// 0x3076fdc9
- (void)dealloc;	// 0x307708e9
- (long)defaultIndex;	// 0x30770215
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x3077084d
- (BOOL)isNetworkDependent;	// 0x307708c5
- (BOOL)isValidAfterDataUpdate;	// 0x3076fdb5
- (void)layoutSubcontrols;	// 0x30770e51
- (id)providersForContextMenu;	// 0x30770015
- (id)searchAgent;	// 0x3076fdb9
- (void)searchWithString:(id)string;	// 0x3077088d
- (void)setHeaderTitle:(id)title;	// 0x30770261
- (void)setKeyboardTextEntryStyle:(int)style;	// 0x3077086d
- (void)setSearchFieldLabel:(id)label;	// 0x307702c9
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x307707c5
- (void)textDidChange:(id)text;	// 0x307701e9
- (void)textDidEndEditing:(id)text;	// 0x307700e9
@end
