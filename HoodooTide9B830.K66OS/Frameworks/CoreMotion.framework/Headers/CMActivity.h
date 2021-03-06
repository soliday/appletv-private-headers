/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CMLogItem.h"
#import "CoreMotion-Structs.h"


@interface CMActivity : CMLogItem {
@private
	id _internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) int confidence;	// G=0x367a3b9d; 
@property(readonly, assign, nonatomic) BOOL isDriving;	// G=0x367a3c35; 
@property(readonly, assign, nonatomic) BOOL isMoving;	// G=0x367a3bbd; 
@property(readonly, assign, nonatomic) BOOL isRunning;	// G=0x367a3c0d; 
@property(readonly, assign, nonatomic) BOOL isWalking;	// G=0x367a3be5; 
- (id)initWithCoder:(id)coder;	// 0x367a3979
- (id)initWithMotionActivity:(CLMotionActivity)motionActivity andTimestamp:(double)timestamp;	// 0x367a3901
- (CLMotionActivity)activity;	// 0x367a3b71
// declared property getter: - (int)confidence;	// 0x367a3b9d
- (id)copyWithZone:(NSZone *)zone;	// 0x367a3b09
- (void)dealloc;	// 0x367a3abd
- (id)description;	// 0x367a3b6d
- (void)encodeWithCoder:(id)coder;	// 0x367a3a25
// declared property getter: - (BOOL)isDriving;	// 0x367a3c35
// declared property getter: - (BOOL)isMoving;	// 0x367a3bbd
// declared property getter: - (BOOL)isRunning;	// 0x367a3c0d
// declared property getter: - (BOOL)isWalking;	// 0x367a3be5
@end

