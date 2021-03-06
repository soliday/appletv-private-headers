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
	DOMHTMLSelectElement *_selectionNode;	// 200 = 0xc8
	NSArray *_cachedItems;	// 204 = 0xcc
	NSArray *_groupsAndOptions;	// 208 = 0xd0
	unsigned _singleSelectionIndex;	// 212 = 0xd4
	unsigned _singleSelectionSection;	// 216 = 0xd8
	BOOL _allowsMultipleSelection;	// 220 = 0xdc
	float _fontSize;	// 224 = 0xe0
	float _maximumTextWidth;	// 228 = 0xe4
	int _textAlignment;	// 232 = 0xe8
	UIWebSelectPopover *_popover;	// 236 = 0xec
}
@property(retain, nonatomic) NSArray *_cachedItems;	// G=0x302982f9; S=0x30298309; @synthesize
@property(retain, nonatomic) NSArray *_groupsAndOptions;	// G=0x302982d9; S=0x302982e9; @synthesize
@property(assign, nonatomic) UIWebSelectPopover *_popover;	// G=0x30298319; S=0x30298329; @synthesize
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode;	// G=0x302982b9; S=0x302982c9; @synthesize
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(assign, nonatomic) int spellCheckingType;
- (id)initWithDOMHTMLSelectNode:(id)domhtmlselectNode cachedItems:(id)items singleSelectionIndex:(unsigned)index multipleSelection:(BOOL)selection;	// 0x302976ed
// declared property getter: - (id)_cachedItems;	// 0x302982f9
// declared property getter: - (id)_groupsAndOptions;	// 0x302982d9
- (BOOL)_isEmpty;	// 0x30297349
- (id)_optionsForSection:(int)section;	// 0x30297b51
// declared property getter: - (id)_popover;	// 0x30298319
// declared property getter: - (id)_selectionNode;	// 0x302982b9
- (void)_setupGroupsAndOptions;	// 0x30297379
- (void)dealloc;	// 0x3029780d
- (void)deleteBackward;	// 0x302982b5
- (BOOL)hasText;	// 0x302982ad
- (float)heightForItems;	// 0x30297915
- (void)insertText:(id)text;	// 0x302982b1
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x30297a3d
// declared property setter: - (void)set_cachedItems:(id)items;	// 0x30298309
// declared property setter: - (void)set_groupsAndOptions:(id)options;	// 0x302982e9
// declared property setter: - (void)set_popover:(id)popover;	// 0x30298329
// declared property setter: - (void)set_selectionNode:(id)node;	// 0x302982c9
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x30297b89
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x30297eb5
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x30297a81
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x30297ae9
- (void)viewWillAppear:(BOOL)view;	// 0x30297879
@end

