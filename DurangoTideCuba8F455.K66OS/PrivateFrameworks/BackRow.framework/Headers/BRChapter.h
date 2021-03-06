/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDate;

@interface BRChapter : NSObject {
@private
	NSString *_name;	// 4 = 0x4
	NSString *_description;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	double _startTime;	// 16 = 0x10
	double _endTime;	// 24 = 0x18
	NSDate *_startDate;	// 32 = 0x20
	NSDate *_endDate;	// 36 = 0x24
}
@property(retain, nonatomic) NSString *description;	// G=0x3302843d; S=0x3302887d; @synthesize=_description
@property(retain, nonatomic) NSDate *endDate;	// G=0x330283c5; S=0x330288f5; @synthesize=_endDate
@property(assign, nonatomic) double endTime;	// G=0x330283e5; S=0x330283f5; @synthesize=_endTime
@property(retain, nonatomic) NSString *identifier;	// G=0x3302842d; S=0x330288a5; @synthesize=_identifier
@property(retain, nonatomic) NSString *name;	// G=0x3302844d; S=0x33028855; @synthesize=_name
@property(retain, nonatomic) NSDate *startDate;	// G=0x330283d5; S=0x330288cd; @synthesize=_startDate
@property(assign, nonatomic) double startTime;	// G=0x33028409; S=0x33028419; @synthesize=_startTime
+ (id)chapterWithAssetID:(id)assetID startDate:(id)date endDate:(id)date3;	// 0x330286f5
+ (id)chapterWithAssetID:(id)assetID startTime:(double)time endTime:(double)time3;	// 0x33028739
- (id)initWithAssetID:(id)assetID startDate:(id)date endDate:(id)date3;	// 0x33028561
- (id)initWithAssetID:(id)assetID startTime:(double)time endTime:(double)time3;	// 0x33028625
- (BOOL)containsDate:(id)date;	// 0x3302845d
- (BOOL)containsTime:(double)time;	// 0x3302878d
- (void)dealloc;	// 0x330284dd
// declared property getter: - (id)description;	// 0x3302843d
// declared property getter: - (id)endDate;	// 0x330283c5
// declared property getter: - (double)endTime;	// 0x330283e5
// declared property getter: - (id)identifier;	// 0x3302842d
- (id)imageProxy;	// 0x330283c1
- (void)invalidate;	// 0x330283bd
// declared property getter: - (id)name;	// 0x3302844d
// declared property setter: - (void)setDescription:(id)description;	// 0x3302887d
// declared property setter: - (void)setEndDate:(id)date;	// 0x330288f5
// declared property setter: - (void)setEndTime:(double)time;	// 0x330283f5
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x330288a5
// declared property setter: - (void)setName:(id)name;	// 0x33028855
// declared property setter: - (void)setStartDate:(id)date;	// 0x330288cd
// declared property setter: - (void)setStartTime:(double)time;	// 0x33028419
// declared property getter: - (id)startDate;	// 0x330283d5
// declared property getter: - (double)startTime;	// 0x33028409
@end

