/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoMediaAsset.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFlickrAsset : BRPhotoMediaAsset {
@private
	NSDictionary *_assetInfo;	// 40 = 0x28
}
+ (id)assetWithAssetInfo:(id)assetInfo;	// 0x328aeb4d
- (id)initWithAssetInfo:(id)assetInfo;	// 0x328aeb89
- (id)_imagePathWithSize:(int)size;	// 0x328aed61
- (void)dealloc;	// 0x328aeca9
- (id)flickrIdentifier;	// 0x328aed15
- (id)imageProxy;	// 0x328aed41
- (BOOL)isLocal;	// 0x328aecf5
- (id)mediaType;	// 0x328aecf9
@end

