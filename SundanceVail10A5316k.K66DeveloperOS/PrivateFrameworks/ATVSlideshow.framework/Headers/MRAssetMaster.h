/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class MRImageManager, NSDictionary, NSMutableDictionary, NSString;

@interface MRAssetMaster : NSObject {
	NSString *_path;	// 4 = 0x4
	MRImageManager *_imageManager;	// 8 = 0x8
	CGSize _originalSize;	// 12 = 0xc
	NSMutableDictionary *_players;	// 20 = 0x14
	BOOL _isValid;	// 24 = 0x18
}
@property(readonly, assign) MRImageManager *imageManager;	// G=0x365f05c1; @synthesize=_imageManager
@property(readonly, assign) BOOL isValid;	// G=0x365f05f9; @synthesize=_isValid
@property(readonly, assign) CGSize originalSize;	// G=0x365f05d5; @synthesize=_originalSize
@property(readonly, assign) NSString *path;	// G=0x365f05ad; @synthesize=_path
@property(readonly, assign) NSDictionary *players;	// G=0x365f0611; @synthesize=_players
- (id)initWithPath:(id)path originalSize:(CGSize)size andImageManager:(id)manager;	// 0x365efefd
- (void)dealloc;	// 0x365f0001
// declared property getter: - (id)imageManager;	// 0x365f05c1
// declared property getter: - (BOOL)isValid;	// 0x365f05f9
// declared property getter: - (CGSize)originalSize;	// 0x365f05d5
// declared property getter: - (id)path;	// 0x365f05ad
- (id)playerForSize:(CGSize)size andOptions:(id)options;	// 0x365f00c1
// declared property getter: - (id)players;	// 0x365f0611
- (void)relinquishPlayer:(id)player;	// 0x365f0525
@end

