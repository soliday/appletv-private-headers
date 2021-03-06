/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMNode.h"

@class NSString, DOMCSSStyleDeclaration;

@interface DOMElement : DOMNode {
}
@property(readonly, assign) unsigned childElementCount;	// G=0x31bdc515; 
@property(readonly, assign) int clientHeight;	// G=0x31bdc459; 
@property(readonly, assign) int clientLeft;	// G=0x31bdc225; 
@property(readonly, assign) int clientTop;	// G=0x31bdc2e1; 
@property(readonly, assign) int clientWidth;	// G=0x31bdc39d; 
@property(readonly, retain) DOMElement *firstElementChild;	// G=0x31bdf495; 
@property(readonly, copy) NSString *innerText;	// G=0x31bdc5d1; 
@property(readonly, retain) DOMElement *lastElementChild;	// G=0x31bdf559; 
@property(readonly, retain) DOMElement *nextElementSibling;	// G=0x31bdf6e1; 
@property(readonly, assign) int offsetHeight;	// G=0x31bdbda9; 
@property(readonly, assign) int offsetLeft;	// G=0x31bdbb69; 
@property(readonly, retain) DOMElement *offsetParent;	// G=0x31bdf3d1; 
@property(readonly, assign) int offsetTop;	// G=0x31bdbc29; 
@property(readonly, assign) int offsetWidth;	// G=0x31bdbce9; 
@property(readonly, retain) DOMElement *previousElementSibling;	// G=0x31bdf61d; 
@property(readonly, assign) int scrollHeight;	// G=0x31b3a75d; 
@property(assign) int scrollLeft;	// G=0x31bdbe69; S=0x31bdbf29; 
@property(assign) int scrollTop;	// G=0x31bdbfe9; S=0x31bdc0a9; 
@property(readonly, assign) int scrollWidth;	// G=0x31b3a4d9; 
@property(readonly, retain) DOMCSSStyleDeclaration *style;	// G=0x31b3b211; 
@property(readonly, copy) NSString *tagName;	// G=0x31a60c89; 
- (GSFontRef)_font;	// 0x31bc7511
- (id)_getURLAttribute:(id)attribute;	// 0x31bc7545
- (void)blur;	// 0x31bdea41
// declared property getter: - (unsigned)childElementCount;	// 0x31bdc515
// declared property getter: - (int)clientHeight;	// 0x31bdc459
// declared property getter: - (int)clientLeft;	// 0x31bdc225
// declared property getter: - (int)clientTop;	// 0x31bdc2e1
// declared property getter: - (int)clientWidth;	// 0x31bdc39d
- (BOOL)contains:(id)contains;	// 0x31bdebc5
// declared property getter: - (id)firstElementChild;	// 0x31bdf495
- (void)focus;	// 0x31bdc169
- (id)getAttribute:(id)attribute;	// 0x31bdc71d
- (id)getAttributeNS:(id)ns :(id)arg2;	// 0x31bdd0a1
- (id)getAttributeNS:(id)ns localName:(id)name;	// 0x31bdceb5
- (id)getAttributeNode:(id)node;	// 0x31bdca55
- (id)getAttributeNodeNS:(id)ns :(id)arg2;	// 0x31bde1d9
- (id)getAttributeNodeNS:(id)ns localName:(id)name;	// 0x31bddf9d
- (id)getElementsByClassName:(id)name;	// 0x31bdeed9
- (id)getElementsByTagName:(id)name;	// 0x31b41e71
- (id)getElementsByTagNameNS:(id)ns :(id)arg2;	// 0x31bddd55
- (id)getElementsByTagNameNS:(id)ns localName:(id)name;	// 0x31bddb0d
- (BOOL)hasAttribute:(id)attribute;	// 0x31bde565
- (BOOL)hasAttributeNS:(id)ns :(id)arg2;	// 0x31bde871
- (BOOL)hasAttributeNS:(id)ns localName:(id)name;	// 0x31bde6a1
// declared property getter: - (id)innerText;	// 0x31bdc5d1
- (BOOL)isFocused;	// 0x31bc74f5
// declared property getter: - (id)lastElementChild;	// 0x31bdf559
// declared property getter: - (id)nextElementSibling;	// 0x31bdf6e1
// declared property getter: - (int)offsetHeight;	// 0x31bdbda9
// declared property getter: - (int)offsetLeft;	// 0x31bdbb69
// declared property getter: - (id)offsetParent;	// 0x31bdf3d1
// declared property getter: - (int)offsetTop;	// 0x31bdbc29
// declared property getter: - (int)offsetWidth;	// 0x31bdbce9
// declared property getter: - (id)previousElementSibling;	// 0x31bdf61d
- (id)querySelector:(id)selector;	// 0x31bdf7a5
- (id)querySelectorAll:(id)all;	// 0x31bdf0a5
- (void)removeAttribute:(id)attribute;	// 0x31b0f92d
- (void)removeAttributeNS:(id)ns :(id)arg2;	// 0x31bdd92d
- (void)removeAttributeNS:(id)ns localName:(id)name;	// 0x31bdd74d
- (id)removeAttributeNode:(id)node;	// 0x31bdcd65
- (void)scrollByLines:(int)lines;	// 0x31bded61
- (void)scrollByPages:(int)pages;	// 0x31bdee1d
// declared property getter: - (int)scrollHeight;	// 0x31b3a75d
- (void)scrollIntoView:(BOOL)view;	// 0x31bdeaf9
- (void)scrollIntoViewIfNeeded:(BOOL)needed;	// 0x31bdec95
// declared property getter: - (int)scrollLeft;	// 0x31bdbe69
// declared property getter: - (int)scrollTop;	// 0x31bdbfe9
// declared property getter: - (int)scrollWidth;	// 0x31b3a4d9
- (void)setAttribute:(id)attribute :(id)arg2;	// 0x31bdc875
- (void)setAttribute:(id)attribute value:(id)value;	// 0x31b107cd
- (void)setAttributeNS:(id)ns :(id)arg2 :(id)arg3;	// 0x31bdd4ed
- (void)setAttributeNS:(id)ns qualifiedName:(id)name value:(id)value;	// 0x31bdd28d
- (id)setAttributeNode:(id)node;	// 0x31bdcc15
- (id)setAttributeNodeNS:(id)ns;	// 0x31bde415
// declared property setter: - (void)setScrollLeft:(int)left;	// 0x31bdbf29
// declared property setter: - (void)setScrollTop:(int)top;	// 0x31bdc0a9
- (int)structuralComplexityContribution;	// 0x31c28575
// declared property getter: - (id)style;	// 0x31b3b211
// declared property getter: - (id)tagName;	// 0x31a60c89
- (BOOL)webkitMatchesSelector:(id)selector;	// 0x31bdf285
@end

