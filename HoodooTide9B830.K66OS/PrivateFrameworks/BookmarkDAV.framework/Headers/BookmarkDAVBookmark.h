/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import <NSObject.h> // Unknown library
#import "CoreDAVLeafDataPayload.h"
#import "NSXMLParserDelegate.h"

@class NSMutableString, NSURL, NSData, NSDictionary, NSString, CoreDAVErrorItem, NSArray;

@interface BookmarkDAVBookmark : NSObject <CoreDAVLeafDataPayload, NSXMLParserDelegate> {
	NSURL *_bookmarkURL;	// 4 = 0x4
	NSURL *_serverID;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSString *_syncKey;	// 16 = 0x10
	NSMutableString *_appleAttributeString;	// 20 = 0x14
	NSDictionary *_appleAttributes;	// 24 = 0x18
	int _parseState;	// 28 = 0x1c
	int _ignoreLevel;	// 32 = 0x20
	CoreDAVErrorItem *_bulkUploadErrorItem;	// 36 = 0x24
}
@property(readonly, assign) NSDictionary *appleAttributes;	// G=0x36077625; @synthesize=_appleAttributes
@property(readonly, assign) NSURL *bookmarkURL;	// G=0x360775fd; @synthesize=_bookmarkURL
@property(retain) CoreDAVErrorItem *bulkUploadErrorItem;	// G=0x36077639; S=0x3607764d; @synthesize=_bulkUploadErrorItem
@property(readonly, assign) NSArray *childrenOrder;
@property(readonly, assign) NSData *dataPayload;	// G=0x3607736d; 
@property(readonly, assign) NSString *name;	// G=0x36077611; @synthesize=_name
@property(retain) NSURL *serverID;	// G=0x360775b5; S=0x360775c9; @synthesize=_serverID
@property(readonly, assign) NSString *syncKey;	// G=0x360775ed; @synthesize=_syncKey
- (id)initWithBookmarkURL:(id)bookmarkURL serverID:(id)anId name:(id)name syncKey:(id)key appleAttributes:(id)attributes;	// 0x36076bc5
- (id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url4 withAccountInfoProvider:(id)accountInfoProvider;	// 0x36076b39
// declared property getter: - (id)appleAttributes;	// 0x36077625
// declared property getter: - (id)bookmarkURL;	// 0x360775fd
// declared property getter: - (id)bulkUploadErrorItem;	// 0x36077639
// declared property getter: - (id)dataPayload;	// 0x3607736d
- (void)dealloc;	// 0x36076c91
// declared property getter: - (id)name;	// 0x36077611
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x36076f3d
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x36076d55
- (void)parser:(id)parser foundCDATA:(id)cdata;	// 0x36077081
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x36076f99
// declared property getter: - (id)serverID;	// 0x360775b5
// declared property setter: - (void)setBulkUploadErrorItem:(id)item;	// 0x3607764d
- (void)setPropertiesFromXBEL:(id)xbel;	// 0x3607722d
// declared property setter: - (void)setServerID:(id)anId;	// 0x360775c9
// declared property getter: - (id)syncKey;	// 0x360775ed
@end
