/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPath.h"

@class NSBezierPathStub;

__attribute__((visibility("hidden")))
@interface MFCocoaPath : MFPath {
@private
	NSBezierPathStub *m_path;	// 4 = 0x4
	int m_state;	// 8 = 0x8
}
@property(readonly, assign) int state;	// G=0x34e4550d; converted property
- (id)init;	// 0x34c14d69
- (id)initWithPath:(id)path state:(int)state;	// 0x34c1aae5
- (int)abort;	// 0x34e45569
- (void)appendBezierPath:(id)path dc:(id)dc;	// 0x34cdbe29
- (int)begin;	// 0x34cdb979
- (int)closeFigure;	// 0x34cdc1c5
- (id)copyWithZone:(NSZone *)zone;	// 0x34c1a87d
- (CGPoint)currentPoint;	// 0x34cdc205
- (void)dealloc;	// 0x34c0fe5d
- (int)end;	// 0x34cdc2a9
- (int)fill:(id)fill;	// 0x34cdc395
- (int)flatten;	// 0x34e45521
- (id)getBezierPath;	// 0x34d3f705
- (BOOL)isOpen;	// 0x34c18e35
// converted property getter: - (int)state;	// 0x34e4550d
- (int)stroke:(id)stroke;	// 0x34d54545
- (int)widen:(id)widen;	// 0x34e4551d
@end
