/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSDirectoryEnumerator.h"

@class NSFileAttributes, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator {
@private
	NSString *path;	// 4 = 0x4
	NSArray *contents;	// 8 = 0x8
	unsigned idx;	// 12 = 0xc
	NSString *prepend;	// 16 = 0x10
	NSAllDescendantPathsEnumerator *under;	// 20 = 0x14
	NSFileAttributes *directoryAttributes;	// 24 = 0x18
	NSString *pathToLastReportedItem;	// 28 = 0x1c
	unsigned depth;	// 32 = 0x20
	BOOL cross;	// 36 = 0x24
	BOOL _padding[3];	// 37 = 0x25
}
@property(readonly, retain) NSFileAttributes *directoryAttributes;	// G=0x302bacf1; converted property
+ (id)newWithPath:(id)path prepend:(id)prepend attributes:(id)attributes cross:(BOOL)cross depth:(unsigned)depth;	// 0x30296c81
- (id)_under;	// 0x302badf5
- (id)currentSubdirectoryAttributes;	// 0x302bad39
- (void)dealloc;	// 0x30296fad
// converted property getter: - (id)directoryAttributes;	// 0x302bacf1
- (id)fileAttributes;	// 0x302bac85
- (unsigned)level;	// 0x302badb9
- (id)nextObject;	// 0x30296d91
- (void)skipDescendants;	// 0x302bae15
- (void)skipDescendents;	// 0x302bae05
@end
