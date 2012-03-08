/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIScrollViewDelegate.h"
#import "UIKit-Structs.h"

@class UIWebOverflowScrollView;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollListener : NSObject <UIScrollViewDelegate> {
@private
	UIWebOverflowScrollView *_scrollView;	// 4 = 0x4
}
- (id)initWithScrollView:(id)scrollView;	// 0x35a2bac9
- (void)_didCompleteScrolling;	// 0x35a2bb79
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x35a2bc35
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0x35a2bc15
- (void)scrollViewDidScrollToTop:(id)scrollView;	// 0x35a2bc45
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x35a2bb21
@end
