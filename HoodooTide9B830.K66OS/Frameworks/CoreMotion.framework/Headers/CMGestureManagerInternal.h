/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import <NSObject.h> // Unknown library


@interface CMGestureManagerInternal : NSObject {
	int fPriority;	// 4 = 0x4
	CLConnectionClient *fLocationdConnection;	// 8 = 0x8
	id fGestureHandler;	// 12 = 0xc
	dispatch_source_s *fTimer;	// 16 = 0x10
}
- (id)init;	// 0x367a555d
- (void)dealloc;	// 0x367a55b9
@end

