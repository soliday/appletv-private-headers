/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVTimedMetadataGroup : NSObject <NSCopying> {
	AVTimedMetadataGroupInternal *_priv;	// 4 = 0x4
}
@property(readonly, copy) NSArray *items;	// G=0x304214b5; 
@property(readonly, assign) XXStruct_yD8eWC timeRange;	// G=0x30421461; 
- (id)init;	// 0x3042178d
- (id)initWithItems:(id)items timeRange:(XXStruct_yD8eWC)range;	// 0x30421705
- (id)copyWithZone:(NSZone *)zone;	// 0x304216dd
- (void)dealloc;	// 0x304218a5
- (id)description;	// 0x30421a9d
- (void)finalize;	// 0x30421865
- (unsigned)hash;	// 0x30421a11
- (BOOL)isEqual:(id)equal;	// 0x3042190d
// declared property getter: - (id)items;	// 0x304214b5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30421611
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x30421461
@end

