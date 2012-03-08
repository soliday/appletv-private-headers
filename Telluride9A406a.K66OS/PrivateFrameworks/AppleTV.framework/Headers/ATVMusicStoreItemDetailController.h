/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVMusicStoreCatalogItemController.h"

@class BRDetailedMediaControl, NSTimer, BRScrollControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreItemDetailController : ATVMusicStoreCatalogItemController {
@private
	BRScrollControl *_scrollControl;	// 92 = 0x5c
	BRDetailedMediaControl *_detailedControl;	// 96 = 0x60
	ATVMediaQueryRef _rentalQuery;	// 100 = 0x64
	ATVMediaItemRef _rentalItem;	// 104 = 0x68
	NSTimer *_expiryInfoTimer;	// 108 = 0x6c
	BOOL _isPurchased;	// 112 = 0x70
}
@property(readonly, retain) BRDetailedMediaControl *detailedControl;	// G=0x32f6da3d; converted property
@property(retain) id itemDictionary;	// G=0x32f6d931; S=0x32f6da4d; converted property
- (id)init;	// 0x32f6d6ed
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x32f6d731
- (void)_cacheManagerStateChanged:(id)changed;	// 0x32f6ea95
- (void)_checkIfAlreadyRented;	// 0x32f6eaa5
- (BOOL)_checkIfPurchased;	// 0x32f6e7c1
- (id)_displayableItemAdjacentTo:(id)to forward:(BOOL)forward;	// 0x32f6e5dd
- (id)_displayableItemAfter:(id)after;	// 0x32f6e5b5
- (id)_displayableItemBefore:(id)before;	// 0x32f6e5c9
- (void)_expiryInfoTimerFired:(id)fired;	// 0x32f6f0c1
- (id)_filterPreferredItemsFromDictionary:(id)dictionary;	// 0x32f6e0c5
- (void)_layoutControls;	// 0x32f6e2b9
- (void)_nextItemSelected;	// 0x32f6db0d
- (void)_nextItemSelected:(id)selected;	// 0x32f6e595
- (void)_previousItemSelected;	// 0x32f6db55
- (void)_previousItemSelected:(id)selected;	// 0x32f6e5a5
- (void)_relatedContentControlCreated:(id)created;	// 0x32f6de9d
- (void)_rentalQueryComplete;	// 0x32f6ec51
- (void)_setCopyrightText;	// 0x32f6ddc5
- (void)_setupDetailedControl;	// 0x32f6db9d
- (void)_startExpiryInfoTimer;	// 0x32f6efe1
- (void)_stopExpiryInfoTimer;	// 0x32f6f091
- (void)_updateExpiryInfo;	// 0x32f6ed99
- (void)_updateFocus;	// 0x32f6e4f9
- (void)_updatePurchasedLoadingText;	// 0x32f6e83d
- (void)controlWasActivated;	// 0x32f6d975
- (void)controlWasDeactivated;	// 0x32f6d9fd
- (void)dealloc;	// 0x32f6d871
// converted property getter: - (id)detailedControl;	// 0x32f6da3d
// converted property getter: - (id)itemDictionary;	// 0x32f6d931
- (void)relatedContentLoaded:(id)loaded;	// 0x32f6de21
// converted property setter: - (void)setItemDictionary:(id)dictionary;	// 0x32f6da4d
@end
