/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "CFXPreferencesSource.h"

@class CFXPreferencesPropertyListSourceSynchronizer;

__attribute__((visibility("hidden")))
@interface CFXPreferencesPropertyListSource : CFXPreferencesSource {
@private
	unsigned short _mode;	// 14 = 0xe
	unsigned _owner;	// 16 = 0x10
	CFXPreferencesPropertyListSourceSynchronizer *_synchronizer;	// 20 = 0x14
	CFArrayRef _dirtyKeys;	// 24 = 0x18
	CFURLRef _url;	// 28 = 0x1c
	long _formatToWrite;	// 32 = 0x20
	CFXPreferencesStatInfo _statInfo;	// 36 = 0x24
	unsigned _group;	// 60 = 0x3c
}
- (id)initWithURL:(CFURLRef)url mode:(unsigned short)mode owner:(unsigned)owner group:(unsigned)group format:(long)format;	// 0x30d0d8f1
- (void)_assimilateSync:(id)sync;	// 0x30cfe7ad
- (void)_reenableSuddenTermination;	// 0x30cfeb89
- (void)dealloc;	// 0x30d858b5
- (id)description;	// 0x30d856f9
- (void)finalize;	// 0x30d85915
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x30d1e1ed
- (unsigned char)synchronize;	// 0x30d0dacd
- (void)synchronizeInBackgroundWithCompletionBlock:(id)completionBlock;	// 0x30cfe1d1
@end
