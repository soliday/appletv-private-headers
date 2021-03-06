/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "PDAnimateScaleBehavior.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {
@private
	NSString *mPath;	// 36 = 0x24
	BOOL mHasAngle;	// 40 = 0x28
	double mAngle;	// 44 = 0x2c
	BOOL mHasPointType;	// 52 = 0x34
	int mPointType;	// 56 = 0x38
	BOOL mHasOriginType;	// 60 = 0x3c
	int mOriginType;	// 64 = 0x40
	BOOL mHasRotationCenter;	// 68 = 0x44
	CGPoint mRotationCenter;	// 72 = 0x48
}
@property(assign) double angle;	// G=0x31af2b91; S=0x31af2ba1; converted property
@property(assign) int originType;	// G=0x31af2c0d; S=0x31af2c1d; converted property
@property(retain) id path;	// G=0x31af2b71; S=0x31af3a05; converted property
@property(assign) int pointType;	// G=0x31af2bd1; S=0x31af2be1; converted property
@property(assign) CGPoint rotationCenter;	// G=0x31af2c49; S=0x31af2c61; converted property
// converted property getter: - (double)angle;	// 0x31af2b91
- (void)dealloc;	// 0x31af3a3d
- (BOOL)hasAngle;	// 0x31af2b81
- (BOOL)hasOriginType;	// 0x31af2bfd
- (BOOL)hasPath;	// 0x31af2b5d
- (BOOL)hasPointType;	// 0x31af2bc1
- (BOOL)hasRotationCenter;	// 0x31af2c39
// converted property getter: - (int)originType;	// 0x31af2c0d
// converted property getter: - (id)path;	// 0x31af2b71
// converted property getter: - (int)pointType;	// 0x31af2bd1
// converted property getter: - (CGPoint)rotationCenter;	// 0x31af2c49
// converted property setter: - (void)setAngle:(double)angle;	// 0x31af2ba1
// converted property setter: - (void)setOriginType:(int)type;	// 0x31af2c1d
// converted property setter: - (void)setPath:(id)path;	// 0x31af3a05
// converted property setter: - (void)setPointType:(int)type;	// 0x31af2be1
// converted property setter: - (void)setRotationCenter:(CGPoint)center;	// 0x31af2c61
@end

