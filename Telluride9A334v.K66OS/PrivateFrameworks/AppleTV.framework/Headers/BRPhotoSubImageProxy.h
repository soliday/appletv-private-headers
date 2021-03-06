/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRATVDataImageProxy.h"
#import "AppleTV-Structs.h"

@class NSString;

@interface BRPhotoSubImageProxy : BRATVDataImageProxy {
@private
	CGRect _rect;	// 20 = 0x14
	NSString *_rectString;	// 36 = 0x24
	int _requestedImageSize;	// 40 = 0x28
}
+ (id)subImageProxyWithMediaObject:(void *)mediaObject dataClient:(ATVDataClientRef)client rect:(CGRect)rect;	// 0x331d7e2d
- (id)initWithMediaObject:(void *)mediaObject dataClient:(ATVDataClientRef)client rect:(CGRect)rect;	// 0x331d7e89
- (void)_imageLoadFailed:(id)failed;	// 0x331d84ed
- (void)_imageLoaded:(id)loaded;	// 0x331d8309
- (id)_rectString;	// 0x331d826d
- (void)dealloc;	// 0x331d7ee5
- (id)imageForImageSize:(int)imageSize;	// 0x331d8041
- (id)imageIDForImageSize:(int)imageSize;	// 0x331d7f61
@end

