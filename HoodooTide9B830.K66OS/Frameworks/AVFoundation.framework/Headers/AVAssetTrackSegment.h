/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"


@interface AVAssetTrackSegment : NSObject {
@private
	XXStruct_lthJfB _timeMapping;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;	// G=0x35e6c9d9; 
@property(readonly, assign, nonatomic) XXStruct_lthJfB timeMapping;	// G=0x35e6cc85; @synthesize=_timeMapping
- (id)_initWithTimeMapping:(XXStruct_lthJfB)timeMapping;	// 0x35e6c915
- (unsigned)hash;	// 0x35e6cbed
// declared property getter: - (BOOL)isEmpty;	// 0x35e6c9d9
- (BOOL)isEqual:(id)equal;	// 0x35e6c9f5
// declared property getter: - (XXStruct_lthJfB)timeMapping;	// 0x35e6cc85
@end

