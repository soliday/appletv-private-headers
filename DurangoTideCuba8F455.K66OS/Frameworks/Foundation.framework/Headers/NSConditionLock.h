/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSLocking.h"
#import "Foundation-Structs.h"


@interface NSConditionLock : NSObject <NSLocking> {
@private
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x3106d1d5; S=0x3106d395; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x31016bc1
- (id)init;	// 0x3106d4c9
- (id)initWithCondition:(int)condition;	// 0x31016bcd
- (int)condition;	// 0x3102b2e1
- (void)dealloc;	// 0x31018411
- (id)description;	// 0x3106d3c9
- (void)finalize;	// 0x3106db55
- (void)lock;	// 0x31016c95
- (BOOL)lockBeforeDate:(id)date;	// 0x31016cc9
- (void)lockWhenCondition:(int)condition;	// 0x3102a8dd
- (BOOL)lockWhenCondition:(int)condition beforeDate:(id)date;	// 0x3102a915
// converted property getter: - (id)name;	// 0x3106d1d5
// converted property setter: - (void)setName:(id)name;	// 0x3106d395
- (BOOL)tryLock;	// 0x3106d491
- (BOOL)tryLockWhenCondition:(int)condition;	// 0x3106d455
- (void)unlock;	// 0x3102af11
- (void)unlockWithCondition:(int)condition;	// 0x31016f31
@end
