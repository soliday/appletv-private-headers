/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface MPImageModifier : NSObject {
}
@property(readonly, assign, nonatomic) BOOL fastEnoughToApplySynchronously;	// G=0x33659291; 
@property(readonly, assign, nonatomic) NSString *imageCacheUniqueKey;	// G=0x336592cd; 
- (CGSize)contentSizeForSize:(CGSize)size;	// 0x336592a9
- (void)drawImageBackgroundWithContext:(CGContextRef)context contentSize:(CGSize)size contentSubRect:(CGRect)rect;	// 0x33659299
- (void)drawImageForegroundWithContext:(CGContextRef)context contentSize:(CGSize)size contentSubRect:(CGRect)rect;	// 0x336592a1
// declared property getter: - (BOOL)fastEnoughToApplySynchronously;	// 0x33659291
// declared property getter: - (id)imageCacheUniqueKey;	// 0x336592cd
- (CGRect)imageFrameForContentSize:(CGSize)contentSize imageFrame:(CGRect)frame imageSubRect:(CGRect)rect;	// 0x336592b9
- (BOOL)shouldModifyImageWithContentSize:(CGSize)contentSize imageSize:(CGSize)size imageSubRect:(CGRect)rect;	// 0x33659295
@end

