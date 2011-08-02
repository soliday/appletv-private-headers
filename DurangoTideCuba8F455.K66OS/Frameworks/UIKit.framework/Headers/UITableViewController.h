/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class UITableView;

@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
@private
	int _tableViewStyle;	// 132 = 0x84
	id _keyboardSupport;	// 136 = 0x88
	struct {
		unsigned isTranslucent : 1;
	} _tableViewControllerFlags;	// 140 = 0x8c
}
@property(assign, nonatomic) BOOL clearsSelectionOnViewWillAppear;	// G=0x30287599; S=0x302875ad; 
@property(retain, nonatomic) UITableView *tableView;	// G=0x30110aa5; S=0x302876c5; 
- (id)init;	// 0x30287879
- (id)initWithCoder:(id)coder;	// 0x302877e9
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x30110a65
- (id)initWithStyle:(int)style;	// 0x30110a19
- (void)_adjustTableForKeyboardInfo:(id)keyboardInfo;	// 0x30287609
- (id)_existingTableView;	// 0x3014d0fd
// declared property getter: - (BOOL)clearsSelectionOnViewWillAppear;	// 0x30287599
- (void)dealloc;	// 0x3014d051
- (void)encodeWithCoder:(id)coder;	// 0x30287789
- (void)loadView;	// 0x30110af1
// declared property setter: - (void)setClearsSelectionOnViewWillAppear:(BOOL)appear;	// 0x302875ad
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x301cca09
// declared property setter: - (void)setTableView:(id)view;	// 0x302876c5
// declared property getter: - (id)tableView;	// 0x30110aa5
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x302875d5
- (void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;	// 0x302875d9
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x302875d1
- (void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;	// 0x302875f1
- (void)viewDidAppear:(BOOL)view;	// 0x3012b611
- (void)viewWillAppear:(BOOL)view;	// 0x30127839
- (void)viewWillDisappear:(BOOL)view;	// 0x30138b81
@end
