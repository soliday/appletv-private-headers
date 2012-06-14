/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMDocument.h"

@class DOMHTMLCollection, DOMElement, NSString;

@interface DOMHTMLDocument : DOMDocument {
}
@property(readonly, retain) DOMElement *activeElement;	// G=0x334898c9; 
@property(copy) NSString *alinkColor;	// G=0x33489e95; S=0x33489fe1; 
@property(copy) NSString *bgColor;	// G=0x3348998d; S=0x33489ad9; 
@property(readonly, copy) NSString *compatMode;	// G=0x3348977d; 
@property(copy) NSString *designMode;	// G=0x334894f9; S=0x33489645; 
@property(copy) NSString *dir;	// G=0x33489275; S=0x334893c1; 
@property(readonly, retain) DOMHTMLCollection *embeds;	// G=0x33488d25; 
@property(copy) NSString *fgColor;	// G=0x33489c11; S=0x33489d5d; 
@property(readonly, assign) int height;	// G=0x334891b9; 
@property(copy) NSString *linkColor;	// G=0x3348a119; S=0x3348a265; 
@property(readonly, retain) DOMHTMLCollection *plugins;	// G=0x33488e6d; 
@property(readonly, retain) DOMHTMLCollection *scripts;	// G=0x33488fb5; 
@property(copy) NSString *vlinkColor;	// G=0x3348a39d; S=0x3348a4e9; 
@property(readonly, assign) int width;	// G=0x334890fd; 
- (id)_createDocumentFragmentWithMarkupString:(id)markupString baseURLString:(id)string;	// 0x3347e6d1
- (id)_createDocumentFragmentWithText:(id)text;	// 0x3347e45d
// declared property getter: - (id)activeElement;	// 0x334898c9
// declared property getter: - (id)alinkColor;	// 0x33489e95
// declared property getter: - (id)bgColor;	// 0x3348998d
- (void)captureEvents;	// 0x3348aabd
- (void)clear;	// 0x3348aa05
- (void)close;	// 0x3348a6dd
// declared property getter: - (id)compatMode;	// 0x3348977d
- (id)createDocumentFragmentWithMarkupString:(id)markupString baseURL:(id)url;	// 0x333d6091
- (id)createDocumentFragmentWithText:(id)text;	// 0x3347e4dd
// declared property getter: - (id)designMode;	// 0x334894f9
// declared property getter: - (id)dir;	// 0x33489275
// declared property getter: - (id)embeds;	// 0x33488d25
// declared property getter: - (id)fgColor;	// 0x33489c11
- (BOOL)hasFocus;	// 0x3348ac2d
// declared property getter: - (int)height;	// 0x334891b9
// declared property getter: - (id)linkColor;	// 0x3348a119
- (void)open;	// 0x3348a621
// declared property getter: - (id)plugins;	// 0x33488e6d
- (void)releaseEvents;	// 0x3348ab75
// declared property getter: - (id)scripts;	// 0x33488fb5
// declared property setter: - (void)setAlinkColor:(id)color;	// 0x33489fe1
// declared property setter: - (void)setBgColor:(id)color;	// 0x33489ad9
// declared property setter: - (void)setDesignMode:(id)mode;	// 0x33489645
// declared property setter: - (void)setDir:(id)dir;	// 0x334893c1
// declared property setter: - (void)setFgColor:(id)color;	// 0x33489d5d
// declared property setter: - (void)setLinkColor:(id)color;	// 0x3348a265
// declared property setter: - (void)setVlinkColor:(id)color;	// 0x3348a4e9
// declared property getter: - (id)vlinkColor;	// 0x3348a39d
// declared property getter: - (int)width;	// 0x334890fd
- (void)write:(id)write;	// 0x3348a795
- (void)writeln:(id)writeln;	// 0x3348a8cd
@end

