/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMusicStoreItemDetailController.h"

@protocol BRMediaAsset;

@interface ATVMusicStoreAssetController : ATVMusicStoreItemDetailController {
@private
	id<BRMediaAsset> _asset;	// 120 = 0x78
}
- (id)initWithAsset:(id)asset;	// 0x328bdfe9
- (id)_actionProviders;	// 0x328be5f1
- (void)_assetDeleted:(id)deleted;	// 0x328be941
- (BOOL)_assetIsExpired:(id)expired;	// 0x328be90d
- (void)_assetPlayable:(id)playable;	// 0x328be8c9
- (void)_setCopyrightText;	// 0x328be4b9
- (void)_setImageProxy;	// 0x328be5a1
- (void)_setMetadataControl;	// 0x328be83d
- (void)_setupDetailedControl;	// 0x328be441
- (id)_storeID;	// 0x328be509
- (void)_verifyAsset;	// 0x328be9a9
- (id)asset;	// 0x328be391
- (void)controlWasActivated;	// 0x328be279
- (void)dealloc;	// 0x328be315
- (void)fetchRelatedContent;	// 0x328be3a1
@end

