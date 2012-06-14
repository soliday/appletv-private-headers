/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSManagedObject.h"

@class PFUbiquityPeer, NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface PFUbiquityRemotePeerState : NSManagedObject {
}
@property(retain, nonatomic) PFUbiquityPeer *peer;	// @dynamic
@property(retain, nonatomic) NSString *peerID;	// @dynamic
@property(retain, nonatomic) NSString *storeName;	// @dynamic
@property(retain, nonatomic) NSNumber *transactionNumber;	// @dynamic
+ (id)remotePeerStatesMatchingStoreName:(id)name andPeerID:(id)anId inManagedObjectContext:(id)managedObjectContext;	// 0x363506ed
+ (id)remotePeerStatesMatchingStoreName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x36350615
- (id)initWithStoreName:(id)storeName andRemotePeerID:(id)anId insertIntoManagedObjectContext:(id)context;	// 0x3635056d
@end

