/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class NSString;

@interface EKPersistentParticipant : EKPersistentObject <NSCopying> {
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x31f55ee1; 
@property(copy, nonatomic) NSString *emailAddress;	// G=0x31f55f35; S=0x31f55f51; 
@property(copy, nonatomic) NSString *externalID;	// G=0x31f55f6d; S=0x31f55f89; 
@property(copy, nonatomic) NSString *name;	// G=0x31f55efd; S=0x31f55f19; 
+ (id)defaultPropertiesToLoad;	// 0x31f55d75
- (id)init;	// 0x31f55e29
// declared property getter: - (id)UUID;	// 0x31f55ee1
- (id)copyWithZone:(NSZone *)zone;	// 0x31f55e7d
// declared property getter: - (id)emailAddress;	// 0x31f55f35
// declared property getter: - (id)externalID;	// 0x31f55f6d
- (unsigned)hash;	// 0x31f55eb9
// declared property getter: - (id)name;	// 0x31f55efd
- (id)owner;	// 0x31f55fa5
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x31f55f51
// declared property setter: - (void)setExternalID:(id)anId;	// 0x31f55f89
// declared property setter: - (void)setName:(id)name;	// 0x31f55f19
@end

