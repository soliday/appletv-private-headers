/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface CMMagnetometerDataInternal : NSObject <NSCopying> {
	XXStruct_ZUkpeA fMagneticField;	// 4 = 0x4
}
- (id)initWithMagneticField:(XXStruct_ZUkpeA)magneticField;	// 0x3679de41
- (id).cxx_construct;	// 0x3679def1
- (id)copyWithZone:(NSZone *)zone;	// 0x3679de91
- (void)setMagneticField:(XXStruct_ZUkpeA)field;	// 0x3679de21
@end

