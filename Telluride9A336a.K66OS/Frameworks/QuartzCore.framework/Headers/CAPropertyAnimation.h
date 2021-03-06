/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAAnimation.h"
#import "QuartzCore-Structs.h"

@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation {
}
@property(assign, getter=isAdditive) BOOL additive;	// G=0x360cfa15; S=0x360e3e7d; 
@property(assign, getter=isCumulative) BOOL cumulative;	// G=0x360cfa2d; S=0x36154859; 
@property(copy) NSString *keyPath;	// G=0x360ce6bd; S=0x360cdd11; 
@property(retain) CAValueFunction *valueFunction;	// G=0x360cfa45; S=0x360e4235; 
+ (id)animationWithKeyPath:(id)keyPath;	// 0x360cdcc1
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x360ce9fd
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x360cf54d
- (BOOL)additive;	// 0x36154841
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x361545cd
- (BOOL)cumulative;	// 0x36154829
// declared property getter: - (BOOL)isAdditive;	// 0x360cfa15
// declared property getter: - (BOOL)isCumulative;	// 0x360cfa2d
// declared property getter: - (id)keyPath;	// 0x360ce6bd
// declared property setter: - (void)setAdditive:(BOOL)additive;	// 0x360e3e7d
// declared property setter: - (void)setCumulative:(BOOL)cumulative;	// 0x36154859
// declared property setter: - (void)setKeyPath:(id)path;	// 0x360cdd11
// declared property setter: - (void)setValueFunction:(id)function;	// 0x360e4235
// declared property getter: - (id)valueFunction;	// 0x360cfa45
@end

