/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDottedQuadEntryDelegate.h"
#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"

@class ATVDottedQuadEntryController, NSString;
@protocol ATVTCPIPConfigDelegate;

@interface ATVTCPIPConfigController : BRMenuController <BRMenuListItemProvider, ATVDottedQuadEntryDelegate> {
@private
	id<ATVTCPIPConfigDelegate> _delegate;	// 128 = 0x80
	NSString *_address;	// 132 = 0x84
	NSString *_subnetMask;	// 136 = 0x88
	NSString *_router;	// 140 = 0x8c
	NSString *_dns;	// 144 = 0x90
	ATVDottedQuadEntryController *_ipController;	// 148 = 0x94
	ATVDottedQuadEntryController *_maskController;	// 152 = 0x98
	ATVDottedQuadEntryController *_routerController;	// 156 = 0x9c
	ATVDottedQuadEntryController *_dnsController;	// 160 = 0xa0
	unsigned _forWireless : 1;	// 164 = 0xa4
	unsigned _useDHCP : 1;	// 164 = 0xa4
}
- (id)initWithWireless:(BOOL)wireless notifying:(id)notifying;	// 0x328e997d
- (void)_readCurrentConfiguration;	// 0x328ea2ad
- (void)_saveConfiguration;	// 0x328ea40d
- (void)dealloc;	// 0x328e9af1
- (void)entryComplete:(id)complete;	// 0x328e9ead
- (float)heightForRow:(long)row;	// 0x328e9ea5
- (long)itemCount;	// 0x328e9e55
- (id)itemForRow:(long)row;	// 0x328e9dbd
- (void)itemSelected:(long)selected;	// 0x328e9bdd
- (BOOL)rowSelectable:(long)selectable;	// 0x328e9ea9
- (id)titleForRow:(long)row;	// 0x328e9e59
@end

