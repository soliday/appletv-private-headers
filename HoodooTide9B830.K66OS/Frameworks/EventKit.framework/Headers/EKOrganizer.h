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
@property(assign, getter=isCurrentUser) BOOL currentUser;	// G=0x324c6ba9; S=0x324c6c25; converted property
+ (id)organizerWithName:(id)name emailAddress:(id)address externalID:(id)anId isCurrentUser:(BOOL)user;	// 0x324c682d
- (id)init;	// 0x324c6879
- (id)initWithName:(id)name emailAddress:(id)address externalID:(id)anId isCurrentUser:(BOOL)user;	// 0x324c68e5
- (id)copyWithZone:(NSZone *)zone;	// 0x324c6965
- (id)description;	// 0x324c6a39
// converted property getter: - (BOOL)isCurrentUser;	// 0x324c6ba9
- (id)lazyLoadRelationForKey:(id)key;	// 0x324c6ae5
- (id)owner;	// 0x324c6b75
// converted property setter: - (void)setCurrentUser:(BOOL)user;	// 0x324c6c25
@end

