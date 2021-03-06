/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, ATVMusicStoreOtherSeasonsControlFactory;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOtherSeasonsProvider : NSObject <BRProvider> {
@private
	NSDictionary *_catalogItem;	// 4 = 0x4
	ATVMusicStoreOtherSeasonsControlFactory *_factory;	// 8 = 0x8
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x336bf58d
- (id)initWithCatalogItem:(id)catalogItem;	// 0x336bf509
- (id)controlFactory;	// 0x336bf425
- (id)dataAtIndex:(long)index;	// 0x336bf415
- (long)dataCount;	// 0x336bf439
- (void)dealloc;	// 0x336bf4ad
- (id)hashForDataAtIndex:(long)index;	// 0x336bf435
@end

