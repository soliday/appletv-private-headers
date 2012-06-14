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
@property(assign) float ambientIntensity;	// G=0x36cd8805; S=0x36cd8819; 
@property(assign) CGColorRef color;	// G=0x36cd887d; S=0x36cd9065; 
@property(assign) float coneAngle;	// G=0x36cd8949; S=0x36cd895d; 
@property(assign) float coneEdgeSoftness;	// G=0x36cd8971; S=0x36cd8985; 
@property(assign) float diffuseIntensity;	// G=0x36cd882d; S=0x36cd8841; 
@property(assign) CAPoint3D direction;	// G=0x36cd8891; S=0x36cd88ad; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x36cd87a9; S=0x36cd87bd; 
@property(assign) float falloff;	// G=0x36cd8921; S=0x36cd8935; 
@property(assign) float falloffDistance;	// G=0x36cd88f9; S=0x36cd890d; 
@property(assign) float intensity;	// G=0x36cd87dd; S=0x36cd87f1; 
@property(copy) NSString *name;	// G=0x36cd8795; S=0x36cd9099; 
@property(assign) CAPoint3D position;	// G=0x36cd88c5; S=0x36cd88e1; 
@property(assign) float specularIntensity;	// G=0x36cd8855; S=0x36cd8869; 
@property(copy) NSString *type;	// G=0x36cd9105; S=0x36cd90e5; 
+ (id)defaultValueForKey:(id)key;	// 0x36cd8791
+ (id)lightWithType:(id)type;	// 0x36cd8a41
- (id)init;	// 0x36cd8999
- (id)initWithCoder:(id)coder;	// 0x36cd8a7d
- (id)initWithType:(id)type;	// 0x36cd9119
- (Object *)CA_copyRenderValue;	// 0x36cd8ea9
// declared property getter: - (float)ambientIntensity;	// 0x36cd8805
// declared property getter: - (CGColorRef)color;	// 0x36cd887d
// declared property getter: - (float)coneAngle;	// 0x36cd8949
// declared property getter: - (float)coneEdgeSoftness;	// 0x36cd8971
- (id)copyWithZone:(NSZone *)zone;	// 0x36cd8cf9
- (void)dealloc;	// 0x36cd9005
// declared property getter: - (float)diffuseIntensity;	// 0x36cd882d
// declared property getter: - (CAPoint3D)direction;	// 0x36cd8891
- (void)encodeWithCoder:(id)coder;	// 0x36cd8a85
// declared property getter: - (float)falloff;	// 0x36cd8921
// declared property getter: - (float)falloffDistance;	// 0x36cd88f9
// declared property getter: - (float)intensity;	// 0x36cd87dd
// declared property getter: - (BOOL)isEnabled;	// 0x36cd87a9
// declared property getter: - (id)name;	// 0x36cd8795
// declared property getter: - (CAPoint3D)position;	// 0x36cd88c5
// declared property setter: - (void)setAmbientIntensity:(float)intensity;	// 0x36cd8819
// declared property setter: - (void)setColor:(CGColorRef)color;	// 0x36cd9065
// declared property setter: - (void)setConeAngle:(float)angle;	// 0x36cd895d
// declared property setter: - (void)setConeEdgeSoftness:(float)softness;	// 0x36cd8985
// declared property setter: - (void)setDiffuseIntensity:(float)intensity;	// 0x36cd8841
// declared property setter: - (void)setDirection:(CAPoint3D)direction;	// 0x36cd88ad
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x36cd87bd
// declared property setter: - (void)setFalloff:(float)falloff;	// 0x36cd8935
// declared property setter: - (void)setFalloffDistance:(float)distance;	// 0x36cd890d
// declared property setter: - (void)setIntensity:(float)intensity;	// 0x36cd87f1
// declared property setter: - (void)setName:(id)name;	// 0x36cd9099
// declared property setter: - (void)setPosition:(CAPoint3D)position;	// 0x36cd88e1
// declared property setter: - (void)setSpecularIntensity:(float)intensity;	// 0x36cd8869
// declared property setter: - (void)setType:(id)type;	// 0x36cd90e5
- (void)setValue:(id)value forKey:(id)key;	// 0x36cd8e3d
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x36cd8e29
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x36cd8a8d
// declared property getter: - (float)specularIntensity;	// 0x36cd8855
// declared property getter: - (id)type;	// 0x36cd9105
- (id)valueForKey:(id)key;	// 0x36cd8e75
- (id)valueForKeyPath:(id)keyPath;	// 0x36cd8e35
@end

