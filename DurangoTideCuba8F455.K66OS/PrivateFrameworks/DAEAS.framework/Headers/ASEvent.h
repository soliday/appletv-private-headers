/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "DADataElement.h"
#import "ASChangedCollectionLeaf.h"

@class NSNumber, NSString, ASRecurrence, ASEventUID, ASTimeZone, NSDate, NSArray;

@interface ASEvent : ASChangedCollectionLeaf <NSCoding, DADataElement> {
	void *_calRecord;	// 64 = 0x40
	ASTimeZone *_timeZone;	// 68 = 0x44
	NSNumber *_allDayEvent;	// 72 = 0x48
	NSString *_body;	// 76 = 0x4c
	NSNumber *_bodyTruncated;	// 80 = 0x50
	NSNumber *_busyStatus;	// 84 = 0x54
	NSDate *_dTStamp;	// 88 = 0x58
	NSDate *_endTime;	// 92 = 0x5c
	NSString *_location;	// 96 = 0x60
	NSNumber *_meetingStatus;	// 100 = 0x64
	NSString *_organizerEmail;	// 104 = 0x68
	NSString *_organizerName;	// 108 = 0x6c
	NSNumber *_reminderMinsBefore;	// 112 = 0x70
	NSNumber *_sensitivity;	// 116 = 0x74
	NSString *_subject;	// 120 = 0x78
	NSDate *_startTime;	// 124 = 0x7c
	ASEventUID *_eventUID;	// 128 = 0x80
	NSArray *_attendees;	// 132 = 0x84
	NSArray *_attendeesPendingDeletion;	// 136 = 0x88
	ASRecurrence *_recurrence;	// 140 = 0x8c
	NSArray *_exceptions;	// 144 = 0x90
	NSNumber *_responseRequested;	// 148 = 0x94
	int _meetingResponseToEmailAbout;	// 152 = 0x98
	BOOL _calculateNextStatusAsIfMeetingRequest;	// 156 = 0x9c
	BOOL _shouldUpdateStatus;	// 157 = 0x9d
	BOOL _cachedOrganizerIsSelf;	// 158 = 0x9e
	BOOL _haveCheckedOrganizerEmail;	// 159 = 0x9f
	BOOL _isAttendeeUpdateOnly;	// 160 = 0xa0
	BOOL _isDTStampUpdateOnly;	// 161 = 0xa1
	NSNumber *_responseType;	// 164 = 0xa4
}
@property(retain) NSNumber *allDayEvent;	// G=0x343710cd; S=0x343712d9; @synthesize=_allDayEvent
@property(retain) NSArray *attendees;	// G=0x3437121d; S=0x34371515; @synthesize=_attendees
@property(retain) NSArray *attendeesPendingDeletion;	// G=0x34371265; S=0x34371541; @synthesize=_attendeesPendingDeletion
@property(retain) NSString *body;	// G=0x343710e5; S=0x3436a655; @synthesize=_body
@property(retain) NSNumber *bodyTruncated;	// G=0x343710fd; S=0x34371305; @synthesize=_bodyTruncated
@property(retain) NSNumber *busyStatus;	// G=0x34371115; S=0x34371331; @synthesize=_busyStatus
@property(assign) void *calEvent;	// G=0x3436a2dd; S=0x3436e81d; converted property
@property(retain) NSDate *dTStamp;	// G=0x3437112d; S=0x3437135d; @synthesize=_dTStamp
@property(retain) NSDate *endTime;	// G=0x34371145; S=0x34371389; @synthesize=_endTime
@property(retain) ASEventUID *eventUID;	// G=0x3436a725; S=0x3436a6a1; @synthesize=_eventUID
@property(retain) id exceptionDate;	// G=0x3436a2ed; S=0x3436a2f1; converted property
@property(retain) NSArray *exceptions;	// G=0x3437124d; S=0x3436e065; @synthesize=_exceptions
@property(retain) NSString *location;	// G=0x3437115d; S=0x343713b5; @synthesize=_location
@property(assign) int meetingResponseForEmail;	// G=0x3436b22d; S=0x3436a2c5; converted property
@property(retain) NSNumber *meetingStatus;	// G=0x34371175; S=0x343713e1; @synthesize=_meetingStatus
@property(retain) NSString *organizerEmail;	// G=0x3437118d; S=0x3437140d; @synthesize=_organizerEmail
@property(retain) NSString *organizerName;	// G=0x343711a5; S=0x34371439; @synthesize=_organizerName
@property(retain) ASRecurrence *recurrence;	// G=0x34371235; S=0x3436a47d; @synthesize=_recurrence
@property(retain) NSNumber *reminderMinsBefore;	// G=0x343711bd; S=0x34371465; @synthesize=_reminderMinsBefore
@property(retain) NSNumber *responseRequested;	// G=0x3437127d; S=0x3437156d; @synthesize=_responseRequested
@property(retain) NSNumber *responseType;	// G=0x34371295; S=0x34371599; @synthesize=_responseType
@property(retain) NSNumber *sensitivity;	// G=0x343711d5; S=0x34371491; @synthesize=_sensitivity
@property(retain) NSDate *startTime;	// G=0x34371205; S=0x343714e9; @synthesize=_startTime
@property(retain) NSString *subject;	// G=0x343711ed; S=0x343714bd; @synthesize=_subject
@property(retain) ASTimeZone *timeZone;	// G=0x343710b5; S=0x343712ad; @synthesize=_timeZone
+ (void)_setFakeDTStampDateForUnitTests:(id)unitTests;	// 0x3436a85d
+ (BOOL)acceptsTopLevelLeaves;	// 0x3436b7b9
+ (id)eventWithCalEvent:(void *)calEvent serverID:(id)anId account:(id)account;	// 0x3436b41d
+ (BOOL)frontingBasicTypes;	// 0x3436b6e1
+ (BOOL)notifyOfUnknownTokens;	// 0x3436b699
+ (BOOL)parsingLeafNode;	// 0x3436b771
+ (BOOL)parsingWithSubItems;	// 0x3436b729
+ (void)setSystemTimeZoneNameForUnitTests:(id)unitTests;	// 0x3436b801
- (id)init;	// 0x3436c1d9
- (id)initWithCalEvent:(void *)calEvent serverID:(id)anId account:(id)account;	// 0x3436c135
- (id)initWithCoder:(id)coder;	// 0x3436bbf9
- (BOOL)_bailIfNotNewestDataForAccount:(id)account;	// 0x3436a2d5
- (void)_determineSelfnessWithLocalEvent:(void *)localEvent forAccount:(id)account;	// 0x3436ffc1
- (void)_loadAttributesFromCalEvent:(void *)calEvent forAccount:(id)account;	// 0x3436d4dd
- (int)_meetingResponseShouldFilterForEmail:(BOOL)_meetingResponse;	// 0x3436dfc5
- (int)_nextAttendeeStatusWithOldStatus:(int)oldStatus account:(id)account;	// 0x3436b271
- (int)_nextAttendeeStatusWithOldStatus:(int)oldStatus meetingClassType:(int)type account:(id)account;	// 0x3436b2b5
- (int)_nextEventStatusWithOldStatus:(int)oldStatus account:(id)account;	// 0x3436b309
- (int)_nextEventStatusWithOldStatus:(int)oldStatus meetingClassType:(int)type account:(id)account;	// 0x3436b349
- (void)_sanitizeLocalExceptionsForAccount:(id)account;	// 0x3436fc29
- (BOOL)_selfIsMoreCorrectThanOtherEvent:(id)event account:(id)account;	// 0x3436cfed
- (id)_transformedEndDateForActiveSync:(id)activeSync;	// 0x3436b4d9
- (id)_transformedEndDateForCalFramework:(id)calFramework startDate:(id)date;	// 0x3436b5a1
- (id)_transformedStartDateForActiveSync:(id)activeSync;	// 0x3436b551
- (id)_transformedStartDateForCalFramework:(id)calFramework;	// 0x3436b65d
// declared property getter: - (id)allDayEvent;	// 0x343710cd
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x343701ed
- (id)asParseRules;	// 0x3436c23d
// declared property getter: - (id)attendees;	// 0x3437121d
// declared property getter: - (id)attendeesPendingDeletion;	// 0x34371265
// declared property getter: - (id)body;	// 0x343710e5
// declared property getter: - (id)bodyTruncated;	// 0x343710fd
// declared property getter: - (id)busyStatus;	// 0x34371115
- (BOOL)cachedOrganizerIsSelfWithAccount:(id)account;	// 0x3436a615
- (int)calAttendeePendingStatus;	// 0x3436df7d
- (int)calAttendeeStatus;	// 0x3436df4d
// converted property getter: - (void *)calEvent;	// 0x3436a2dd
- (int)calEventStatus;	// 0x3436dfad
- (void *)copySelfAttendeeGeneratedIfNecessaryWithLocalEvent:(void *)localEvent forAccount:(id)account;	// 0x3436d35d
// declared property getter: - (id)dTStamp;	// 0x3437112d
- (int)dataclass;	// 0x3436a2c1
- (void)dealloc;	// 0x3436c739
- (BOOL)deleteFromCalendar;	// 0x34370125
- (BOOL)deleteFromContainer:(void *)container;	// 0x3436a50d
- (id)description;	// 0x3436b391
- (void)encodeWithCoder:(id)coder;	// 0x3436b885
- (id)endDateForCalFramework;	// 0x3436a775
// declared property getter: - (id)endTime;	// 0x34371145
- (id)eventByMergingInEvent:(id)event account:(id)account;	// 0x3436a4d5
- (id)eventByMergingInLosingEvent:(id)losingEvent account:(id)account;	// 0x3436e135
// declared property getter: - (id)eventUID;	// 0x3436a725
// converted property getter: - (id)exceptionDate;	// 0x3436a2ed
// declared property getter: - (id)exceptions;	// 0x3437124d
- (id)fullOrganizerString;	// 0x3436a5d1
- (BOOL)hasOccurrenceInTheFuture;	// 0x34370df1
- (void)informExceptionsThatParentIsReadyForAccount:(id)account;	// 0x3436e919
- (BOOL)isEqualToEvent:(id)event;	// 0x3436ca3d
- (BOOL)loadCalRecordForAccount:(id)account;	// 0x34370ae9
- (void)loadClientIDs;	// 0x3436e715
- (BOOL)loadLocalItemWithAccount:(id)account;	// 0x3436a53d
// declared property getter: - (id)location;	// 0x3437115d
- (int)meetingResponse;	// 0x3436b259
// converted property getter: - (int)meetingResponseForEmail;	// 0x3436b22d
// declared property getter: - (id)meetingStatus;	// 0x34371175
// declared property getter: - (id)organizerEmail;	// 0x3437118d
// declared property getter: - (id)organizerName;	// 0x343711a5
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x3436c085
- (void)postProcessApplicationData;	// 0x3436a895
- (BOOL)purgeAttendeesPendingDeletion;	// 0x34370c61
// declared property getter: - (id)recurrence;	// 0x34371235
// declared property getter: - (id)reminderMinsBefore;	// 0x343711bd
// declared property getter: - (id)responseRequested;	// 0x3437127d
// declared property getter: - (id)responseType;	// 0x34371295
- (BOOL)saveAfterMapWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x3436a569
- (BOOL)saveDetachedEventsWithExistingRecord:(void *)existingRecord intoCalendar:(void *)calendar shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x3436e9cd
- (BOOL)saveServerIDToCalendar;	// 0x3436e031
- (BOOL)saveServerIDToExistingItem;	// 0x3436a525
- (BOOL)saveToCalendarWithExistingRecord:(void *)existingRecord intoCalendar:(void *)calendar shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x3436eac5
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x3436a59d
// declared property getter: - (id)sensitivity;	// 0x343711d5
// declared property setter: - (void)setAllDayEvent:(id)event;	// 0x343712d9
// declared property setter: - (void)setAttendees:(id)attendees;	// 0x34371515
// declared property setter: - (void)setAttendeesPendingDeletion:(id)deletion;	// 0x34371541
// declared property setter: - (void)setBody:(id)body;	// 0x3436a655
// declared property setter: - (void)setBodyTruncated:(id)truncated;	// 0x34371305
// declared property setter: - (void)setBusyStatus:(id)status;	// 0x34371331
// converted property setter: - (void)setCalEvent:(void *)event;	// 0x3436e81d
- (void)setCalculateNextStatusAsIfMeetingRequest:(BOOL)request;	// 0x3436a2f5
// declared property setter: - (void)setDTStamp:(id)stamp;	// 0x3437135d
// declared property setter: - (void)setEndTime:(id)time;	// 0x34371389
// declared property setter: - (void)setEventUID:(id)uid;	// 0x3436a6a1
// converted property setter: - (void)setExceptionDate:(id)date;	// 0x3436a2f1
// declared property setter: - (void)setExceptions:(id)exceptions;	// 0x3436e065
- (void)setLocalItem:(void *)item;	// 0x3436a555
// declared property setter: - (void)setLocation:(id)location;	// 0x343713b5
// converted property setter: - (void)setMeetingResponseForEmail:(int)email;	// 0x3436a2c5
// declared property setter: - (void)setMeetingStatus:(id)status;	// 0x343713e1
// declared property setter: - (void)setOrganizerEmail:(id)email;	// 0x3437140d
// declared property setter: - (void)setOrganizerName:(id)name;	// 0x34371439
// declared property setter: - (void)setRecurrence:(id)recurrence;	// 0x3436a47d
// declared property setter: - (void)setReminderMinsBefore:(id)before;	// 0x34371465
// declared property setter: - (void)setResponseRequested:(id)requested;	// 0x3437156d
// declared property setter: - (void)setResponseType:(id)type;	// 0x34371599
// declared property setter: - (void)setSensitivity:(id)sensitivity;	// 0x34371491
- (void)setShouldUpdateStatus:(BOOL)updateStatus;	// 0x3436a305
// declared property setter: - (void)setStartTime:(id)time;	// 0x343714e9
// declared property setter: - (void)setSubject:(id)subject;	// 0x343714bd
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x343712ad
- (BOOL)shouldUseInMemoryAttendeesForAccount:(id)account numExistingAttendees:(int)attendees;	// 0x3436a2d9
- (id)startDateForCalFramework;	// 0x3436a801
// declared property getter: - (id)startTime;	// 0x34371205
// declared property getter: - (id)subject;	// 0x343711ed
// declared property getter: - (id)timeZone;	// 0x343710b5
- (id)timeZoneNameForCalFramework;	// 0x3436b461
- (id)uidForCalFramework;	// 0x3436a755
- (id)uidGeneratedIfNecessaryWithLocalEvent:(void *)localEvent;	// 0x3436c915
- (BOOL)verifyExternalIds;	// 0x3437096d
@end

