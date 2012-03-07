/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "NSXMLParserDelegate.h"

@class NSMutableString;

@interface BRBaseParserDelegate : NSObject <NSXMLParserDelegate> {
@private
	NSMutableString *_characters;	// 4 = 0x4
	BOOL _ignoreCharacters;	// 8 = 0x8
	BOOL _trimWhitespace;	// 9 = 0x9
}
@property(readonly, retain) NSMutableString *characters;	// G=0x3429ece5; converted property
@property(assign) BOOL ignoreCharacters;	// G=0x3429ef71; S=0x3429ef61; converted property
@property(assign) BOOL trimWhitespace;	// G=0x3429ed4d; S=0x3429ed3d; converted property
// converted property getter: - (id)characters;	// 0x3429ece5
- (void)dealloc;	// 0x3429eaad
- (SEL)endSelectorForElementName:(id)elementName namespaceURI:(id)uri;	// 0x3429ee49
// converted property getter: - (BOOL)ignoreCharacters;	// 0x3429ef71
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x3429eb8d
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x3429eaf9
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x3429ec41
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;	// 0x3429ece1
- (void)resetCharacters;	// 0x3429ef35
// converted property setter: - (void)setIgnoreCharacters:(BOOL)characters;	// 0x3429ef61
// converted property setter: - (void)setTrimWhitespace:(BOOL)whitespace;	// 0x3429ed3d
- (SEL)startSelectorForElementName:(id)elementName namespaceURI:(id)uri;	// 0x3429ed5d
// converted property getter: - (BOOL)trimWhitespace;	// 0x3429ed4d
@end
