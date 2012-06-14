/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDCommonBehaviorData.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PDAnimateTimeBehavior : PDCommonBehaviorData {
@private
	NSMutableArray *mTimeAnimateValues;	// 12 = 0xc
}
- (id)init;	// 0x3458cdcd
- (void)addTimeAnimateValue:(id)value;	// 0x3458ce31
- (void)dealloc;	// 0x3458ce99
- (id)timeAnimateValueAtIndex:(int)index;	// 0x3458ce55
- (int)timeAnimateValueCount;	// 0x3458ce79
@end
