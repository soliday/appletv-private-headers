/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@interface MUPoolObject : NSObject {
	MUPoolObject *mPoolPrev;	// 4 = 0x4
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x30b6b2c9
+ (void)clearAllPools;	// 0x30b6b21d
+ (int)clearPool;	// 0x30b6b449
+ (XXStruct_01lTDD *)poolInfo;	// 0x30b6b4c9
+ (id)pooledClasses;	// 0x30b6b1d5
- (void)purge;	// 0x30b6b445
- (oneway void)release;	// 0x30b6b3b9
@end

