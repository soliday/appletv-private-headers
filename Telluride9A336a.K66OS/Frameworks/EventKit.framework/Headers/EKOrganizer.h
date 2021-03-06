/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKParticipant.h"
#import "EventKit-Structs.h"


@interface EKOrganizer : EKParticipant {
}
@property(assign, getter=isCurrentUser) BOOL currentUser;	// G=0x313e8dc1; S=0x313e8e3d; converted property
+ (id)organizerWithName:(id)name emailAddress:(id)address externalID:(id)anId isCurrentUser:(BOOL)user;	// 0x313e8a45
- (id)init;	// 0x313e8a91
- (id)initWithName:(id)name emailAddress:(id)address externalID:(id)anId isCurrentUser:(BOOL)user;	// 0x313e8afd
- (id)copyWithZone:(NSZone *)zone;	// 0x313e8b7d
- (id)description;	// 0x313e8c51
// converted property getter: - (BOOL)isCurrentUser;	// 0x313e8dc1
- (id)lazyLoadRelationForKey:(id)key;	// 0x313e8cfd
- (id)owner;	// 0x313e8d8d
// converted property setter: - (void)setCurrentUser:(BOOL)user;	// 0x313e8e3d
@end

