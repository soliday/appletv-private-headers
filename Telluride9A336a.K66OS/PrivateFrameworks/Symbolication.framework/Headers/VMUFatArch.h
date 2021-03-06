/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@protocol VMUMemory;

@interface VMUFatArch : NSObject {
	unsigned _fileOffset;	// 4 = 0x4
	unsigned _size;	// 8 = 0x8
	unsigned _alignment;	// 12 = 0xc
	id<VMUMemory> _memory;	// 16 = 0x10
}
@property(readonly, assign) unsigned alignment;	// G=0x3011b0bd; converted property
@property(readonly, assign) unsigned fileOffset;	// G=0x3011b09d; converted property
@property(readonly, assign) unsigned size;	// G=0x3011b0ad; converted property
+ (id)fatArchWithMemory:(id)memory fileOffset:(unsigned)offset size:(unsigned)size alignment:(unsigned)alignment;	// 0x3011b169
+ (id)fatArchWithMemory:(id)memory memoryView:(id)view;	// 0x3011b1c1
- (id)initWithMemory:(id)memory fileOffset:(unsigned)offset size:(unsigned)size alignment:(unsigned)alignment;	// 0x3011b0dd
- (id)initWithMemory:(id)memory memoryView:(id)view;	// 0x3011b281
// converted property getter: - (unsigned)alignment;	// 0x3011b0bd
- (id)architecture;	// 0x3011b261
- (void)dealloc;	// 0x3011b20d
// converted property getter: - (unsigned)fileOffset;	// 0x3011b09d
- (id)memory;	// 0x3011b0cd
// converted property getter: - (unsigned)size;	// 0x3011b0ad
@end

