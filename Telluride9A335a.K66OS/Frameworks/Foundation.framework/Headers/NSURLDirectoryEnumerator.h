/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSDirectoryEnumerator.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {
@private
	CFURLEnumeratorRef _enumerator;	// 4 = 0x4
	id _errorHandler;	// 8 = 0x8
	BOOL shouldContinue;	// 12 = 0xc
}
@property(copy) id errorHandler;	// G=0x3206defd; S=0x320521f9; @synthesize=_errorHandler
- (id)initWithURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options errorHandler:(id)handler;	// 0x32052119
- (void)dealloc;	// 0x32052299
- (id)directoryAttributes;	// 0x3206deb5
// declared property getter: - (id)errorHandler;	// 0x3206defd
- (id)fileAttributes;	// 0x3206deb1
- (void)finalize;	// 0x3206deb9
- (unsigned)level;	// 0x3206de9d
- (id)nextObject;	// 0x3205221d
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x320521f9
- (void)skipDescendants;	// 0x3206de89
- (void)skipDescendents;	// 0x3206de79
@end

