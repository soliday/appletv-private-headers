/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "CalDAV-Structs.h"

@class NSString, NSSet;

@interface CalDAVServerVersion : NSObject <NSCopying> {
@private
	double _version;	// 4 = 0x4
	BOOL _supportsTimeRangeFilter;	// 12 = 0xc
	BOOL _supportsTodoTimeRangeFilter;	// 13 = 0xd
	BOOL _supportsTimeRangeFilterWithoutEndDate;	// 14 = 0xe
	BOOL _supportsTimeRangeFilterOnInbox;	// 15 = 0xf
	BOOL _supportsAutoSchedule;	// 16 = 0x10
	BOOL _supportsPrivateComments;	// 17 = 0x11
	BOOL _supportsSharing;	// 18 = 0x12
	BOOL _supportsSharingNoScheduling;	// 19 = 0x13
	BOOL _supportsCalendarProxy;	// 20 = 0x14
	BOOL _supportsInboxAvailability;	// 21 = 0x15
	BOOL _supportsPrivateEvents;	// 22 = 0x16
	BOOL _supportsSubscriptionCalendars;	// 23 = 0x17
	BOOL _supportsPrincipalPropertySearch;	// 24 = 0x18
	BOOL _supportsExtendedCalendarQuery;	// 25 = 0x19
	BOOL _supportsRequestCompression;	// 26 = 0x1a
	BOOL _supportsManagedAttachments;	// 27 = 0x1b
	NSString *_supportedCalendarComponentSets;	// 28 = 0x1c
	NSSet *_complianceClasses;	// 32 = 0x20
	NSString *_serverHeader;	// 36 = 0x24
}
@property(retain, nonatomic) NSSet *complianceClasses;	// G=0x36e6600d; S=0x36e6601d; @synthesize=_complianceClasses
@property(copy, nonatomic) NSString *serverHeader;	// G=0x36e6602d; S=0x36e66041; @synthesize=_serverHeader
@property(copy, nonatomic) NSString *supportedCalendarComponentSets;	// G=0x36e660b1; S=0x36e660c5; @synthesize=_supportedCalendarComponentSets
@property(assign, nonatomic) BOOL supportsAutoSchedule;	// G=0x36e65eed; S=0x36e65efd; @synthesize=_supportsAutoSchedule
@property(assign, nonatomic) BOOL supportsCalendarProxy;	// G=0x36e65f6d; S=0x36e65f7d; @synthesize=_supportsCalendarProxy
@property(assign, nonatomic) BOOL supportsExtendedCalendarQuery;	// G=0x36e66051; S=0x36e66061; @synthesize=_supportsExtendedCalendarQuery
@property(assign, nonatomic) BOOL supportsInboxAvailability;	// G=0x36e65f8d; S=0x36e65f9d; @synthesize=_supportsInboxAvailability
@property(assign, nonatomic) BOOL supportsManagedAttachments;	// G=0x36e66091; S=0x36e660a1; @synthesize=_supportsManagedAttachments
@property(assign, nonatomic) BOOL supportsPrincipalPropertySearch;	// G=0x36e65fed; S=0x36e65ffd; @synthesize=_supportsPrincipalPropertySearch
@property(assign, nonatomic) BOOL supportsPrivateComments;	// G=0x36e65f0d; S=0x36e65f1d; @synthesize=_supportsPrivateComments
@property(assign, nonatomic) BOOL supportsPrivateEvents;	// G=0x36e65fad; S=0x36e65fbd; @synthesize=_supportsPrivateEvents
@property(assign, nonatomic) BOOL supportsRequestCompression;	// G=0x36e66071; S=0x36e66081; @synthesize=_supportsRequestCompression
@property(assign, nonatomic) BOOL supportsSharing;	// G=0x36e65f2d; S=0x36e65f3d; @synthesize=_supportsSharing
@property(assign, nonatomic) BOOL supportsSharingNoScheduling;	// G=0x36e65f4d; S=0x36e65f5d; @synthesize=_supportsSharingNoScheduling
@property(assign, nonatomic) BOOL supportsSubscriptionCalendars;	// G=0x36e65fcd; S=0x36e65fdd; @synthesize=_supportsSubscriptionCalendars
@property(assign, nonatomic) BOOL supportsTimeRangeFilter;	// G=0x36e65e6d; S=0x36e65e7d; @synthesize=_supportsTimeRangeFilter
@property(assign, nonatomic) BOOL supportsTimeRangeFilterOnInbox;	// G=0x36e65ecd; S=0x36e65edd; @synthesize=_supportsTimeRangeFilterOnInbox
@property(assign, nonatomic) BOOL supportsTimeRangeFilterWithoutEndDate;	// G=0x36e65ead; S=0x36e65ebd; @synthesize=_supportsTimeRangeFilterWithoutEndDate
@property(assign, nonatomic) BOOL supportsTodoTimeRangeFilter;	// G=0x36e65e8d; S=0x36e65e9d; @synthesize=_supportsTodoTimeRangeFilter
@property(readonly, assign, nonatomic) NSString *type;	// G=0x36e65741; 
@property(assign, nonatomic) double version;	// G=0x36e65e41; S=0x36e65e59; @synthesize=_version
+ (id)_prototypeMatchingServerHeaders:(id)headers;	// 0x36e649a9
+ (id)versionWithHTTPHeaders:(id)httpheaders;	// 0x36e6500d
+ (id)versionWithPropertyValue:(id)propertyValue;	// 0x36e65751
- (id)init;	// 0x36e65165
- (id)_additionalFlagKeys;	// 0x36e64d79
- (id)_allFlagKeys;	// 0x36e64dd1
- (id)_propertiesToComplianceClasses;	// 0x36e64bc5
- (void)_setPropertiesFromComplianceClasses:(id)complianceClasses;	// 0x36e64eb1
// declared property getter: - (id)complianceClasses;	// 0x36e6600d
- (id)copyWithZone:(NSZone *)zone;	// 0x36e651f9
- (void)dealloc;	// 0x36e64931
- (id)description;	// 0x36e655b9
- (unsigned)hash;	// 0x36e653ad
- (BOOL)isEqual:(id)equal;	// 0x36e6540d
- (id)propertyValue;	// 0x36e65b91
// declared property getter: - (id)serverHeader;	// 0x36e6602d
// declared property setter: - (void)setComplianceClasses:(id)classes;	// 0x36e6601d
// declared property setter: - (void)setServerHeader:(id)header;	// 0x36e66041
// declared property setter: - (void)setSupportedCalendarComponentSets:(id)sets;	// 0x36e660c5
// declared property setter: - (void)setSupportsAutoSchedule:(BOOL)schedule;	// 0x36e65efd
// declared property setter: - (void)setSupportsCalendarProxy:(BOOL)proxy;	// 0x36e65f7d
// declared property setter: - (void)setSupportsExtendedCalendarQuery:(BOOL)query;	// 0x36e66061
// declared property setter: - (void)setSupportsInboxAvailability:(BOOL)availability;	// 0x36e65f9d
// declared property setter: - (void)setSupportsManagedAttachments:(BOOL)attachments;	// 0x36e660a1
// declared property setter: - (void)setSupportsPrincipalPropertySearch:(BOOL)search;	// 0x36e65ffd
// declared property setter: - (void)setSupportsPrivateComments:(BOOL)comments;	// 0x36e65f1d
// declared property setter: - (void)setSupportsPrivateEvents:(BOOL)events;	// 0x36e65fbd
// declared property setter: - (void)setSupportsRequestCompression:(BOOL)compression;	// 0x36e66081
// declared property setter: - (void)setSupportsSharing:(BOOL)sharing;	// 0x36e65f3d
// declared property setter: - (void)setSupportsSharingNoScheduling:(BOOL)scheduling;	// 0x36e65f5d
// declared property setter: - (void)setSupportsSubscriptionCalendars:(BOOL)calendars;	// 0x36e65fdd
// declared property setter: - (void)setSupportsTimeRangeFilter:(BOOL)filter;	// 0x36e65e7d
// declared property setter: - (void)setSupportsTimeRangeFilterOnInbox:(BOOL)inbox;	// 0x36e65edd
// declared property setter: - (void)setSupportsTimeRangeFilterWithoutEndDate:(BOOL)date;	// 0x36e65ebd
// declared property setter: - (void)setSupportsTodoTimeRangeFilter:(BOOL)filter;	// 0x36e65e9d
// declared property setter: - (void)setVersion:(double)version;	// 0x36e65e59
// declared property getter: - (id)supportedCalendarComponentSets;	// 0x36e660b1
// declared property getter: - (BOOL)supportsAutoSchedule;	// 0x36e65eed
// declared property getter: - (BOOL)supportsCalendarProxy;	// 0x36e65f6d
// declared property getter: - (BOOL)supportsExtendedCalendarQuery;	// 0x36e66051
// declared property getter: - (BOOL)supportsInboxAvailability;	// 0x36e65f8d
// declared property getter: - (BOOL)supportsManagedAttachments;	// 0x36e66091
// declared property getter: - (BOOL)supportsPrincipalPropertySearch;	// 0x36e65fed
// declared property getter: - (BOOL)supportsPrivateComments;	// 0x36e65f0d
// declared property getter: - (BOOL)supportsPrivateEvents;	// 0x36e65fad
// declared property getter: - (BOOL)supportsRequestCompression;	// 0x36e66071
// declared property getter: - (BOOL)supportsSharing;	// 0x36e65f2d
// declared property getter: - (BOOL)supportsSharingNoScheduling;	// 0x36e65f4d
// declared property getter: - (BOOL)supportsSubscriptionCalendars;	// 0x36e65fcd
// declared property getter: - (BOOL)supportsTimeRangeFilter;	// 0x36e65e6d
// declared property getter: - (BOOL)supportsTimeRangeFilterOnInbox;	// 0x36e65ecd
// declared property getter: - (BOOL)supportsTimeRangeFilterWithoutEndDate;	// 0x36e65ead
// declared property getter: - (BOOL)supportsTodoTimeRangeFilter;	// 0x36e65e8d
// declared property getter: - (id)type;	// 0x36e65741
// declared property getter: - (double)version;	// 0x36e65e41
@end
