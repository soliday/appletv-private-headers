/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"

@class EKPersistentSource, NSString;

@interface EKPersistentCalendar : EKPersistentObject {
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x32753ced; 
@property(assign, nonatomic) int allowedEntityTypes;	// G=0x32753c45; S=0x327bbae1; 
@property(assign, nonatomic) BOOL allowsContentModifications;	// G=0x32753ca9; S=0x327bb861; 
@property(assign, nonatomic, getter=isColorDisplayOnly) BOOL colorDisplayOnly;	// G=0x327bb679; S=0x327bb699; 
@property(copy, nonatomic) NSString *colorString;	// G=0x327525ed; S=0x327bb6b5; 
@property(assign, nonatomic) int displayOrder;	// G=0x3275b34d; S=0x327bb77d; 
@property(copy, nonatomic) NSString *externalID;	// G=0x327bb625; S=0x327bb641; 
@property(assign, nonatomic, getter=isHidden) BOOL hidden;	// G=0x327bb975; S=0x327bb999; 
@property(assign, nonatomic, getter=isImmutable) BOOL immutable;	// G=0x32764c6d; S=0x327bb9e9; 
@property(assign, nonatomic) BOOL prohibitsScheduling;	// G=0x327bb8b1; S=0x327bb8d5; 
@property(copy, nonatomic) NSString *sharedOwnerAddress;	// G=0x327bba8d; S=0x327bbaa9; 
@property(copy, nonatomic) NSString *sharedOwnerName;	// G=0x327bba55; S=0x327bba71; 
@property(assign, nonatomic) int sharingStatus;	// G=0x32764805; S=0x327bba39; 
@property(retain, nonatomic) EKPersistentSource *source;	// G=0x327527fd; S=0x327bbac5; 
@property(assign, nonatomic, getter=isSubscribed) BOOL subscribed;	// G=0x3275270d; S=0x327bb925; 
@property(copy, nonatomic) NSString *title;	// G=0x32753f99; S=0x327bb65d; 
+ (id)calendar;	// 0x327bb595
+ (id)defaultPropertiesToLoad;	// 0x32752609
+ (id)relations;	// 0x32752819
- (id)init;	// 0x327bb5cd
// declared property getter: - (id)UUID;	// 0x32753ced
// declared property getter: - (int)allowedEntityTypes;	// 0x32753c45
// declared property getter: - (BOOL)allowsContentModifications;	// 0x32753ca9
// declared property getter: - (id)colorString;	// 0x327525ed
- (id)description;	// 0x327bb799
// declared property getter: - (int)displayOrder;	// 0x3275b34d
- (int)entityType;	// 0x327bb621
// declared property getter: - (id)externalID;	// 0x327bb625
// declared property getter: - (BOOL)isColorDisplayOnly;	// 0x327bb679
// declared property getter: - (BOOL)isHidden;	// 0x327bb975
// declared property getter: - (BOOL)isImmutable;	// 0x32764c6d
// declared property getter: - (BOOL)isSubscribed;	// 0x3275270d
// declared property getter: - (BOOL)prohibitsScheduling;	// 0x327bb8b1
// declared property setter: - (void)setAllowedEntityTypes:(int)types;	// 0x327bbae1
// declared property setter: - (void)setAllowsContentModifications:(BOOL)modifications;	// 0x327bb861
// declared property setter: - (void)setColorDisplayOnly:(BOOL)only;	// 0x327bb699
// declared property setter: - (void)setColorString:(id)string;	// 0x327bb6b5
// declared property setter: - (void)setDisplayOrder:(int)order;	// 0x327bb77d
// declared property setter: - (void)setExternalID:(id)anId;	// 0x327bb641
// declared property setter: - (void)setHidden:(BOOL)hidden;	// 0x327bb999
// declared property setter: - (void)setImmutable:(BOOL)immutable;	// 0x327bb9e9
// declared property setter: - (void)setProhibitsScheduling:(BOOL)scheduling;	// 0x327bb8d5
// declared property setter: - (void)setSharedOwnerAddress:(id)address;	// 0x327bbaa9
// declared property setter: - (void)setSharedOwnerName:(id)name;	// 0x327bba71
// declared property setter: - (void)setSharingStatus:(int)status;	// 0x327bba39
// declared property setter: - (void)setSource:(id)source;	// 0x327bbac5
// declared property setter: - (void)setSubscribed:(BOOL)subscribed;	// 0x327bb925
// declared property setter: - (void)setTitle:(id)title;	// 0x327bb65d
- (void)setUUID:(id)uuid;	// 0x327bb761
// declared property getter: - (id)sharedOwnerAddress;	// 0x327bba8d
// declared property getter: - (id)sharedOwnerName;	// 0x327bba55
// declared property getter: - (int)sharingStatus;	// 0x32764805
// declared property getter: - (id)source;	// 0x327527fd
// declared property getter: - (id)title;	// 0x32753f99
- (BOOL)validate:(id *)validate;	// 0x327bbb0d
@end

