/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSMutableArray, NSMapTable;

@interface VMUVMRegionIdentifier : NSObject {
	NSMutableArray *_regions;	// 4 = 0x4
	NSMapTable *_mallocZoneStatisticsMap;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *regions;	// G=0x31be5b51; converted property
- (id)initWithTask:(unsigned)task;	// 0x31be6afd
- (id)initWithTask:(unsigned)task options:(unsigned)options;	// 0x31be91cd
- (void)dealloc;	// 0x31be872d
- (id)descriptionForMallocZoneTotalsWithOptions:(unsigned)options;	// 0x31be8791
- (id)descriptionForRange:(VMURange)range;	// 0x31be6b11
- (id)descriptionForRange:(VMURange)range options:(unsigned)options;	// 0x31be8fcd
- (id)descriptionForRegionTotalsWithOptions:(unsigned)options;	// 0x31be7731
// converted property getter: - (id)regions;	// 0x31be5b51
@end

