/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMusicStoreBaseMetadataProvider.h"

@class ATVSedonaCatalogItem;

__attribute__((visibility("hidden")))
@interface ATVSedonaTVMetadataProvider : ATVMusicStoreBaseMetadataProvider {
@private
	ATVSedonaCatalogItem *_sedonaItem;	// 12 = 0xc
}
+ (void)_initializeAbbreviatedTransformers;	// 0x339cf319
+ (void)_initializeDetailedTransformers;	// 0x339cf2c5
+ (void)_initializeMappings:(id)mappings;	// 0x339cefe5
+ (void)initialize;	// 0x339cec71
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x339ced35
- (id)init;	// 0x339ced71
- (id)initWithCatalogItem:(id)catalogItem;	// 0x339ced89
- (void)_populateAbbreviatedMetadata:(id)metadata;	// 0x339cf3ad
- (void)_populateDetailedMetadata:(id)metadata;	// 0x339cf541
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x339cee41
- (void)dealloc;	// 0x339cedf5
- (void)populateMetadataForControl:(id)control;	// 0x339ceef9
@end

