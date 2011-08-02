/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "WebFormDelegate.h"

@class UIWebFormCompletionController, NSMutableDictionary;
@protocol UIBrowserDocumentController;

__attribute__((visibility("hidden")))
@interface UIWebFormDelegate : NSObject <WebFormDelegate> {
@private
	UIWebFormCompletionController *_completionController;	// 4 = 0x4
	id<UIBrowserDocumentController> _controller;	// 8 = 0x8
	NSMutableDictionary *_editedForms;	// 12 = 0xc
}
- (id)initWithController:(id)controller;	// 0x300fd49d
- (void)_clearEditedFormsInFrame:(id)frame;	// 0x30180aa9
- (void)_didEditFormElement:(id)element inFrame:(id)frame;	// 0x302bf9e9
- (BOOL)_shouldIgnoreFormTextChangesInFrame:(id)frame;	// 0x302bf999
- (void)acceptedAutoFillWord:(id)word;	// 0x302bfc05
- (void)autoFillWithElementValue;	// 0x302bfbe5
- (void)dataSourceHasChangedForFrame:(id)frame;	// 0x30180a15
- (void)dealloc;	// 0x302bfee5
- (BOOL)formWasEdited;	// 0x30180b95
- (void)formWillHide;	// 0x302bfc25
- (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;	// 0x302bfea9
- (void)frameLayoutHasChanged:(id)changed;	// 0x30180a41
- (BOOL)hasCurrentSuggestions;	// 0x302bff95
- (void)setController:(id)controller;	// 0x300fd515
- (XXStruct_HeigOC)suggestionsForString:(id)string inputIndex:(unsigned)index;	// 0x302bff41
- (void)textDidChangeInTextArea:(id)text inFrame:(id)frame;	// 0x302bfe29
- (void)textDidChangeInTextField:(id)text inFrame:(id)frame;	// 0x302bfd8d
- (BOOL)textField:(id)field doCommandBySelector:(SEL)selector inFrame:(id)frame;	// 0x302bfc61
- (void)textFieldDidBeginEditing:(id)textField inFrame:(id)frame;	// 0x302bfd3d
- (void)textFieldDidEndEditing:(id)textField inFrame:(id)frame;	// 0x302bfd01
@end
