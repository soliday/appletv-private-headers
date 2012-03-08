/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCopying.h"

@class NSDocInfo, NSString;

@interface NSLeafProxy <NSCopying> {
	Class isa;	// 0 = 0x0
	NSString *dir;	// 4 = 0x4
	NSString *file;	// 8 = 0x8
	NSDocInfo *docInfo;	// 12 = 0xc
	int refCount;	// 16 = 0x10
	id realObject;	// 20 = 0x14
}
+ (id)alloc;	// 0x3110354d
+ (id)allocWithZone:(NSZone *)zone;	// 0x3110352d
+ (void)forwardInvocation:(id)invocation;	// 0x31103561
- (id)initDir:(id)dir file:(id)file docInfo:(id)info;	// 0x31103761
- (BOOL)_isDeallocating;	// 0x311038d5
- (BOOL)_tryRetain;	// 0x311038d1
- (id)autorelease;	// 0x311038d9
- (id)copy;	// 0x31103805
- (id)copyWithZone:(NSZone *)zone;	// 0x311037c1
- (void)dealloc;	// 0x31103911
- (void)forwardInvocation:(id)invocation;	// 0x311035ad
- (BOOL)isProxy;	// 0x31103945
- (id)methodSignatureForSelector:(SEL)selector;	// 0x31103719
- (void)reallyDealloc;	// 0x31103819
- (void)release;	// 0x3110389d
- (id)retain;	// 0x31103889
- (unsigned)retainCount;	// 0x31103901
@end
