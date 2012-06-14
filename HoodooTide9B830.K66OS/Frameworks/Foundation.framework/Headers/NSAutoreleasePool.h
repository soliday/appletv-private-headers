/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSAutoreleasePool : NSObject {
@private
	void *_token;	// 4 = 0x4
	void *_reserved3;	// 8 = 0x8
	void *_reserved2;	// 12 = 0xc
	void *_reserved;	// 16 = 0x10
}
+ (void)addObject:(id)object;	// 0x315c4e45
+ (id)allocWithZone:(NSZone *)zone;	// 0x3156b7d5
+ (BOOL)autoreleasePoolExists;	// 0x315c4f9d
+ (unsigned)autoreleasedObjectCount;	// 0x315c4f95
+ (void)enableFreedObjectCheck:(BOOL)check;	// 0x315c4fa5
+ (void)enableRelease:(BOOL)release;	// 0x315c4fa1
+ (unsigned)poolCountHighWaterMark;	// 0x315c4fa9
+ (unsigned)poolCountHighWaterResolution;	// 0x315c4fb1
+ (void)releaseAllPools;	// 0x315c4f91
+ (void)resetTotalAutoreleasedObjects;	// 0x315c4fbd
+ (void)setPoolCountHighWaterMark:(unsigned)mark;	// 0x315c4fad
+ (void)setPoolCountHighWaterResolution:(unsigned)resolution;	// 0x315c4fb5
+ (void)showPools;	// 0x315c4f8d
+ (unsigned)topAutoreleasePoolCount;	// 0x315c4f99
+ (unsigned)totalAutoreleasedObjects;	// 0x315c4fb9
- (id)init;	// 0x3156b84d
- (id)initWithCapacity:(unsigned)capacity;	// 0x315c4e4d
- (void)addObject:(id)object;	// 0x315c4e81
- (id)autorelease;	// 0x315c4f25
- (void)dealloc;	// 0x315c4f71
- (void)drain;	// 0x31574a61
- (oneway void)release;	// 0x3156dbd1
- (id)retain;	// 0x315c4ed5
- (unsigned)retainCount;	// 0x315c4f21
@end

