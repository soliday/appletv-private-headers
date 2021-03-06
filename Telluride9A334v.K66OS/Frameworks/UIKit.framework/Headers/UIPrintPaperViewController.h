/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class UIPrintPanelViewController;

__attribute__((visibility("hidden")))
@interface UIPrintPaperViewController : UITableViewController {
@private
	UIPrintPanelViewController *_printPanelViewController;	// 172 = 0xac
}
- (id)initWithPrintPanelViewController:(id)printPanelViewController;	// 0x303af331
- (void)adjustPopoverSize;	// 0x303af3f5
- (void)dealloc;	// 0x303af3a5
- (void)loadView;	// 0x303af5e1
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x303af621
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x303af3d1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x303af65d
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x303af859
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x303af625
@end

