/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVStoreFavorite.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVWishListFavorite : ATVStoreFavorite {
@private
	NSString *_adamID;	// 72 = 0x48
}
- (id)initWithDictionary:(id)dictionary;	// 0x36559a41
- (BOOL)_setupWithCatalogItem:(id)catalogItem;	// 0x36559819
- (void)dealloc;	// 0x36559ab5
- (void)encodeWithDictionary:(id)dictionary;	// 0x36559b01
- (id)itemID;	// 0x36559b5d
- (void)remove;	// 0x36559be1
- (BOOL)removeUponAcquisition;	// 0x36559b6d
- (void)save;	// 0x36559b71
@end

