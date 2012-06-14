/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPImageModifier : NSObject {
}
@property(readonly, assign, nonatomic) BOOL fastEnoughToApplySynchronously;	// G=0x346d59c5; 
- (CGSize)contentSizeForSize:(CGSize)size;	// 0x346d59d5
- (void)drawImageBackgroundWithContext:(CGContextRef)context contentSize:(CGSize)size contentSubRect:(CGRect)rect;	// 0x346d59cd
- (void)drawImageForegroundWithContext:(CGContextRef)context contentSize:(CGSize)size contentSubRect:(CGRect)rect;	// 0x346d59d1
// declared property getter: - (BOOL)fastEnoughToApplySynchronously;	// 0x346d59c5
- (CGRect)imageFrameForContentSize:(CGSize)contentSize imageFrame:(CGRect)frame imageSubRect:(CGRect)rect;	// 0x346d59e1
- (BOOL)shouldModifyImageWithContentSize:(CGSize)contentSize imageSize:(CGSize)size imageSubRect:(CGRect)rect;	// 0x346d59c9
@end

