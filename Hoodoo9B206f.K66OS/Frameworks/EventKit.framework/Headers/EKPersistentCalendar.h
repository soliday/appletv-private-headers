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
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x31eeed0d; 
@property(assign, nonatomic) int allowedEntityTypes;	// G=0x31eeec65; S=0x31f578c9; 
@property(assign, nonatomic) BOOL allowsContentModifications;	// G=0x31eeecc9; S=0x31f57649; 
@property(assign, nonatomic, getter=isColorDisplayOnly) BOOL colorDisplayOnly;	// G=0x31f57461; S=0x31f57481; 
@property(copy, nonatomic) NSString *colorString;	// G=0x31eed5e9; S=0x31f5749d; 
@property(assign, nonatomic) int displayOrder;	// G=0x31ef6455; S=0x31f57565; 
@property(copy, nonatomic) NSString *externalID;	// G=0x31f5740d; S=0x31f57429; 
@property(assign, nonatomic, getter=isHidden) BOOL hidden;	// G=0x31f5775d; S=0x31f57781; 
@property(assign, nonatomic, getter=isImmutable) BOOL immutable;	// G=0x31f00171; S=0x31f577d1; 
@property(assign, nonatomic) BOOL prohibitsScheduling;	// G=0x31f57699; S=0x31f576bd; 
@property(copy, nonatomic) NSString *sharedOwnerAddress;	// G=0x31f57875; S=0x31f57891; 
@property(copy, nonatomic) NSString *sharedOwnerName;	// G=0x31f5783d; S=0x31f57859; 
@property(assign, nonatomic) int sharingStatus;	// G=0x31effd09; S=0x31f57821; 
@property(retain, nonatomic) EKPersistentSource *source;	// G=0x31eed7f9; S=0x31f578ad; 
@property(assign, nonatomic, getter=isSubscribed) BOOL subscribed;	// G=0x31eed709; S=0x31f5770d; 
@property(copy, nonatomic) NSString *title;	// G=0x31eeefb9; S=0x31f57445; 
+ (id)calendar;	// 0x31f5737d
+ (id)defaultPropertiesToLoad;	// 0x31eed605
+ (id)relations;	// 0x31eed815
- (id)init;	// 0x31f573b5
// declared property getter: - (id)UUID;	// 0x31eeed0d
// declared property getter: - (int)allowedEntityTypes;	// 0x31eeec65
// declared property getter: - (BOOL)allowsContentModifications;	// 0x31eeecc9
// declared property getter: - (id)colorString;	// 0x31eed5e9
- (id)description;	// 0x31f57581
// declared property getter: - (int)displayOrder;	// 0x31ef6455
- (int)entityType;	// 0x31f57409
// declared property getter: - (id)externalID;	// 0x31f5740d
// declared property getter: - (BOOL)isColorDisplayOnly;	// 0x31f57461
// declared property getter: - (BOOL)isHidden;	// 0x31f5775d
// declared property getter: - (BOOL)isImmutable;	// 0x31f00171
// declared property getter: - (BOOL)isSubscribed;	// 0x31eed709
// declared property getter: - (BOOL)prohibitsScheduling;	// 0x31f57699
// declared property setter: - (void)setAllowedEntityTypes:(int)types;	// 0x31f578c9
// declared property setter: - (void)setAllowsContentModifications:(BOOL)modifications;	// 0x31f57649
// declared property setter: - (void)setColorDisplayOnly:(BOOL)only;	// 0x31f57481
// declared property setter: - (void)setColorString:(id)string;	// 0x31f5749d
// declared property setter: - (void)setDisplayOrder:(int)order;	// 0x31f57565
// declared property setter: - (void)setExternalID:(id)anId;	// 0x31f57429
// declared property setter: - (void)setHidden:(BOOL)hidden;	// 0x31f57781
// declared property setter: - (void)setImmutable:(BOOL)immutable;	// 0x31f577d1
// declared property setter: - (void)setProhibitsScheduling:(BOOL)scheduling;	// 0x31f576bd
// declared property setter: - (void)setSharedOwnerAddress:(id)address;	// 0x31f57891
// declared property setter: - (void)setSharedOwnerName:(id)name;	// 0x31f57859
// declared property setter: - (void)setSharingStatus:(int)status;	// 0x31f57821
// declared property setter: - (void)setSource:(id)source;	// 0x31f578ad
// declared property setter: - (void)setSubscribed:(BOOL)subscribed;	// 0x31f5770d
// declared property setter: - (void)setTitle:(id)title;	// 0x31f57445
- (void)setUUID:(id)uuid;	// 0x31f57549
// declared property getter: - (id)sharedOwnerAddress;	// 0x31f57875
// declared property getter: - (id)sharedOwnerName;	// 0x31f5783d
// declared property getter: - (int)sharingStatus;	// 0x31effd09
// declared property getter: - (id)source;	// 0x31eed7f9
// declared property getter: - (id)title;	// 0x31eeefb9
- (BOOL)validate:(id *)validate;	// 0x31f578f5
@end

