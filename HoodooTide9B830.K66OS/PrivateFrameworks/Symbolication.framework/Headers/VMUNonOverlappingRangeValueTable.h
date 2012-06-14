/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class VMURangeArray, NSMutableArray;

@interface VMUNonOverlappingRangeValueTable : NSObject {
	VMURangeArray *_ranges;	// 4 = 0x4
	NSMutableArray *_values;	// 8 = 0x8
}
- (id)init;	// 0x31be3e79
- (unsigned)_indexForLocation:(unsigned long long)location;	// 0x31be2bf5
- (NSRange)_indexNSRangeForOverlappingRangesForVMURange:(VMURange)vmurange;	// 0x31be430d
- (NSRange)_indexNSRangeInCandidateNSRange:(NSRange)candidateNSRange forVMURange:(VMURange)vmurange;	// 0x31be4361
- (void)setValue:(id)value forNonOverlappingRange:(VMURange)nonOverlappingRange;	// 0x31be419d
- (void)setValue:(id)value forRange:(VMURange)range;	// 0x31be3f15
- (id)valueForLocation:(unsigned long long)location;	// 0x31be44c1
@end

