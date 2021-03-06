/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUMemory_Base.h"
#import "Symbolication-Structs.h"
#import "VMUMemory.h"

@class VMUArchitecture;

@interface VMUMemory_Handle : VMUMemory_Base <VMUMemory> {
	id<VMUMemory> _parent;	// 4 = 0x4
	char *_data;	// 8 = 0x8
	VMURange _addressRange;	// 12 = 0xc
	VMUArchitecture *_architecture;	// 28 = 0x1c
}
@property(readonly, assign) VMURange addressRange;	// G=0x313c1421; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x313c1445; converted property
- (id)initWithParent:(id)parent addressRange:(VMURange)range architecture:(id)architecture data:(char *)data;	// 0x313c1375
// converted property getter: - (VMURange)addressRange;	// 0x313c1421
// converted property getter: - (id)architecture;	// 0x313c1445
- (void)dealloc;	// 0x313c1905
- (id)description;	// 0x313c188d
- (BOOL)isContiguous;	// 0x313c1455
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x313c1459
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x313c1605
- (id)swappedView;	// 0x313c182d
- (id)view;	// 0x313c17cd
@end

