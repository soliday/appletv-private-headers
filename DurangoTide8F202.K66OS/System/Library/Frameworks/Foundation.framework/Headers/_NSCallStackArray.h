/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSArray.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _NSCallStackArray : NSArray {
@private
	void **_frames;	// 4 = 0x4
	unsigned _cnt;	// 8 = 0x8
	unsigned _ignore;	// 12 = 0xc
	char **_pcstrs;	// 16 = 0x10
	BOOL _wantSyms;	// 20 = 0x14
}
+ (id)arrayWithFrames:(void **)frames count:(unsigned)count symbols:(BOOL)symbols;	// 0x3244ecf5
- (unsigned)count;	// 0x3249da35
- (void)dealloc;	// 0x3244efe5
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x3249dc0d
- (void)finalize;	// 0x3249daf9
- (id)objectAtIndex:(unsigned)index;	// 0x3249dd91
@end
