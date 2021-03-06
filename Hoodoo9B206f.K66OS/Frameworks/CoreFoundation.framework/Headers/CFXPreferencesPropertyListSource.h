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
- (id)initWithURL:(CFURLRef)url mode:(unsigned short)mode owner:(unsigned)owner group:(unsigned)group format:(long)format;	// 0x319d38f1
- (void)_assimilateSync:(id)sync;	// 0x319c47ad
- (void)_reenableSuddenTermination;	// 0x319c4b89
- (void)dealloc;	// 0x31a4b8b5
- (id)description;	// 0x31a4b6f9
- (void)finalize;	// 0x31a4b915
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x319e41ed
- (unsigned char)synchronize;	// 0x319d3acd
- (void)synchronizeInBackgroundWithCompletionBlock:(id)completionBlock;	// 0x319c41d1
@end

