/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <NSObject.h> // Unknown library


@interface CMActivityManager : NSObject {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isActivityAvailable) BOOL activityAvailable;	// G=0x36e0f9f5; 
@property(copy) id activityHandler;	// G=0x36e0f8e9; S=0x36e0f815; 
- (id)init;	// 0x36e0f6f1
// declared property getter: - (id)activityHandler;	// 0x36e0f8e9
- (void)dealloc;	// 0x36e0f755
// declared property getter: - (BOOL)isActivityAvailable;	// 0x36e0f9f5
// declared property setter: - (void)setActivityHandler:(id)handler;	// 0x36e0f815
@end

