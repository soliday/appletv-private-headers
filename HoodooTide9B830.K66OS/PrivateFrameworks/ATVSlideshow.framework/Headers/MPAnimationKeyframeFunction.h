/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPAnimationKeyframe.h"
#import "ATVSlideshow-Structs.h"

@class NSDictionary, NSString;

@interface MPAnimationKeyframeFunction : MPAnimationKeyframe {
	double _duration;	// 20 = 0x14
	NSString *_function;	// 28 = 0x1c
	NSDictionary *_functionParameters;	// 32 = 0x20
	double _functionTimeOffset;	// 36 = 0x24
	double _functionTimeFactor;	// 44 = 0x2c
	double _innerEaseInControl;	// 52 = 0x34
	double _innerEaseOutControl;	// 60 = 0x3c
}
@property(assign, nonatomic) double duration;	// G=0x32016785; S=0x32015f41; @synthesize=_duration
@property(copy, nonatomic) NSString *function;	// G=0x3201679d; S=0x320164fd; @synthesize=_function
@property(copy, nonatomic) NSDictionary *functionParameters;	// G=0x320167ad; S=0x32016641; @synthesize=_functionParameters
@property(assign, nonatomic) double functionTimeFactor;	// G=0x320167d5; S=0x32016189; @synthesize=_functionTimeFactor
@property(assign, nonatomic) double functionTimeOffset;	// G=0x320167bd; S=0x32016065; @synthesize=_functionTimeOffset
@property(assign, nonatomic) double innerEaseInControl;	// G=0x320167ed; S=0x320162ad; @synthesize=_innerEaseInControl
@property(assign, nonatomic) double innerEaseOutControl;	// G=0x32016805; S=0x320163d5; @synthesize=_innerEaseOutControl
+ (id)keyframeFunctionWithFunction:(id)function atTime:(double)time offsetType:(int)type withDuration:(double)duration;	// 0x320157b5
+ (id)keyframeFunctionWithFunction:(id)function atTime:(double)time withDuration:(double)duration;	// 0x32015761
- (id)initKeyframeFunctionWithFunction:(id)function atTime:(double)time offsetType:(int)type withDuration:(double)duration;	// 0x32015809
- (id)initWithCoder:(id)coder;	// 0x32015af9
- (id)copyWithZone:(NSZone *)zone;	// 0x32015ca5
- (void)dealloc;	// 0x32015e01
- (id)description;	// 0x32015e79
// declared property getter: - (double)duration;	// 0x32016785
- (void)encodeWithCoder:(id)coder;	// 0x3201591d
// declared property getter: - (id)function;	// 0x3201679d
// declared property getter: - (id)functionParameters;	// 0x320167ad
// declared property getter: - (double)functionTimeFactor;	// 0x320167d5
// declared property getter: - (double)functionTimeOffset;	// 0x320167bd
// declared property getter: - (double)innerEaseInControl;	// 0x320167ed
// declared property getter: - (double)innerEaseOutControl;	// 0x32016805
- (id)keyframe;	// 0x32016919
// declared property setter: - (void)setDuration:(double)duration;	// 0x32015f41
// declared property setter: - (void)setFunction:(id)function;	// 0x320164fd
// declared property setter: - (void)setFunctionParameters:(id)parameters;	// 0x32016641
// declared property setter: - (void)setFunctionTimeFactor:(double)factor;	// 0x32016189
// declared property setter: - (void)setFunctionTimeOffset:(double)offset;	// 0x32016065
// declared property setter: - (void)setInnerEaseInControl:(double)control;	// 0x320162ad
// declared property setter: - (void)setInnerEaseOutControl:(double)control;	// 0x320163d5
@end

