/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CalAlarmMetadata : NSObject <NSCoding> {
@private
	NSArray *_attach;	// 4 = 0x4
	NSArray *_attendee;	// 8 = 0x8
	NSString *_description;	// 12 = 0xc
	NSString *_summary;	// 16 = 0x10
}
@property(retain) NSArray *attach;	// G=0x3276bb5d; S=0x3276bb71; @synthesize=_attach
@property(retain) NSArray *attendee;	// G=0x3276bb95; S=0x3276bba9; @synthesize=_attendee
@property(retain) NSString *description;	// G=0x3276bbcd; S=0x3276bbe1; @synthesize=_description
@property(retain) NSString *summary;	// G=0x3276bc05; S=0x3276bc19; @synthesize=_summary
+ (id)metadataWithData:(id)data;	// 0x3276b9b1
- (id)initWithCoder:(id)coder;	// 0x3276ba85
- (id)initWithICSAlarm:(id)icsalarm;	// 0x3276b7cd
- (void)applyToAlarm:(id)alarm;	// 0x3276b925
// declared property getter: - (id)attach;	// 0x3276bb5d
// declared property getter: - (id)attendee;	// 0x3276bb95
- (id)dataRepresentation;	// 0x3276b9cd
- (void)dealloc;	// 0x3276b89d
// declared property getter: - (id)description;	// 0x3276bbcd
- (void)encodeWithCoder:(id)coder;	// 0x3276b9ed
// declared property setter: - (void)setAttach:(id)attach;	// 0x3276bb71
// declared property setter: - (void)setAttendee:(id)attendee;	// 0x3276bba9
// declared property setter: - (void)setDescription:(id)description;	// 0x3276bbe1
// declared property setter: - (void)setSummary:(id)summary;	// 0x3276bc19
// declared property getter: - (id)summary;	// 0x3276bc05
@end

