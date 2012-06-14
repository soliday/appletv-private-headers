/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRListControl;

__attribute__((visibility("hidden")))
@interface ListAnimationDelegate : NSObject {
@private
	BRListControl *_list;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithList:(id)list;	// 0x329deb41
- (void)animationDidStart:(id)animation;	// 0x329dec31
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x329dec41
- (void)clearScroll;	// 0x329deb85
- (void)decrementBalance;	// 0x329debd9
- (void)incrementBalance;	// 0x329deb99
- (BOOL)scrolling;	// 0x329dec19
@end

