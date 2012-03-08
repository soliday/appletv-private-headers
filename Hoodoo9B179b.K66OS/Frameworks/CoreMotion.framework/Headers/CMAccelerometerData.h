/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CMLogItem.h"
#import "CoreMotion-Structs.h"


@interface CMAccelerometerData : CMLogItem {
@private
	id _internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) XXStruct_taVrlB acceleration;	// G=0x34d94b5d; 
- (id)initWithAcceleration:(XXStruct_ZUkpeA)acceleration andTimestamp:(double)timestamp;	// 0x34d947c9
- (id)initWithCoder:(id)coder;	// 0x34d94851
// declared property getter: - (XXStruct_taVrlB)acceleration;	// 0x34d94b5d
- (id)copyWithZone:(NSZone *)zone;	// 0x34d94a4d
- (void)dealloc;	// 0x34d94a01
- (id)description;	// 0x34d94ab1
- (void)encodeWithCoder:(id)coder;	// 0x34d94941
@end
