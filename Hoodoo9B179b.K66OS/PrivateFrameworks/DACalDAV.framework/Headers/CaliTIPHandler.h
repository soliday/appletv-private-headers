/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library


@interface CaliTIPHandler : NSObject {
}
+ (id)calculateDiffsForEvent:(id)event inMessage:(id)message;	// 0x30914cd5
+ (id)debugStringForEvent:(id)event;	// 0x30913a6d
+ (BOOL)diffsAreImportant:(id)important;	// 0x30913945
+ (BOOL)doScheduleChanges:(id)changes applyToEvent:(id)event inCalendar:(id)calendar;	// 0x30913d5d
+ (id)getOccurrenceChange:(id)change forEvent:(id)event inCalendar:(id)calendar;	// 0x30913b05
+ (void)initialize;	// 0x30913769
+ (BOOL)isAddressMe:(id)me forAccount:(id)account;	// 0x30913ecd
+ (BOOL)logiTIPDetail;	// 0x309137d5
+ (id)myAddressInAccount:(id)account forEvent:(id)event;	// 0x30913ef9
+ (BOOL)myStatusNeedsActionForEvent:(id)event withAccount:(id)account;	// 0x30913fdd
+ (void)processMessage:(id)message inCalendar:(id)calendar;	// 0x309140cd
+ (void)processMessages:(id)messages inCalendar:(id)calendar;	// 0x30913865
+ (void)setLogiTIPDetail:(BOOL)detail;	// 0x309137e5
@end

