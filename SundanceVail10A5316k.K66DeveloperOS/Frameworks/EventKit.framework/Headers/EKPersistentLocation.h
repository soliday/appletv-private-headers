/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "EKPersistentObject.h"
#import "EventKit-Structs.h"

@class NSString, NSNumber;

@interface EKPersistentLocation : EKPersistentObject <NSCopying> {
}
@property(copy, nonatomic) NSString *addressBookEntityID;	// G=0x30dfd8ad; S=0x30e02721; 
@property(retain) id alarmOwner;	// G=0x30e62d89; S=0x30e62d6d; converted property
@property(retain) id calendarItemOwner;	// G=0x30e62d51; S=0x30e62d35; converted property
@property(copy, nonatomic) NSNumber *latitude;	// G=0x30dfd875; S=0x30e0281d; 
@property(copy, nonatomic) NSNumber *longitude;	// G=0x30dfd891; S=0x30e02839; 
@property(copy, nonatomic) NSNumber *radius;	// G=0x30dfd8c9; S=0x30e0273d; 
@property(copy, nonatomic) NSString *title;	// G=0x30df4d1d; S=0x30e02705; 
+ (id)defaultPropertiesToLoad;	// 0x30e62cdd
+ (id)relations;	// 0x30e0262d
- (id)init;	// 0x30dfd801
// declared property getter: - (id)addressBookEntityID;	// 0x30dfd8ad
// converted property getter: - (id)alarmOwner;	// 0x30e62d89
// converted property getter: - (id)calendarItemOwner;	// 0x30e62d51
- (id)copyWithZone:(NSZone *)zone;	// 0x30e62da5
- (id)description;	// 0x30e62e9d
- (int)entityType;	// 0x30e62d31
// declared property getter: - (id)latitude;	// 0x30dfd875
// declared property getter: - (id)longitude;	// 0x30dfd891
// declared property getter: - (id)radius;	// 0x30dfd8c9
// declared property setter: - (void)setAddressBookEntityID:(id)anId;	// 0x30e02721
// converted property setter: - (void)setAlarmOwner:(id)owner;	// 0x30e62d6d
// converted property setter: - (void)setCalendarItemOwner:(id)owner;	// 0x30e62d35
// declared property setter: - (void)setLatitude:(id)latitude;	// 0x30e0281d
// declared property setter: - (void)setLongitude:(id)longitude;	// 0x30e02839
// declared property setter: - (void)setRadius:(id)radius;	// 0x30e0273d
// declared property setter: - (void)setTitle:(id)title;	// 0x30e02705
// declared property getter: - (id)title;	// 0x30df4d1d
@end

