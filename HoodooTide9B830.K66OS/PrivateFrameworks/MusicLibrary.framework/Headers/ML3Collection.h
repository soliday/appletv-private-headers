/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Entity.h"


@interface ML3Collection : ML3Entity {
}
+ (id)artworkCacheIDProperty;	// 0x34fb072d
+ (id)foreignPropertyForProperty:(id)property entityClass:(Class)aClass;	// 0x34f8e4e1
+ (void)initialize;	// 0x34f8de3d
+ (BOOL)libraryContentsChangeForProperty:(id)property;	// 0x34fb0731
+ (id)propertiesForGroupingKey;	// 0x34fb0539
+ (id)trackForeignPersistentID;	// 0x34fb0729
+ (BOOL)updateRepresentativeItemPersistentIDsInLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x34fb0ab5
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x34fb0575
- (void)updateCloudStatus;	// 0x34fb0789
- (void)updateTrackValues:(id)values;	// 0x34fb0725
@end

