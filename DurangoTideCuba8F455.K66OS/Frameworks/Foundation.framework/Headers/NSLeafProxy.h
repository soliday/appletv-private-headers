/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import "Foundation-Structs.h"

@class NSString, NSDocInfo;

@interface NSLeafProxy <NSCopying> {
	Class isa;	// 0 = 0x0
	NSString *dir;	// 4 = 0x4
	NSString *file;	// 8 = 0x8
	NSDocInfo *docInfo;	// 12 = 0xc
	int refCount;	// 16 = 0x10
	id realObject;	// 20 = 0x14
}
+ (id)alloc;	// 0x310dfbf1
+ (id)allocWithZone:(NSZone *)zone;	// 0x310dfbd5
+ (void)forwardInvocation:(id)invocation;	// 0x310dceb1
- (id)initDir:(id)dir file:(id)file docInfo:(id)info;	// 0x310dce51
- (id)autorelease;	// 0x310dcda9
- (id)copy;	// 0x310dcdf5
- (id)copyWithZone:(NSZone *)zone;	// 0x310dce0d
- (void)dealloc;	// 0x310dcd81
- (void)forwardInvocation:(id)invocation;	// 0x310dfb05
- (BOOL)isProxy;	// 0x310dcbf5
- (id)methodSignatureForSelector:(SEL)selector;	// 0x310dfac1
- (void)reallyDealloc;	// 0x310dfb59
- (void)release;	// 0x310dcdcd
- (id)retain;	// 0x310dcbd1
- (unsigned)retainCount;	// 0x310dcbe5
@end
