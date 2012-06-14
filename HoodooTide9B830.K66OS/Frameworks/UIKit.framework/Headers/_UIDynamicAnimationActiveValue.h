/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface _UIDynamicAnimationActiveValue : NSObject {
@private
	double _value;	// 4 = 0x4
	double _minimumActiveValue;	// 12 = 0xc
	double _maximumActiveValue;	// 20 = 0x14
	int _type;	// 28 = 0x1c
	double _boundaryPull;	// 32 = 0x20
	id _applier;	// 40 = 0x28
	unsigned _lowerBoundary : 1;	// 44 = 0x2c
	unsigned _upperBoundary : 1;	// 44 = 0x2c
}
@property(assign, nonatomic) double maximumActiveValue;	// G=0x303d0b09; S=0x303d05b5; @synthesize=_maximumActiveValue
@property(assign, nonatomic) double minimumActiveValue;	// G=0x303d0af1; S=0x303d0531; @synthesize=_minimumActiveValue
@property(assign, nonatomic) int type;	// G=0x303d0b21; S=0x303d0639; @synthesize=_type
@property(assign, nonatomic) double value;	// G=0x303d0ad9; S=0x303d04bd; @synthesize=_value
+ (id)activeValue:(double)value ofType:(int)type;	// 0x303d02d1
+ (id)lowerBoundary:(double)boundary ofType:(int)type;	// 0x303d0219
+ (id)upperBoundary:(double)boundary ofType:(int)type;	// 0x303d0275
- (id)init;	// 0x303d0335
- (void)_appendDescriptionToString:(id)string atLevel:(int)level;	// 0x303d070d
- (id)_applier;	// 0x303d0419
- (double)_boundaryPull;	// 0x303d06b9
- (BOOL)_isLowerBoundary;	// 0x303d06e5
- (BOOL)_isUpperBoundary;	// 0x303d06f9
- (void)_setBoundaryPull:(double)pull;	// 0x303d06d1
- (void)dealloc;	// 0x303d03cd
- (id)description;	// 0x303d0a99
// declared property getter: - (double)maximumActiveValue;	// 0x303d0b09
// declared property getter: - (double)minimumActiveValue;	// 0x303d0af1
// declared property setter: - (void)setMaximumActiveValue:(double)value;	// 0x303d05b5
// declared property setter: - (void)setMinimumActiveValue:(double)value;	// 0x303d0531
// declared property setter: - (void)setType:(int)type;	// 0x303d0639
// declared property setter: - (void)setValue:(double)value;	// 0x303d04bd
// declared property getter: - (int)type;	// 0x303d0b21
// declared property getter: - (double)value;	// 0x303d0ad9
@end

