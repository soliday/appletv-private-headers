/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFlickrProvider.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVFlickrProviderForSavedSearches : ATVFlickrProvider {
@private
	NSMutableArray *_savedSearchCollections;	// 24 = 0x18
}
+ (id)providerOfSavedSearchCollections;	// 0x36574965
- (id)init;	// 0x3657499d
- (id)_data;	// 0x36574d29
- (BOOL)_handlesObject:(id)object;	// 0x36574d39
- (void)_newSavedSearchToAddCollectionFor:(id)aFor;	// 0x36574e25
- (void)_savedSearchTermRemoved:(id)removed;	// 0x36574f39
- (void)dealloc;	// 0x36574c0d
- (id)hashForDataAtIndex:(long)index;	// 0x36574ccd
@end

