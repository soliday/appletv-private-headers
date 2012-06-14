/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"

@class NSArray, NSString;

@interface VMUSegmentLoadCommand : VMULoadCommand {
	NSString *_name;	// 16 = 0x10
	unsigned long long _vmaddr;	// 20 = 0x14
	unsigned long long _vmsize;	// 28 = 0x1c
	unsigned long long _fileoff;	// 36 = 0x24
	unsigned long long _filesize;	// 44 = 0x2c
	int _maxprot;	// 52 = 0x34
	int _initprot;	// 56 = 0x38
	unsigned _flags;	// 60 = 0x3c
	NSArray *_sections;	// 64 = 0x40
}
@property(readonly, assign) unsigned long long fileoff;	// G=0x31bcb389; converted property
@property(readonly, assign) unsigned long long filesize;	// G=0x31bcb3a1; converted property
@property(readonly, assign) unsigned flags;	// G=0x31bcb3d9; converted property
@property(readonly, assign) int initprot;	// G=0x31bcb3c9; converted property
@property(readonly, assign) int maxprot;	// G=0x31bcb3b9; converted property
@property(readonly, retain) NSString *name;	// G=0x31bcb349; converted property
@property(readonly, retain) NSArray *sections;	// G=0x31bcb3e9; converted property
@property(readonly, assign) unsigned long long vmaddr;	// G=0x31bcb359; converted property
@property(readonly, assign) unsigned long long vmsize;	// G=0x31bcb371; converted property
- (void)dealloc;	// 0x31bcb505
- (id)description;	// 0x31bcb489
// converted property getter: - (unsigned long long)fileoff;	// 0x31bcb389
// converted property getter: - (unsigned long long)filesize;	// 0x31bcb3a1
// converted property getter: - (unsigned)flags;	// 0x31bcb3d9
// converted property getter: - (int)initprot;	// 0x31bcb3c9
- (BOOL)isSegment;	// 0x31bcb345
// converted property getter: - (int)maxprot;	// 0x31bcb3b9
// converted property getter: - (id)name;	// 0x31bcb349
- (id)sectionNamed:(id)named;	// 0x31bcb3f9
// converted property getter: - (id)sections;	// 0x31bcb3e9
// converted property getter: - (unsigned long long)vmaddr;	// 0x31bcb359
// converted property getter: - (unsigned long long)vmsize;	// 0x31bcb371
@end

