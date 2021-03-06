/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CALight : NSObject <NSCopying, NSCoding> {
@private
	void *_attr;	// 4 = 0x4
	void *_priv;	// 8 = 0x8
}
@property(assign) float ambientIntensity;	// G=0x34f6e805; S=0x34f6e819; 
@property(assign) CGColorRef color;	// G=0x34f6e87d; S=0x34f6f065; 
@property(assign) float coneAngle;	// G=0x34f6e949; S=0x34f6e95d; 
@property(assign) float coneEdgeSoftness;	// G=0x34f6e971; S=0x34f6e985; 
@property(assign) float diffuseIntensity;	// G=0x34f6e82d; S=0x34f6e841; 
@property(assign) CAPoint3D direction;	// G=0x34f6e891; S=0x34f6e8ad; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x34f6e7a9; S=0x34f6e7bd; 
@property(assign) float falloff;	// G=0x34f6e921; S=0x34f6e935; 
@property(assign) float falloffDistance;	// G=0x34f6e8f9; S=0x34f6e90d; 
@property(assign) float intensity;	// G=0x34f6e7dd; S=0x34f6e7f1; 
@property(copy) NSString *name;	// G=0x34f6e795; S=0x34f6f099; 
@property(assign) CAPoint3D position;	// G=0x34f6e8c5; S=0x34f6e8e1; 
@property(assign) float specularIntensity;	// G=0x34f6e855; S=0x34f6e869; 
@property(copy) NSString *type;	// G=0x34f6f105; S=0x34f6f0e5; 
+ (id)defaultValueForKey:(id)key;	// 0x34f6e791
+ (id)lightWithType:(id)type;	// 0x34f6ea41
- (id)init;	// 0x34f6e999
- (id)initWithCoder:(id)coder;	// 0x34f6ea7d
- (id)initWithType:(id)type;	// 0x34f6f119
- (Object *)CA_copyRenderValue;	// 0x34f6eea9
// declared property getter: - (float)ambientIntensity;	// 0x34f6e805
// declared property getter: - (CGColorRef)color;	// 0x34f6e87d
// declared property getter: - (float)coneAngle;	// 0x34f6e949
// declared property getter: - (float)coneEdgeSoftness;	// 0x34f6e971
- (id)copyWithZone:(NSZone *)zone;	// 0x34f6ecf9
- (void)dealloc;	// 0x34f6f005
// declared property getter: - (float)diffuseIntensity;	// 0x34f6e82d
// declared property getter: - (CAPoint3D)direction;	// 0x34f6e891
- (void)encodeWithCoder:(id)coder;	// 0x34f6ea85
// declared property getter: - (float)falloff;	// 0x34f6e921
// declared property getter: - (float)falloffDistance;	// 0x34f6e8f9
// declared property getter: - (float)intensity;	// 0x34f6e7dd
// declared property getter: - (BOOL)isEnabled;	// 0x34f6e7a9
// declared property getter: - (id)name;	// 0x34f6e795
// declared property getter: - (CAPoint3D)position;	// 0x34f6e8c5
// declared property setter: - (void)setAmbientIntensity:(float)intensity;	// 0x34f6e819
// declared property setter: - (void)setColor:(CGColorRef)color;	// 0x34f6f065
// declared property setter: - (void)setConeAngle:(float)angle;	// 0x34f6e95d
// declared property setter: - (void)setConeEdgeSoftness:(float)softness;	// 0x34f6e985
// declared property setter: - (void)setDiffuseIntensity:(float)intensity;	// 0x34f6e841
// declared property setter: - (void)setDirection:(CAPoint3D)direction;	// 0x34f6e8ad
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x34f6e7bd
// declared property setter: - (void)setFalloff:(float)falloff;	// 0x34f6e935
// declared property setter: - (void)setFalloffDistance:(float)distance;	// 0x34f6e90d
// declared property setter: - (void)setIntensity:(float)intensity;	// 0x34f6e7f1
// declared property setter: - (void)setName:(id)name;	// 0x34f6f099
// declared property setter: - (void)setPosition:(CAPoint3D)position;	// 0x34f6e8e1
// declared property setter: - (void)setSpecularIntensity:(float)intensity;	// 0x34f6e869
// declared property setter: - (void)setType:(id)type;	// 0x34f6f0e5
- (void)setValue:(id)value forKey:(id)key;	// 0x34f6ee3d
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x34f6ee29
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x34f6ea8d
// declared property getter: - (float)specularIntensity;	// 0x34f6e855
// declared property getter: - (id)type;	// 0x34f6f105
- (id)valueForKey:(id)key;	// 0x34f6ee75
- (id)valueForKeyPath:(id)keyPath;	// 0x34f6ee35
@end

