/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVAPPasswordEntryDelegate.h"
#import "BRMenuListItemProvider.h"
#import "BRMenuController.h"

@class BRAirportNetwork;

__attribute__((visibility("hidden")))
@interface ATVAPWEPPasswordMenuController : BRMenuController <BRMenuListItemProvider, ATVAPPasswordEntryDelegate> {
@private
	BRAirportNetwork *_network;	// 124 = 0x7c
	long _passwordType;	// 128 = 0x80
	id<ATVAPPasswordEntryDelegate> _delegate;	// 132 = 0x84
}
- (id)initForNetwork:(id)network notifying:(id)notifying;	// 0x32f8388d
- (void)dealloc;	// 0x32f83a65
- (float)heightForRow:(long)row;	// 0x32f83be9
- (long)itemCount;	// 0x32f83be1
- (id)itemForRow:(long)row;	// 0x32f83b4d
- (void)itemSelected:(long)selected;	// 0x32f83ab1
- (void)passwordEntered:(id)entered forNetwork:(id)network;	// 0x32f83bf1
- (BOOL)rowSelectable:(long)selectable;	// 0x32f83bed
- (id)titleForRow:(long)row;	// 0x32f83be5
@end
