/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSString, CalDAVOccurrenceChange, NSMutableDictionary;

@interface CalDAVScheduleChangesProperty : NSObject {
	NSString *_dateStamp;	// 4 = 0x4
	int _actionType;	// 8 = 0x8
	CalDAVOccurrenceChange *_masterChange;	// 12 = 0xc
	NSMutableDictionary *_occurrenceChanges;	// 16 = 0x10
	NSString *_attendeeAddress;	// 20 = 0x14
}
@property(assign) int actionType;	// G=0x3146d92d; S=0x3146d93d; @synthesize=_actionType
@property(retain) NSString *attendeeAddress;	// G=0x3146e335; S=0x3146e3a9; @synthesize=_attendeeAddress
@property(retain) NSString *dateStamp;	// G=0x3146e31d; S=0x3146e37d; @synthesize=_dateStamp
@property(retain) CalDAVOccurrenceChange *masterChange;	// G=0x3146e34d; S=0x3146e3d5; @synthesize=_masterChange
+ (id)debugStringForType:(int)type;	// 0x3146d8ed
+ (void)initialize;	// 0x3146dbe9
+ (id)propertyWithNode:(id)node;	// 0x3146e42d
- (id)init;	// 0x3146db41
// declared property getter: - (int)actionType;	// 0x3146d92d
- (void)addOccurrenceChange:(id)change;	// 0x3146e105
- (id)allChanges;	// 0x3146d9d5
// declared property getter: - (id)attendeeAddress;	// 0x3146e335
- (id)changeForOccurrence:(id)occurrence;	// 0x3146d94d
// declared property getter: - (id)dateStamp;	// 0x3146e31d
- (void)dealloc;	// 0x3146dac5
- (BOOL)isCancel;	// 0x3146daa9
- (BOOL)isCreate;	// 0x3146da55
- (BOOL)isReply;	// 0x3146da8d
- (BOOL)isUpdate;	// 0x3146da71
// declared property getter: - (id)masterChange;	// 0x3146e34d
- (id)recurrenceIDs;	// 0x3146d99d
// declared property setter: - (void)setActionType:(int)type;	// 0x3146d93d
// declared property setter: - (void)setAttendeeAddress:(id)address;	// 0x3146e3a9
// declared property setter: - (void)setDateStamp:(id)stamp;	// 0x3146e37d
// declared property setter: - (void)setMasterChange:(id)change;	// 0x3146e3d5
@end

