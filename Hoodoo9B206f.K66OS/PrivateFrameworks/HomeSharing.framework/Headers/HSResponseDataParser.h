/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library
#import "HomeSharing-Structs.h"


@interface HSResponseDataParser : NSObject {
}
+ (id)_parseAuthorizedAccountTokenWithBytes:(const char *)bytes length:(unsigned)length;	// 0x36d44a99
+ (id)_parseBrowseListingWithBytes:(const char *)bytes length:(unsigned)length;	// 0x36d455e9
+ (id)_parseBulkCloudArtworkInfoResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x36d44ca1
+ (id)_parseCloudArtworkInfoResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x36d44d59
+ (id)_parseDeletedIDListingWithBytes:(const char *)bytes length:(unsigned)length;	// 0x36d44e39
+ (id)_parseDictionaryCollectionWithBytes:(const char *)bytes length:(unsigned)length;	// 0x36d44f25
+ (id)_parseEditCommandResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x36d4509d
+ (id)_parseItemIDArrayWithBytes:(const char *)bytes length:(unsigned)length;	// 0x36d456ed
+ (unsigned)_parseItemPropertyCountWithBytes:(const char *)bytes length:(unsigned)length;	// 0x36d44595
+ (id)_parseItemsResponseWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x36d451fd
+ (id)_parseListingCollectionWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x36d454f5
+ (id)_parseListingItemWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x36d457d5
+ (id)_parseLoginResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x36d44789
+ (id)_parseResponseCode:(unsigned)code bytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x36d445d5
+ (id)_parseUpdateResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x36d44911
+ (void)enumerateDeletedItemsInResponseData:(id)responseData usingHandler:(id)handler;	// 0x36d44405
+ (void)enumerateItemsInResponseData:(id)responseData usingHandler:(id)handler;	// 0x36d44349
+ (id)enumerateRawItemsInResponseData:(id)responseData usingHandler:(id)handler;	// 0x36d43f59
+ (void)parseItemWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x36d442d1
+ (unsigned)parseItemWithBytes:(const char *)bytes length:(unsigned)length valuesOut:(XXStruct_LKnRFA *)anOut valuesCapacity:(unsigned)capacity;	// 0x36d44009
+ (id)parseResponseData:(id)data;	// 0x36d43f45
@end

