/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class VMUMachTaskContainer, NSArray;
@protocol VMUMemory;

@interface VMUTask : NSObject {
	id<VMUMemory> _memory;	// 4 = 0x4
	VMUMachTaskContainer *_machTaskContainer;	// 8 = 0x8
	BOOL _isTranslated;	// 12 = 0xc
	NSArray *_headers;	// 16 = 0x10
}
@property(readonly, retain) NSArray *headers;	// G=0x31bd22f9; converted property
@property(readonly, assign) BOOL isTranslated;	// G=0x31bd22d9; converted property
+ (id)findDyldHeaderInMemory:(id)memory address:(unsigned long long)address;	// 0x31bd270d
+ (BOOL)pidIsTranslated:(int)translated;	// 0x31bd22d5
+ (id)taskWithMachTaskContainer:(id)machTaskContainer;	// 0x31bd2349
- (id)initWithMachTaskContainer:(id)machTaskContainer;	// 0x31bd2385
- (void)dealloc;	// 0x31bd28d9
// converted property getter: - (id)headers;	// 0x31bd22f9
// converted property getter: - (BOOL)isTranslated;	// 0x31bd22d9
- (id)memory;	// 0x31bd22e9
- (int)pid;	// 0x31bd2309
- (unsigned)task;	// 0x31bd2329
@end

