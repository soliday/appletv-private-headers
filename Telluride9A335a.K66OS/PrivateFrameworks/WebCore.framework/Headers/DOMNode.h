/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMEventTarget.h"
#import "DOMObject.h"

@class DOMElement, NSString, DOMNamedNodeMap, DOMNodeList, DOMDocument;

@interface DOMNode : DOMObject <DOMEventTarget> {
}
@property(readonly, retain) DOMNamedNodeMap *attributes;	// G=0x35bf7fb1; 
@property(readonly, copy) NSString *baseURI;	// G=0x35bf7a91; 
@property(readonly, retain) DOMNodeList *childNodes;	// G=0x35b17799; 
@property(readonly, retain) DOMNode *firstChild;	// G=0x35919cbd; 
@property(readonly, assign) BOOL isContentEditable;	// G=0x35bf7651; 
@property(readonly, retain) DOMNode *lastChild;	// G=0x35b17e05; 
@property(readonly, copy) NSString *localName;	// G=0x35bf7be1; 
@property(readonly, copy) NSString *namespaceURI;	// G=0x35bf7ed9; 
@property(readonly, retain) DOMNode *nextSibling;	// G=0x35948ea9; 
@property(readonly, copy) NSString *nodeName;	// G=0x35b09bed; 
@property(readonly, assign) unsigned short nodeType;	// G=0x35948c55; 
@property(copy) NSString *nodeValue;	// G=0x35b11e0d; S=0x35bf80c5; 
@property(readonly, retain) DOMDocument *ownerDocument;	// G=0x35b0fe09; 
@property(readonly, retain) DOMElement *parentElement;	// G=0x35bf770d; 
@property(readonly, retain) DOMNode *parentNode;	// G=0x35b09d3d; 
@property(copy) NSString *prefix;	// G=0x35bf7e01; S=0x35bf7cb9; 
@property(readonly, retain) DOMNode *previousSibling;	// G=0x35b1c319; 
@property(copy) NSString *textContent;	// G=0x35bf7941; S=0x35bf77f9; 
- (Element *)_linkElement;	// 0x35b9fb85
- (RootObject *)_rootObject;	// 0x35b9fbf1
- (WKQuad)absoluteQuad;	// 0x35b9fd0d
- (WKQuad)absoluteQuadAndInsideFixedPosition:(BOOL *)position;	// 0x35b9fd3d
- (id)absoluteQuads;	// 0x35c03075
- (void)addEventListener:(id)listener :(id)arg2 :(BOOL)arg3;	// 0x35bf6049
- (void)addEventListener:(id)listener listener:(id)listener2 useCapture:(BOOL)capture;	// 0x35b152d9
- (id)appendChild:(id)child;	// 0x35b1673d
// declared property getter: - (id)attributes;	// 0x35bf7fb1
// declared property getter: - (id)baseURI;	// 0x35bf7a91
- (id)borderRadii;	// 0x35c03395
- (CGRect)boundingBox;	// 0x35b9fc11
- (CGRect)boundingBoxUsingTransforms;	// 0x35b9fc65
- (id)boundingBoxes;	// 0x35c02ed5
- (CGRect)boundingFrame;	// 0x35b9fd25
// declared property getter: - (id)childNodes;	// 0x35b17799
- (id)cloneNode:(BOOL)node;	// 0x35bf6e45
- (unsigned short)compareDocumentPosition:(id)position;	// 0x35bf62bd
- (float)computedFontSize;	// 0x35b9fbc1
- (BOOL)containsOnlyInlineObjects;	// 0x35c035d5
- (void)dealloc;	// 0x35950d51
- (id)description;	// 0x35b9f995
- (BOOL)dispatchEvent:(id)event;	// 0x35bf5b35
- (void)finalize;	// 0x35bf820d
- (id)findExplodedTextNodeAtPoint:(CGPoint)point;	// 0x35c03c45
// declared property getter: - (id)firstChild;	// 0x35919cbd
- (BOOL)hasAttributes;	// 0x35bf6959
- (BOOL)hasChildNodes;	// 0x35919c4d
- (CGRect)hrefFrame;	// 0x35b9fcb9
- (id)hrefLabel;	// 0x35ba07f5
- (id)hrefTarget;	// 0x35ba07b5
- (id)hrefTitle;	// 0x35ba0911
- (id)hrefURL;	// 0x35ba060d
- (WKQuad)innerFrameQuad;	// 0x35ba0ac5
- (id)insertBefore:(id)before :(id)arg2;	// 0x35bf7369
- (id)insertBefore:(id)before refChild:(id)child;	// 0x35bf74dd
// declared property getter: - (BOOL)isContentEditable;	// 0x35bf7651
- (BOOL)isDefaultNamespace:(id)aNamespace;	// 0x35bf656d
- (BOOL)isEqualNode:(id)node;	// 0x35bf6889
- (BOOL)isSameNode:(id)node;	// 0x35bf5af1
- (BOOL)isSelectableBlock;	// 0x35c0361d
- (BOOL)isSupported:(id)supported :(id)arg2;	// 0x35bf6a25
- (BOOL)isSupported:(id)supported version:(id)version;	// 0x35bf6bd9
// declared property getter: - (id)lastChild;	// 0x35b17e05
- (id)lineBoxQuads;	// 0x35ba00c9
- (id)lineBoxRects;	// 0x35b9faa1
// declared property getter: - (id)localName;	// 0x35bf7be1
- (id)lookupNamespaceURI:(id)uri;	// 0x35bf638d
- (id)lookupPrefix:(id)prefix;	// 0x35bf66a9
// declared property getter: - (id)namespaceURI;	// 0x35bf7ed9
- (id)nextFocusNode;	// 0x35ba0ccd
// declared property getter: - (id)nextSibling;	// 0x35948ea9
// declared property getter: - (id)nodeName;	// 0x35b09bed
// declared property getter: - (unsigned short)nodeType;	// 0x35948c55
// declared property getter: - (id)nodeValue;	// 0x35b11e0d
- (void)normalize;	// 0x35bf6d8d
// declared property getter: - (id)ownerDocument;	// 0x35b0fe09
// declared property getter: - (id)parentElement;	// 0x35bf770d
// declared property getter: - (id)parentNode;	// 0x35b09d3d
// declared property getter: - (id)prefix;	// 0x35bf7e01
- (id)previousFocusNode;	// 0x35ba0e29
// declared property getter: - (id)previousSibling;	// 0x35b1c319
- (id)rangeOfContainingParagraph;	// 0x35c03659
- (id)removeChild:(id)child;	// 0x35bf6f99
- (void)removeEventListener:(id)listener :(id)arg2 :(BOOL)arg3;	// 0x35bf5ca1
- (void)removeEventListener:(id)listener listener:(id)listener2 useCapture:(BOOL)capture;	// 0x35bf5e75
- (id)replaceChild:(id)child :(id)arg2;	// 0x35bf7081
- (id)replaceChild:(id)child oldChild:(id)child2;	// 0x35bf71f5
// declared property setter: - (void)setNodeValue:(id)value;	// 0x35bf80c5
// declared property setter: - (void)setPrefix:(id)prefix;	// 0x35bf7cb9
// declared property setter: - (void)setTextContent:(id)content;	// 0x35bf77f9
// declared property getter: - (id)textContent;	// 0x35bf7941
- (float)textHeight;	// 0x35c03c05
- (id)textRects;	// 0x35ba0f85
@end

