/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "NSCoding.h"
#import "CAPropertyInfo.h"
#import "CAAction.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "CAMediaTiming.h"
#import "QuartzCore-Structs.h"

@class CAMediaTimingFunction, NSString;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction> {
@private
	void *_attr;	// 4 = 0x4
	unsigned _flags;	// 8 = 0x8
}
@property(assign) BOOL autoreverses;	// G=0x335a2879; S=0x335b6e65; 
@property(assign) double beginTime;	// G=0x335a2095; S=0x335a2305; 
@property(retain) id delegate;	// G=0x33598a25; S=0x335a1089; 
@property(assign) double duration;	// G=0x335a1699; S=0x335a0e4d; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x335a2939; S=0x33628df1; 
@property(copy) NSString *fillMode;	// G=0x335a2891; S=0x335a1071; 
@property(assign) double frameInterval;	// G=0x335a29f1; S=0x33628d9d; 
@property(assign, getter=isRemovedOnCompletion) BOOL removedOnCompletion;	// G=0x335a1861; S=0x335a3769; 
@property(assign) float repeatCount;	// G=0x335a283d; S=0x335a3751; 
@property(assign) double repeatDuration;	// G=0x335a2855; S=0x336276ed; 
@property(assign) float speed;	// G=0x335a2825; S=0x335c3369; 
@property(assign) double timeOffset;	// G=0x335a2801; S=0x335c3381; 
@property(retain) CAMediaTimingFunction *timingFunction;	// G=0x335a2951; S=0x335a1059; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x335a187d
+ (BOOL)CA_encodePropertyConditionally:(unsigned)conditionally type:(int)type;	// 0x335a191d
+ (/*function-pointer*/ void *)CA_getterForType:(int)type;	// 0x336275b9
+ (/*function-pointer*/ void *)CA_setterForType:(int)type;	// 0x33626df1
+ (id)animation;	// 0x335bba7d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x336276cd
+ (id)defaultValueForKey:(id)key;	// 0x335a1935
+ (id)properties;	// 0x33628f15
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x335a32dd
- (id)initWithCoder:(id)coder;	// 0x336277dd
- (Object *)CA_copyRenderValue;	// 0x33628909
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x33626de9
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x335a2705
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x33626ded
// declared property getter: - (BOOL)autoreverses;	// 0x335a2879
// declared property getter: - (double)beginTime;	// 0x335a2095
- (id)copyWithZone:(NSZone *)zone;	// 0x335a15bd
- (void)dealloc;	// 0x3359896d
- (id)debugDescription;	// 0x33627711
// declared property getter: - (id)delegate;	// 0x33598a25
// declared property getter: - (double)duration;	// 0x335a1699
- (void)encodeWithCoder:(id)coder;	// 0x336277d5
// declared property getter: - (id)fillMode;	// 0x335a2891
// declared property getter: - (double)frameInterval;	// 0x335a29f1
// declared property getter: - (BOOL)isEnabled;	// 0x335a2939
// declared property getter: - (BOOL)isRemovedOnCompletion;	// 0x335a1861
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3362891d
- (BOOL)removedOnCompletion;	// 0x336276b5
// declared property getter: - (float)repeatCount;	// 0x335a283d
// declared property getter: - (double)repeatDuration;	// 0x335a2855
- (void)runActionForKey:(id)key object:(id)object arguments:(id)arguments;	// 0x335a10a1
// declared property setter: - (void)setAutoreverses:(BOOL)autoreverses;	// 0x335b6e65
// declared property setter: - (void)setBeginTime:(double)time;	// 0x335a2305
- (void)setDefaultDuration:(double)duration;	// 0x335a1651
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x335a1089
// declared property setter: - (void)setDuration:(double)duration;	// 0x335a0e4d
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x33628df1
// declared property setter: - (void)setFillMode:(id)mode;	// 0x335a1071
// declared property setter: - (void)setFrameInterval:(double)interval;	// 0x33628d9d
// declared property setter: - (void)setRemovedOnCompletion:(BOOL)completion;	// 0x335a3769
// declared property setter: - (void)setRepeatCount:(float)count;	// 0x335a3751
// declared property setter: - (void)setRepeatDuration:(double)duration;	// 0x336276ed
// declared property setter: - (void)setSpeed:(float)speed;	// 0x335c3369
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x335c3381
// declared property setter: - (void)setTimingFunction:(id)function;	// 0x335a1059
- (void)setValue:(id)value forKey:(id)key;	// 0x335c32b5
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x336277c1
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x335c32ed
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x336277e5
// declared property getter: - (float)speed;	// 0x335a2825
// declared property getter: - (double)timeOffset;	// 0x335a2801
// declared property getter: - (id)timingFunction;	// 0x335a2951
- (id)valueForKey:(id)key;	// 0x335b7301
- (id)valueForKeyPath:(id)keyPath;	// 0x336277cd
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x335b7335
@end

