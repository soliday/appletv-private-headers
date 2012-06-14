/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "NSCoding.h"
#import "CoreMotion-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface CMLogItem : NSObject <NSCoding, NSCopying> {
@private
	id _internalLogItem;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double timestamp;	// G=0x3677cce5; 
- (id)initWithCoder:(id)coder;	// 0x3677cbad
- (id)initWithTimestamp:(double)timestamp;	// 0x3677cb2d
- (id)copyWithZone:(NSZone *)zone;	// 0x3677cc89
- (void)dealloc;	// 0x3677cc3d
- (void)encodeWithCoder:(id)coder;	// 0x3677cbed
// declared property getter: - (double)timestamp;	// 0x3677cce5
@end

