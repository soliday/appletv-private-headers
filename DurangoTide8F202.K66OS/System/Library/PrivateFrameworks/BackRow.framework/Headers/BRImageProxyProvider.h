/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"

@class NSArray;

@interface BRImageProxyProvider : NSObject <BRProvider> {
@private
	NSArray *_images;	// 4 = 0x4
}
+ (id)providerWithAssets:(id)assets;	// 0x328df109
+ (id)providerWithImageProxies:(id)imageProxies;	// 0x328df18d
- (id)initWithAssets:(id)assets;	// 0x328df0b9
- (id)initWithImageProxies:(id)imageProxies;	// 0x328df13d
- (id)controlFactory;	// 0x328def25
- (id)dataAtIndex:(long)index;	// 0x328defc5
- (long)dataCount;	// 0x328df051
- (void)dealloc;	// 0x328df071
- (id)hashForDataAtIndex:(long)index;	// 0x328def29
@end

