/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MUPoolObject.h"
#import "NSCopying.h"

@class NSObject;

@interface MURetainingKey : MUPoolObject <NSCopying> {
	NSObject *_object;	// 8 = 0x8
}
@property(readonly, assign) NSObject *object;	// G=0x30b6b1c5; @synthesize=_object
+ (XXStruct_01lTDD *)poolInfo;	// 0x30b6b041
+ (id)retainingKeyWithObject:(id)object;	// 0x30b6b04d
- (id)initWithObject:(id)object;	// 0x30b6b095
- (id)copyWithZone:(NSZone *)zone;	// 0x30b6b155
- (void)dealloc;	// 0x30b6b115
- (unsigned)hash;	// 0x30b6b165
- (BOOL)isEqual:(id)equal;	// 0x30b6b179
// declared property getter: - (id)object;	// 0x30b6b1c5
- (void)purge;	// 0x30b6b0e9
@end

