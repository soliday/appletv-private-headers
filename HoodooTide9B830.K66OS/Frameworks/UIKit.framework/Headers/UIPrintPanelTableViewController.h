/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class UIButton, UIPrintPanelViewController;

__attribute__((visibility("hidden")))
@interface UIPrintPanelTableViewController : UITableViewController {
@private
	UIPrintPanelViewController *_printPanelViewController;	// 172 = 0xac
	UIButton *_printButton;	// 176 = 0xb0
	int _rangeRow;	// 180 = 0xb4
	int _copiesRow;	// 184 = 0xb8
	int _duplexRow;	// 188 = 0xbc
	int _paperRow;	// 192 = 0xc0
	BOOL _contactingPrinter;	// 196 = 0xc4
}
- (id)initWithPrintPanelViewController:(id)printPanelViewController;	// 0x30379085
- (void)_setupPrintButtons;	// 0x3037a4d5
- (void)_update:(BOOL)update;	// 0x3037a665
- (void)_updateSize;	// 0x3037a791
- (void)clearPrintPanelViewController;	// 0x30379505
- (void)dealloc;	// 0x3037910d
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x303796fd
- (void)setShowContactingPrinter:(BOOL)printer;	// 0x30379399
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x303796d9
- (void)showCancelButton;	// 0x30379179
- (void)showContacting;	// 0x30379209
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x303797ed
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3037a325
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x30379701
- (void)updateCopies:(id)copies;	// 0x3037a209
- (void)updateDuplex:(id)duplex;	// 0x3037a2e9
- (void)updatePageRange:(NSRange)range;	// 0x3037a1bd
- (void)viewDidDisappear:(BOOL)view;	// 0x30379671
- (void)viewDidLoad;	// 0x30379519
- (void)viewDidUnload;	// 0x303795a5
- (void)viewWillAppear:(BOOL)view;	// 0x303795f9
@end

