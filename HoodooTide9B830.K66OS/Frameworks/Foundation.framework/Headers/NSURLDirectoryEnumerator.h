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
@property(copy) id errorHandler;	// G=0x315d6eed; S=0x315bb1e9; @synthesize=_errorHandler
- (id)initWithURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options errorHandler:(id)handler;	// 0x315bb109
- (void)dealloc;	// 0x315bb289
- (id)directoryAttributes;	// 0x315d6ea5
// declared property getter: - (id)errorHandler;	// 0x315d6eed
- (id)fileAttributes;	// 0x315d6ea1
- (void)finalize;	// 0x315d6ea9
- (unsigned)level;	// 0x315d6e8d
- (id)nextObject;	// 0x315bb20d
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x315bb1e9
- (void)skipDescendants;	// 0x315d6e79
- (void)skipDescendents;	// 0x315d6e69
@end

