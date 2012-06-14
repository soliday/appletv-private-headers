/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
 */

#import <NSObject.h> // Unknown library
#import "NSXMLParserDelegate.h"

@class NSMutableString, NSMutableDictionary;

@interface MobileActivationNSXMLParserDelegate : NSObject <NSXMLParserDelegate> {
	int _state;	// 4 = 0x4
	bool _renderHTML;	// 8 = 0x8
	NSMutableString *_currentPlist;	// 12 = 0xc
	NSMutableDictionary *_activationTicket;	// 16 = 0x10
}
- (id)init;	// 0x318dbeed
- (id)activationTicket:(id *)ticket;	// 0x318dc57d
- (id)activationTicket:(id *)ticket andRenderHTML:(bool *)html;	// 0x318dc3d1
- (void)appendClosingTagForElementName:(id)elementName;	// 0x318dc155
- (void)appendOpeningTagForElementName:(id)elementName andAttributes:(id)attributes;	// 0x318dc1fd
- (void)dealloc;	// 0x318dc599
- (id)flattenedDictString:(id)string;	// 0x318dc2cd
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x318dc0fd
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x318dbfd9
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x318dbf59
- (id)stringForState:(int)state;	// 0x318dbeb1
@end
