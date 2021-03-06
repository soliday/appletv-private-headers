/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class ICSDate, NSDictionary, NSArray;

@interface CalEventMetadata : NSObject <NSCoding> {
	NSArray *_attach;	// 4 = 0x4
	ICSDate *_created;	// 8 = 0x8
	NSDictionary *_x_props;	// 12 = 0xc
	NSArray *_categories;	// 16 = 0x10
	int _classification;	// 20 = 0x14
	NSArray *_priority;	// 24 = 0x18
}
@property(retain) NSArray *attach;	// G=0x31651485; S=0x316514fd; @synthesize=_attach
@property(retain) NSArray *categories;	// G=0x316514cd; S=0x31651581; @synthesize=_categories
@property(assign) int classification;	// G=0x31650a0d; S=0x31650a1d; @synthesize=_classification
@property(retain) ICSDate *created;	// G=0x3165149d; S=0x31651529; @synthesize=_created
@property(retain) NSArray *priority;	// G=0x316514e5; S=0x316515ad; @synthesize=_priority
@property(retain) NSDictionary *x_props;	// G=0x316514b5; S=0x31651555; @synthesize=_x_props
+ (id)metadataWithData:(id)data;	// 0x316511b1
+ (id)metadataWithICSEvent:(id)icsevent;	// 0x31650ca1
- (id)init;	// 0x31650ce1
- (id)initWithCoder:(id)coder;	// 0x31650a2d
- (id)initWithICSEvent:(id)icsevent;	// 0x31650ec9
- (void)applyToEvent:(id)event;	// 0x31650cf9
// declared property getter: - (id)attach;	// 0x31651485
// declared property getter: - (id)categories;	// 0x316514cd
// declared property getter: - (int)classification;	// 0x31650a0d
// declared property getter: - (id)created;	// 0x3165149d
- (id)dataRepresentationWithExistingMetaData:(id)existingMetaData;	// 0x316512b5
- (void)dealloc;	// 0x31650c11
- (void)encodeWithCoder:(id)coder;	// 0x31650b4d
// declared property getter: - (id)priority;	// 0x316514e5
// declared property setter: - (void)setAttach:(id)attach;	// 0x316514fd
// declared property setter: - (void)setCategories:(id)categories;	// 0x31651581
// declared property setter: - (void)setClassification:(int)classification;	// 0x31650a1d
// declared property setter: - (void)setCreated:(id)created;	// 0x31651529
// declared property setter: - (void)setPriority:(id)priority;	// 0x316515ad
// declared property setter: - (void)setX_props:(id)props;	// 0x31651555
// declared property getter: - (id)x_props;	// 0x316514b5
@end

