/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface SBJsonUTF8Stream : NSObject {
@private
	const char *_bytes;	// 4 = 0x4
	NSMutableData *_data;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	unsigned _index;	// 16 = 0x10
}
@property(assign) unsigned index;	// G=0x32c48131; S=0x32c48141; @synthesize=_index
- (id)init;	// 0x32c47cf5
- (void)appendData:(id)data;	// 0x32c47db1
- (void)dealloc;	// 0x32c47d65
- (BOOL)getNextUnichar:(unsigned short *)unichar;	// 0x32c47eb5
- (BOOL)getSimpleString:(id *)string;	// 0x32c47f05
- (BOOL)getUnichar:(unsigned short *)unichar;	// 0x32c47e75
- (BOOL)haveRemainingCharacters:(unsigned)characters;	// 0x32c48031
// declared property getter: - (unsigned)index;	// 0x32c48131
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x32c48141
- (void)skip;	// 0x32c47fc1
- (BOOL)skipCharacters:(const char *)characters length:(unsigned)length;	// 0x32c48071
- (void)skipWhitespace;	// 0x32c47fd5
- (id)stringWithRange:(NSRange)range;	// 0x32c480cd
@end

