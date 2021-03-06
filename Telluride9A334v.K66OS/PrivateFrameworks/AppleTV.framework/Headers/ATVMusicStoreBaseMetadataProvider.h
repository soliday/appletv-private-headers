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
@property(assign) BOOL useAlternateMetadata;	// G=0x330e6d5d; S=0x330e6d6d; converted property
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x330e6c81
- (id)initWithCatalogItem:(id)catalogItem;	// 0x330e6cbd
- (id)controlFactory;	// 0x330e6d99
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x330e6d7d
- (id)dataAtIndex:(long)index;	// 0x330e6d9d
- (long)dataCount;	// 0x330e6d81
- (void)dealloc;	// 0x330e6d11
- (id)hashForDataAtIndex:(long)index;	// 0x330e6db1
- (void)populateMetadataForControl:(id)control;	// 0x330e6dad
// converted property setter: - (void)setUseAlternateMetadata:(BOOL)metadata;	// 0x330e6d6d
// converted property getter: - (BOOL)useAlternateMetadata;	// 0x330e6d5d
@end

