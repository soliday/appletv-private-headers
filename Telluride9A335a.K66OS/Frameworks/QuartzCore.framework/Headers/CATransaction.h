/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"


@interface CATransaction : NSObject {
}
+ (void)activate;	// 0x33634eed
+ (double)animationDuration;	// 0x33634e7d
+ (id)animationTimingFunction;	// 0x33634e31
+ (void)begin;	// 0x3357604d
+ (BOOL)beginWithoutBlocking;	// 0x33634cb1
+ (void)commit;	// 0x335766e9
+ (id)completionBlock;	// 0x33634dcd
+ (unsigned)currentState;	// 0x33634f05
+ (BOOL)disableActions;	// 0x33634df1
+ (void)flush;	// 0x3359e6a1
+ (void)lock;	// 0x335703d1
+ (void)setAnimationDuration:(double)duration;	// 0x33634e55
+ (void)setAnimationTimingFunction:(id)function;	// 0x33634e15
+ (void)setCompletionBlock:(id)block;	// 0x33634d89
+ (void)setDisableActions:(BOOL)actions;	// 0x335763bd
+ (void)setValue:(id)value forKey:(id)key;	// 0x33576075
+ (void)synchronize;	// 0x335a09b1
+ (void)unlock;	// 0x335704f9
+ (id)valueForKey:(id)key;	// 0x33634cf5
- (void)_addTimer:(CFRunLoopTimerRef)timer;	// 0x33634c8d
@end
