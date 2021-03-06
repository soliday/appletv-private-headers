/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIImage.h> // Unknown library

@class NSData;

@interface SBWallpaperImage : UIImage {
	int _variant;	// 16 = 0x10
	NSData *_data;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x35e83a1d; @synthesize=_data
@property(readonly, assign, nonatomic) int variant;	// G=0x35e83a2d; @synthesize=_variant
+ (id)cachedWallpaperDataForVariant:(int)variant;	// 0x35e83b5d
+ (void)clearCachedWallpaper;	// 0x35e83a3d
+ (void)preheatWallpaperDataForVariant:(int)variant;	// 0x35e83afd
- (id)initWithVariant:(int)variant;	// 0x35e83cad
// declared property getter: - (id)data;	// 0x35e83a1d
- (void)dealloc;	// 0x35e83c61
- (BOOL)isEqual:(id)equal;	// 0x35e83ba1
// declared property getter: - (int)variant;	// 0x35e83a2d
@end

