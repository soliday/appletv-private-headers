/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMusicStoreCatalogItemController.h"
#import "AppleTV-Structs.h"

@class BRScrollControl, NSTimer, BRDetailedMediaControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreItemDetailController : ATVMusicStoreCatalogItemController {
@private
	BRScrollControl *_scrollControl;	// 96 = 0x60
	BRDetailedMediaControl *_detailedControl;	// 100 = 0x64
	ATVMediaQueryRef _rentalQuery;	// 104 = 0x68
	ATVMediaItemRef _rentalItem;	// 108 = 0x6c
	NSTimer *_expiryInfoTimer;	// 112 = 0x70
	BOOL _isPurchased;	// 116 = 0x74
}
@property(readonly, retain) BRDetailedMediaControl *detailedControl;	// G=0x328d3239; converted property
@property(retain) id itemDictionary;	// G=0x328d312d; S=0x328d3249; converted property
- (id)init;	// 0x328d2ee9
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x328d2f2d
- (void)_cacheManagerStateChanged:(id)changed;	// 0x328d428d
- (void)_checkIfAlreadyRented;	// 0x328d429d
- (BOOL)_checkIfPurchased;	// 0x328d3fb9
- (id)_displayableItemAdjacentTo:(id)to forward:(BOOL)forward;	// 0x328d3dd5
- (id)_displayableItemAfter:(id)after;	// 0x328d3dad
- (id)_displayableItemBefore:(id)before;	// 0x328d3dc1
- (void)_expiryInfoTimerFired:(id)fired;	// 0x328d48b9
- (id)_filterPreferredItemsFromDictionary:(id)dictionary;	// 0x328d38bd
- (void)_layoutControls;	// 0x328d3ab1
- (void)_nextItemSelected;	// 0x328d3309
- (void)_nextItemSelected:(id)selected;	// 0x328d3d8d
- (void)_previousItemSelected;	// 0x328d3351
- (void)_previousItemSelected:(id)selected;	// 0x328d3d9d
- (void)_relatedContentControlCreated:(id)created;	// 0x328d3699
- (void)_rentalQueryComplete;	// 0x328d4449
- (void)_setCopyrightText;	// 0x328d35c1
- (void)_setupDetailedControl;	// 0x328d3399
- (void)_startExpiryInfoTimer;	// 0x328d47d9
- (void)_stopExpiryInfoTimer;	// 0x328d4889
- (void)_updateExpiryInfo;	// 0x328d4591
- (void)_updateFocus;	// 0x328d3cf1
- (void)_updatePurchasedLoadingText;	// 0x328d4035
- (void)controlWasActivated;	// 0x328d3171
- (void)controlWasDeactivated;	// 0x328d31f9
- (void)dealloc;	// 0x328d306d
// converted property getter: - (id)detailedControl;	// 0x328d3239
// converted property getter: - (id)itemDictionary;	// 0x328d312d
- (void)relatedContentLoaded:(id)loaded;	// 0x328d361d
// converted property setter: - (void)setItemDictionary:(id)dictionary;	// 0x328d3249
@end

