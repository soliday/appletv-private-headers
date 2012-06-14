/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAnimation.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIScrollViewScrollAnimation : UIAnimation {
@private
	CGPoint _originalOffset;	// 44 = 0x2c
	CGPoint _targetOffset;	// 52 = 0x34
	float _accuracy;	// 60 = 0x3c
}
- (void)adjustForContentOffsetDelta:(CGPoint)contentOffsetDelta;	// 0x354ca925
- (void)dealloc;	// 0x3549c879
- (void)setProgress:(float)progress;	// 0x3549c229
@end

