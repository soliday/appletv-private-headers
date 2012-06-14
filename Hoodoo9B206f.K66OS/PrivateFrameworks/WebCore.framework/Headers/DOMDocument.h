/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMNode.h"

@class DOMHTMLCollection, DOMAbstractView, DOMDocumentType, DOMImplementation, DOMElement, DOMHTMLElement, DOMStyleSheetList, NSString;

@interface DOMDocument : DOMNode {
}
@property(readonly, copy) NSString *URL;	// G=0x3346dd8d; 
@property(readonly, retain) DOMHTMLCollection *anchors;	// G=0x3346fef5; 
@property(readonly, retain) DOMHTMLCollection *applets;	// G=0x3346fb1d; 
@property(retain) DOMHTMLElement *body;	// G=0x333c8e2d; S=0x3346f7b5; 
@property(readonly, copy) NSString *characterSet;	// G=0x3346e661; 
@property(copy) NSString *charset;	// G=0x3346e515; S=0x33470189; 
@property(copy) NSString *cookie;	// G=0x3346f511; S=0x3346f66d; 
@property(readonly, copy) NSString *defaultCharset;	// G=0x334702c1; 
@property(readonly, retain) DOMAbstractView *defaultView;	// G=0x3346efb9; 
@property(readonly, retain) DOMDocumentType *doctype;	// G=0x33250811; 
@property(readonly, retain) DOMElement *documentElement;	// G=0x3346dcbd; 
@property(copy) NSString *documentURI;	// G=0x3346e25d; S=0x3346ee81; 
@property(readonly, copy) NSString *domain;	// G=0x3346f3c5; 
@property(readonly, retain) DOMHTMLCollection *forms;	// G=0x3346fdad; 
@property(readonly, retain) DOMHTMLCollection *images;	// G=0x3346f9d5; 
@property(readonly, retain) DOMImplementation *implementation;	// G=0x3346dbf9; 
@property(readonly, copy) NSString *inputEncoding;	// G=0x3346de59; 
@property(readonly, copy) NSString *lastModified;	// G=0x3347003d; 
@property(readonly, retain) DOMHTMLCollection *links;	// G=0x3346fc65; 
@property(readonly, copy) NSString *preferredStylesheetSet;	// G=0x33470559; 
@property(readonly, copy) NSString *readyState;	// G=0x3347040d; 
@property(readonly, copy) NSString *referrer;	// G=0x3346f279; 
@property(copy) NSString *selectedStylesheetSet;	// G=0x334706a5; S=0x334707f1; 
@property(readonly, retain) DOMStyleSheetList *styleSheets;	// G=0x3346f07d; 
@property(copy) NSString *title;	// G=0x3346e3b9; S=0x3346f141; 
@property(readonly, copy) NSString *xmlEncoding;	// G=0x3346dfa5; 
@property(assign) BOOL xmlStandalone;	// G=0x3346dbc9; S=0x3346eda5; 
@property(copy) NSString *xmlVersion;	// G=0x3346e101; S=0x3346e7ad; 
// declared property getter: - (id)URL;	// 0x3346dd8d
- (id)adoptNode:(id)node;	// 0x33472545
// declared property getter: - (id)anchors;	// 0x3346fef5
// declared property getter: - (id)applets;	// 0x3346fb1d
// declared property getter: - (id)body;	// 0x333c8e2d
- (id)caretRangeFromPoint:(int)point y:(int)y;	// 0x334757d5
// declared property getter: - (id)characterSet;	// 0x3346e661
// declared property getter: - (id)charset;	// 0x3346e515
- (id)compatMode;	// 0x33470929
// declared property getter: - (id)cookie;	// 0x3346f511
- (id)createAttribute:(id)attribute;	// 0x334715a5
- (id)createAttributeNS:(id)ns :(id)arg2;	// 0x33471e61
- (id)createAttributeNS:(id)ns qualifiedName:(id)name;	// 0x33471c0d
- (id)createCDATASection:(id)section;	// 0x33470f31
- (id)createCSSStyleDeclaration;	// 0x333c19a5
- (id)createComment:(id)comment;	// 0x33470d71
- (id)createDocumentFragment;	// 0x33470a75
- (id)createElement:(id)element;	// 0x333dbdc1
- (id)createElementNS:(id)ns :(id)arg2;	// 0x3346eb4d
- (id)createElementNS:(id)ns qualifiedName:(id)name;	// 0x3346e8f5
- (id)createEntityReference:(id)reference;	// 0x33471779
- (id)createEvent:(id)event;	// 0x33472715
- (id)createExpression:(id)expression :(id)arg2;	// 0x33473dd5
- (id)createExpression:(id)expression resolver:(id)resolver;	// 0x33473ab9
- (id)createNSResolver:(id)resolver;	// 0x334740f1
- (id)createNodeIterator:(id)iterator :(unsigned)arg2 :(id)arg3 :(BOOL)arg4;	// 0x334728f5
- (id)createNodeIterator:(id)iterator whatToShow:(unsigned)show filter:(id)filter expandEntityReferences:(BOOL)references;	// 0x333d6b79
- (id)createProcessingInstruction:(id)instruction :(id)arg2;	// 0x33471355
- (id)createProcessingInstruction:(id)instruction data:(id)data;	// 0x33471105
- (id)createRange;	// 0x333c9c01
- (id)createTextNode:(id)node;	// 0x33470bb1
- (id)createTouch:(id)touch target:(id)target identifier:(int)identifier pageX:(int)x pageY:(int)y screenX:(int)x6 screenY:(int)y7;	// 0x33476695
- (id)createTouchList;	// 0x33476825
- (id)createTreeWalker:(id)walker :(unsigned)arg2 :(id)arg3 :(BOOL)arg4;	// 0x334732fd
- (id)createTreeWalker:(id)walker whatToShow:(unsigned)show filter:(id)filter expandEntityReferences:(BOOL)references;	// 0x33472df9
// declared property getter: - (id)defaultCharset;	// 0x334702c1
// declared property getter: - (id)defaultView;	// 0x3346efb9
// declared property getter: - (id)doctype;	// 0x33250811
// declared property getter: - (id)documentElement;	// 0x3346dcbd
// declared property getter: - (id)documentURI;	// 0x3346e25d
// declared property getter: - (id)domain;	// 0x3346f3c5
- (id)elementFromPoint:(int)point y:(int)y;	// 0x33475709
- (id)evaluate:(id)evaluate :(id)arg2 :(id)arg3 :(unsigned short)arg4 :(id)arg5;	// 0x3347459d
- (id)evaluate:(id)evaluate contextNode:(id)node resolver:(id)resolver type:(unsigned short)type inResult:(id)result;	// 0x3347424d
- (BOOL)execCommand:(id)command;	// 0x33474ca1
- (BOOL)execCommand:(id)command userInterface:(BOOL)interface;	// 0x33474ac9
- (BOOL)execCommand:(id)command userInterface:(BOOL)interface value:(id)value;	// 0x334748ed
// declared property getter: - (id)forms;	// 0x3346fdad
- (id)getComputedStyle:(id)style :(id)arg2;	// 0x33475b11
- (id)getComputedStyle:(id)style pseudoElement:(id)element;	// 0x3347591d
- (id)getElementById:(id)anId;	// 0x331c5735
- (id)getElementsByClassName:(id)name;	// 0x33476115
- (id)getElementsByName:(id)name;	// 0x3347553d
- (id)getElementsByTagName:(id)name;	// 0x333c98e5
- (id)getElementsByTagNameNS:(id)ns :(id)arg2;	// 0x334722fd
- (id)getElementsByTagNameNS:(id)ns localName:(id)name;	// 0x334720b5
- (id)getMatchedCSSRules:(id)rules pseudoElement:(id)element;	// 0x33475d05
- (id)getMatchedCSSRules:(id)rules pseudoElement:(id)element authorOnly:(BOOL)only;	// 0x33475f09
- (id)getOverrideStyle:(id)style :(id)arg2;	// 0x3347395d
- (id)getOverrideStyle:(id)style pseudoElement:(id)element;	// 0x33473801
- (id)head;	// 0x3346f911
// declared property getter: - (id)images;	// 0x3346f9d5
// declared property getter: - (id)implementation;	// 0x3346dbf9
- (id)importNode:(id)node :(BOOL)arg2;	// 0x33471aad
- (id)importNode:(id)node deep:(BOOL)deep;	// 0x3347194d
// declared property getter: - (id)inputEncoding;	// 0x3346de59
// declared property getter: - (id)lastModified;	// 0x3347003d
// declared property getter: - (id)links;	// 0x3346fc65
// declared property getter: - (id)preferredStylesheetSet;	// 0x33470559
- (BOOL)queryCommandEnabled:(id)enabled;	// 0x33474e6d
- (BOOL)queryCommandIndeterm:(id)indeterm;	// 0x33474fa9
- (BOOL)queryCommandState:(id)state;	// 0x334750e5
- (BOOL)queryCommandSupported:(id)supported;	// 0x33475221
- (id)queryCommandValue:(id)value;	// 0x3347535d
- (id)querySelector:(id)selector;	// 0x334762e1
- (id)querySelectorAll:(id)all;	// 0x334764b5
// declared property getter: - (id)readyState;	// 0x3347040d
// declared property getter: - (id)referrer;	// 0x3346f279
// declared property getter: - (id)selectedStylesheetSet;	// 0x334706a5
// declared property setter: - (void)setBody:(id)body;	// 0x3346f7b5
// declared property setter: - (void)setCharset:(id)charset;	// 0x33470189
// declared property setter: - (void)setCookie:(id)cookie;	// 0x3346f66d
// declared property setter: - (void)setDocumentURI:(id)uri;	// 0x3346ee81
// declared property setter: - (void)setSelectedStylesheetSet:(id)set;	// 0x334707f1
// declared property setter: - (void)setTitle:(id)title;	// 0x3346f141
// declared property setter: - (void)setXmlStandalone:(BOOL)standalone;	// 0x3346eda5
// declared property setter: - (void)setXmlVersion:(id)version;	// 0x3346e7ad
// declared property getter: - (id)styleSheets;	// 0x3346f07d
// declared property getter: - (id)title;	// 0x3346e3b9
// declared property getter: - (id)xmlEncoding;	// 0x3346dfa5
// declared property getter: - (BOOL)xmlStandalone;	// 0x3346dbc9
// declared property getter: - (id)xmlVersion;	// 0x3346e101
@end

