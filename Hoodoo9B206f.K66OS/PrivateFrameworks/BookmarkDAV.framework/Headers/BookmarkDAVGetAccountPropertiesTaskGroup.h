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
@property(readonly, assign) NSSet *bookmarkHomes;	// G=0x342cbb29; @synthesize=_bookmarkHomes
- (id)_copyAccountPropertiesPropFindElements;	// 0x342cb6d9
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x342cb78d
// declared property getter: - (id)bookmarkHomes;	// 0x342cbb29
- (void)dealloc;	// 0x342cb611
- (id)description;	// 0x342cb65d
- (id)homeSet;	// 0x342cb77d
@end

