/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVInterstitial : NSObject {
@private
	double _startTime;	// 4 = 0x4
	double _endTime;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) double endTime;	// G=0x32ac7a15; @synthesize=_endTime
@property(readonly, assign, nonatomic) double startTime;	// G=0x32ac79fd; @synthesize=_startTime
- (id)_initWithFeedDictionary:(id)feedDictionary;	// 0x32ac78a9
- (id)_initWithStartTime:(double)startTime endTime:(double)time;	// 0x32ac792d
- (BOOL)containsTime:(double)time;	// 0x32ac79b9
- (void)dealloc;	// 0x32ac798d
// declared property getter: - (double)endTime;	// 0x32ac7a15
// declared property getter: - (double)startTime;	// 0x32ac79fd
@end

