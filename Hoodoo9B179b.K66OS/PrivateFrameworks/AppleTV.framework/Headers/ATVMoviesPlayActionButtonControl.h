/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRButtonControl.h"


__attribute__((visibility("hidden")))
@interface ATVMoviesPlayActionButtonControl : BRButtonControl {
}
+ (id)playButtonForAsset:(id)asset;	// 0x301cacad
+ (id)playButtonForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x301cade5
- (void)_downloadStateChanged:(id)changed;	// 0x301cae7d
- (void)_updateButtonStateWithAsset:(id)asset;	// 0x301caead
- (void)dealloc;	// 0x301cae21
@end

