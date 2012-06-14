/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRImageProxy.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface BRATVDataImageProxy : NSObject <BRImageProxy> {
@private
	void *_mediaObject;	// 4 = 0x4
	ATVDataClientRef _dataClient;	// 8 = 0x8
	NSMutableArray *_savedTokens;	// 12 = 0xc
	BOOL _usesScreenSaverImageManager;	// 16 = 0x10
}
+ (id)imageProxyWithMediaObject:(void *)mediaObject;	// 0x36661355
- (id)initWithMediaObject:(void *)mediaObject;	// 0x36661391
- (void)_cancelImageForImageID:(id)imageID;	// 0x36661bf9
- (id)_imageIDForImageSize:(int)imageSize;	// 0x36661cf5
- (id)_imageIDStringForSize:(int)size;	// 0x36661cb1
- (id)_imageManager;	// 0x36661e21
- (void *)_mediaID;	// 0x36661ef1
- (void)_removeTokenForImageID:(id)imageID;	// 0x36661b9d
- (void)_saveToken:(void *)token forImageID:(id)imageID;	// 0x36661b51
- (id)_tokenInfoForImageID:(id)imageID;	// 0x36661ad5
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x366619b1
- (void)dealloc;	// 0x36661475
- (id)defaultImageForImageSize:(int)imageSize;	// 0x36661935
- (id)imageForImageSize:(int)imageSize;	// 0x366614fd
- (BOOL)imageForImageSizeIsAvailable:(int)imageSizeIsAvailable;	// 0x36661a85
- (id)imageIDForImageSize:(int)imageSize;	// 0x366614ed
- (id)object;	// 0x36661a75
- (void)setUsesScreenSaverImageManager:(BOOL)manager;	// 0x36661ac5
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x366619ad
@end

