/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import "HSRequest.h"


@interface HSArtworkRequest : HSRequest {
}
+ (id)requestWithDatabaseID:(unsigned)databaseID itemID:(unsigned)anId size:(CGSize)size;	// 0x35169df9
- (id)initWithDatabaseID:(unsigned)databaseID itemID:(unsigned)anId size:(CGSize)size;	// 0x35169d21
- (BOOL)acceptsGzipEncoding;	// 0x35169e51
@end

