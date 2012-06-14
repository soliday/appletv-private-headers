/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WDABoundingBox : NSObject {
@private
	CGRect mRect;	// 4 = 0x4
	float mRotation;	// 20 = 0x14
	BOOL mFlipX;	// 24 = 0x18
	BOOL mFlipY;	// 25 = 0x19
}
@property(assign) BOOL flipX;	// G=0x3136a80d; S=0x3136a81d; converted property
@property(assign) BOOL flipY;	// G=0x3136a82d; S=0x3136a83d; converted property
@property(assign) CGRect rect;	// G=0x3136a7a5; S=0x3136a7c9; converted property
@property(assign) float rotation;	// G=0x3136a7ed; S=0x3136a7fd; converted property
- (id)initWithRect:(CGRect)rect rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x3136a84d
// converted property getter: - (BOOL)flipX;	// 0x3136a80d
// converted property getter: - (BOOL)flipY;	// 0x3136a82d
// converted property getter: - (CGRect)rect;	// 0x3136a7a5
// converted property getter: - (float)rotation;	// 0x3136a7ed
// converted property setter: - (void)setFlipX:(BOOL)x;	// 0x3136a81d
// converted property setter: - (void)setFlipY:(BOOL)y;	// 0x3136a83d
// converted property setter: - (void)setRect:(CGRect)rect;	// 0x3136a7c9
// converted property setter: - (void)setRotation:(float)rotation;	// 0x3136a7fd
@end
