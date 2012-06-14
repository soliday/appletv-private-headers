/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CMLogItem.h"
#import "CoreMotion-Structs.h"


@interface CMGyroData : CMLogItem {
@private
	id _internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) XXStruct_taVrlB rotationRate;	// G=0x32511299; 
- (id)initWithCoder:(id)coder;	// 0x32510f5d
- (id)initWithRotationRate:(XXStruct_ZUkpeA)rotationRate andTimestamp:(double)timestamp;	// 0x32510ed5
- (id)copyWithZone:(NSZone *)zone;	// 0x32511189
- (void)dealloc;	// 0x3251113d
- (id)description;	// 0x325111ed
- (void)encodeWithCoder:(id)coder;	// 0x32511065
// declared property getter: - (XXStruct_taVrlB)rotationRate;	// 0x32511299
@end

