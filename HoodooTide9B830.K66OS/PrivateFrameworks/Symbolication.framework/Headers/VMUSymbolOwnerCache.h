/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library


@interface VMUSymbolOwnerCache : NSObject {
}
+ (void)addSymbolOwner:(id)owner;	// 0x31bd43b5
+ (void)flush;	// 0x31bd3e39
+ (void)initialize;	// 0x31bd3c99
+ (unsigned)memoryLimit;	// 0x31bd3e05
+ (void)removeSignature:(id)signature;	// 0x31bd41e9
+ (void)setMemoryLimit:(unsigned)limit;	// 0x31bd3d45
+ (void)shrinkCacheToSize:(unsigned long long)size;	// 0x31bd3f3d
+ (id)symbolOwnerForSignature:(id)signature;	// 0x31bd46dd
+ (id)symbolOwners;	// 0x31bd40c1
@end

