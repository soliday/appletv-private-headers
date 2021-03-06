/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"

@class NSURL, NSTimeZone, NSData, NSSet, NSString, EKPersistentLocation, EKPersistentCalendar, NSDate, EKPersistentOrganizer, EKPersistentAttendee;

__attribute__((visibility("hidden")))
@interface EKPersistentCalendarItem : EKPersistentObject {
}
@property(copy, nonatomic) NSURL *URL;	// G=0x310415a1; S=0x310415bd; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x30fdea65; 
@property(copy, nonatomic) NSURL *action;	// G=0x31041569; S=0x31041585; 
@property(copy, nonatomic) NSSet *alarms;	// G=0x30fdf26d; S=0x310415d9; 
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;	// G=0x30fd8715; S=0x30fef769; 
@property(copy, nonatomic) NSSet *attachments;	// G=0x30fe0dc5; S=0x31041a85; 
@property(copy, nonatomic) NSSet *attendees;	// G=0x30fe0f05; S=0x310416ed; 
@property(retain, nonatomic) EKPersistentCalendar *calendar;	// G=0x30fdb299; S=0x30fe7ed9; 
@property(copy, nonatomic) NSDate *creationDate;	// G=0x30ff1e81; S=0x30ff1e9d; 
@property(readonly, assign, nonatomic, getter=isDetached) BOOL detached;	// G=0x30fe2bf9; 
@property(copy, nonatomic) NSSet *detachedItems;	// G=0x30fea0fd; S=0x31041ba1; 
@property(copy, nonatomic) NSSet *exceptionDates;	// G=0x31041665; S=0x30fea0e1; 
@property(copy, nonatomic) NSData *externalData;	// G=0x310419ad; S=0x310419c9; 
@property(copy, nonatomic) NSString *externalID;	// G=0x31041975; S=0x31041991; 
@property(copy, nonatomic) NSString *externalModTag;	// G=0x310419e5; S=0x31041a01; 
@property(assign, nonatomic) int externalTrackingStatus;	// G=0x31041a1d; S=0x31041a39; 
@property(readonly, assign, nonatomic) BOOL hasAlarms;	// G=0x30feaa61; 
@property(readonly, assign, nonatomic) BOOL hasAttendees;	// G=0x30fdb039; 
@property(readonly, assign, nonatomic) BOOL hasNotes;	// G=0x310414bd; 
@property(readonly, assign, nonatomic) BOOL hasRecurrenceRules;	// G=0x30fe2ab9; 
@property(copy, nonatomic) NSDate *lastModifiedDate;	// G=0x31041531; S=0x3104154d; 
@property(copy, nonatomic) EKPersistentLocation *location;	// G=0x30fda475; S=0x30fe9a89; 
@property(copy, nonatomic) NSString *notes;	// G=0x30fe107d; S=0x30fe8f05; 
@property(retain, nonatomic) EKPersistentOrganizer *organizer;	// G=0x3104193d; S=0x31041959; 
@property(retain, nonatomic) EKPersistentCalendarItem *originalItem;	// G=0x30fe2c19; S=0x31041ad9; 
@property(assign, nonatomic) int priority;	// G=0x30feddad; S=0x30fefd01; 
@property(copy, nonatomic) NSSet *recurrenceRules;	// G=0x30fe2141; S=0x30ff1f0d; 
@property(retain, nonatomic) EKPersistentAttendee *selfAttendee;	// G=0x30fe15a1; S=0x310417d5; 
@property(assign, nonatomic) int sequenceNumber;	// G=0x30ff1eb9; S=0x30ff1ed5; 
@property(copy, nonatomic) NSDate *startDate;	// G=0x30fd8e8d; S=0x30fe9eb9; 
@property(copy, nonatomic) NSTimeZone *timeZone;	// G=0x30fd83c1; S=0x30fe9e5d; 
@property(copy, nonatomic) NSString *title;	// G=0x30fd9e65; S=0x30fe9e41; 
@property(copy, nonatomic) NSString *uniqueID;	// G=0x30fe0cd1; S=0x30feabfd; 
+ (id)defaultPropertiesToLoad;	// 0x30fd84cd
+ (id)relations;	// 0x30fda92d
- (id)init;	// 0x30fe1715
// declared property getter: - (id)URL;	// 0x310415a1
// declared property getter: - (id)UUID;	// 0x30fdea65
// declared property getter: - (id)action;	// 0x31041569
- (void)addAlarm:(id)alarm;	// 0x310415f5
- (void)addAttachment:(id)attachment;	// 0x31041aa1
- (void)addAttendee:(id)attendee;	// 0x31041765
- (void)addDetachedItem:(id)item;	// 0x31041bbd
- (void)addExceptionDate:(id)date;	// 0x31041681
- (void)addRecurrenceRule:(id)rule;	// 0x3104162d
// declared property getter: - (id)alarms;	// 0x30fdf26d
// declared property getter: - (id)attachments;	// 0x30fe0dc5
- (int)attendeeCount;	// 0x310416b9
// declared property getter: - (id)attendees;	// 0x30fe0f05
// declared property getter: - (id)calendar;	// 0x30fdb299
// declared property getter: - (id)creationDate;	// 0x30ff1e81
- (void)deleteSelfAndDetached;	// 0x30fed41d
// declared property getter: - (id)detachedItems;	// 0x30fea0fd
// declared property getter: - (id)exceptionDates;	// 0x31041665
// declared property getter: - (id)externalData;	// 0x310419ad
// declared property getter: - (id)externalID;	// 0x31041975
// declared property getter: - (id)externalModTag;	// 0x310419e5
// declared property getter: - (int)externalTrackingStatus;	// 0x31041a1d
// declared property getter: - (BOOL)hasAlarms;	// 0x30feaa61
- (BOOL)hasAttachments;	// 0x31041a55
// declared property getter: - (BOOL)hasAttendees;	// 0x30fdb039
// declared property getter: - (BOOL)hasNotes;	// 0x310414bd
// declared property getter: - (BOOL)hasRecurrenceRules;	// 0x30fe2ab9
// declared property getter: - (BOOL)isAllDay;	// 0x30fd8715
// declared property getter: - (BOOL)isDetached;	// 0x30fe2bf9
- (void)itemDidReplicateInNewCalendar:(id)item;	// 0x31041fb1
// declared property getter: - (id)lastModifiedDate;	// 0x31041531
// declared property getter: - (id)location;	// 0x30fda475
- (id)moveToCalendar:(id)calendar;	// 0x31041fb5
- (id)moveToCalendar:(id)calendar skipItem:(id)item;	// 0x31041d4d
// declared property getter: - (id)notes;	// 0x30fe107d
// declared property getter: - (id)organizer;	// 0x3104193d
// declared property getter: - (id)originalItem;	// 0x30fe2c19
- (void)primitiveValueChangedForKey:(id)key;	// 0x30fe1aed
// declared property getter: - (int)priority;	// 0x30feddad
// declared property getter: - (id)recurrenceRules;	// 0x30fe2141
- (void)removeAlarm:(id)alarm;	// 0x31041611
- (void)removeAttachment:(id)attachment;	// 0x31041abd
- (void)removeAttendee:(id)attendee;	// 0x31041781
- (void)removeDetachedItem:(id)item;	// 0x31041c85
- (void)removeExceptionDate:(id)date;	// 0x3104169d
- (void)removeRecurrenceRule:(id)rule;	// 0x31041649
// declared property getter: - (id)selfAttendee;	// 0x30fe15a1
// declared property getter: - (int)sequenceNumber;	// 0x30ff1eb9
// declared property setter: - (void)setAction:(id)action;	// 0x31041585
// declared property setter: - (void)setAlarms:(id)alarms;	// 0x310415d9
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x30fef769
// declared property setter: - (void)setAttachments:(id)attachments;	// 0x31041a85
// declared property setter: - (void)setAttendees:(id)attendees;	// 0x310416ed
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x30fe7ed9
// declared property setter: - (void)setCreationDate:(id)date;	// 0x30ff1e9d
// declared property setter: - (void)setDetachedItems:(id)items;	// 0x31041ba1
// declared property setter: - (void)setExceptionDates:(id)dates;	// 0x30fea0e1
// declared property setter: - (void)setExternalData:(id)data;	// 0x310419c9
// declared property setter: - (void)setExternalID:(id)anId;	// 0x31041991
// declared property setter: - (void)setExternalModTag:(id)tag;	// 0x31041a01
// declared property setter: - (void)setExternalTrackingStatus:(int)status;	// 0x31041a39
// declared property setter: - (void)setLastModifiedDate:(id)date;	// 0x3104154d
// declared property setter: - (void)setLocation:(id)location;	// 0x30fe9a89
// declared property setter: - (void)setNotes:(id)notes;	// 0x30fe8f05
// declared property setter: - (void)setOrganizer:(id)organizer;	// 0x31041959
// declared property setter: - (void)setOriginalItem:(id)item;	// 0x31041ad9
// declared property setter: - (void)setPriority:(int)priority;	// 0x30fefd01
// declared property setter: - (void)setRecurrenceRules:(id)rules;	// 0x30ff1f0d
// declared property setter: - (void)setSelfAttendee:(id)attendee;	// 0x310417d5
// declared property setter: - (void)setSequenceNumber:(int)number;	// 0x30ff1ed5
// declared property setter: - (void)setStartDate:(id)date;	// 0x30fe9eb9
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x30fe9e5d
// declared property setter: - (void)setTitle:(id)title;	// 0x30fe9e41
// declared property setter: - (void)setURL:(id)url;	// 0x310415bd
// declared property setter: - (void)setUniqueID:(id)anId;	// 0x30feabfd
// declared property getter: - (id)startDate;	// 0x30fd8e8d
// declared property getter: - (id)timeZone;	// 0x30fd83c1
// declared property getter: - (id)title;	// 0x30fd9e65
// declared property getter: - (id)uniqueID;	// 0x30fe0cd1
- (BOOL)validate:(id *)validate;	// 0x30fea559
@end

