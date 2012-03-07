/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "WebFormDelegate.h"
#import "UIKit-Structs.h"

@class UIWebFormCompletionController, NSMutableDictionary;
@protocol UIBrowserDocumentController;

__attribute__((visibility("hidden")))
@interface UIWebFormDelegate : NSObject <WebFormDelegate> {
@private
	UIWebFormCompletionController *_completionController;	// 4 = 0x4
	id<UIBrowserDocumentController> _controller;	// 8 = 0x8
	NSMutableDictionary *_editedForms;	// 12 = 0xc
}
- (id)initWithController:(id)controller;	// 0x3515ef21
- (void)_clearEditedFormsInFrame:(id)frame;	// 0x3520159d
- (void)_didEditFormElement:(id)element inFrame:(id)frame;	// 0x353730d9
- (BOOL)_shouldIgnoreFormTextChangesInFrame:(id)frame;	// 0x35373305
- (void)acceptedAutoFillWord:(id)word;	// 0x35373099
- (void)autoFillWithElementValue;	// 0x353730b9
- (void)dataSourceHasChangedForFrame:(id)frame;	// 0x352014f5
- (void)dealloc;	// 0x3525e9f1
- (BOOL)formWasEdited;	// 0x35201699
- (void)formWillHide;	// 0x35372fad
- (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;	// 0x35372d01
- (void)frameLayoutHasChanged:(id)changed;	// 0x35201529
- (BOOL)hasCurrentSuggestions;	// 0x35373045
- (void)setController:(id)controller;	// 0x3515ef9d
- (XXStruct_HeigOC)suggestionsForString:(id)string inputIndex:(unsigned)index;	// 0x35372fed
- (void)textDidChangeInTextArea:(id)text inFrame:(id)frame;	// 0x35372d1d
- (void)textDidChangeInTextField:(id)text inFrame:(id)frame;	// 0x35372dad
- (BOOL)textField:(id)field doCommandBySelector:(SEL)selector inFrame:(id)frame;	// 0x35372f01
- (void)textFieldDidBeginEditing:(id)textField inFrame:(id)frame;	// 0x35372e5d
- (void)textFieldDidEndEditing:(id)textField inFrame:(id)frame;	// 0x35372eb9
@end
