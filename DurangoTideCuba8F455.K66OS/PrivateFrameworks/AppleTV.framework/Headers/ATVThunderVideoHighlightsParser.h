/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "ATVThunderXMLParser.h"

@class NSMutableString, NSMutableArray, ATVThunderVideoHighlight;

__attribute__((visibility("hidden")))
@interface ATVThunderVideoHighlightsParser : NSObject <ATVThunderXMLParser> {
@private
	NSMutableArray *_videoHighlights;	// 4 = 0x4
	NSMutableArray *_recaps;	// 8 = 0x8
	ATVThunderVideoHighlight *_currentHighlight;	// 12 = 0xc
	NSMutableString *_currentElement;	// 16 = 0x10
}
- (id)init;	// 0x306d8c11
- (id)createStorePage;	// 0x306d8c9d
- (id)createStorePageForError:(int)error;	// 0x306d9129
- (void)dealloc;	// 0x306d8b91
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x306d87d9
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x306d8a65
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x306d87b5
@end

