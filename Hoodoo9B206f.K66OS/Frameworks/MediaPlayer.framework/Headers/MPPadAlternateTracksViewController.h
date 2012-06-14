/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "MPAbstractAlternateTracksViewController.h"

@class UITableView;

@interface MPPadAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate> {
@private
	UITableView *_tableView;	// 212 = 0xd4
}
- (id)init;	// 0x303b23d1
- (id)initWithPlayer:(id)player;	// 0x303b22fd
- (void)dealloc;	// 0x303b244d
- (void)loadView;	// 0x303b24c5
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x303b2625
- (void)reloadData;	// 0x303b29e9
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x303b269d
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x303b287d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x303b2671
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x303b27ed
- (void)viewDidUnload;	// 0x303b25a5
@end

