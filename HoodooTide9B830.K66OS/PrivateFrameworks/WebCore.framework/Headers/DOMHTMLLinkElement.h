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
@property(readonly, copy) NSURL *absoluteLinkURL;	// G=0x35917499; 
@property(copy) NSString *charset;	// G=0x3591623d; S=0x3591685d; 
@property(assign) BOOL disabled;	// G=0x359160b1; S=0x35916171; 
@property(copy) NSString *href;	// G=0x3591727d; S=0x359169a1; 
@property(copy) NSString *hreflang;	// G=0x3591631d; S=0x35916ae5; 
@property(copy) NSString *media;	// G=0x359163fd; S=0x35916c29; 
@property(copy) NSString *rel;	// G=0x359164dd; S=0x35916d6d; 
@property(copy) NSString *rev;	// G=0x359165bd; S=0x35916eb1; 
@property(readonly, retain) DOMStyleSheet *sheet;	// G=0x359173d5; 
@property(copy) NSString *target;	// G=0x3591669d; S=0x35916ff5; 
@property(copy) NSString *type;	// G=0x3591677d; S=0x35917139; 
- (BOOL)_mediaQueryMatches;	// 0x358dcdf9
- (BOOL)_mediaQueryMatchesForOrientation:(int)orientation;	// 0x358dcd55
// declared property getter: - (id)absoluteLinkURL;	// 0x35917499
// declared property getter: - (id)charset;	// 0x3591623d
// declared property getter: - (BOOL)disabled;	// 0x359160b1
// declared property getter: - (id)href;	// 0x3591727d
// declared property getter: - (id)hreflang;	// 0x3591631d
// declared property getter: - (id)media;	// 0x359163fd
// declared property getter: - (id)rel;	// 0x359164dd
// declared property getter: - (id)rev;	// 0x359165bd
// declared property setter: - (void)setCharset:(id)charset;	// 0x3591685d
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x35916171
// declared property setter: - (void)setHref:(id)href;	// 0x359169a1
// declared property setter: - (void)setHreflang:(id)hreflang;	// 0x35916ae5
// declared property setter: - (void)setMedia:(id)media;	// 0x35916c29
// declared property setter: - (void)setRel:(id)rel;	// 0x35916d6d
// declared property setter: - (void)setRev:(id)rev;	// 0x35916eb1
// declared property setter: - (void)setTarget:(id)target;	// 0x35916ff5
// declared property setter: - (void)setType:(id)type;	// 0x35917139
// declared property getter: - (id)sheet;	// 0x359173d5
// declared property getter: - (id)target;	// 0x3591669d
// declared property getter: - (id)type;	// 0x3591677d
@end

