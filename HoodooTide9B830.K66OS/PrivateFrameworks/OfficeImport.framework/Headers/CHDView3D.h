/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHDView3D : NSObject {
@private
	int mRotationX;	// 4 = 0x4
	int mRotationY;	// 8 = 0x8
	int mDepthPercent;	// 12 = 0xc
	int mHeightPercent;	// 16 = 0x10
	int mPerspective;	// 20 = 0x14
	bool mRightAngleAxes;	// 24 = 0x18
	bool mCluster;	// 25 = 0x19
}
@property(assign, getter=isCluster) bool cluster;	// G=0x3134a999; S=0x312b62fd; converted property
@property(assign) int depthPercent;	// G=0x3134a959; S=0x312b62cd; converted property
@property(assign) int heightPercent;	// G=0x3134a969; S=0x312b62e5; converted property
@property(assign) int perspective;	// G=0x3134a979; S=0x312b62a5; converted property
@property(assign, getter=isRightAngleAxes) bool rightAngleAxes;	// G=0x3134a989; S=0x312b62bd; converted property
@property(assign) int rotationX;	// G=0x3134a949; S=0x312b6285; converted property
@property(assign) int rotationY;	// G=0x3134a939; S=0x312b6295; converted property
- (id)init;	// 0x312b61e1
// converted property getter: - (int)depthPercent;	// 0x3134a959
// converted property getter: - (int)heightPercent;	// 0x3134a969
// converted property getter: - (bool)isCluster;	// 0x3134a999
// converted property getter: - (bool)isRightAngleAxes;	// 0x3134a989
// converted property getter: - (int)perspective;	// 0x3134a979
// converted property getter: - (int)rotationX;	// 0x3134a949
// converted property getter: - (int)rotationY;	// 0x3134a939
// converted property setter: - (void)setCluster:(bool)cluster;	// 0x312b62fd
// converted property setter: - (void)setDepthPercent:(int)percent;	// 0x312b62cd
// converted property setter: - (void)setHeightPercent:(int)percent;	// 0x312b62e5
// converted property setter: - (void)setPerspective:(int)perspective;	// 0x312b62a5
// converted property setter: - (void)setRightAngleAxes:(bool)axes;	// 0x312b62bd
// converted property setter: - (void)setRotationX:(int)x;	// 0x312b6285
// converted property setter: - (void)setRotationY:(int)y;	// 0x312b6295
@end

