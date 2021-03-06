/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSLocking.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSConditionLock : NSObject <NSLocking> {
@private
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x35e5d1f1; S=0x35e5d1b5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x35e04291
- (id)init;	// 0x35e5cfd9
- (id)initWithCondition:(int)condition;	// 0x35e04299
- (int)condition;	// 0x35e051c9
- (void)dealloc;	// 0x35e04f11
- (id)description;	// 0x35e5d0e9
- (void)finalize;	// 0x35e5cfed
- (void)lock;	// 0x35e05081
- (BOOL)lockBeforeDate:(id)date;	// 0x35e050bd
- (void)lockWhenCondition:(int)condition;	// 0x35e04331
- (BOOL)lockWhenCondition:(int)condition beforeDate:(id)date;	// 0x35e04371
// converted property getter: - (id)name;	// 0x35e5d1f1
// converted property setter: - (void)setName:(id)name;	// 0x35e5d1b5
- (BOOL)tryLock;	// 0x35e5d075
- (BOOL)tryLockWhenCondition:(int)condition;	// 0x35e5d0ad
- (void)unlock;	// 0x35e04e29
- (void)unlockWithCondition:(int)condition;	// 0x35e04489
@end

