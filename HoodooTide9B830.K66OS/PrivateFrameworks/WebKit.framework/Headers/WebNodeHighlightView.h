/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WAKView.h> // Unknown library
#import "WebKit-Structs.h"

@class WebNodeHighlight;

__attribute__((visibility("hidden")))
@interface WebNodeHighlightView : WAKView {
@private
	WebNodeHighlight *_webNodeHighlight;	// 68 = 0x44
}
@property(readonly, retain) WebNodeHighlight *webNodeHighlight;	// G=0x3529ea65; converted property
- (id)initWithWebNodeHighlight:(id)webNodeHighlight;	// 0x3529ea75
- (void)dealloc;	// 0x3529eb05
- (void)detachFromWebNodeHighlight;	// 0x3529ead9
- (void)drawInContext:(CGContextRef)context;	// 0x3529eb45
- (BOOL)isFlipped;	// 0x3529ea61
// converted property getter: - (id)webNodeHighlight;	// 0x3529ea65
@end

