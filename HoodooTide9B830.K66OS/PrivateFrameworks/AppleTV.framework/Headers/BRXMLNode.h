/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRXMLNode.h"
#import "AppleTV-Structs.h"


@interface BRXMLNode : NSObject {
@private
	xmlNode *_privateXmlNode;	// 4 = 0x4
}
@property(retain) id associatedObject;	// G=0x32a95211; S=0x32a95151; converted property
@property(retain) id textContent;	// G=0x32a94a61; S=0x32a94be1; converted property
- (id)XMLString;	// 0x32a930ed
- (BOOL)_insertChild:(id)child otherChild:(id)child2 insertFunction:(/*function-pointer*/ void *)function error:(id *)error;	// 0x32a93c5d
- (BOOL)appendChild:(id)child error:(id *)error;	// 0x32a93991
// converted property getter: - (id)associatedObject;	// 0x32a95211
- (id)children;	// 0x32a937e1
- (id)copyWithZone:(NSZone *)zone;	// 0x32a92b29
- (id)description;	// 0x32a92ce9
- (id)getAttribute:(id)attribute;	// 0x32a94e1d
- (BOOL)insertChild:(id)child after:(id)after error:(id *)error;	// 0x32a94091
- (BOOL)insertChild:(id)child before:(id)before error:(id *)error;	// 0x32a94065
- (BOOL)isEqual:(id)equal;	// 0x32a92ed5
- (id)name;	// 0x32a94141
- (id)nextSibling;	// 0x32a94315
- (id)nextSiblingIgnoringWhitespace:(BOOL)whitespace;	// 0x32a94479
- (id)nodesForXPath:(id)xpath error:(id *)error;	// 0x32a932fd
- (id)objectValue;	// 0x32a94c61
- (id)ownerDocument;	// 0x32a95369
- (id)parent;	// 0x32a94609
- (id)previousSibling;	// 0x32a9476d
- (id)previousSiblingIgnoringWhitespace:(BOOL)whitespace;	// 0x32a948d1
- (void)removeAttribute:(id)attribute;	// 0x32a950c1
- (void)removeFromParent;	// 0x32a94109
- (BOOL)replaceChild:(id)child with:(id)with error:(id *)error;	// 0x32a940bd
// converted property setter: - (void)setAssociatedObject:(id)object;	// 0x32a95151
- (void)setAttribute:(id)attribute withValue:(id)value;	// 0x32a94fdd
// converted property setter: - (void)setTextContent:(id)content;	// 0x32a94be1
- (id)stringValue;	// 0x32a94c71
// converted property getter: - (id)textContent;	// 0x32a94a61
@end

@interface BRXMLNode (Private)
+ (void)load;	// 0x32a955d5
+ (id)nodeWithXmlNode:(xmlNode *)xmlNode;	// 0x32a95701
- (id)init;	// 0x32a95929
- (id)initWithXmlNode:(xmlNode *)xmlNode;	// 0x32a95795
- (void)clearNode;	// 0x32a95b95
- (void)dealloc;	// 0x32a9596d
- (void)lockNode:(id)node;	// 0x32a95af5
@end

