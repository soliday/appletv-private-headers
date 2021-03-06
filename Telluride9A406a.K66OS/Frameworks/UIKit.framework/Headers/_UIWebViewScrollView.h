/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebScrollView.h"

@class UIWebBrowserView, _UIWebViewScrollViewDelegateForwarder;

__attribute__((visibility("hidden")))
@interface _UIWebViewScrollView : UIWebScrollView {
@private
	_UIWebViewScrollViewDelegateForwarder *_forwarder;	// 388 = 0x184
	BOOL _bouncesSetExplicitly;	// 392 = 0x188
	UIWebBrowserView *_browserView;	// 396 = 0x18c
}
@property(assign) id delegate;	// G=0x358b475d; S=0x3581d715; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x3581a839
- (void)_setWebView:(id)view;	// 0x3581a8b1
- (void)_weaklySetBouncesHorizontally:(BOOL)horizontally;	// 0x3581b2b5
- (void)dealloc;	// 0x3581d7e9
// converted property getter: - (id)delegate;	// 0x358b475d
- (void)setBounces:(BOOL)bounces;	// 0x358b469d
- (void)setBouncesHorizontally:(BOOL)horizontally;	// 0x358b471d
- (void)setBouncesVertically:(BOOL)vertically;	// 0x358b46dd
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3581d715
@end

