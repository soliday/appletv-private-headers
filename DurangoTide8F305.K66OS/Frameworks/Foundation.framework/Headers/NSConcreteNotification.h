/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSNotification.h"

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSConcreteNotification : NSNotification {
@private
	NSString *name;	// 4 = 0x4
	id object;	// 8 = 0x8
	NSDictionary *userInfo;	// 12 = 0xc
	BOOL dyingObject;	// 16 = 0x10
}
@property(readonly, retain) NSString *name;	// G=0x32752045; converted property
@property(readonly, retain) id object;	// G=0x32752055; converted property
@property(readonly, retain) NSDictionary *userInfo;	// G=0x327466fd; converted property
+ (id)newTempNotificationWithName:(id)name object:(id)object userInfo:(id)info;	// 0x327405f9
- (id)initWithName:(id)name object:(id)object userInfo:(id)info;	// 0x32751f15
- (void)dealloc;	// 0x327406c1
// converted property getter: - (id)name;	// 0x32752045
// converted property getter: - (id)object;	// 0x32752055
- (void)recycle;	// 0x32740681
// converted property getter: - (id)userInfo;	// 0x327466fd
@end

