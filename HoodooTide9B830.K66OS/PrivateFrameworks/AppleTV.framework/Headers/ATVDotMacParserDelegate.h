/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseParserDelegate.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVDotMacParserDelegate : BRBaseParserDelegate {
@private
	NSMutableArray *_entries;	// 12 = 0xc
	BOOL _entryCreated;	// 16 = 0x10
	int _curIndex;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *entries;	// G=0x328a9ce1; converted property
+ (id)delegate;	// 0x328a9b69
- (id)init;	// 0x328a9ba1
- (void)__atv_end_entry;	// 0x328a9cbd
- (void)__atv_start_entry:(id)entry;	// 0x328a9c69
- (id)_selectorForElement:(id)element qName:(id)name end:(BOOL)end;	// 0x328a9efd
- (void)dealloc;	// 0x328a9c19
- (id)endSelectors;	// 0x328a9ef9
// converted property getter: - (id)entries;	// 0x328a9ce1
- (id)modDate;	// 0x328a9c65
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x328a9e3d
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x328a9d75
- (void)setEntryObject:(id)object forKey:(id)key;	// 0x328a9d0d
- (id)startSelectors;	// 0x328a9ef5
@end

