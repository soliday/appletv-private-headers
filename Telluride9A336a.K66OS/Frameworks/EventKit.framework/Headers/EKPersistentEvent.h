/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentCalendarItem.h"
#import "EventKit-Structs.h"

@class NSURL, NSString, NSDate;

@interface EKPersistentEvent : EKPersistentCalendarItem {
	XXStruct_mY3THC _cachedDurationUnits;	// 24 = 0x18
}
@property(copy, nonatomic) NSURL *URL;	// G=0x31385fdd; S=0x313e399d; 
@property(retain) id actions;	// G=0x313e3f35; S=0x313e3f69; converted property
@property(assign, nonatomic) int availability;	// G=0x313e3ce9; S=0x313e3d05; 
@property(readonly, assign, nonatomic) int birthdayID;	// G=0x313e39d9; 
@property(readonly, assign, nonatomic) double duration;	// G=0x313e39f5; 
@property(readonly, assign, nonatomic) XXStruct_mY3THC durationUnits;	// G=0x3137dd5d; 
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x313e3fe5; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x3137dfb5; S=0x3138eed5; 
@property(readonly, assign, nonatomic) NSString *eventIdentifier;	// G=0x31385c49; 
@property(readonly, assign, nonatomic, getter=isFloating) BOOL floating;	// G=0x31386cb5; 
@property(readonly, assign, nonatomic, getter=isInvitation) BOOL invitation;	// G=0x313864c5; 
@property(readonly, assign, nonatomic, getter=isMeeting) BOOL meeting;	// G=0x313e3a61; 
@property(assign, nonatomic) unsigned modifiedProperties;	// G=0x313e3ab9; S=0x313e3ad5; 
@property(assign, nonatomic) BOOL needsOccurrenceCacheUpdate;	// G=0x313e3af1; S=0x313e3b11; 
@property(copy, nonatomic) NSDate *originalStartDate;	// G=0x313e3d91; S=0x313e3dad; 
@property(assign, nonatomic) int participationStatus;	// G=0x313e3b2d; S=0x313e3b5d; 
@property(readonly, assign, nonatomic) int pendingParticipationStatus;	// G=0x313e3b8d; 
@property(assign, nonatomic) unsigned privacyLevel;	// G=0x313e3d21; S=0x313e3d3d; 
@property(assign, nonatomic) unsigned readStatus;	// G=0x3138665d; S=0x313e3ccd; 
@property(copy, nonatomic) NSString *responseComment;	// G=0x313e3d59; S=0x313e3d75; 
@property(assign, nonatomic) int status;	// G=0x3137ff39; S=0x313e3a9d; 
+ (id)defaultPropertiesToLoad;	// 0x3137d419
+ (id)generateUniqueIDWithEvent:(id)event originalEvent:(id)event2 calendar:(id)calendar;	// 0x3138faa5
+ (id)relations;	// 0x3137f849
- (id)initCommon;	// 0x3137d17d
// declared property getter: - (id)URL;	// 0x31385fdd
- (void)_adjustForNewCalendar;	// 0x3138f69d
- (BOOL)_areDurationUnitsCached;	// 0x3137de71
- (BOOL)_hasExternalIDOrDeliverySource;	// 0x313e3efd
- (BOOL)_hasValidEventAction;	// 0x313e3e31
- (void)_invalidateCachedDurationUnits;	// 0x3137d1c1
// converted property getter: - (id)actions;	// 0x313e3f35
- (void)addAction:(id)action;	// 0x313e3fad
- (BOOL)allowsParticipationStatusModifications;	// 0x313862d1
// declared property getter: - (int)availability;	// 0x313e3ce9
// declared property getter: - (int)birthdayID;	// 0x313e39d9
- (int)birthdayId;	// 0x313e3bbd
- (void)clearExceptionDatesAndUpdateDetachedOriginalDates;	// 0x3138eef1
- (id)committedStartDate;	// 0x313e3dc9
- (id)copyWithZone:(NSZone *)zone;	// 0x313e468d
- (void)dealloc;	// 0x313e38a1
- (void)deleteFromOccurrenceDateOnward:(id)occurrenceDateOnward;	// 0x313e41e9
- (id)description;	// 0x313e4051
- (id)detachWithStartDate:(id)startDate newStartDate:(id)date future:(BOOL)future;	// 0x313e48b5
// declared property getter: - (double)duration;	// 0x313e39f5
// declared property getter: - (XXStruct_mY3THC)durationUnits;	// 0x3137dd5d
// declared property getter: - (id)endDate;	// 0x3137dfb5
- (int)entityType;	// 0x31386c59
// declared property getter: - (id)eventIdentifier;	// 0x31385c49
- (id)exportToICS;	// 0x313e38cd
- (void)filterExceptionDates;	// 0x313e549d
// declared property getter: - (BOOL)isEditable;	// 0x313e3fe5
// declared property getter: - (BOOL)isFloating;	// 0x31386cb5
// declared property getter: - (BOOL)isInvitation;	// 0x313864c5
// declared property getter: - (BOOL)isMeeting;	// 0x313e3a61
// declared property getter: - (unsigned)modifiedProperties;	// 0x313e3ab9
// declared property getter: - (BOOL)needsOccurrenceCacheUpdate;	// 0x313e3af1
- (id)organizer;	// 0x31385e51
// declared property getter: - (id)originalStartDate;	// 0x313e3d91
// declared property getter: - (int)participationStatus;	// 0x313e3b2d
// declared property getter: - (int)pendingParticipationStatus;	// 0x313e3b8d
- (void)primitiveValueChangedForKey:(id)key;	// 0x31386a55
// declared property getter: - (unsigned)privacyLevel;	// 0x313e3d21
// declared property getter: - (unsigned)readStatus;	// 0x3138665d
- (BOOL)refresh;	// 0x313915d5
- (void)removeAction:(id)action;	// 0x313e3fc9
// declared property getter: - (id)responseComment;	// 0x313e3d59
- (BOOL)responseMustApplyToAll;	// 0x313e3bd9
// converted property setter: - (void)setActions:(id)actions;	// 0x313e3f69
// declared property setter: - (void)setAvailability:(int)availability;	// 0x313e3d05
// declared property setter: - (void)setEndDate:(id)date;	// 0x3138eed5
// declared property setter: - (void)setModifiedProperties:(unsigned)properties;	// 0x313e3ad5
// declared property setter: - (void)setNeedsOccurrenceCacheUpdate:(BOOL)update;	// 0x313e3b11
// declared property setter: - (void)setOriginalStartDate:(id)date;	// 0x313e3dad
// declared property setter: - (void)setParticipationStatus:(int)status;	// 0x313e3b5d
// declared property setter: - (void)setPrivacyLevel:(unsigned)level;	// 0x313e3d3d
// declared property setter: - (void)setReadStatus:(unsigned)status;	// 0x313e3ccd
// declared property setter: - (void)setResponseComment:(id)comment;	// 0x313e3d75
// declared property setter: - (void)setStatus:(int)status;	// 0x313e3a9d
// declared property setter: - (void)setURL:(id)url;	// 0x313e399d
// declared property getter: - (int)status;	// 0x3137ff39
- (BOOL)validate:(id *)validate;	// 0x3138f229
@end
