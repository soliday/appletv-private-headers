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
@property(readonly, retain) NSMutableArray *regions;	// G=0x35bf2b51; converted property
- (id)initWithTask:(unsigned)task;	// 0x35bf3afd
- (id)initWithTask:(unsigned)task options:(unsigned)options;	// 0x35bf61cd
- (void)dealloc;	// 0x35bf572d
- (id)descriptionForMallocZoneTotalsWithOptions:(unsigned)options;	// 0x35bf5791
- (id)descriptionForRange:(VMURange)range;	// 0x35bf3b11
- (id)descriptionForRange:(VMURange)range options:(unsigned)options;	// 0x35bf5fcd
- (id)descriptionForRegionTotalsWithOptions:(unsigned)options;	// 0x35bf4731
// converted property getter: - (id)regions;	// 0x35bf2b51
@end

