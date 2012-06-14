/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSValue.h> // Unknown library


@interface NSValue (CATransform3DAdditions)
+ (id)valueWithCATransform3D:(CATransform3D)catransform3D;	// 0x307f0c59
- (CATransform3D)CATransform3DValue;	// 0x307f15d9
@end

@interface NSValue (CAPoint3DAdditions)
+ (id)valueWithCAPoint3D:(CAPoint3D)capoint3D;	// 0x307f2981
- (CAPoint3D)CAPoint3DValue;	// 0x307f2965
@end

@interface NSValue (CARenderValue)
- (Object *)CA_copyRenderValue;	// 0x307cfc91
@end

@interface NSValue (CAAnimatableValue)
- (id)CA_addValue:(id)value multipliedBy:(int)by;	// 0x30857ea1
- (float)CA_distanceToValue:(id)value;	// 0x30857ded
- (id)CA_interpolateValue:(id)value byFraction:(float)fraction;	// 0x307f01a5
- (id)CA_interpolateValues:(id)values :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator *)interpolator;	// 0x30858069
@end

