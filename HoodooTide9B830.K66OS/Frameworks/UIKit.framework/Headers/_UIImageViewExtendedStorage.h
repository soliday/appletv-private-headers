/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIImage, NSArray;

__attribute__((visibility("hidden")))
@interface _UIImageViewExtendedStorage : NSObject {
@private
	BOOL _highlighted;	// 4 = 0x4
	UIImage *_image;	// 8 = 0x8
	UIImage *_highlightedImage;	// 12 = 0xc
	NSArray *_animationImages;	// 16 = 0x10
	NSArray *_highlightedAnimationImages;	// 20 = 0x14
	double _animationDuration;	// 24 = 0x18
	int _animationRepeatCount;	// 32 = 0x20
	int _drawMode;	// 36 = 0x24
}
- (void)dealloc;	// 0x3015583d
@end

