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
@property(assign) int direction;	// G=0x3462174d; S=0x3453faa9; converted property
@property(retain) id rotation;	// G=0x3462172d; S=0x3453f9a9; converted property
@property(assign) int type;	// G=0x3462173d; S=0x3453fa41; converted property
- (id)init;	// 0x3453f94d
- (id)copyWithZone:(NSZone *)zone;	// 0x34621b31
- (void)dealloc;	// 0x34544761
// converted property getter: - (int)direction;	// 0x3462174d
- (unsigned)hash;	// 0x34621ae9
- (BOOL)isEqual:(id)equal;	// 0x34621a09
// converted property getter: - (id)rotation;	// 0x3462172d
// converted property setter: - (void)setDirection:(int)direction;	// 0x3453faa9
// converted property setter: - (void)setRotation:(id)rotation;	// 0x3453f9a9
// converted property setter: - (void)setType:(int)type;	// 0x3453fa41
// converted property getter: - (int)type;	// 0x3462173d
@end

