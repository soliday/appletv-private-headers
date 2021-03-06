/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSURL, DOMStyleSheet, NSString;

__attribute__((visibility("hidden")))
@interface DOMHTMLLinkElement : DOMHTMLElement {
}
@property(readonly, copy) NSURL *absoluteLinkURL;	// G=0x3375a6a5; 
@property(copy) NSString *charset;	// G=0x33759449; S=0x33759a69; 
@property(assign) BOOL disabled;	// G=0x337592bd; S=0x3375937d; 
@property(copy) NSString *href;	// G=0x3375a489; S=0x33759bad; 
@property(copy) NSString *hreflang;	// G=0x33759529; S=0x33759cf1; 
@property(copy) NSString *media;	// G=0x33759609; S=0x33759e35; 
@property(copy) NSString *rel;	// G=0x337596e9; S=0x33759f79; 
@property(copy) NSString *rev;	// G=0x337597c9; S=0x3375a0bd; 
@property(readonly, retain) DOMStyleSheet *sheet;	// G=0x3375a5e1; 
@property(copy) NSString *target;	// G=0x337598a9; S=0x3375a201; 
@property(copy) NSString *type;	// G=0x33759989; S=0x3375a345; 
- (BOOL)_mediaQueryMatches;	// 0x33720005
- (BOOL)_mediaQueryMatchesForOrientation:(int)orientation;	// 0x3371ff61
// declared property getter: - (id)absoluteLinkURL;	// 0x3375a6a5
// declared property getter: - (id)charset;	// 0x33759449
// declared property getter: - (BOOL)disabled;	// 0x337592bd
// declared property getter: - (id)href;	// 0x3375a489
// declared property getter: - (id)hreflang;	// 0x33759529
// declared property getter: - (id)media;	// 0x33759609
// declared property getter: - (id)rel;	// 0x337596e9
// declared property getter: - (id)rev;	// 0x337597c9
// declared property setter: - (void)setCharset:(id)charset;	// 0x33759a69
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x3375937d
// declared property setter: - (void)setHref:(id)href;	// 0x33759bad
// declared property setter: - (void)setHreflang:(id)hreflang;	// 0x33759cf1
// declared property setter: - (void)setMedia:(id)media;	// 0x33759e35
// declared property setter: - (void)setRel:(id)rel;	// 0x33759f79
// declared property setter: - (void)setRev:(id)rev;	// 0x3375a0bd
// declared property setter: - (void)setTarget:(id)target;	// 0x3375a201
// declared property setter: - (void)setType:(id)type;	// 0x3375a345
// declared property getter: - (id)sheet;	// 0x3375a5e1
// declared property getter: - (id)target;	// 0x337598a9
// declared property getter: - (id)type;	// 0x33759989
@end

