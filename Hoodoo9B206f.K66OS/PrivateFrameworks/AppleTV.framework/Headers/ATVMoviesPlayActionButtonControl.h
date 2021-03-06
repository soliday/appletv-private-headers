/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRButtonControl.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface ATVMoviesPlayActionButtonControl : BRButtonControl {
}
+ (id)playButtonForAsset:(id)asset;	// 0x365c937d
+ (id)playButtonForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x365c94b5
- (void)_downloadStateChanged:(id)changed;	// 0x365c954d
- (void)_updateButtonStateWithAsset:(id)asset;	// 0x365c957d
- (void)dealloc;	// 0x365c94f1
@end

