/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface BRProviderGroup : NSObject {
@private
	NSArray *_providers;	// 4 = 0x4
}
@property(readonly, retain) NSArray *providers;	// G=0x35e7a005; converted property
+ (id)groupWithProviders:(id)providers;	// 0x35e79fb9
- (id)initWithProviders:(id)providers;	// 0x35e79f19
- (id)createControlAtGroupIndex:(long)groupIndex currentControl:(id)control requestedBy:(id)by;	// 0x35e7a2a9
- (id)createControlsInGroupRange:(NSRange)groupRange requestedBy:(id)by;	// 0x35e7a309
- (long)dataCount;	// 0x35e7a015
- (id)dataForGroupIndex:(long)groupIndex;	// 0x35e7a0c1
- (void)dealloc;	// 0x35e79f6d
- (long)groupIndexForHash:(id)hash;	// 0x35e7a1a9
- (id)hashForDataAtGroupIndex:(long)groupIndex;	// 0x35e7a0f1
- (id)providerForDataAtGroupIndex:(long)groupIndex providerIndex:(long *)index;	// 0x35e7a121
// converted property getter: - (id)providers;	// 0x35e7a005
@end

