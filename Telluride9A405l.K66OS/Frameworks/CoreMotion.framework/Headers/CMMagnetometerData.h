/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CMLogItem.h"
#import "CoreMotion-Structs.h"


@interface CMMagnetometerData : CMLogItem {
@private
	id _internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) XXStruct_taVrlB magneticField;	// G=0x32004f59; 
- (id)initWithCoder:(id)coder;	// 0x32004c4d
- (id)initWithMagneticField:(XXStruct_ZUkpeA)magneticField andTimestamp:(double)timestamp;	// 0x32004bc5
- (id)copyWithZone:(NSZone *)zone;	// 0x32004e49
- (void)dealloc;	// 0x32004dfd
- (id)description;	// 0x32004ead
- (void)encodeWithCoder:(id)coder;	// 0x32004d3d
// declared property getter: - (XXStruct_taVrlB)magneticField;	// 0x32004f59
@end
