/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "DACalDAV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSSet, MobileCalDAVCalendar, NSMutableSet;

@interface MobileCalendarChangeApplier : NSObject {
	MobileCalDAVCalendar *_calendar;	// 4 = 0x4
	int _numChanges;	// 8 = 0x8
	BOOL _mergeByIdentity;	// 12 = 0xc
	NSMutableSet *_changedUIDs;	// 16 = 0x10
	NSMutableSet *_locallyModifiedEvents;	// 20 = 0x14
}
@property(readonly, assign) NSSet *changedUIDs;	// G=0x340a3631; @synthesize=_changedUIDs
@property(readonly, assign) NSSet *locallyModifiedEvents;	// G=0x340a3621; @synthesize=_locallyModifiedEvents
@property(assign) BOOL mergeByIdentity;	// G=0x340a3641; S=0x340a3651; @synthesize=_mergeByIdentity
@property(readonly, assign) int numChanges;	// G=0x340a3661; @synthesize=_numChanges
- (id)initWithCalendar:(id)calendar;	// 0x340a375d
- (BOOL)_addOrModifyEvent:(id)event inICSCalendar:(id)icscalendar calCalendar:(void *)calendar calDatabase:(CalDatabase *)database cache:(id)cache uid:(id)uid;	// 0x340a3cdd
- (BOOL)_removeEventWithUID:(id)uid inCalCalendar:(void *)calCalendar calDatabase:(CalDatabase *)database;	// 0x340a4239
- (void)_setOrganizerAndEventStatusOnEvent:(void *)event;	// 0x340a46c5
// declared property getter: - (id)changedUIDs;	// 0x340a3631
- (void)dealloc;	// 0x340a36f1
- (void)didAbortRefreshInOperation:(id)operation;	// 0x340a3a29
- (void)didCompleteRefreshInOperation:(id)operation;	// 0x340a39f5
// declared property getter: - (id)locallyModifiedEvents;	// 0x340a3621
// declared property getter: - (BOOL)mergeByIdentity;	// 0x340a3641
// declared property getter: - (int)numChanges;	// 0x340a3661
- (void)operation:(id)operation deleteResourcesWithFilenames:(id)filenames;	// 0x340a3a5d
- (void)operation:(id)operation processError:(id)error;	// 0x340a39bd
- (void)operation:(id)operation processResources:(id)resources;	// 0x340a3699
- (BOOL)operation:(id)operation shouldAcceptRemoteModification:(id)modification isDeleted:(BOOL)deleted;	// 0x340a361d
- (BOOL)operationShouldContinueProcessingResources:(id)operation;	// 0x340a3671
- (void)processComponent:(id)component inCalendar:(id)calendar cache:(id)cache filename:(id)filename serverETag:(id)tag scheduleTag:(id)tag6;	// 0x340a3819
- (void)processGetFromData:(id)data etagCache:(id)cache filename:(id)filename serverETag:(id)tag scheduleTag:(id)tag5;	// 0x340a43ed
- (void)processResources:(id)resources etagCache:(id)cache;	// 0x340a3bc5
- (void)saveCalEventData:(id)data filename:(id)filename;	// 0x340a42c9
// declared property setter: - (void)setMergeByIdentity:(BOOL)identity;	// 0x340a3651
@end
