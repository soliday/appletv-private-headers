/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMNode.h"

@class DOMElement, DOMCSSStyleDeclaration, NSString;

__attribute__((visibility("hidden")))
@interface DOMAttr : DOMNode {
}
@property(readonly, copy) NSString *name;	// G=0x3181c421; 
@property(readonly, retain) DOMElement *ownerElement;	// G=0x3181c68d; 
@property(readonly, assign) BOOL specified;	// G=0x3181c3e5; 
@property(readonly, retain) DOMCSSStyleDeclaration *style;	// G=0x3181c6c5; 
@property(copy) NSString *value;	// G=0x3181c3f9; S=0x3181c559; 
- (BOOL)isId;	// 0x3181c6a9
// declared property getter: - (id)name;	// 0x3181c421
// declared property getter: - (id)ownerElement;	// 0x3181c68d
// declared property setter: - (void)setValue:(id)value;	// 0x3181c559
// declared property getter: - (BOOL)specified;	// 0x3181c3e5
// declared property getter: - (id)style;	// 0x3181c6c5
// declared property getter: - (id)value;	// 0x3181c3f9
@end
