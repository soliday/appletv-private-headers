/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSManagedObjectID.h"


__attribute__((visibility("hidden")))
@interface _NSCoreManagedObjectID : NSManagedObjectID {
}
+ (void)_release_1;	// 0x32273a39
+ (id)_retain_1;	// 0x32273a19
+ (void)_setStoreInfo1:(id)a1;	// 0x32273ab9
+ (void)_storeDeallocated;	// 0x3227f895
+ (id)_storeInfo1;	// 0x32273aa5
+ (BOOL)accessInstanceVariablesDirectly;	// 0x322a71c9
+ (id)alloc;	// 0x322a76b9
+ (id)allocWithZone:(NSZone *)zone;	// 0x322a76c1
+ (unsigned)allocateBatch:(id *)batch count:(unsigned)count;	// 0x32273ac9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x322a71b9
+ (Class)classWithStore:(id)store andEntity:(id)entity;	// 0x32273609
+ (char *)generatedNameSuffix;	// 0x322a71bd
+ (void)initialize;	// 0x322845d1
+ (id)managedObjectIDFromURIRepresentation:(id)urirepresentation;	// 0x322a72e9
+ (id)managedObjectIDFromUTF8String:(const char *)utf8String length:(unsigned)length;	// 0x322a7529
+ (void)release;	// 0x322a71dd
+ (id)retain;	// 0x322a71d9
+ (void)setObjectStoreIdentifier:(id)identifier;	// 0x322a72a1
+ (int)version;	// 0x322a71cd
- (id)URIRepresentation;	// 0x322a774d
- (BOOL)_isPersistentStoreAlive;	// 0x322a71fd
- (id)_storeIdentifier;	// 0x322a7849
- (id)_storeInfo1;	// 0x322a71e1
- (id)entity;	// 0x32274add
- (void)finalize;	// 0x322a726d
- (unsigned)hash;	// 0x322a76dd
- (BOOL)isEqual:(id)equal;	// 0x322a76c9
- (BOOL)isTemporaryID;	// 0x32274ed5
- (id)persistentStore;	// 0x32279c3d
- (void)release;	// 0x3227c789
- (id)retain;	// 0x322a78b5
- (unsigned)retainCount;	// 0x322a721d
@end

