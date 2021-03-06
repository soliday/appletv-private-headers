/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSLock.h> // Unknown library
#import "MFLockObject.h"

@class NSString;

@interface MFLock : NSLock <MFLockObject> {
	NSString *_name;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
+ (void)initialize;	// 0x31d6646d
- (id)init;	// 0x31d64fc9
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x31d66405
- (void)dealloc;	// 0x31d66485
- (id)description;	// 0x31d664d1
- (BOOL)isLockedByMe;	// 0x31d65cc5
- (void)lock;	// 0x31d66675
- (BOOL)lockBeforeDate:(id)date;	// 0x31d665a9
- (BOOL)tryLock;	// 0x31d66611
- (void)unlock;	// 0x31d66575
@end

