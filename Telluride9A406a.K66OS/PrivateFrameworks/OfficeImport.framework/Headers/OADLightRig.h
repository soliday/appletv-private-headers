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
@interface OADLightRig : NSObject <NSCopying> {
@private
	OADRotation3D *mRotation;	// 4 = 0x4
	int mType;	// 8 = 0x8
	int mDirection;	// 12 = 0xc
}
@property(assign) int direction;	// G=0x32aca74d; S=0x329e8aa9; converted property
@property(retain) id rotation;	// G=0x32aca72d; S=0x329e89a9; converted property
@property(assign) int type;	// G=0x32aca73d; S=0x329e8a41; converted property
- (id)init;	// 0x329e894d
- (id)copyWithZone:(NSZone *)zone;	// 0x32acab31
- (void)dealloc;	// 0x329ed761
// converted property getter: - (int)direction;	// 0x32aca74d
- (unsigned)hash;	// 0x32acaae9
- (BOOL)isEqual:(id)equal;	// 0x32acaa09
// converted property getter: - (id)rotation;	// 0x32aca72d
// converted property setter: - (void)setDirection:(int)direction;	// 0x329e8aa9
// converted property setter: - (void)setRotation:(id)rotation;	// 0x329e89a9
// converted property setter: - (void)setType:(int)type;	// 0x329e8a41
// converted property getter: - (int)type;	// 0x32aca73d
@end

