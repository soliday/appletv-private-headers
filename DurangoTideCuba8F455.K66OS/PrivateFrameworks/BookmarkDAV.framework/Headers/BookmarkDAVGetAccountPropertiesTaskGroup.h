/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import <CoreDAVGetAccountPropertiesTaskGroup.h> // Unknown library

@class NSSet;

@interface BookmarkDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
@private
	NSSet *_bookmarkHomes;	// 76 = 0x4c
}
@property(readonly, assign) NSSet *bookmarkHomes;	// G=0x339ef255; @synthesize=_bookmarkHomes
- (id)_copyAccountPropertiesPropFindElements;	// 0x339ef265
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x339ef3bd
// declared property getter: - (id)bookmarkHomes;	// 0x339ef255
- (void)dealloc;	// 0x339ef375
- (id)description;	// 0x339ef305
- (id)homeSet;	// 0x339ef245
@end

