/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OADAdjustRect : NSObject {
@private
	OADAdjustCoord mLeft;	// 4 = 0x4
	OADAdjustCoord mTop;	// 12 = 0xc
	OADAdjustCoord mRight;	// 20 = 0x14
	OADAdjustCoord mBottom;	// 28 = 0x1c
}
- (id)initWithLeft:(OADAdjustCoord)left top:(OADAdjustCoord)top right:(OADAdjustCoord)right bottom:(OADAdjustCoord)bottom;	// 0x31230619
- (OADAdjustCoord)bottom;	// 0x31230d29
- (OADAdjustCoord)left;	// 0x3123078d
- (OADAdjustCoord)right;	// 0x312307e9
- (OADAdjustCoord)top;	// 0x31230d0d
@end

