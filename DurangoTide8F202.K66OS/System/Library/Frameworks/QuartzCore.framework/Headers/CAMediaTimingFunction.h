/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"


@interface CAMediaTimingFunction : NSObject <NSCoding> {
@private
	CAMediaTimingFunctionPrivate *_priv;	// 4 = 0x4
}
+ (id)functionWithControlPoints:(float)controlPoints :(float)arg2 :(float)arg3 :(float)arg4;	// 0x30231e6d
+ (id)functionWithName:(id)name;	// 0x3022ebcd
- (id)initWithCoder:(id)coder;	// 0x3028f289
- (id)initWithControlPoints:(float)controlPoints :(float)arg2 :(float)arg3 :(float)arg4;	// 0x30228385
- (void)_getPoints:(double *)points;	// 0x3028f225
- (float)_solveForInput:(float)input;	// 0x3028f589
- (void)dealloc;	// 0x302284b9
- (id)description;	// 0x3028f3a1
- (void)encodeWithCoder:(id)coder;	// 0x3028f309
- (void)getControlPointAtIndex:(unsigned long)index values:(float [2])values;	// 0x3028f3fd
@end

