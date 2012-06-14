/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAContext.h"


__attribute__((visibility("hidden")))
@interface CAContextImpl : CAContext {
@private
	Context *_impl;	// 4 = 0x4
}
@property(assign) CGColorSpaceRef colorSpace;	// G=0x30858829; S=0x308589f5; converted property
@property(retain) id layer;	// G=0x3079cc3d; S=0x307ca4b9; converted property
@property(assign) float level;	// G=0x3085883d; S=0x307ca459; converted property
- (id)initRemoteWithOptions:(id)options;	// 0x307c9e4d
- (id)initWithOptions:(id)options localContext:(bool)context;	// 0x307c9e95
// converted property getter: - (CGColorSpaceRef)colorSpace;	// 0x30858829
- (unsigned)contextId;	// 0x307ca8b5
- (unsigned)createFencePort;	// 0x308589a9
- (unsigned)createSlot;	// 0x30858941
- (void)dealloc;	// 0x307f1d95
- (void)deleteSlot:(unsigned)slot;	// 0x3085892d
- (void)invalidate;	// 0x30858a09
// converted property getter: - (id)layer;	// 0x3079cc3d
// converted property getter: - (float)level;	// 0x3085883d
- (id)options;	// 0x30858851
- (void)orderAbove:(unsigned)above;	// 0x307cb1e5
- (void)orderBelow:(unsigned)below;	// 0x308589dd
- (Context *)renderContext;	// 0x30858881
// converted property setter: - (void)setColorSpace:(CGColorSpaceRef)space;	// 0x308589f5
- (void)setFence:(unsigned)fence count:(unsigned)count;	// 0x30858955
- (void)setFencePort:(unsigned)port;	// 0x30858981
// converted property setter: - (void)setLayer:(id)layer;	// 0x307ca4b9
// converted property setter: - (void)setLevel:(float)level;	// 0x307ca459
- (void)setObject:(id)object forSlot:(unsigned)slot;	// 0x30858919
- (BOOL)valid;	// 0x30858865
@end

