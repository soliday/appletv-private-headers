/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class OADRotation3D;

__attribute__((visibility("hidden")))
@interface OADCamera : NSObject <NSCopying> {
@private
	OADRotation3D *mRotation;	// 4 = 0x4
	int mCameraType;	// 8 = 0x8
	float mFieldOfView;	// 12 = 0xc
	float mZoom;	// 16 = 0x10
}
@property(assign) int cameraType;	// G=0x346216ed; S=0x3453f7a1; converted property
@property(assign) float fieldOfView;	// G=0x346216fd; S=0x3455049d; converted property
@property(retain) id rotation;	// G=0x346216dd; S=0x3453f709; converted property
@property(assign) float zoom;	// G=0x3462170d; S=0x3462171d; converted property
- (id)init;	// 0x3453f549
// converted property getter: - (int)cameraType;	// 0x346216ed
- (id)copyWithZone:(NSZone *)zone;	// 0x34621955
- (void)dealloc;	// 0x34544715
// converted property getter: - (float)fieldOfView;	// 0x346216fd
- (unsigned)hash;	// 0x346218e5
- (BOOL)isEqual:(id)equal;	// 0x346217bd
// converted property getter: - (id)rotation;	// 0x346216dd
// converted property setter: - (void)setCameraType:(int)type;	// 0x3453f7a1
// converted property setter: - (void)setFieldOfView:(float)view;	// 0x3455049d
// converted property setter: - (void)setRotation:(id)rotation;	// 0x3453f709
// converted property setter: - (void)setZoom:(float)zoom;	// 0x3462171d
// converted property getter: - (float)zoom;	// 0x3462170d
@end

