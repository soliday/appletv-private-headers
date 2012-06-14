/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedController.h"

@class NSArray, BRPageStripView;

__attribute__((visibility("hidden")))
@interface ATVStandingsController : ATVFeedController {
@private
	BRPageStripView *_pageStripView;	// 124 = 0x7c
	NSArray *_items;	// 128 = 0x80
}
- (id)initWithDictionary:(id)dictionary;	// 0x32933d95
- (id)initWithFeedElement:(id)feedElement;	// 0x32933c01
- (float)_widthOfColumn:(long)column forTableView:(id)tableView;	// 0x32934c7d
- (void)dealloc;	// 0x32933f75
- (float)headerHeightForTableView:(id)tableView;	// 0x32934c69
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x329342c5
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x32934365
- (long)numberOfPagesInPageStripView:(id)pageStripView;	// 0x32933fd5
- (long)numberOfRowsInTableView:(id)tableView;	// 0x32934225
- (id)pageStripView:(id)view pageAtIndex:(long)index;	// 0x32933ff5
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x32934a71
- (float)tableView:(id)view heightForRow:(long)row;	// 0x32934c51
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x32934375
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x32934c29
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x32934c41
- (float)xPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x32934219
@end

