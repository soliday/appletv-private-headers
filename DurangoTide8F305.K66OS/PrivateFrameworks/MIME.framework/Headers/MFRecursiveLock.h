/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSRecursiveLock.h> // Unknown library
#import "MFLockObject.h"

@class NSString;

@interface MFRecursiveLock : NSRecursiveLock <MFLockObject> {
	NSString *_name;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
+ (void)initialize;	// 0x304b9c6d
- (id)init;	// 0x304b85b9
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x304b9601
- (void)dealloc;	// 0x304b953d
- (id)description;	// 0x304b9585
- (BOOL)isLockedByMe;	// 0x304b8f91
- (void)lock;	// 0x304b99bd
- (BOOL)lockBeforeDate:(id)date;	// 0x304b9909
- (BOOL)tryLock;	// 0x304b9965
- (void)unlock;	// 0x304b9c05
@end

