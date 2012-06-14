/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRMetadataProvider.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreBaseMetadataProvider : NSObject <BRMetadataProvider> {
@private
	NSDictionary *_catalogItem;	// 4 = 0x4
	BOOL _useAlternateMetadata;	// 8 = 0x8
}
@property(assign) BOOL useAlternateMetadata;	// G=0x328bf7fd; S=0x328bf80d; converted property
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x328bf721
- (id)initWithCatalogItem:(id)catalogItem;	// 0x328bf75d
- (id)controlFactory;	// 0x328bf839
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x328bf81d
- (id)dataAtIndex:(long)index;	// 0x328bf83d
- (long)dataCount;	// 0x328bf821
- (void)dealloc;	// 0x328bf7b1
- (id)hashForDataAtIndex:(long)index;	// 0x328bf851
- (void)populateMetadataForControl:(id)control;	// 0x328bf84d
// converted property setter: - (void)setUseAlternateMetadata:(BOOL)metadata;	// 0x328bf80d
// converted property getter: - (BOOL)useAlternateMetadata;	// 0x328bf7fd
@end

