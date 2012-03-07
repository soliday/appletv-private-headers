/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library


@interface VMUSymbolOwnerCache : NSObject {
}
+ (void)addSymbolOwner:(id)owner;	// 0x3012f3c1
+ (void)flush;	// 0x3012ee45
+ (void)initialize;	// 0x3012eca5
+ (unsigned)memoryLimit;	// 0x3012ee11
+ (void)removeSignature:(id)signature;	// 0x3012f1f5
+ (void)setMemoryLimit:(unsigned)limit;	// 0x3012ed51
+ (void)shrinkCacheToSize:(unsigned long long)size;	// 0x3012ef49
+ (id)symbolOwnerForSignature:(id)signature;	// 0x3012f6e9
+ (id)symbolOwners;	// 0x3012f0cd
@end
