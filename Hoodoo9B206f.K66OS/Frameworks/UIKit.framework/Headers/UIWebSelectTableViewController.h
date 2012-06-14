/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITableViewController.h"
#import "UIKeyInput.h"

@class NSArray, DOMHTMLSelectElement, UIWebSelectPopover;

__attribute__((visibility("hidden")))
@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput> {
@private
	DOMHTMLSelectElement *_selectionNode;	// 172 = 0xac
	NSArray *_cachedItems;	// 176 = 0xb0
	unsigned _singleSelectionIndex;	// 180 = 0xb4
	BOOL _allowsMultipleSelection;	// 184 = 0xb8
	float _fontSize;	// 188 = 0xbc
	float _maximumTextWidth;	// 192 = 0xc0
	int _textAlignment;	// 196 = 0xc4
	UIWebSelectPopover *_popover;	// 200 = 0xc8
}
@property(retain, nonatomic) NSArray *_cachedItems;	// G=0x355235b5; S=0x355235c5; @synthesize
@property(assign, nonatomic) UIWebSelectPopover *_popover;	// G=0x35523609; S=0x35523619; @synthesize
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode;	// G=0x35523581; S=0x35523591; @synthesize
@property(assign, nonatomic) unsigned _singleSelectionIndex;	// G=0x355235e9; S=0x355235f9; @synthesize
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(assign, nonatomic) int spellCheckingType;
- (id)initWithDOMHTMLSelectNode:(id)domhtmlselectNode cachedItems:(id)items singleSelectionIndex:(unsigned)index multipleSelection:(BOOL)selection;	// 0x35522c59
// declared property getter: - (id)_cachedItems;	// 0x355235b5
- (BOOL)_hasItems;	// 0x35522c29
// declared property getter: - (id)_popover;	// 0x35523609
// declared property getter: - (id)_selectionNode;	// 0x35523581
// declared property getter: - (unsigned)_singleSelectionIndex;	// 0x355235e9
- (void)dealloc;	// 0x35522d55
- (void)deleteBackward;	// 0x3552357d
- (BOOL)hasText;	// 0x35523575
- (float)heightForItems;	// 0x35522e3d
- (void)insertText:(id)text;	// 0x35523579
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x35522edd
// declared property setter: - (void)set_cachedItems:(id)items;	// 0x355235c5
// declared property setter: - (void)set_popover:(id)popover;	// 0x35523619
// declared property setter: - (void)set_selectionNode:(id)node;	// 0x35523591
// declared property setter: - (void)set_singleSelectionIndex:(unsigned)index;	// 0x355235f9
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x35522f25
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x35523249
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x35522ee1
- (void)viewWillAppear:(BOOL)view;	// 0x35522dad
@end
