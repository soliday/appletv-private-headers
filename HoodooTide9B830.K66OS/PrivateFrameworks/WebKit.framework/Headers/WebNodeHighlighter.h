/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebNodeHighlight, WebView;

__attribute__((visibility("hidden")))
@interface WebNodeHighlighter : NSObject {
@private
	WebView *_inspectedWebView;	// 4 = 0x4
	WebNodeHighlight *_currentHighlight;	// 8 = 0x8
}
- (id)initWithInspectedWebView:(id)inspectedWebView;	// 0x3523e9c9
- (void)dealloc;	// 0x352bd17d
- (void)didAttachWebNodeHighlight:(id)highlight;	// 0x352bd02d
- (void)hideHighlight;	// 0x352bd051
- (void)highlightNode:(id)node;	// 0x352bd0a9
- (void)willDetachWebNodeHighlight:(id)highlight;	// 0x352bd00d
@end

