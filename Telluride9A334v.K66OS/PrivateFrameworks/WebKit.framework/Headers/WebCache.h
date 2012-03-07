/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface WebCache : NSObject {
}
+ (bool)addImageToCache:(CGImageRef)cache forURL:(id)url;	// 0x339c9079
+ (void)clearCachedCredentials;	// 0x339c9075
+ (void)empty;	// 0x339bcf91
+ (void)emptyInMemoryResources;	// 0x339a1b69
+ (void)initialize;	// 0x339a1b65
+ (BOOL)isDisabled;	// 0x339c8a65
+ (void)removeImageFromCacheForURL:(id)url;	// 0x339c91c5
+ (void)setDisabled:(BOOL)disabled;	// 0x339c92bd
+ (void)sizeOfDeadResources:(int *)deadResources;	// 0x339c8a75
+ (id)statistics;	// 0x339c8ab5
@end
