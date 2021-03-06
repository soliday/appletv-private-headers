/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSSet;

@interface _UIFenceController : NSObject {
	unsigned _fenceBase;	// 4 = 0x4
	unsigned _fenceOffset;	// 8 = 0x8
	NSSet *_fencedWindows;	// 12 = 0xc
}
+ (id)sharedFenceController;	// 0x359c1ca9
- (id)init;	// 0x359c1d1d
- (void)_fenceCompleted;	// 0x359c1d81
- (unsigned)_fenceWindows:(id)windows additionalWindows:(int)windows2;	// 0x359c1dad
- (id)_fenceableWindows;	// 0x359c1f6d
- (void)fenceAllApplicationWindows;	// 0x359c207d
@end

