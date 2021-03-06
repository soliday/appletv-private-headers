/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"

@class NSArray;

@interface CAWindowServer : NSObject {
@private
	CAWindowServerImpl *_impl;	// 4 = 0x4
}
@property(readonly, assign) NSArray *displays;	// G=0x360c35cd; 
@property(assign, getter=isMirroringEnabled) BOOL mirroringEnabled;	// G=0x3616d389; S=0x3616d3d1; 
@property(assign) unsigned rendererFlags;	// G=0x3616cec9; S=0x3616d325; 
+ (id)context;	// 0x3616d265
+ (id)contextWithOptions:(id)options;	// 0x3616d279
+ (id)server;	// 0x3616d2f1
+ (id)serverIfRunning;	// 0x360c35bd
- (id)init;	// 0x3616d1f1
- (void)_detectDisplays;	// 0x3616d485
- (id)_init;	// 0x3616d6ed
- (void)addDisplay:(id)display;	// 0x3616d695
- (void)dealloc;	// 0x3616d435
- (id)description;	// 0x3616d219
- (id)displayWithName:(id)name;	// 0x3616d575
// declared property getter: - (id)displays;	// 0x360c35cd
// declared property getter: - (BOOL)isMirroringEnabled;	// 0x3616d389
- (void)removeAllDisplays;	// 0x3616d5f1
- (void)removeDisplay:(id)display;	// 0x3616d639
// declared property getter: - (unsigned)rendererFlags;	// 0x3616cec9
// declared property setter: - (void)setMirroringEnabled:(BOOL)enabled;	// 0x3616d3d1
// declared property setter: - (void)setRendererFlags:(unsigned)flags;	// 0x3616d325
@end

