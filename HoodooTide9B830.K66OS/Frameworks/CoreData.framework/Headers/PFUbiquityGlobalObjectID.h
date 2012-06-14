/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityGlobalObjectID : NSObject {
@private
	NSString *_storeName;	// 4 = 0x4
	NSString *_entityName;	// 8 = 0x8
	NSString *_primaryKey;	// 12 = 0xc
	NSString *_owningPeerID;	// 16 = 0x10
	unsigned _hash;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *entityName;	// G=0x3238f1e5; @synthesize=_entityName
@property(readonly, assign, nonatomic) unsigned hash;	// G=0x3238f1b5; @synthesize=_hash
@property(readonly, assign, nonatomic) NSString *owningPeerID;	// G=0x3238f1c5; @synthesize=_owningPeerID
@property(readonly, assign, nonatomic) NSString *primaryKey;	// G=0x3238f1d5; @synthesize=_primaryKey
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x3238f1f5; @synthesize=_storeName
+ (id)stringValueFromArray:(id)array atIndexDescribedByStringNumber:(id)indexDescribedByStringNumber;	// 0x3238f285
- (id)init;	// 0x3238f205
- (id)initWithCompressedString:(id)compressedString forStoreWithName:(id)name andEntityNames:(id)names primaryKeys:(id)keys peerIDs:(id)ids;	// 0x3238f7c1
- (id)initWithStoreName:(id)storeName entityName:(id)name primaryKey:(id)key andPeerID:(id)anId;	// 0x3238fa45
- (id)initWithString:(id)string;	// 0x3238f949
- (id)copyWithZone:(NSZone *)zone;	// 0x3238f721
- (id)createCompressedStringWithEntityNameToIndex:(id)index primaryKeyToIndex:(id)index2 peerIDToIndex:(id)index3;	// 0x3238f3e5
- (id)createGlobalIDString;	// 0x3238f2f5
- (void)dealloc;	// 0x3238f675
- (id)description;	// 0x3238f5e5
// declared property getter: - (id)entityName;	// 0x3238f1e5
// declared property getter: - (unsigned)hash;	// 0x3238f1b5
- (BOOL)isEqual:(id)equal;	// 0x3238f515
// declared property getter: - (id)owningPeerID;	// 0x3238f1c5
// declared property getter: - (id)primaryKey;	// 0x3238f1d5
// declared property getter: - (id)storeName;	// 0x3238f1f5
- (void)updateHash;	// 0x3238f589
@end

