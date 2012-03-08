/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"

@class NSString;

@interface VMUDyLibLoadCommand : VMULoadCommand {
	NSString *_path;	// 16 = 0x10
	unsigned _currentVersion;	// 20 = 0x14
	unsigned _compatibilityVersion;	// 24 = 0x18
}
@property(readonly, assign) unsigned compatibilityVersion;	// G=0x32cbf5f5; converted property
@property(readonly, assign) unsigned currentVersion;	// G=0x32cbf5e5; converted property
@property(readonly, retain) NSString *path;	// G=0x32cbf5d5; converted property
- (id)initWithMemory:(id)memory;	// 0x32cbf609
// converted property getter: - (unsigned)compatibilityVersion;	// 0x32cbf5f5
// converted property getter: - (unsigned)currentVersion;	// 0x32cbf5e5
- (void)dealloc;	// 0x32cbf6fd
- (id)description;	// 0x32cbf751
- (BOOL)isLoadDyLib;	// 0x32cbf605
// converted property getter: - (id)path;	// 0x32cbf5d5
@end
